#include "chatRoom.h"
#include "user.h"

int main()
{
    ChatRoom *room = new ChatRoom;
    User *LiFang = new User("LiFang");
    User *HuLi = new User("HuLi");
    User *LiuLei = new User("LiuLei");
    LiFang->setChatRoom(room);
    HuLi->setChatRoom(room);
    LiuLei->setChatRoom(room);

    LiFang->sendMessage(HuLi,"Hello I'm Lifang");
    HuLi->sendMessage(LiuLei,"Hello I'm Huli");
    LiuLei->sendMessage(LiFang,"Hello I'm Liulei");

    return 0;
}
