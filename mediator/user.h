#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class ChatRoom;

using namespace std;

class User{
private:
    string _name;
    ChatRoom *_room;
public:
    User(string name);
    void setChatRoom(ChatRoom *room);
    void sendMessage(User *receiver, string message);
    string getName();
    void receiveMessage(User *user,string message);
};

#endif
