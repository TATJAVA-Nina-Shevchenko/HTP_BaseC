#include <stdio.h>
#include <clocale>
#include <string.h>


void func(){
	*str = "new value";
}

void main(void)
{
	//char *string = "Hello";
	//func(&string);
	//printf("The result %s\n", string);
			
	int y , y1 = 67;
	scanf("%d",&y);
	const int  *  x;
	x = &y;

	printf("Const %d", *x);
x = &y1;

	printf("Const %d", *x);
}
	



