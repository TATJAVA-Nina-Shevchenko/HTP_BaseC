// To disable deprecation: warning C4996: 'scanf': This function or variable may be unsafe.
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
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
‡ ¤ з  1. ‚ўҐ¤ЁвҐ ¤Ё ¬Ґва ®Єаг¦­®бвЁ d. Ќ ©¤ЁвҐ ¤«Ё­г ®Єаг¦­®бвЁ (L =?d ). ‚ Є зҐбвўҐ
§­ зҐ­Ёп ? ЁбЇ®«м§®ў вм 3.1415927.
*/

void task_01(void){
	double d = 0;
	double length = 0;

	puts("\"‡ ¤ з  1. ‚ўҐ¤ЁвҐ ¤Ё ¬Ґва ®Єаг¦­®бвЁ d. Ќ ©¤ЁвҐ ¤«Ё­г ®Єаг¦­®бвЁ.\"\n");
	puts("Enter diameter of a circle");
	scanf("%lf",&d);
	
	length = d * PI;
	printf("Diameter=%.3lf, length of circle=%.3lf\n\n",d,length);

}

/*
‡ ¤ з  2. ‚ўҐ¤ЁвҐ Є вҐвл Їап¬®гЈ®«м­®Ј® ваҐгЈ®«м­ЁЄ  (a Ё b). Ќ ©¤ЁвҐ ЈЁЇ®вҐ­г§г c Ё ЇҐаЁ¬Ґва
P Їап¬®гЈ®«м­®Ј® ваҐгЈ®«м­ЁЄ .
*/
void task_02(void){
	double a = 0;		//the first side of a thiangle
	double b = 0;		//the second side of a triangle
	double c = 0;		// hypotenuse 
	double p = 0;		// perimeter

	puts("\"‡ ¤ з  2. ‚ўҐ¤ЁвҐ Є вҐвл Їап¬®гЈ®«м­®Ј® ваҐгЈ®«м­ЁЄ  (a Ё b). Ќ ©¤ЁвҐ ЈЁЇ®вҐ­г§г c Ё ЇҐаЁ¬Ґва P Їап¬®гЈ®«м­®Ј® ваҐгЈ®«м­ЁЄ .\"\n");
	puts("Enter two sides of a rectangular triangle");
	scanf("%lf%lf", &a, &b);

	c = sqrt(pow(a,2) + pow(b,2));
	p = c + a + b;

	printf("Rectangular triangle:\nThe sides a=%.3lf\tb=%.3lf\nHypotenuse c=%.3lf\nPerimeter p=%.3lf\n\n",a,b,c,p);
}


/*
‡ ¤ з  3. ‚ўҐ¤ЁвҐ ¤«Ё­г L ®Єаг¦­®бвЁ. Ќ ©¤ЁвҐ а ¤Ёгб R Ё Ї«®й ¤м S ЄагЈ , ®Ја ­ЁзҐ­­®Ј® нв®©
®Єаг¦­®бвмо, гзЁвлў п, зв® L = 2?R, S =?R2. ‚ Є зҐбвўҐ §­ зҐ­Ёп ? ЁбЇ®«м§®ў вм 3.1415927.
*/
void task_03(void){
	double r = 0; //radius of a circle
	double l = 0; //legth of a circle
	double s = 0; //area 

	puts("\"‡ ¤ з  3. ‚ўҐ¤ЁвҐ ¤«Ё­г L ®Єаг¦­®бвЁ. Ќ ©¤ЁвҐ а ¤Ёгб R Ё Ї«®й ¤м S ЄагЈ , ®Ја ­ЁзҐ­­®Ј® нв®© ®Єаг¦­®бвмо\"\n");
	puts("Enter a length of a circle");
	scanf("%lf", &l);

	r = l / (2*PI )  ;  
	s = pow(r,2) * PI;

	printf("The circle:\nRadius r=%.3lf\nLength l=%.3lf\narea s=%.3lf\n\n",r,l,s);
}


