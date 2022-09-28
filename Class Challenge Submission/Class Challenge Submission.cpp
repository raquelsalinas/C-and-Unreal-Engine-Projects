#include <iostream>
using namespace std;

class Shape {
public:
	string color = "Red";
	void getArea() {}
};

class Rectangle : public Shape {
public:
	int height = 2;
	int width = 3;
	void getArea() {
		cout << height * width;
	}
};

class Circle : public Shape {
public:
	int radius = 4;
	void getArea() {
		cout << 2 * 3.14 * radius;
	}
};

class Triangle : public Shape {
public:
	int height = 5;
	int base = 6;
	void getArea() {
		cout << (height * base) / 2;
	}
};

int main() {
	Shape myShape;
	Rectangle myRect;
	Circle myCircle;
	Triangle myTriangle;

	myRect.getArea();
	cout << ", ";
	myCircle.getArea();
	cout << ", ";
	myTriangle.getArea();
	return 0;

}