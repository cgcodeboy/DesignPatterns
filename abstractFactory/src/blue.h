/*
这段代码是blue类
*/
#ifndef BLUE_H
#define BLUE_H

#include "color.h"

class Blue:public Color{
public:
	virtual void fill()
	{
		cout<<"fill with blue!"<<endl;
	}
};

#endif