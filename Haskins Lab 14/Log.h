#pragma once
#include <string>
#include <fstream>
#include "time.h"
#include <iostream>
using namespace std;

class Log
{
public:
	Log(string myFileName);
	void Entry(string logMessage);
	int GetCount();
	~Log();

private:
	int logCounter;
	string fileName;
	ofstream target;
};

