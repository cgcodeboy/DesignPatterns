#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>

using namespace std;

class Circle{
private:
    string _color;
    int _radius;
    int _x;
    int _y;

public:
    Circle(string color)
    {
        this->_color = color;
    }

    void setX(int x)
    {
        this->_x = x;
    }

    void setY(int y)
    {
        this->_y = y;
    }

    void setRadius(int radius)
    {
        this->_radius = radius;
    }

    void draw()
    {
        cout<<"draw a "<<this->_color<<" circle,the radius is"<<\
              this->_radius<<",the cordinate is ("<<this->_x<<","<<\
              this->_y<<")"<<endl;
    }
};

#endif
