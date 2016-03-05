#include <iostream>
#include <vector>
#include <utility> //for std::pair<>
#include <string>
#include <map>
using namespace std;

int main()
{
	vector<int> myvector;
	int myint;
	int v2int;
	char v2char;
	vector<int>::iterator v;
	cout << "Please enter some integers (enter 0 to end):" << endl;

	while(cin >> myint)
	{
		if(myint == 0)
			break;
		myvector.push_back (myint);
	}

	v=myvector.begin()+3;
	v=myvector.insert(v, 9);

	cout << "myvector stores " << myvector.size() << " numbers." <<endl;
	for(v=myvector.begin(); v!=myvector.end(); v++)
	{
		cout << *v << endl;
	}
	myvector.clear();

	cout << "--------------------------------------" << endl;
	pair<char, int> p;
	p = make_pair('a', 5);
	cout << "Char = " << p.first << "; Int = " << p.second << endl;

	cout << "--------------------------------------" << endl;
	vector<pair<char, int> > v2;
	vector<pair<char, int> >::iterator it;
	while(cin >> v2char >> v2int)
	{
		if(v2char == '0' || v2int == 0)
			break;
		v2.push_back(make_pair(v2char, v2int));
	}
	for(it=v2.begin(); it!=v2.end(); it++)
	{
		cout << (*it).first << " " << (*it).second << endl;
	}

	cout << "--------------------------------------" << endl;
	map<string, pair<int, char> > m;
	map<string, pair<int, char> >::iterator mit;
	string s;
	int mint;
	char mchar;
	while(cin >> s >> mint >> mchar)
	{
		if(s == "0" || mint == 0 || mchar == '0')
			break;
		m[s] = make_pair(mint, mchar);
	}
	for(mit = m.begin(); mit!= m.end(); mit++)
	{
		cout << (*mit).first << " " << (*mit).second.first << " " << (*mit).second.second << endl;
	}
}