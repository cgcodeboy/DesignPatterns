#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class rectangle:public shape{
public:
	rectangle(){};

	virtual void draw()
	{
		cout<<"paint a rectangle"<<endl;
	}
};
#endif