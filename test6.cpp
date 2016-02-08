#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

struct Time
{
	int hour;
	int minute;
	int second;
};

void print_time(Time &t)
{
	cout << t.hour << " : " << t.minute << " : " 
	<< t.second << endl;
}

int main()
{
	while(1)
	{
		cout << "\033c";
		int n;
		n = time(NULL);
		Time now = {0, 0, 0};
		now.second = n%60;
		now.minute = ((n%3600 - (n%3600)%60))/60;
		now.hour = (((n%86400 - ((n%86400)%3600))/3600)+8)%24;
		print_time(now);
		usleep(50000);
	}
} 