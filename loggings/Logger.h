#pragma once
#include<iostream>
#include<mutex>
using namespace std;
class Logger {
	static Logger* LoggerInstance;
	Logger();
	static mutex mtx;
	Logger(const Logger& obj);
	Logger operator=(const Logger& obj);
public:
	static int count;
	static Logger* getLogger();
	//Logger();
	void msg(string msg);
};
