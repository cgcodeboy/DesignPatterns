#include "src/football.h"
#include "src/cricket.h"

int main()
{
    Football *football = new Football;
    football->play();

    Cricket *cricket = new Cricket;
    cricket->play();

    return 0;
}
