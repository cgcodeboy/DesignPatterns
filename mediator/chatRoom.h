#ifndef CHAT_ROOM_H
#define CHAT_ROOM_H

#include <iostream>
#include <list>
#include <string>
#include "user.h"

using namespace std;

class ChatRoom{
    list<User*> *_userList;
public:
    ChatRoom();
    void sendMessage(User *sender,User *receiver,string message);
    void addUser(User *user);
    bool checkUser(User *receiver);
};


#endif
