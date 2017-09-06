#include <stdio.h>
#include <clocale>
#include <string.h>


void func(char &str){
	printf("I'm here %s", str);
}

void main(void)
{
	char *string = "Hello";
	func((char &)string);
	puts("");
			
}
	



