#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle:public Shape{
public:
	virtual void draw()
	{
		cout<<"draw a rectangle!"<<endl;
	}
};

#endif