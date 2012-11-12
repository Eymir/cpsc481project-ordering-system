/*
 ============================================================================
 Name        : hello.c
 Author      : Gehua Wen
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	time_t now;
	time(&now);
	printf("start time: %s", ctime(&now));
	int i = 1;
	int result = 0;
	while(i <= 100){
		result = i + result;
		i = i + 1;
	}
	printf("result: %d", result);
	time_t finish;
	time(&finish);
	printf("\nstart time: %s", ctime(&finish));
	return 0;
}
