#include <stdio.h>
#include <string.h>

void writeToFile(FILE *);
void reversedRead(FILE *);

void main(void){

	FILE *f ;

// write to file

	//if((f=fopen("numbers.txt", "w"))== NULL){
	//	printf("Error. File couldn't be open.");
	//	return;
	//}

	//puts("Enter numbers or EOF (ctrl + z) to end input.");
	//int input;
	//scanf("%d",&input);

	//while(!feof(stdin)) {
	//	fprintf(f,"%d ", input);
	//	scanf("%d",&input);
	//} 

	//fclose(f);

// reversed read

	if ((f = fopen("numbers.txt","r"))==NULL){
		printf("Error. File couldn't be open.");
		return;
	}

	char nextChar;
	char result[250], *buf;
	for(int i = -1, k = 0 ; ftell(f) != 0; i -= 2){
		
		fseek(f, i*sizeof(char), SEEK_END);
		nextChar = fgetc(f);

		if(nextChar != ' '){
			k++;
		}else{
			fgets(buf, k, f);
			strcat(result, buf);
			k = 0;
		}
	} 

	printf(result);
	

}
