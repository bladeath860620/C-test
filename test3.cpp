#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//function uses are the same as C
void print_value(int a)
{
	srand(time(NULL));
	int ran;
	ran = rand() % 10;
	a = a + ran;
	cout << "The value you just inputted plus " << ran << " equals to : " << a << endl;
}

int do_calculate(int a)
{
	a = a + 12;
	return a;
}

int main()
{
	int x;
	cout << "Please input a number to be calculated randomly : ";
	cin >> x;
	print_value(x);
	cout << "Also, it equals to " << do_calculate(x) << " when plus 12" <<endl;
}