#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 10, j = 20, k = 90;
    int *p_i, *p_j;
    p_i = &i;
    p_j = &j;

    printf("%d\n", *p_i); // 10
    printf("%d\n", *p_j); // 20

    *p_j = 30;
    printf("%d\n", *p_j); // 30
    printf("%d\n", j); // 30

    int **pp_i, **pp_j, **pp_k;
    pp_i = &p_i;
    pp_j = &p_j;
    pp_k = &p_i;
    // pp_k = &k; // it is NOT a true statement.

    printf("%d\n", **pp_i); // 10
    printf("%d\n", **pp_j); // 30
    printf("%d\n", **pp_k); // 10

    printf("%d\n", i); // 10
    printf("%x\n", &i); // address_1
    printf("%d\n", *p_i); // 10
    printf("%x\n", &p_i); // address_2
    printf("%x\n", p_i); // address_1
    printf("%d\n", **pp_i); // 10
    printf("%x\n", *pp_i); // address_1
    printf("%x\n", &pp_i); // address_3
    printf("%x\n", pp_i); // address_2

    return 0;
}
