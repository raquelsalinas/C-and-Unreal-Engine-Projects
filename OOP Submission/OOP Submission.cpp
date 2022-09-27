#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    string breed;
    string color;
    int height;
    int weight;

    void Shaking() {
        cout << "The dog is shaking. \n";
    }

    void Sitting() {
        cout << "The dog is sitting. \n";
    }

    void layingDown() {
        cout << "The dog is laying down. \n";
    }
};

int main()
{
    Dog myObj;

    myObj.breed = "Hound";
    myObj.color = "Brown";
    myObj.height = 2;
    myObj.weight = 60;

    myObj.Shaking();
    myObj.Sitting();
    myObj.layingDown();
    return 0;
}
