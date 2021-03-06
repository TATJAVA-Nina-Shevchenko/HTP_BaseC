// To disable deprecation: warning C4996: 'scanf': This function or variable may be unsafe.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <clocale>
#include <string.h>

#define SEPARATOR printf("\n\n");

////function declaration
void task_01(void);
void task_02(void);
void task_03(void);
void task_04(void);
void task_05(void);
void task_06(void);
void task_07(void);
void task_08(void);
void task_09(void);
void task_10(void);
void task_11(void);
void task_12(void);
void task_13(void);
void task_14(void);
void task_15(void);
void task_16(void);

int max (int, int,int);
int min (int, int,int);
bool isSimple(int);
int factorial(int);
void swap (int *, int *);
long int toPow(long int, unsigned int);
double divide(int, int);
int revert (int );
void enterData(int *);
int fibonachi (unsigned int);
int digitalSum(int);


void main(void){
	setlocale(LC_ALL,"Russian");

	short userChoice = 0;
	bool runApp = true;

	while(runApp){
		puts("\nPlease, enter a number of a task or \"0\" to exit");

		fflush(stdin);
		scanf("%hd",&userChoice);	
		fflush(stdin);

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
			//case 3:
			//	task_03();
			//	break;
			case 4:
				task_04();
				break;
			case 5:
				task_05();
				break;
			case 6:
				task_06();
				break;
			//case 7:
			//	task_07();
			//	break;
			case 8:
				task_08();
				break;
			case 9:
				task_09();
				break;
			//case 10:
			//	task_10();
			//	break;
			case 11:
				task_11();
				break;
			case 12:
				task_12();
				break;
			case 13:
				task_13();
				break;
			//case 14:
			//	task_14();
			//	break;
			//case 15:
			//	task_15();
			//	break;
			//case 16:
			//	task_16();
			//	break;

			default:
				puts("Enter number from 1 till 12 or \"0\" to exit");
				break;
		}
		SEPARATOR
	}
}

/*
Задача 1. Ввести 5 чисел x1, x2, x3, x4, x5 и определить минимальное и максимальное из x1, x2, x3; из x4, x2, x3; из x4, x5, x3.
Использовать 2 функции, 1-я получает 3 числа и возвращает минимальное из них, 2-я получает 3 числа и возвращает максимальное из полученных чисел.
*/
void task_01(void){
	const int N = 5;
	int x[N];

	for (int i = 0; i < N ; ++i){
		printf("x%d = ", i+1);
		scanf("%d",&x[i]);
		puts("");
	}
	
	printf("Max from x1, x2, x3 = %d\n", max(x[0], x[1], x[2]));
	printf("Min from x1, x2, x3 = %d\n", min(x[0], x[1], x[2]));

	printf("Max from x2, x3, x4 = %d\n", max(x[1], x[2], x[3]));
	printf("Min from x2, x3, x4 = %d\n", min(x[1], x[2], x[3]));

	printf("Max from x3, x4, x5 = %d\n", max(x[2], x[3], x[4]));
	printf("Min from x3, x4, x5 = %d\n", min(x[2], x[3], x[4]));
}

int max (int x1, int x2,int x3){
	return (x1 > x2) ? ((x1 > x3) ? x1 : x3) : (( x2 > x3) ? x2: x3);
}

int min (int x1, int x2,int x3){
	return (x1 < x2) ? ((x1 < x3) ? x1 : x3) : (( x2 < x3) ? x2: x3);
}



/*
Задача 2. Написать функцию, которая считает факториал числа. Ввести 3 числа, посчитать сумму факториалов этих чисел.
*/
void task_02(void){
	int input;

	for(int i=0; i<3; ++i){
		puts("Enter positive integer number:");
		scanf("%d", &input);

		printf("!%d = %d", input, factorial(input));
		SEPARATOR
	}
}

int factorial(int input){
	return (input > 1) ? (input*factorial(input-1)) : 1;
}


