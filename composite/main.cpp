#include "employee.h"

void printSubordiantes(list<Employee> _list)
{
    list<Employee>::iterator it = _list.begin();
    while(it!=_list.end())
    {
        cout<<it->getName()<<" "<<it->getDept()<<" "<<it->getSalary()<<endl;
        it++;
    }
}

int main()
{
    Employee *xiaohong = new Employee("xiaohong","laoban",50000);
    Employee *xiaohua = new Employee("xiaohua","jingli",15000);
    Employee *xiaofang = new Employee("xiaofang","zuzhang",12000);
    Employee *xiaoming = new Employee("xiaoming","zuzhang",12000);
    Employee *xiaodong = new Employee("xiaodong","yuangong",8000);
    Employee *xiaoxi = new Employee("xiaoxi","yuangong",8000);
    Employee *xiaonan = new Employee("xiaonan","yuangong",8000);
    Employee *xiaobei = new Employee("xiaobei","yuangong",8000);

    xiaohong->addSubordinate(*xiaohua);
    xiaohua->addSubordinate(*xiaofang);
    xiaohua->addSubordinate(*xiaoming);
    xiaofang->addSubordinate(*xiaodong);
    xiaofang->addSubordinate(*xiaoxi);
    xiaoming->addSubordinate(*xiaonan);
    xiaoming->addSubordinate(*xiaobei);

    printSubordiantes(xiaohong->getSubordinates());
    printSubordiantes(xiaohua->getSubordinates());
    printSubordiantes(xiaofang->getSubordinates());
    printSubordiantes(xiaoming->getSubordinates());
}
