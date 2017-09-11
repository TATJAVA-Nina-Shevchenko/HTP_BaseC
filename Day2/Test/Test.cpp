#include <stdio.h>
#include <stdlib.h>
#include <clocale>
#include <string.h>

void check();
int get_product_id(char*);
int isDigital(char);
int change_param(char*);

void main(void)
{
	//char* str;

	//str = "product_attribute_24";
	//int id = get_product_id(str);
	//printf("Product id = %d\n", id);

	//str = "rental_date_start_40";
	//id = get_product_id(str);
	//printf("Product id = %d\n", id);

	//str = "55";
	//id = get_product_id(str);
	//printf("Product id = %d\n", id);

	//str = "rental_date_start";
	//id = get_product_id(str);
	//printf("Product id = %d\n", id);


	//str = "addtocart_40.EnteredQuantity";
	//id = get_product_id(str);
	//printf("Product id = %d\n", id);


	char* value;
	value = "Old value";

	change_param(value);
	printf("Here is value = %s\n", value);

}
	
int get_product_id(char* str){
	int productId = 0;

	for (int i = strlen(str)-1, k = 1 ; i >= 0; --i){
		if( isDigital(str[i]) != -1){
			productId += k *(str[i] - '0');
			k *= 10;
		} else {
			break;
		}
	}
	return productId;
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
