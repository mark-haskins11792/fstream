//Create a program that uses a Log class to open a file called  "LogFile.txt", writes messages, and closes the file.


#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include "Log.h"
#include <stdio.h>
using namespace std;



int main()
{
	Log myLogFile("C:\\Users\Mark Haskins\Documents\LogFile.txt");
	myLogFile.Entry("First log message");
	myLogFile.Entry("Second log message");
	myLogFile.Entry("Third log message");
	cout << "Number of Log entries: " << myLogFile.GetCount() << endl;
	return 0;
}

