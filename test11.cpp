#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float hour = 12;
	float min = 59;
	char column;
	float angle, angle1, angle2;
	float ha, ma;
	cout << fixed << setprecision(3);
	while(hour != 0 && min != 0)
	{
		cin >> hour >> column >> min;
		ma = min*6;
		if(min != 0)
		{
			ha = hour*30 + (30/(60/min));
		}
		else
		{
			ha = hour*30;
		}
		angle1 = ha - ma;
		if(angle1 < 0)
		{
			angle1 = angle1 + 360;
		}
		angle2 = 360 - angle1;
		if(angle1 > angle2)
		{
			angle = angle2;
		}
		else
		{
			angle = angle1;
		}
		cout << angle << endl;
		hour = 12;
		min = 59;
	}
}
//setprecision(3)