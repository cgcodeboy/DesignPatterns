#include "chatRoom.h"

ChatRoom::ChatRoom()
{
    this->_userList = new list<User*>;
}

void ChatRoom::sendMessage(User *sender, User *receiver, string message)
{
    receiver->receiveMessage(sender,message);
}

void ChatRoom::addUser(User *user)
{
    this->_userList->push_back(user);
}

bool ChatRoom::checkUser(User *receiver)
{
    list<User*>::iterator it = this->_userList->begin();
    for(it;it!=this->_userList->end();++it)
    {
        User *user = *it;
        if(receiver->getName() == user->getName())
        {
            return true;
        }
    }
    return false;
}
