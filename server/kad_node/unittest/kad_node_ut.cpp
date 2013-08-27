// NetAppFramework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "msg_port.h"
#include "task_mgr.h"

#ifdef _MSC_VER
#include <direct.h>
#include "conio.h"
#include <process.h>
#else
#include <sys/resource.h>
#endif

DEFINE_LOG_CATEGORY(NAF_Log)
#ifdef WIN32
BOOL WINAPI ShellHandler(DWORD ctrl_type);
#else
void ShellHandler(int sig);
#endif

int main(int argc, char* argv[])
{
    STACK_TRACE;
    //
    //ע���ź�
#ifdef _MSC_VER
    SetConsoleCtrlHandler(&ShellHandler, TRUE);
#else
    struct sigaction sact;
    sigemptyset(&sact.sa_mask);
    sact.sa_flags = 0;
    sact.sa_handler = ShellHandler;
    //
    // for handle kill
    sigaction(SIGINT, &sact, NULL);
    sigaction(SIGTSTP, &sact, NULL);
    sigaction(SIGTERM, &sact, NULL);
#endif

    //
    oo::Log::Instance()->start("Log.conf");

    NAFInfo("would startup with %d thread", 4);
    oo::MsgPortTaskManager::instance().startup(4);        // �����ĸ��߳������߼�����

    // test
    //naf::MsgPort* pNew = new naf::MsgPort;
    //pNew->connectServer("localhost", "http");
    {
        naf::Joint::instance().run();
    }

    NAFInfo("app over!wait worker...");
    naf::MsgPortTaskManager::instance().stop();

    printf("ok, Any Key, Quit....");
    getch();

    return 0;
}

void OnConsoleCmd()
{
    // ctrl-c
    printf("input command:\n");
    printf("usage : input 'q' for quit:\n");
    printf("\t input 'dofile <filename>' for do lua file\n");
    printf("\t input 'dostr <string> ' for do lua string\n");
    std::string cmd;
    std::string str;
    std::cin >> cmd;
    if(cmd.compare("q") == 0)
    {
        naf::Joint::instance().stop();
    }
    else if(cmd.compare("dofile") == 0)
    {
        std::cin >> str;
    }
    else if(cmd.compare("dostr") == 0)
    {
        std::cin >> str;
    }
}

#ifdef WIN32
BOOL WINAPI ShellHandler(DWORD ctrl_type)
{
    switch (ctrl_type)
    {
    case CTRL_C_EVENT:
    case CTRL_BREAK_EVENT:
    case CTRL_CLOSE_EVENT:
    case CTRL_SHUTDOWN_EVENT:
        naf::Joint::instance().interrupt(&OnConsoleCmd);
        return TRUE;
    default:
        return FALSE;
    }
}
#else
void ShellHandler(int sig)
{
    switch(sig)
    {
    case SIGSEGV:
    case SIGABRT:
    case SIGBUS:
        {
            /* Reinstall default handler to prevent race conditions */
            signal(sig, SIG_DFL);
            /* And exit because we may have corrupted the internal
            * memory allocation lists. Use abort() if we want to
            * generate a core dump. */
            exit(-1);
        }
        break;
    case SIGTSTP:
        ///ctrl-z
        ///put into backgroud
        ///���Բ�����
        break;
    case SIGTERM:
        ///���������κ��նˣ��ں�̨���У���ô���ܽ��յ�SIGTERM�ź�
        ///kill,killall Ĭ���ź�
        /// -9 ʱ��SIGKILL�޷������޷����������
        break;
    case SIGINT:
        ///ctrl-c
        ///�����������������
        break;
    default:
        break;
    }
}
#endif