/*
‡ ¤ з  4. ‚ўҐ¤ЁвҐ Ї«®й ¤м S ®Єаг¦­®бвЁ. Ќ ©¤ЁвҐ ¤Ё ¬Ґва D Ё ¤«Ё­г L ®Єаг¦­®бвЁ,
®Ја ­ЁзЁў ойҐ© нв®в ЄагЈ, гзЁвлў п, зв® L = 2?R, S =?R2. ‚ Є зҐбвўҐ §­ зҐ­Ёп ? ЁбЇ®«м§®ў вм
3.1415927.
*/
void task_04(void){
	double r = 0; //radius of a circle
	double d = 0; //diameter
	double l = 0; //legth of a circle
	double s = 0; //area 

	puts("\"‡ ¤ з  4. ‚ўҐ¤ЁвҐ Ї«®й ¤м S ®Єаг¦­®бвЁ. Ќ ©¤ЁвҐ ¤Ё ¬Ґва D Ё ¤«Ё­г L ®Єаг¦­®бвЁ, ®Ја ­ЁзЁў ойҐ© нв®в ЄагЈ\"\n");
	puts("Enter a area of a circle");
	scanf("%lf", &s);

	r = sqrt(s / (2 * PI ))  ;  
	d = 2 * r;
	l = d * PI;

	printf("The circle:\nDiameter d=%.3lf\nLength l=%.3lf\narea s=%.3lf\n\n",d,l,s);
}


