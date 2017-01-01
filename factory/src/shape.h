#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>

using namespace std;

class shape{
public:
	shape(){}
	virtual void draw()
	{
		cout<<"调用老子的draw搞JB！"<<endl;
	}
};

#endif