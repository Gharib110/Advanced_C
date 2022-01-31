#include <stdio.h>

int main(int argc, char **argv)
{
	int value = 100;
	
	int* p_value;
	p_value = &value;
	
	int** pp_value;
	pp_value = &p_value;
	
	
	printf("%d\n", value);
	printf("%x\n", &value);
	printf("%x\n", p_value);
	printf("%d\n", *p_value);
	printf("%x\n", &p_value);
	printf("%x\n", pp_value);
	printf("%x\n", *pp_value);
	printf("%d\n", **pp_value);
	printf("%x\n", &pp_value);
	
	
	return 0;
}
