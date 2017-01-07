#include "employee.h"

Employee::Employee(string name,string dept,int salary)
{
    this->_name = name;
    this->_salary = salary;
    this->_dept = dept;
}

void Employee::addSubordinate(Employee employee)
{
    _subordinates.push_back(employee);
}

void Employee::removeSubordinate(Employee employee)
{
    list<Employee>::iterator it = _subordinates.begin();
    while(it!=_subordinates.end())
    {
        if(it->getName().compare(employee.getName())\
                &&it->getDept().compare(employee.getDept())\
                &&it->getSalary() == employee.getSalary()
                )
        _subordinates.erase(it);
        it++;
    }
}

list<Employee> Employee::getSubordinates()
{
    return this->_subordinates;
}

string Employee::getName()
{
    return this->_name;
}

string Employee::getDept()
{
    return this->_dept;
}

int Employee::getSalary()
{
    return this->_salary;
}