/*
Задача 4. Функция, которая получает степень n и основание x и возвращает xn.
*/
void task_04(void){
	long int base;
	unsigned int pow;

	puts("Enter number to count power:");
	scanf("%ld", &base);
	puts("Enter positive integer power:");
	scanf("%d", &pow);
	
	printf("%ld^%d = %ld", base, pow, toPow(base, pow));

	SEPARATOR
}

long int toPow(long int x, unsigned int n){
	if (n==0){
        return 1;
	}else if (n==1){
        return x;
	}else if (n % 2 == 0 ){
        return toPow( x * x, n/2);
	}else{
        return toPow( x * x, n /2)*x;
	}
 }

/*
Задача 5. Функция получает 2 целых числа и возвращает результат деления этих чисел.
*/
void task_05(void){
	int input_1, input_2;

	puts("Enter first integer number:");
	scanf("%d", &input_1);

	puts("Enter second integer number:");
	scanf("%d", &input_2);

	printf("%d / %d = %lf", input_1, input_2, divide(input_1, input_2));
}

double divide(int x, int y){
	if(!y){
		exit(1);
	}
	return (x/y);
}

/*
Задача 6. Функция, которая получает число и определяет, является ли данное число простым или нет. Вывести все простые числа от 1 до 1000.
*/
void task_06(void){
	unsigned int input;

	puts("Enter number :");
	scanf("%d", &input);

	printf("Number '%d' %s", input, (isSimple(input) ? "is simple" : "is not simple"));
}

bool isSimple(int number){
	for(int i = 2; i < number/2; ++i){
		if(!(number%i)){
			return false;
		}
	}
	return true;
}


/*
Задача 8. Написать функцию, которая получает целое число и возвращает число с обратным порядком чисел. Например, получает число 3456, а возвращает 6543.
*/
void task_08(void){
	int input;

	puts("Enter number:");
	scanf("%d",&input);

	printf("Reverted number = %d", revert(input));
}

int revert (int input){
	int reverted = 0;

	while(input > 0){
		reverted = reverted*10 + input%10;
		input /= 10;
	}
	return reverted;
}

/*
Задача 9. В функции main() определить 2 переменные. Написать функцию ввода, в которой вводятся данные в эти переменные.
*/
void task_09(void){
	int input_1, input_2;

	puts("Enter number");
	enterData(&input_1);

	puts("Enter number");
	enterData(&input_2);

	printf("Entered data: %d, %d", input_1, input_2);
}

void enterData(int *input){
	scanf("%d",&*input);
}

/*
Задача 11. Функция получает два числа и меняет местами значения полученных переменных.
*/
void task_11(void){
	int x1, x2;

	printf("X1 = ");
	scanf("%d",&x1);
	puts("");

	printf("X2 = ");
	scanf("%d",&x2);

	swap(&x1, &x2);
	printf("X1 = %d, X2 = %d", x1, x2);
}

void swap (int *x1, int *x2){
	*x1 += *x2;
	*x2 = *x1 - *x2;
	*x1 -= *x2;
}

/*
Задача 12. Написать рекурсивную функцию нахождения числа Фибоначчи
*/
void task_12(void){
	unsigned int index;

	puts("Enter index of fibonuchi number:");
	scanf("%d", &index);

	printf("Fibonachi at %d position is %d\n", index, fibonachi (index));
}

int fibonachi (unsigned int n){
	if(n == 1 || n == 0){
		return 1;
	}
	
	return fibonachi(n-1) + fibonachi(n-2);
}

/*
Задача 13. Написать рекурсивную функцию подсчета сумму цифр числа. Прототип функции: int sum_cifr(int );
*/
void task_13(void){
	int input;

	puts("Enter number:");
	scanf("%d",&input);

	printf("For number %d summ of digitals = %d", input, digitalSum(input));
}

int digitalSum(int number){
	if(!(number/10)){
		return number;
	}
	return number%10 + digitalSum(number/10);
}

