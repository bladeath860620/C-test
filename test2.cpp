#include <iostream>
using namespace std;
//by using "using namespace std;" , "std::" in front of cout or endl can be ignored
int main()
{
	int z;
	cout << "Please input the value of z : ";
	cin >> z;
	//Be aware that cin uses ">>" 
	cout << "z = " << z << endl;
	//If string or numbers must be printed at the same time ,using << to seperate is required
}
