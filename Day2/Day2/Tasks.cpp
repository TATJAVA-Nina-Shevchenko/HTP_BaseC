// To disable deprecation: warning C4996: 'scanf': This function or variable may be unsafe.
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <clocale>
#include <string.h>
#include <math.h>

#define ACCURACY 4

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
			case 6:
				task_06();
				break;
			case 7:
				task_07();
				break;
			case 8:
				task_08();
				break;
			case 9:
				task_09();
				break;
			case 10:
				task_10();
				break;
			case 11:
				task_11();
				break;
			case 12:
				task_12();
				break;
			case 13:
				task_13();
				break;


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

/*
Задача 6. Введите число, если число >60, то выводим отлично, если число больше 30 и меньше 60, то
выводим хорошо, если число больше 17 и меньше 30, то выводим удовлетворительно, если число меньше
17, то выводим плохо (использовать вложенные операторы else/if).
*/

void task_06(void){
	int input = 0;

	printf("Задача 6. Введите число, если число >60, то выводим отлично, если число больше 30 и меньше 60, то");
	printf("выводим хорошо, если число больше 17 и меньше 30, то выводим удовлетворительно, если число меньше");
	printf("17, то выводим плохо (использовать вложенные операторы else/if).\n\n");

	puts("Enter a number:");
	scanf("%d",&input);
	printf("Init value: %d\n", input);

	char result[30] = "";


		if (input > 17) {
			if(input > 30){
				if (input > 60) {
					strcpy(result, "exelent - отлично");
				} else {
					strcpy(result, "good - хорошо");
				}
			} else {
				strcpy(result, "satisfy - удовлетворительно");
			}
		} else {
			strcpy(result, "bad - плохо");
		}
		
	printf("Result: %s \n",result);
}


/*
Задача 7. Программа, которая в зависимости от номера месяца выводит одно из слов: Зима, Весна, Лето
или Осень.
*/

void task_07(void){
	int input = 0;

	printf("Задача 6. Программа, которая в зависимости от номера месяца выводит одно из слов: Зима, Весна, Лето");
	printf("или Осень.\n\n");

	puts("Enter a number:");
	scanf("%d",&input);
	printf("Init value: %d\n", input);

	char result[30] = "";

	switch (input) {
		case 12: case 1: case 2:
			strcpy(result, "Winter");
			break;
		case 3: case 4: case 5:
			strcpy(result, "Spring");
			break;
		case 6: case 7: case 8:
			strcpy(result, "Summer");
			break;
		case 9: case 10: case 11:
			strcpy(result, "Autumn");
			break;
		default:
			strcpy(result, "There is no such month");
			break;
	}
			
	printf("Result: %s \n",result);
}

/*
Задача 8. Даны три переменные вещественного типа: A, B, C. Если их значения упорядочены по
возрастанию или убыванию, то удвойте их, в противном случае замените значение каждой переменной на
противоположное. Выведите новое значение переменных A, B, C.
*/

void task_08(void){
	double input_1 = 0;
	double input_2 = 0;
	double input_3 = 0;

	printf("Задача 8. Даны три переменные вещественного типа: A, B, C. Если их значения упорядочены по");
	printf("возрастанию или убыванию, то удвойте их, в противном случае замените значение каждой переменной на");
	printf("противоположное. Выведите новое значение переменных A, B, C.\n\n");

	puts("Enter three numbers:");
	scanf("%lf%lf%lf",&input_1, &input_2, &input_3);
	printf("Init values: %.*lf, %.*lf, %.*lf\n", ACCURACY, input_1, ACCURACY, input_2, ACCURACY, input_3);

	if ((input_1 > input_2 && input_2 > input_3) || (input_1 < input_2 && input_2 < input_3)){

		input_1 *= 2;
		input_2 *= 2;
		input_3 *= 2;
	
	} else {

		input_1 = -input_1;
		input_2 = -input_2;
		input_3 = -input_3;
	
	}

	printf("Result: %.3lf %.3lf %.3lf\n", input_1, input_2, input_3);
		
}

/*
Задача 9. Ввести координаты центра окружности O(xo,yo) и радиус R. Ввести также и координаты
точки А(ха, ya) и определить, попадает ли данная точка в окружность или нет.
*/

