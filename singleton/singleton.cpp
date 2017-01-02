#include "singleton.h"

Singleton* Singleton::instance = new Singleton();

Singleton* Singleton::getInstance()
{
	return instance;
}

void Singleton::sayHello()
{
	cout<<"hello"<<endl;
}