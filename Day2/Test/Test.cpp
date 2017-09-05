#include <stdio.h>
#include <clocale>
#include <string.h>

void testStr(char*);

void get_request_string(char* request)
{
	request[0] = 0;
	strcat(request, "+");
}

void main(void)
{
	//char request[100]="";

	//strcat(request, "step1");
	//get_request_string(request);
	//printf("What in request is - %s", request);

	char one[10]="test";
	char two[5]="test";

	if("test" == "test"){
		puts("They are equal");
	}

	if(*one == *two){
		puts("And these two also");
	}else{
		puts("And these two are not");
	}

	if(one == two){
		puts("And these two also");
	}else{
		puts("And these two are not");
	}

}