void task_09(void){
	// Circle params
	double x0 = 0;
	double y0 = 0;
	double r = 0;

	// Coordinates for point A
	double xa = 0;
	double ya = 0;

	printf("Задача 9. Ввести координаты центра окружности O(xo,yo) и радиус R. Ввести также и координаты");
	printf("точки А(ха, ya) и определить, попадает ли данная точка в окружность или нет.\n\n");

	puts("Enter circle parameters of a circle - O(x0,y0), radius R:");
	scanf("%lf%lf%lf",&x0, &y0, &r);
	puts("Enter coordinates of point A(xa, ya):");
	scanf("%lf%lf",&xa, &ya);
	printf("Circle : O (%.3lf,%.3lf) R = %lf\nPoint A(%.3lf,%.3lf)\n", x0, y0, r, xa, ya );


	double distBetweenPoints = sqrt(pow(xa-x0 , 2) + pow(ya-y0, 2));

	char result[50] = "";
	if(distBetweenPoints < r ){
		strcpy(result, "Point A belong to the circle's area");
	} else {
		strcpy(result, "Pont A doen't belong to the circle's area");
	}

	printf("Result: %s\n", result);

}

/*
Задача 10. Даны три монеты достоинством 5 000, 10 000, 20 000 рублей. Напишите программу, которая
определит, можно ли заданную сумму набрать из каких либо двух монет.
*/

// this solution is valid only for coins that can be devided to each other without reminder
void task_10(void){
	const int coin_5 = 5000;
	const int coin_10 = 10000;
	const int coin_20 = 20000;

	int input = 0;
	
	printf("Задача 10. Даны три монеты достоинством 5 000, 10 000, 20 000 рублей. Напишите программу, которая");
	printf("определит, можно ли заданную сумму набрать из каких либо двух монет.\n\n");

	puts("Enter the summ:");
	scanf("%d",&input);
	printf("Can we get %d with coins %d %d %d rub?\n",input, coin_5, coin_10, coin_20 );

	char result[50] = "";
	
	if (input > 0){
		int temp = input%coin_20;
		temp = temp%coin_10;			// is it better for perfomance to include each operation in if-statement?
		temp = temp%coin_5;
		
		if(temp == 0){
			strcpy(result, "Yes, we can!");
		} else {
			strcpy(result, "No, we can't!");
		}
	} else {
		strcpy(result, "the input should be more then zero");
	}

	printf("Result: %s\n", result);
}


/*
Задача 11. Дано целое число в диапазоне 1 – 7. Вывести строку – название дня недели,
соответствующее данному числу (1 – «понедельник», 2 – «вторник» и т.д.).
*/

void task_11(void){
	int input = 0;
	
	printf("Задача 11. Дано целое число в диапазоне 1 – 7. Вывести строку – название дня недели,");
	printf("соответствующее данному числу (1 – «понедельник», 2 – «вторник» и т.д.).\n\n");

	puts("Enter a number from 1 till 7 to define day of the week:");
	scanf("%d",&input);
	printf("Input value: %d\n",input);

	char result[50] = "";
	
	switch(input){
		case 1:
			strcpy(result, "Monday");
			break;
		case 2:
			strcpy(result, "Tuesday");
			break;
		case 3:
			strcpy(result, "Wednesday");
			break;
		case 4:
			strcpy(result, "Thursday");
			break;
		case 5:
			strcpy(result, "Friday");
			break;
		case 6:
			strcpy(result, "Saturday");
			break;
		case 7:
			strcpy(result, "Sunday");
			break;
		default:
			strcpy(result, "There is no such day of the week!");
			break;
	}

	printf("Result: %s\n", result);
}


/*
Задача 12. Дано целое число в диапазоне 100 – 999. Вывести строку – описание данного числа,
например: 256 – «двести пятьдесят шесть», 814 – «восемьсот четырнадцать».
*/

