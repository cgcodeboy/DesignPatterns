#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle:public Shape{
public:
	virtual void draw()
	{
		cout<<"draw a circle!"<<endl;
	}
};

#endif
