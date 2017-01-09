#include "circleFactory.h"

Circle* CircleFactory::getCircle(string color)
{
    Circle *circle = NULL;
    map<string,Circle*>::iterator it = circleMap.begin();
    while(it!=circleMap.end())
    {
        if(it == circleMap.find("color"))
        {
             circle = it->second;
        }
        it++;
    }
    if(!circle)
    {
        circle = new Circle(color);
        circleMap.insert(map<string,Circle*>::value_type(color,circle));
        cout<<"build a "<<color<<" Circle!"<<endl;
    }
    return circle;
}