void task_12(void){
	int input = 0;
	
	printf("Задача 12. Дано целое число в диапазоне 100 – 999. Вывести строку – описание данного числа,");
	printf("например: 256 – «двести пятьдесят шесть», 814 – «восемьсот четырнадцать».\n\n");

	puts("Enter a number from 100 till 999:");
	scanf("%d",&input);
	printf("Input value: %d - ",input);

	char result[50] = "";
	short digit_1 = 0;
	short digit_2 = 0;
	short digit_3 = 0;

	digit_1 = input/100;
	digit_2 = input%100/10;
	digit_3 = input%10;


		switch(digit_1){
			case 1:
				strcpy(result, "one hundred");
				break;
			case 2:
				strcpy(result, "two hundred");
				break;
			case 3:
				strcpy(result, "three hundred");
				break;
			case 4:
				strcpy(result, "four hundred");
				break;
			case 5:
				strcpy(result, "five hundred");
				break;
			case 6:
				strcpy(result, "six hundred");
				break;
			case 7:
				strcpy(result, "seven hundred");
				break;
			case 8:
				strcpy(result, "eight hundred");
				break;
			case 9:
				strcpy(result, "nine hundred");
				break;
			default:
				break;
		}


			if (digit_2 == 1 ){
				
				switch(digit_3){
					case 0:
						strcat(result, "ten");
						break;
					case 1:
						strcat(result, "eleven");
						break;
					case 2:
						strcat(result, "twelve");
						break;
					case 3:
						strcat(result, "thirteen");
						break;
					case 4:
						strcat(result, "fourteen");
						break;
					case 5:
						strcat(result, "fifteen");
						break;
					case 6:
						strcat(result, "sixteen");
						break;
					case 7:
						strcat(result, "seventeen");
						break;
					case 8:
						strcat(result, "eighteen");
						break;
					case 9:
						strcat(result, "nineteen");
						break;
					default:
						break;
				}

			} else {
			
				switch(digit_2){
					case 2:
						strcat(result, " twenty ");
						break;
					case 3:
						strcat(result, " thirty ");
						break;
					case 4:
						strcat(result, " fourty ");
						break;
					case 5:
						strcat(result, " fifty ");
						break;
					case 6:
						strcat(result, " sixty ");
						break;
					case 7:
						strcat(result, " seventy ");
						break;
					case 8:
						strcat(result, " eighty ");
						break;
					case 9:
						strcat(result, " ninety ");
						break;
					default:
						break;
				}
				
				switch(digit_3){
					case 1:
						strcat(result, "one");
						break;
					case 2:
						strcat(result, "two");
						break;
					case 3:
						strcat(result, "three");
						break;
					case 4:
						strcat(result, "four");
						break;
					case 5:
						strcat(result, "five");
						break;
					case 6:
						strcat(result, "six");
						break;
					case 7:
						strcat(result, "seven");
						break;
					case 8:
						strcat(result, "eight");
						break;
					case 9:
						strcat(result, "nine");
						break;
					default:
						break;
				}
			}
		

	printf("Result: %s\n", result);
}


/*
Задача 13. Мастями игральных карт присвоены порядковые номера: 1 – пики, 2 – трефы, 3 – бубны, 4 –
червы. Достоинству карт, старше десятки, присвоены номера: 11 – валет, 12 – дама, 13 – король, 14 – туз.
Даны два целых числа: N – достоинство (от 6 до 14) и M – масть карты (от 1 до 4). Вывести название
соответствующей карты вида «шестерка бубен», «дама черви», «туз треф» и т.п.
*/

void task_13(void){
	int suit = 0;
	int precedence = 0;
	
	printf("Задача 13. Мастями игральных карт присвоены порядковые номера: 1 – пики, 2 – трефы, 3 – бубны, 4 –");
	printf("червы. Достоинству карт, старше десятки, присвоены номера: 11 – валет, 12 – дама, 13 – король, 14 – туз.");
	printf("Даны два целых числа: N – достоинство (от 6 до 14) и M – масть карты (от 1 до 4). Вывести название");
	printf("соответствующей карты вида «шестерка бубен», «дама черви», «туз треф» и т.п.\n\n");

	puts("Enter a number from 1 till 4:");
	scanf("%d",&suit);
	puts("Enter a number from 6 till 14:");
	scanf("%d",&precedence);
	printf("Input values: %d %d - ",suit, precedence);

	char result[50] = "";

		switch(precedence){
			case 6:
				strcat(result, "шестерка ");
				break;
			case 7:
				strcat(result, "семерка ");
				break;
			case 8:
				strcat(result, "восьмерка ");
				break;
			case 9:
				strcat(result, "девятка ");
				break;
			case 10:
				strcat(result, "десятка ");
				break;
			case 11:
				strcat(result, "валет ");
				break;
			case 12:
				strcat(result, "дама ");
				break;
			case 13:
				strcat(result, "король ");
				break;
			case 14:
				strcat(result, "туз ");
				break;
				
			default:
				break;
				}
		
		switch(suit){
				
			case 1:
				strcat(result, "пики");
				break;
			case 2:
				strcat(result, "трефы");
				break;
			case 3:
				strcat(result, "бубны");
				break;
			case 4:
				strcat(result, "червы");
				break;
				
			default:
				break;
				}

		printf("Result: %s\n", result);
}