#include<iostream>
#include "Logger.h"
#include<thread>
using namespace std;
void user1() {
	Logger* logger = Logger::getLogger();
	logger->msg("first output");
}
void user2() {
	Logger* logger1 = Logger::getLogger();
	logger1->msg("second output");
}
int main() {
	thread t1(user1);
	thread t2(user2);
	t1.join();
	t2.join();
	return 0;
	//under
}