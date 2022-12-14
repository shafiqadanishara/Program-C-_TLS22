#include <iostream> 
#include <cstdlib> //declares a set of general-purpose functions to convert string to double
#include <windows.h> //windows specific header file which contains declarations for all of the functions in the windows API
using namespace std;
int main()
{
	cout << "This is a program to help you do POMODORO TECHNIQUE" << endl;
	cout << "Please input your focus time" << endl;
	
	short minutes, seconds; int time; //using data type short to declare minutes and seconds, data types integer to declare time

	do //do-while loop
	{
		cout << "Enter Seconds:: ";
		cin >> seconds;	 
	} while (seconds > 59); //if the user input a number greater than 59, then the input for seconds will start again
	
	do //do-while loop
	{
		cout << "Enter Minutes:: ";
		cin >> minutes;
	} while (minutes > 59); //if the user input a number greater than 59, then the system will ask them to input a number for minutes again

	time = (minutes != 0)? minutes * 60 : 0; //the minutes will not be equals to zero, if it is then the minutes will convert to seconds. or else, it'll be just zero
	time += seconds;
	
	for (int i = time; i>0; i--)
	{
		system ("cls");
		
		cout << "The time remaining is 0:" << minutes << ":"<< seconds << endl;
		minutes = (i%60==0)? --minutes : minutes; //when the minutes divided by 60 remainded 0 then the system do a decrement to the minute 
		seconds = (seconds==0)? 59 : --seconds; //set seconds to 59 when they reach zero, to prevent the number go negative
		
		system ("TIMEOUT 1"); //the execution will stop one second before moving on
	}
	system ("cls");
	cout << "--TIME ENDED-- \n";
	cout << "It lasted for " << time << " seconds" << endl;
	
	return 0;
}
