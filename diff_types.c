#include <stdio.h>
#include <stdlib.h>

#define E 2.1615

typedef long long Int64;

int main() {

    Int64 number = 13413423;
    printf("This is a Int64 number : %d\n", number);

    int *p_item;
    p_item = (int *) malloc(sizeof(int));
    printf("%x\n", &p_item);
    printf("%x\n", p_item);
    printf("%d\n", *p_item);

    #ifdef E
    printf("Hello this is E %f", E);
    #endif // E

    free(p_item);

    return 0;
}
