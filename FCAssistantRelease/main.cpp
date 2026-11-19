#include "resource.h"
#include "CMainDialog.h"
#include <commctrl.h>

#define WS_EX_COMPOSITED        0x02000000L
#pragma comment(lib, "Comctl32.lib")

int WINAPI WinMain(
    _In_ HINSTANCE hInstance,
    _In_opt_ HINSTANCE hPrevInstance,
    _In_ LPSTR lpCmdLine,
    _In_ int nShowCmd)
{
    UNREFERENCED_PARAMETER(hInstance);
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);
    UNREFERENCED_PARAMETER(nShowCmd);

    INITCOMMONCONTROLSEX data = { 0 };
    data.dwSize = sizeof(data);

    InitCommonControlsEx(&data);
    CMainDialog dlg;
    dlg.DoModalEx(IDD_DIALOG_MAIN, NULL, TRUE, false);

    return 0;
}
