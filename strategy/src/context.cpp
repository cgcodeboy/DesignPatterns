#include "context.h"

Context::Context()
{

}

void Context::setStrategy(Strategy *strategy)
{
    this->_strategy = strategy;
}

void Context::executeStrategy(int num1,int num2)
{
    cout<<this->_strategy->doOperation(num1,num2)<<endl;
}
