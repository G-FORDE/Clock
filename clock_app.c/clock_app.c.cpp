//Created by Gregory Forde
// clock_app.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include<stdio.h>

//I am including windows file (it's connected to the sleep() function)
#include <windows.h>

int main()

{	//I add hours, minutes and seconds to the program
	int h, m, s;

	//I add a Delay of 1000 milliseconds, which makes a second and we will use that in sleep().
	int D = 1000;

	//printf writes the text that is inside of (" ") and \n is carriage return.
	printf("Set time:\n");

	//scanf is where we insert our time, or our values.
	scanf_s("%d %d %d", &h, &m, &s);

	//in this if function we check to see if the inserted value is greater than 12.
	if (h > 12) { printf("ERROR!\n"); exit(0); } 
	
	//similar here and if the values are greater, program writes ERROR! and exits
	if (m > 60) { printf("ERROR!\n"); exit(0); }
	if (s > 60) { printf("ERROR!\n"); exit(0); } 

	//while (1) is an infinit loop.
	while (1)
	{
		// this tells program to increase seconds by 1, everytime
		s += 1;

		//if the seconds are greater than 59, it increases the minutes and sets seconds to 0.
		if (s > 59) { m += 1; s = 0; }

		//similar
		if (m > 59) { h += 1; m = 0; }

		//similar
		if (h > 12) { h = 1; m = 0; s = 0; } 

		printf("\n Clock");

		//this puts the time in this format "00:00:00"
		printf("\n%02d:%02d:%02d", h, m, s);

		//this is the function sleep which slows down the while loop and makes it more like a clock.
		Sleep(D);

		//this clears the screen.
		system("cls");

	}

	getchar();
	return 0;

}


