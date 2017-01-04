#include "product.h"

void Product::addComponent(string comName)
{
	component.push_back(comName);
}

void Product::showComponent()
{
    if(component.size()!=0)
    {
        for (vector<string>::iterator i = component.begin(); i != component.end(); ++i)
        {
        	cout<<*i<<" ";
        }
        cout<<endl;
    }
    else
    {
    	cout<<"No component!"<<endl;
    }
}
