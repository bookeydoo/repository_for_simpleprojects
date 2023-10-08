#include <iostream>
#include<stdio.h>
#include<ctime>

int main() {
	std::time_t currenttime;
	currenttime = time(0);
	char Time[26];
	ctime_s(Time, sizeof(Time), &currenttime);
	std::cout << "today is " << Time;


	return 0;
}
