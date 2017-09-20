#include <stdio.h>
#include <string.h>


void main(void){

	FILE *f ;
	if((f=fopen("numbers.txt", "w"))== NULL){
		printf("Error. File couldn't be open.");
		return;
	}

	puts("Enter numbers or EOF (ctrl + z) to end input.");
	int input;
	scanf("%d",&input);

	while(!feof(stdin)) {
		fprintf(f,"%d ", input);
		scanf("%d",&input);
	} 

	fclose(f);



}
