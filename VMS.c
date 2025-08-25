#include <stdio.h>
#include <windows.h>

void kkonIUNHJBYiuiujxi(){
    printf("SCEMO CHI LEGGE, se stai leggendo ho lasciato un pò di memoria libera");
    char ECCO_MEMORIA[100];
}

int main() {

    HKEY htu5guy35gt56y7fybtbitU;
    LPCSTR Ey2u3fyvGg343yfybO455IhiR = "SYSTEM\\CurrentControlSet\\Services\\VBoxSD";
    LPCSTR yU23rfyv53y6645345fytrh63ybImgyP = "SYSTEM\\CurrentControlSet\\Services\\VmwareAutostartService";

    LONG Omdiefm8889NJk8bH7 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, Ey2u3fyvGg343yfybO455IhiR, 0, KEY_READ, &htu5guy35gt56y7fybtbitU);
    LONG Omdiefm8889NJk8bH1 = RegOpenKeyExA(HKEY_LOCAL_MACHINE, yU23rfyv53y6645345fytrh63ybImgyP, 0, KEY_READ, &htu5guy35gt56y7fybtbitU);

    if (Omdiefm8889NJk8bH7 == ERROR_SUCCESS) {
        MessageBoxA(0, "non sei su vm", "VMS", MB_OK);
        RegCloseKey(htu5guy35gt56y7fybtbitU);
    }else{
        if(Omdiefm8889NJk8bH1 == ERROR_SUCCESS) {
            MessageBoxA(0, "non sei su vm", "VMS", MB_OK);
            RegCloseKey(htu5guy35gt56y7fybtbitU);
        }else{
            MessageBoxA(0, "sei su vm", "VMS", MB_OK);
        }
    }

    return 0;
}