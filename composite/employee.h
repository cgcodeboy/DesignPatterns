#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>
#include <list>

using namespace std;

class Employee{
private:
    string _name;
    string _dept;
    int _salary;
    list<Employee> _subordinates;
public:
    Employee(string name,string dept,int salary);
    void addSubordinate(Employee employee);
    void removeSubordinate(Employee employee);
    list<Employee> getSubordinates();
    string getName();
    string getDept();
    int getSalary();
};

#endif
