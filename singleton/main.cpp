#include "singleton.h"

int main()
{
	Singleton * sing = Singleton::getInstance();
	sing->sayHello();
	return 0;
}