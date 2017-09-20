#include <stdio.h>
#include <stdlib.h>
#include <clocale>
#include <string.h>


#define END 0
#define INPUT 1
#define SELECT 2
#define UL 3
#define RADIO 4




void get_request_string(char* sourceHtml, int field, ...){
	int *p = &field;
	
	while(*p){
		printf("Next value %d", *p);
		++p;
	}
}


void main(void)
{
		char *str;
		str = "Hello";


	if(!strstr(,"1/1")){
		get_request_string(str, INPUT, END);
		puts("=============");
	} else {
		get_request_string(str, INPUT,SELECT, UL, END);
		puts("=============");
	}
}











int isDigital(char c){
	char* digitals = "0123456789";

	for (int i = 0; digitals[i] ;i++){
		if(digitals[i] == c) {
			return i;
		}
	}
	return -1;
}

void check(){
	int x[]= {1,2,3};
	printf("X - %d\n", &x);
	printf("X - %d\n", &*x);

	int* x2;
	x2 = x;
	printf("X - %d\n", &x2);
	printf("X - %d\n", &*x2);

	char str[] = "Hello";
	printf("Str - %d\n", &str);
	printf("Str - %d\n", &*str);

	char* str2;
	str2 = str;
	printf("Str - %d\n", &str2);
	printf("Str - %d\n", &*str2);
}

int change_param(char* value){

	value = "new value";
	printf("new value = %s\n", value);

	return 0;
}
