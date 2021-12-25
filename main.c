#include<stdio.h>
#include <math.h>
#include <windows.h>
//	Задання значення константи а
#define k 1.485
//	Задання значення константи х
#define t2 3.856
//	Задання значення константи а
#define n0 840
//	Задання значення константи х
#define n1 610
//	Задання значення константи х
#define u1 12.3
void main()

{
    double t1, u;

    t1 = t2 * sqrt((n0 / n1)*k);
    u = u1 / 1+ (t1/t2);
    printf("Fisrt we calculated T1\n");
    printf("t1=%f\n",t1);
    printf("After T1 we calculated U\n");
    printf("u=%f", u);
}

