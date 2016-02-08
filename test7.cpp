#include <iostream>
using namespace std;

int add1_no_int(int a)
{
	a = a + 1;
	return a;
}

void add1_yes_void(int &b)// b is a reference variable
{
    b = b + 1;
} // b is destroyed here

int add1_yes_int(int &c)
{
	c = c + 1;
	return c;
}

//add1_yes_void does the same thing as add1_yes_int

int main()
{
	int x = 0;
	cout << "x = " << x << endl;

	x = add1_no_int(x);
	cout << "x = " << x << endl;

	add1_yes_void(x);
	cout << "x = " << x << endl;

	add1_yes_int(x);
	cout << "x = " << x << endl;
	return 0;
}
