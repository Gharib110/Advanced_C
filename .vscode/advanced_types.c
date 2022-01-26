#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592
#define YES 1
#define NO 0
#define MAY_BE 0.5

typedef int *int_pointer; // Integer pointer

int main()
{
    int_pointer a = 129;
    printf("%d\n", a);
    printf("%x\n", &a);
    return 0;
}