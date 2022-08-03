#include <iostream>
using namespace std;

class Box {
private:
	string colour;
	int top, bottom, left, right;
public:
	void setBox(int t, int b, int l, int r);
	int getArea(void);
	void setcolour(string c);
	string getcolour(void);
};
void Box::setBox(int t, int b, int l, int r)
{
	top = t;
	bottom = b;
	left = l;
	right = r;
}

int Box::getArea(void)
{
	return (bottom-top) * (right - left);
}

void Box::setcolour(string c)
{
	colour = c;
}

string Box::getcolour(void)
{
	return colour;
}

int main()
{
	Box object;
	object.setcolour("lean");
	cout << object.getcolour() << endl;
	object.setBox(5, 10, 10, 20);
	cout << object.getArea() << endl;
}