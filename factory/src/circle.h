#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class circle:public shape{
public:
	circle(){};

	virtual void draw()
	{
		cout<<"paint a circle"<<endl;
	}
};
#endif