// To disable deprecation: warning C4996: 'scanf': This function or variable may be unsafe.
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include <clocale>

////function declaration
void task_01(void);
void task_02(void);
void task_03(void);
void task_04(void);
void task_05(void);
//void task_06(void);
//void task_07(void);
//void task_08(void);
//void task_09(void);
//void task_10(void);
//void task_11(void);
//void task_12(void);


void main(void){
	setlocale(LC_ALL,"Russian");

	short userChoice = 0;
	bool runApp = true;

	while(runApp){
		puts("\nPlease, enter a number of a task or \"0\" to exit");

		scanf("%hd",&userChoice);

		switch(userChoice){
			case 0:
				runApp = false; //exit from application
				break;
			case 1:
				task_01();
				break;
			case 2:
				task_02();
				break;
			case 3:
				task_03();
				break;
			case 4:
				task_04();
				break;
			case 5:
				task_05();
				break;
			//case 6:
			//	task_06();
			//	break;
			//case 7:
			//	task_07();
			//	break;
			//case 8:
			//	task_08();
			//	break;
			//case 9:
			//	task_09();
			//	break;
			//case 10:
			//	task_10();
			//	break;
			//case 11:
			//	task_11();
			//	break;
			//case 12:
			//	task_12();
			//	break;

			default:
				puts("Enter number from 1 till 12 or \"0\" to exit");
				break;
		}
	}
}


/*
Задача 1. Дано целое число. Если оно является положительным, то прибавить к нему 1, в противном
случае не изменять его. Вывести полученное число.
*/

void task_01(void){
	int input = 0;

	printf("Задача 1. Дано целое число. Если оно является положительным, то прибавить к нему 1, в противном");
	printf("случае не изменять его. Вывести полученное число.\n\n");

	puts("Enter number:");
	scanf("%d",&input);
	printf("Init value: %d\n", input);

	if(input > 0 ){
		input++ ;
	}
	
	printf("Result value: %d\n", input);
}


/*
Задача 2. Дано целое число. Если оно является нечетным положительным, то прибавить к нему 1, если
отрицательным, то вычесть из него 2, если нулевым, то заменить его на 10. Вывести полученное число.
*/

void task_02(void){
	int input = 0;

	printf("Задача 2. Дано целое число. Если оно является нечетным положительным, то прибавить к нему 1, если");
	printf("отрицательным, то вычесть из него 2, если нулевым, то заменить его на 10. Вывести полученное число.\n\n");

	puts("Enter number:");
	scanf("%d",&input);
	printf("Init value: %d\n", input);

	if(input <= 0){
		if ( input != 0 ){
			input -= 2;
		} else {
			input = 10;
		}
	} else if (input % 2 != 0){
		input++ ;
	}
	
	printf("Result value: %d\n", input);
}

/*
Задача 3. Введите два целых числа и сравните эти числа. Программа должна вывести сначала первое
введенное число, затем символ (> , < или =) в зависимости от значений переменных и в конце второе число.
*/

void task_03(void){
	int inputOne = 0;
	int inputTwo = 0;

	printf("Задача 3. Введите два целых числа и сравните эти числа. Программа должна вывести сначала первое");
	printf("введенное число, затем символ (> , < или =) в зависимости от значений переменных и в конце второе число.\n\n");

	puts("Enter two numbers:");
	scanf("%d%d",&inputOne, &inputTwo);
	printf("Init values: %d, %d\n", inputOne, inputTwo);

	char compareChar = '=';
	if (inputOne != inputTwo) {
		compareChar = (inputOne > inputTwo) ? '>' : '<' ;
	}
	
	printf("Result: %d %c %d\n", inputOne, compareChar, inputTwo);
}

/*
Задача 4. Введите 3 целых числа и определите наименьшее и наибольшее из них, посчитайте сумму,
произведение и среднее значение введенных чисел.
*/

void task_04(void){
	int input_1 = 0;
	int input_2 = 0;
	int input_3 = 0;

	printf("Задача 4. Введите 3 целых числа и определите наименьшее и наибольшее из них, посчитайте сумму,");
	printf("произведение и среднее значение введенных чисел.\n\n");

	puts("Enter three numbers:");
	scanf("%d%d%d",&input_1, &input_2, &input_3);
	printf("Init values: %d, %d, %d\n", input_1, input_2, input_3);

	int max = 0;
	int min = 0;

	if (input_1 >= input_2 && input_1 >= input_3) {
		max = input_1;
		min = (input_2 > input_3) ? input_3 : input_2;
	} else if (input_2 >= input_1 && input_2 >= input_3 ){
		max = input_2;
		min = (input_1 > input_3) ? input_3 : input_1;
	} else {
		max = input_3;
		min = (input_1 > input_2) ? input_2 : input_1;
	}

	int sum = input_1 + input_2 + input_3;
	int mult = input_1*input_2*input_3;
	double aver = sum / 3.0;

	
	printf("Result:\nmax = %d\nmin=%d\nsumm = %d\nmultiplication = %d\naverage = %.3lf", max, min, sum, mult, aver);
}

/*
Задача 5. Напишите программу, которая расположила три введенных числа в порядке возрастания.
*/

void task_05(void){
	int input_1 = 0;
	int input_2 = 0;
	int input_3 = 0;

	printf("Задача 5. Напишите программу, которая расположила три введенных числа в порядке возрастания.\n\n");
	
	puts("Enter three numbers:");
	scanf("%d%d%d",&input_1, &input_2, &input_3);
	printf("Init values: %d, %d, %d\n", input_1, input_2, input_3);

	int temp = 0;

		if (input_1 > input_3) {
			temp = input_1;
			input_1 = input_3;
			input_3 = temp;
			puts("step 1");
		}

		if (input_2 > input_3) {
			temp = input_2;
			input_2 = input_3;
			input_3 = temp;
			puts("step 2");
		} else if (input_1 > input_2){
			temp = input_1;
			input_1 = input_2;
			input_2 = temp;
			puts("step 3");
		}
		
	printf("Result: %d < %d < %d\n", input_1, input_2, input_3);
}
