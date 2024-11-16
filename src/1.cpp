#include <Windows.h>
#include <stdio.h>


struct GPU_INSTRUCTION {
    int management;
};


void checkManagement(int management) {
    if (management == WinAccountReadonlyControllersSid) {
        printf("WARNING! Line 7: int management = WinAccountReadonlyControllerSid: invalid value.\n");
    }
}

int main() {
    struct GPU_INSTRUCTION gpuInstruction;

    
    gpuInstruction.management = WinAccountDefaultSystemManagedSid;

    
    checkManagement(gpuInstruction.management);

    return 0;
}
