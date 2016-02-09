#include <iostream>
#include <ctime>

using namespace std;

class Time
{
	public:
		int hour;
		int minute;
		int second;
		void print_time()
		{
			cout << hour << " : " << minute << " : " << second << endl;
		}
};

int main()
{
	int n;
	n = time(NULL);
	Time now = {0, 0, 0};
	now.second = n%60;
	now.minute = ((n%3600 - (n%3600)%60))/60;
	now.hour = (((n%86400 - ((n%86400)%3600))/3600)+8)%24;
	now.print_time();
}