/*
‡ ¤ з  5. ‚ўҐ¤ЁвҐ Є®®а¤Ё­ вл ўҐаиЁ­ ваҐгЈ®«м­ЁЄ : (x1, y1), (x2, y2), (x3, y3). Ќ ©¤ЁвҐ ҐЈ®
ЇҐаЁ¬Ґва Ё Ї«®й ¤м. „«п ­ е®¦¤Ґ­Ёп бв®а®­ ваҐгЈ®«м­ЁЄ  a, b, c ЁбЇ®«м§г©вҐ д®а¬г«г
­ е®¦¤Ґ­Ёп а ббв®п­Ёп ¬Ґ¦г в®зЄ ¬Ё ­  Ї«®бЄ®бвЁ. „«п ўлзЁб«Ґ­Ёп Ї«®й ¤Ё ваҐгЈ®«м­ЁЄ ,
ЁбЇ®«м§г©вҐ д®а¬г«г ѓҐа®­ .
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

	puts("\"‡ ¤ з  5. ‚ўҐ¤ЁвҐ Є®®а¤Ё­ вл ўҐаиЁ­ ваҐгЈ®«м­ЁЄ : (x1, y1), (x2, y2), (x3, y3). Ќ ©¤ЁвҐ ҐЈ® ЇҐаЁ¬Ґва Ё Ї«®й ¤м.\"\n");
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
‡ ¤ з  6. ‚ўҐ¤ЁвҐ §­ зҐ­Ёп ў ЇҐаҐ¬Ґ­­лҐ A, B, C. €§¬Ґ­Ёвм Ёе §­ зҐ­Ёп, ЇҐаҐ¬ҐбвЁў б®¤Ґа¦Ё¬®Ґ
A ў B, B ў C, C ў A, Ё ўлўҐбвЁ ­®ўлҐ §­ зҐ­Ёп ЇҐаҐ¬Ґ­­ле A,B, C.
*/
void task_06(void){
	double a = 0;	
	double b = 0;	
	double c = 0;	

	printf("\"‡ ¤ з  6. ‚ўҐ¤ЁвҐ §­ зҐ­Ёп ў ЇҐаҐ¬Ґ­­лҐ A, B, C. €§¬Ґ­Ёвм Ёе §­ зҐ­Ёп, ЇҐаҐ¬ҐбвЁў б®¤Ґа¦Ё¬®Ґ");
	printf("A ў B, B ў C, C ў A, Ё ўлўҐбвЁ ­®ўлҐ §­ зҐ­Ёп ЇҐаҐ¬Ґ­­ле A,B, C.\"\n\n");
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
‡ ¤ з  7. Ќ ©вЁ §­ зҐ­ЁҐ дг­ЄжЁЁ y = 3x6- 6x2 - 7 ЇаЁ ўўҐ¤Ґ­­®¬ §­ зҐ­ЁЁ x.
*/
void task_07(void){
	short x = 0;
	short y = 0; // the result

	puts("\"‡ ¤ з  7. Ќ ©вЁ §­ зҐ­ЁҐ дг­ЄжЁЁ y = 3x6- 6x2 - 7 ЇаЁ ўўҐ¤Ґ­­®¬ §­ зҐ­ЁЁ x.\"\n");
	puts("Enter X value");
	scanf("%1hd", &x);

	y = (306 + x*10) - (602 + x*10) - 1;

	printf("The result: y=%hd\n\n",y);
}


/*
‡ ¤ з  8. ‚ўҐ¤ЁвҐ ¤ўг§­ з­®Ґ жҐ«®Ґ зЁб«®. Ќ ©¤ЁвҐ бг¬¬г Ё Їа®Ё§ўҐ¤Ґ­ЁҐ жЁда ўҐ¤Ґ­­®Ј® зЁб« .
*/
void task_08(void){
	short x = 0;
	short a = 0;
	short b = 0;

	puts("\"‡ ¤ з  8. ‚ўҐ¤ЁвҐ ¤ўг§­ з­®Ґ жҐ«®Ґ зЁб«®. Ќ ©¤ЁвҐ бг¬¬г Ё Їа®Ё§ўҐ¤Ґ­ЁҐ жЁда ўҐ¤Ґ­­®Ј® зЁб« .\"\n");
	puts("Enter X value");
	scanf("%2hd", &x);

	a = x%10;
	b = x/10;

	int sum = (int)a + b;
	int mult = a * b;

	printf("Entered number: %2hd\nThe sum : %d\nThe ultiplication: %d\n\n",x, sum, mult);
}


/*
‡ ¤ з  9. ‚ўҐ¤ЁвҐ ¤ў  ­Ґ®ваЁж вҐ«м­ле зЁб«  a Ё b. Ќ ©¤ЁвҐ Ёе баҐ¤­ҐҐ ЈҐ®¬ҐваЁзҐбЄ®Ґ, в.Ґ.
Єў ¤а в­л© Є®аҐ­м Ё§ Ёе Їа®Ё§ўҐ¤Ґ­Ёп.
*/
void task_09(void){
	double a = 0;
	double b = 0;
	double res = 0;

	puts("\"‚ўҐ¤ЁвҐ ¤ў  ­Ґ®ваЁж вҐ«м­ле зЁб«  a Ё b. Ќ ©¤ЁвҐ Ёе баҐ¤­ҐҐ ЈҐ®¬ҐваЁзҐбЄ®Ґ\"\n");
	puts("Enter a and b values");
	scanf("%lf%lf", &a, &b);

	res = sqrt(a * b);

	printf("Entered numbers: a=%.3lf; b=%.3lf\nThe result : %.3lf\n\n",a, b, res);
}


/*
‡ ¤ з  10. Ќ ©вЁ аҐиҐ­ЁҐ бЁбвҐ¬л «Ё­Ґ©­ле га ў­Ґ­Ё© ўЁ¤ :
A1x + B1y = C1
A2x + B2y = C2
Ј¤Ґ A1, B1, C1, A2, B2, Ё C2 Є®нддЁжЁҐ­вл. …б«Ё Ё§ўҐбв­®, зв® ¤ ­­ п бЁбвҐ¬  Ё¬ҐҐв Ґ¤Ё­бвўҐ­­®Ґ
аҐиҐ­ЁҐ, в® ¬®¦­® ў®бЇ®«м§®ў вмбп д®а¬г« ¬Ё:
x = (C1*B2 ? C2*B1)/(A1*B2 ? A2*B1)
y = (C2*A1 ? C1*A2)/(A1*B2 ? A2*B1)
*/
void task_10(void){



}


/*
‡ ¤ з  11. €§ўҐбв­®, зв® X ЄЁ«®Ја ¬¬ и®Є®« ¤­ле Є®­дҐв бв®Ёв Ђ агЎ«Ґ©,   Y ЄЁ«®Ја ¬¬ ЁаЁб®Є
бв®Ёв B агЎ«Ґ©. ЋЇаҐ¤Ґ«Ёвм, бЄ®«мЄ® бв®Ёв ®¤Ё­ ЄЁ«®Ја ¬¬ и®Є®« ¤­ле Є®­дҐв, ®¤Ё­ ЄЁ«®Ја ¬¬
ЁаЁб®Є,   в Є¦Ґ ў® бЄ®«мЄ® а § и®Є®« ¤­лҐ Є®­дҐвл ¤®а®¦Ґ ЁаЁб®Є.
*/
void task_11(void){
	double x = 0;
	double a = 0;
	double y = 0;
	double b = 0;

	printf("\"€§ўҐбв­®, зв® X ЄЁ«®Ја ¬¬ и®Є®« ¤­ле Є®­дҐв бв®Ёв Ђ агЎ«Ґ©,   Y ЄЁ«®Ја ¬¬ ЁаЁб®Є бв®Ёв B агЎ«Ґ©.");
	printf("ЋЇаҐ¤Ґ«Ёвм, бЄ®«мЄ® бв®Ёв ®¤Ё­ ЄЁ«®Ја ¬¬ и®Є®« ¤­ле Є®­дҐв, ®¤Ё­ ЄЁ«®Ја ¬¬ ЁаЁб®Є,   в Є¦Ґ ў® бЄ®«мЄ® а § и®Є®« ¤­лҐ Є®­дҐвл ¤®а®¦Ґ ЁаЁб®Є.\"\n\n");
	puts("Enter weight and cost of tofee sweets ");
	scanf("%lf%lf", &x, &a);

	puts("Enter weight and cost of chocolate sweets ");
	scanf("%lf%lf", &y, &b);

	double tofeePrice = a / x;
	double chocoPrice = b / y;
	double compare;

	char expensiveSweets[20];
	char cheapSweets[20];

	if (tofeePrice < chocoPrice){
		strcpy(expensiveSweets,"chocolate sweets");
		strcpy(cheapSweets, "tofee sweets");
		compare = chocoPrice / tofeePrice;
	} else {
		strcpy(expensiveSweets,"tofee sweets");
		strcpy(cheapSweets,"chocolate sweets");
		compare =  tofeePrice / chocoPrice;
	}

	printf("%.3lfkg of tofee sweets cost %.3lf BYN and %.3lfkg of chocolate sweets cost %.3lf BYN.\n",x,a,y,b);
	printf("tofee sweets price: %.2lfBYN\nChocolate sweets price: %.2lfBYN\n",tofeePrice, chocoPrice);
	printf("%s cost %.1lf as much as %s\n\n", expensiveSweets, compare, cheapSweets);

}


/*
‡ ¤ з  12. ‚ўҐ¤ЁвҐ §­ зҐ­ЁҐ гЈ«  ў Ја ¤гб е (0, 3600). ЋЇаҐ¤Ґ«ЁвҐ §­ зҐ­ЁҐ нв®Ј® ¦Ґ гЈ«  ў
а ¤Ё ­ е, гзЁвлў п, зв® 1800 нв® ? а ¤Ё ­.
*/
void task_12(void){
	double a = 0;
	double res = 0;

	puts("\"‡ ¤ з  12. ‚ўҐ¤ЁвҐ §­ зҐ­ЁҐ гЈ«  ў Ја ¤гб е (0, 3600). ЋЇаҐ¤Ґ«ЁвҐ §­ зҐ­ЁҐ нв®Ј® ¦Ґ гЈ«  ў а ¤Ё ­ е, гзЁвлў п, зв® 180 нв® ЇЁ а ¤Ё ­.\"\n");
	puts("Enter angle:");
	scanf("%lf", &a);

	res = a/360*2*PI;

	printf("Angle in degrees: %.3lf\nAngle in radians: %.3lf\n\n",a, res);
}
