#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
	ofstream samp("sample.txt");
	//If we couldn't open the output file stream for writing
	if (!samp)
	{
		// Print an error and exit
		cerr << "ERROR, sample.txt can not be opened" << endl;
		exit(1);
	}

	while(1)
	{
		string a;
		string quit = ":wq";
		getline(cin, a);
		if(a == quit)
		{
			break;
		}
		samp << a << endl;
	}
}