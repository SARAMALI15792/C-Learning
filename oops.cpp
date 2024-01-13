#include <iostream>
using namespace std;
class car
{ // this is called class
public:
    string model;
    int speed;
    int price;
    string color;
    car(string m, int s, int p, string c)
    { // this is called constructor

        model = m;
        speed = s;
        color = c;
        price = p;
    }
};

int main()
{

    car bmw = car("2011", 220, 1000, "black");
    cout << bmw.color;

    return 0;
}