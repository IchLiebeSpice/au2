// au2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

#define MAX2(x,y) (x)>(y) ? max=x : max=y
#define MIN2(x,y) (x)<(y) ? min=x : min=y

int main()
{
	int x, y, z, max, min;
	printf("Enter 3 numbers");
	scanf_s("%d%d%d", &x, &y, &z);
	MAX2(x, y);
	MAX2(max, z);
	MIN2(x, y);
	MIN2(min, z);
	printf("You enter:%d %d %d\n", x, y, z);  
	printf("Max:%d Min:%d\n", max, min);
	return 0;
}  
  