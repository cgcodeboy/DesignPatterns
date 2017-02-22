#include "user.h"
#include "chatRoom.h"

User::User(string name)
{
    this->_name = name;
}

void User::setChatRoom(ChatRoom *room)
{
    this->_room = room;
    this->_room->addUser(this);
}

void User::sendMessage(User *receiver, std::string message)
{
    if(this->_room->checkUser(receiver))
    {
        cout<<"Send to:"<<this->_name<<"\n       "<<message<<endl;
        this->_room->sendMessage(this,receiver,message);
    }
    else
    {
        cout<<"Reveiver:"<<receiver->getName()<<" is not exit!"<<endl;
    }
}

void User::receiveMessage(User *user, string message)
{
    cout<<"Receive at:"<<user->getName()<<"\n      "<<message<<endl;
}

string User::getName()
{
    return this->_name;
}
