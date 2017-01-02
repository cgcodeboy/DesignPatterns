#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <string>
#include <thread>
#include <mutex>

using namespace std;

class Singleton{
private:
	Singleton()
	{
		//
	}
	static Singleton * instance;

public:
	static Singleton *getInstance();

	void sayHello();
};

#endif
