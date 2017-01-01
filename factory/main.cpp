#include "src/factory.h"

int main()
{
	cout<<"begin"<<endl;
	factory *fac = new factory();
	shape *sha = new shape();

	sha = fac->getShape("circle");
	sha->draw();

	sha = fac->getShape("rectangle");
	sha->draw();
	return 0;
}