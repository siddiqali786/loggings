#include<iostream>
#include "Logger.h"
using namespace std;
int Logger::count = 0;
mutex Logger::mtx;
Logger* Logger::LoggerInstance = nullptr;
Logger::Logger() {
	count++;
	cout << "new instace created. No. of counts are "<<count << endl;
}
void Logger::msg(string msg) {
	cout << msg << endl;
}
Logger* Logger::getLogger() {
	lock_guard<mutex> lock(mtx);
	if (LoggerInstance == nullptr) {
		LoggerInstance = new Logger();
	}
	return LoggerInstance;
}