#include <stdio.h>
#include<stdlib.h>

int main() {

    printf("all the processes in current terminal\n");
    system("ps");
    printf("\n");
    
    printf("all the currently running processes\n");
    system("ps -e");
    
    
    return 0;
}