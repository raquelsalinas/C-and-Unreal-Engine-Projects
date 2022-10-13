#include <iostream>
#include <boost/array.hpp>
#include <boost/regex.hpp>

using namespace std;

int _tmain(int argc, _TCHAR* argv[]) 
{
    boost::array<int, 10> a;

    return 0;
}


int main()
{
    //Output example
    cout << "Hello World!\n";
    return 0;

    //When you do not want others (or yourself) to override existing variable values, 
    //use the const keyword (this will declare the variable as "constant", which means
    //unchangeable and read-only.
    const int myNum = 15;

    //User input example
    //cout is pronounced "see-out"
    //cin is pronounced "see-in"
    int x;
    cout << "Type a number: ";
    cin >> x;
    cout << "Your number is: ";

    //Max and min math functions
    cout << max(5, 10);
    cout << min(5, 10);

    //Function overloading
    int myFunction(int x)
    float myFunction(float x)
    double myFunction(double x, double y)

    //A constructor in C++ is a special method that is automatically called 
    //when an object of a class is created. To create a constructor, 
    //use the same name as the class, followed by parentheses.
        class MyClass {
        public:
            myClass() {
                cout << "Hello World!";
            }
        private:
            int y;
    };

    int main() {
        MyClass myObj; //(Allowed)
        return 0;
        myObj.y = 50; //(Not allowed)
    }

    //Polymorphism
    class Animal {
    public:
        void animalSound() {
            cout << "The animal makes a sound. \n";
        }
    };

    class Pig : public Animal {
    public:
        void animalSound() {
            cout << "The pig goes oink oink. \n";
        }
    };

    class Dog : public Animal {
    public:
        void animalSound() {
            cout << "The dog goes bark bark. \n";
        }
    };
}
