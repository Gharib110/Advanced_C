#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello after me the CTRL+z will happen.");
    raise(SIGSTOP);
    printf("Now I am recovered.");

    return 0;
}
