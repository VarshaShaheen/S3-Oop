//
// Created by Varsha on 21-03-2023.
//
#include <iostream>
using namespace std;

class Player
{
private:
    int id;
    static int next_id;
public:
    int getiD()
    { return id; }
    void incr()
    { id =next_id++;}
};int Player::next_id = 1;

int main()
{
    Player p1 ,p2 ,p3;
    p1 .incr();
    p2.incr();
    p3.incr();
    cout << p1.getiD() <<" ";
    cout << p2.getiD() <<" ";
    cout << p3.getiD();
    return 0;
}
