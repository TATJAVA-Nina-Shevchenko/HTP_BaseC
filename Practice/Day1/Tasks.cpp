// To disable deprecation: warning C4996: 'scanf': This function or variable may be unsafe.
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<clocale>
#include<conio.h>
#include<math.h>
#include<string.h>

//constants
#define PI 3.1415927

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

void main(void){
	setlocale(LC_ALL,"Russian");

	short userChoice = 0;
	bool runApp = true;

	while(runApp){
		puts("Please, enter a number of a task or \"0\" to exit");

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

			default:
				puts("Enter number from 1 till 12 or \"0\" to exit");
				break;
		}
	}
}

/*
Задача 1. Введите диаметр окружности d. Найдите длину окружности (L =πd ). В качестве
значения π использовать 3.1415927.
*/

void task_01(void){
	double d = 0;
	double length = 0;

	puts("Введите диаметр окружности d. Найдите длину окружности (L =πd ).\n");
	puts("Enter diameter of a circle");
	scanf("%lf",&d);
	
	length = d * PI;
	printf("Diameter=%.3lf, length of circle=%.3lf\n\n",d,length);
}

/*
Задача 2. Введите катеты прямоугольного треугольника (a и b). Найдите гипотенузу c и периметр
P прямоугольного треугольника.
*/
void task_02(void){
	double a = 0;		//the first side of a thiangle
	double b = 0;		//the second side of a triangle
	double c = 0;		// hypotenuse 
	double p = 0;		// perimeter

	puts("Задача 2. Введите катеты прямоугольного треугольника (a и b). Найдите гипотенузу c и периметр P\n");
	puts("Enter two sides of a rectangular triangle");
	scanf("%lf%lf", &a, &b);

	c = sqrt(pow(a,2) + pow(b,2));
	p = c + a + b;

	printf("Rectangular triangle:\nThe sides a=%.3lf\tb=%.3lf\nHypotenuse c=%.3lf\nPerimeter p=%.3lf\n\n",a,b,c,p);
}

/*
Задача 3. Введите длину L окружности. Найдите радиус R и площадь S круга, ограниченного этой
окружностью, учитывая, что L = 2πR, S =πR2. В качестве значения π использовать 3.1415927.
*/
void task_03(void){
	double r = 0; //radius of a circle
	double l = 0; //legth of a circle
	double s = 0; //area 

	puts("Задача 3. Введите длину L окружности. Найдите радиус R и площадь S круга, ограниченного этой окружностью.\n");
	puts("Enter a length of a circle");
	scanf("%lf", &l);

	r = l / (2*PI )  ;  
	s = pow(r,2) * PI;

	printf("The circle:\nRadius r=%.3lf\nLength l=%.3lf\narea s=%.3lf\n\n",r,l,s);
}

/*
Задача 4. Введите площадь S окружности. Найдите диаметр D и длину L окружности,
ограничивающей этот круг, учитывая, что L = 2πR, S =πR2. В качестве значения π использовать
3.1415927.
*/
void task_04(void){
	double r = 0; //radius of a circle
	double d = 0; //diameter
	double l = 0; //legth of a circle
	double s = 0; //area 

	puts("Задача 4. Введите площадь S окружности. Найдите диаметр D и длину L окружности,ограничивающей этот круг.\n");
	puts("Enter a area of a circle");
	scanf("%lf", &s);

	r = sqrt(s / (2 * PI ))  ;  
	d = 2 * r;
	l = d * PI;

	printf("The circle:\nDiameter d=%.3lf\nLength l=%.3lf\narea s=%.3lf\n\n",d,l,s);
}

/*
Задача 5. Введите координаты вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найдите его
периметр и площадь. Для нахождения сторон треугольника a, b, c используйте формулу
нахождения расстояния межу точками на плоскости.
*/

void task_05(void){

	//coordinates of triangle apexes
	double x1 = 0; 
	double y1 = 0; 
	double x2 = 0; 
	double y2 = 0; 
	double x3 = 0; 
	double y3 = 0; 

	//triangle sides
	double a = 0;	
	double b = 0;	
	double c = 0;	

	double p = 0;	//perimeter
	double s = 0;	//area

	puts("Задача 5. Введите координаты вершин треугольника: (x1, y1), (x2, y2), (x3, y3). Найдите его периметр и площадь.\n");
	puts("Enter 6 numbers to define a triangle apexes: (x1, y1), (x2, y2), (x3, y3)");
	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);

	a = sqrt (pow((x2-x1),2) + pow((y2-y1),2));
	b = sqrt (pow((x3-x1),2) + pow((y3-y1),2));
	c = sqrt (pow((x2-x3),2) + pow((y2-y3),2));

	p = a + b + c;
	double hP = p / 2; // half perimeter
	s = sqrt (hP*(hP - a) * (hP - b) * (hP - c));

	printf("Triangle coordinates:\n(%.3lf, %.3lf), (%.3lf, %.3lf), (%.3lf, %.3lf)\n",x1,y1,x2,y2,x3,y3);
	printf("Perimeter p=%.3lf\narea s=%.3lf\n\n", p, s);
}

/*
Задача 6. Введите значения в переменные A, B, C. Изменить их значения, переместив содержимое
A в B, B в C, C в A, и вывести новые значения переменных A,B, C.
*/
void task_06(void){
	double a = 0;	
	double b = 0;	
	double c = 0;	

	printf("Задача 6. Введите значения в переменные A, B, C. Изменить их значения, переместив содержимое");
	printf("A в B, B в C, C в A, и вывести новые значения переменных A,B, C.\n\n");
	puts("Enter three numbers");
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("You have entered A=%.3lf, B=%.3lf, C=%.3lf\n\n",a,b,c);
	
	double x = a;	//temporary variable
	a = c;
	c = b;
	b = x;

	printf("The result: A=%.3lf, B=%.3lf, C=%.3lf\n\n",a,b,c);

}

