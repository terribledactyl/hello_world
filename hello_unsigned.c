#include <windows.h>

int main() {
    MessageBoxA(
        NULL,
        "Hello World! I am an unsigned executable written for testing unsigned executables. If you are reading this, that's not good!",
        "Unsigned Executable",
        MB_OK | MB_ICONINFORMATION
    );
    return 0;
}
