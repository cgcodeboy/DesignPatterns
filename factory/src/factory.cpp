#include "factory.h"

shape* factory::getShape(string str)
	{
		if(str == "circle")
		{
			return new circle();
		}
		else if(str == "rectangle")
		{
			return new rectangle();
		}
		return NULL;
	}