/*
Задача 7. Найти значение функции y = 3x6- 6x2 - 7 при введенном значении x.
*/
void task_07(void){
	short x = 0;
	short y = 0; // the result

	puts("Задача 7. Найти значение функции y = 3x6- 6x2 - 7 при введенном значении x.\n");
	puts("Enter X value");
	scanf("%1hd", &x);

	y = (306 + x*10) - (602 + x*10) - 1;

	printf("The result: y=%hd\n\n",y);
}

/*
Задача 8. Введите двузначное целое число. Найдите сумму и произведение цифр веденного числа.
*/
void task_08(void){
	short x = 0;
	short a = 0;
	short b = 0;

	puts("Задача 8. Введите двузначное целое число. Найдите сумму и произведение цифр веденного числа.\n");
	puts("Enter X value");
	scanf("%2hd", &x);

	a = x%10;
	b = x/10;

	int sum = (int)a + b;
	int mult = a * b;

	printf("Entered number: %2hd\nThe sum : %d\nThe ultiplication: %d\n\n",x, sum, mult);
}

/*
Задача 9. Введите два неотрицательных числа a и b. Найдите их среднее геометрическое, т.е.
квадратный корень из их произведения.
*/
void task_09(void){
	double a = 0;
	double b = 0;
	double res = 0;

	puts("Задача 9. Введите два неотрицательных числа a и b. Найдите их среднее геометрическое\n");
	puts("Enter a and b values");
	scanf("%lf%lf", &a, &b);

	res = sqrt(a * b);

	printf("Entered numbers: a=%.3lf; b=%.3lf\nThe result : %.3lf\n\n",a, b, res);
}

/*
Задача 10. Найти решение системы линейных уравнений вида:
A1x + B1y = C1
A2x + B2y = C2
где A1, B1, C1, A2, B2, и C2 коэффициенты. Если известно, что данная система имеет единственное
решение, то можно воспользоваться формулами:
x = (C1*B2 – C2*B1)/(A1*B2 – A2*B1)
y = (C2*A1 – C1*A2)/(A1*B2 – A2*B1)
*/
void task_10(void){
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;

	int a2 = 0;
	int b2 = 0;
	int c2 = 0;
	
	printf("Задача 10. Найти решение системы линейных уравнений вида:");
	printf("A1x + B1y = C1");
	printf("A2x + B2y = C2");
	printf("где A1, B1, C1, A2, B2, и C2 коэффициенты.\n\n");

	puts("Enter  coefficient A1, B1, C1:");
	scanf("%d%d%d", &a1, &b1, &c1);

	puts("Enter  coefficient A2, B2, C2:");
	scanf("%d%d%d", &a2, &b2, &c2);

	double x = 1.0*(c1*b2 - c2*b1)/(a1*b2 - a2*b1);
	double y = 1.0*(c2*a1 - c1*a2)/(a1*b2 - a2*b1);

	printf("%dx + %dy = %d\n", a1, b1, c1);
	printf("%dx + %dy = %d\n", a2, b2, c2);

	printf("Result: x=%.3lf; y=%.3lf\n\n", x, y);
}

/*
Задача 11. Известно, что X килограмм шоколадных конфет стоит А рублей, а Y килограмм ирисок
стоит B рублей. Определить, сколько стоит один килограмм шоколадных конфет, один килограмм
ирисок, а также во сколько раз шоколадные конфеты дороже ирисок.
*/
void task_11(void){
	double x = 0;
	double a = 0;
	double y = 0;
	double b = 0;

	printf("Задача 11. Известно, что X килограмм шоколадных конфет стоит А рублей, а Y килограмм ирисок");
	printf("стоит B рублей. Определить, сколько стоит один килограмм шоколадных конфет, один килограмм ирисок, а также во сколько раз шоколадные конфеты дороже ирисок.\n\n");
	puts("Enter weight and cost of toffee sweets ");
	scanf("%lf%lf", &x, &a);

	puts("Enter weight and cost of chocolate sweets ");
	scanf("%lf%lf", &y, &b);

	double toffeePrice = a / x;
	double chocoPrice = b / y;
	double compare;

	char expensiveSweets[20];
	char cheapSweets[20];

	if (toffeePrice < chocoPrice){
		strcpy(expensiveSweets,"chocolate sweets");
		strcpy(cheapSweets, "toffee sweets");
		compare = chocoPrice / toffeePrice;
	} else {
		strcpy(expensiveSweets,"toffee sweets");
		strcpy(cheapSweets,"chocolate sweets");
		compare =  toffeePrice / chocoPrice;
	}

	printf("%.3lfkg of toffee sweets cost %.3lf BYN and %.3lfkg of chocolate sweets cost %.3lf BYN.\n",x,a,y,b);
	printf("toffee sweets price: %.2lfBYN\nChocolate sweets price: %.2lfBYN\n",toffeePrice, chocoPrice);
	printf("%s cost %.1lf as much as %s\n\n", expensiveSweets, compare, cheapSweets);
}

/*
Задача 12. Введите значение угла в градусах (0, 3600). Определите значение этого же угла в
радианах, учитывая, что 1800 это π радиан.
*/
void task_12(void){
	double a = 0;
	double res = 0;

	puts("Задача 12. Введите значение угла в градусах (0, 3600). Определите значение этого же угла в радианах.\n");
	puts("Enter angle:");
	scanf("%lf", &a);

	res = a/360*2*PI;

	printf("Angle in degrees: %.3lf\nAngle in radians: %.3lf\n\n",a, res);
}
