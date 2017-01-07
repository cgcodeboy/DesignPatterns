#include "src/famale.h"
#include "src/male.h"
#include "src/married.h"
#include "src/single.h"

void printCriteria(list<Person> *persons)
{
    list<Person>::iterator it = persons->begin();
    while(it!=persons->end())
    {
        cout<<it->getName()<<" "<<it->getSex()<<" "<<it->getStatus()<<endl;
        it++;
    }
}

int main()
{
    string str("00");
    list<Person> persons;
    for(int i = 0; i<3;i++)
    {
        Person per(str+char(65+i),"famale","single");
        persons.push_back(per);
    }
    for(int i = 3; i<6;i++)
    {
        Person per(str+char(65+i),"male","single");
        persons.push_back(per);
    }
    for(int i = 6; i<9;i++)
    {
        Person per(str+char(65+i),"famale","married");
        persons.push_back(per);
    }
    for(int i = 9; i<12;i++)
    {
        Person per(str+char(65+i),"male","married");
        persons.push_back(per);
    }

    Male *male = new Male;
    printCriteria(male->meetCriteria(persons));

    Famale *famale = new Famale;
    printCriteria(famale->meetCriteria(persons));

    Married *married = new Married;
    printCriteria(married->meetCriteria(persons));

    Single *single = new Single;
    printCriteria(single->meetCriteria(persons));

    return 0;
}
