/*
这段代码是green类
*/

#ifndef GREEN_H
#define GREEN_H

#include "color.h"

class Green:public Color{
public:
	virtual void fill()
	{
		cout<<"fill with green!"<<endl;
	}
};

#endif