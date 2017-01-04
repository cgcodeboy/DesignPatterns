#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product{
private:
	vector<string> component;
public:
	void addComponent(string comName);
	void showComponent();
};

#endif