#include "stdafx.h"
#include <iostream>
#include "Log.h"



using namespace std;

Log::Log(string myFileName) 
{
	logCounter = 0;
	fileName = myFileName;
	target.open(fileName, ios_base::app); 
}

void Log::Entry(string logMessage) 
{
	char startTime[9];
	_strtime_s(startTime); 
	target << startTime << " "<< logMessage << endl; 
	logCounter++; 
}

int Log::GetCount() 
{
	return logCounter;
}

Log::~Log() 
{
	target.close();
}
