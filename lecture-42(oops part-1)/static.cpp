#include <iostream>
using namespace std;

class Hero
{

private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete;
    static int random()
    {
        return timeToComplete;
    }
};
int Hero::timeToComplete = 5;

int main()
{

    cout << Hero::timeToComplete << endl;
     cout << Hero::random() << endl;
}