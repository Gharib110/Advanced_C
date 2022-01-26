#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592

int main()
{
    double *salary = (double *)malloc(sizeof(double));
    *salary = 123.235;

    int *age = (int *)malloc(sizeof(int));
    *age = 19;

    printf("Hello\n");
    printf("%f\n", *salary);
    printf("%d\n", *age);
    printf("%x\n", salary);
    printf("%f\n", PI);

    free(salary);
    free(age);
    return 0;
}
