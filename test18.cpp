#include <iostream>
#include <map>
#include <string>
using namespace std;
//insert.begin.end.find.erase
int main()
{
    map<string, int> mymap1;
    map<string, int>::iterator it1;

    mymap1["first"] = 1;
    mymap1["second"] = 2;
    mymap1["third"] = 3;

    it1 = mymap1.begin();
    mymap1.insert(it1, pair<string, int>("hello", 4));
    mymap1.insert(it1, pair<string, int>("world", 5));
    mymap1.insert(it1, pair<string, int>("hate", 6));
    mymap1.insert(it1, pair<string, int>("hella", 7));
    
    // show content:
    for (it1 = mymap1.begin(); it1 != mymap1.end(); ++it1) {
        cout << it1->first << " => " << it1->second << endl;
    }

    map<char, int> mymap2;
    map<char, int>::iterator it2;

    mymap2['b'] = 100;
    mymap2['a'] = 200;
    mymap2['c'] = 300;

    // show content:
    for (it2 = mymap2.begin(); it2 != mymap2.end(); ++it2) {
        cout << it2->first << " => " << it2->second << endl;
    }

    map<char, int> mymap3;
    map<char, int>::iterator it3;

    mymap3['a']=50;
    mymap3['b']=100;
    mymap3['c']=150;

    it3 = mymap3.find('b');
    if (it3 != mymap3.end()) {
        mymap3.erase(it3);
    }

    // print content:
    cout << "elements in mymap:" << endl;
    cout << "a => " << mymap3.find('a')->second << endl;
    cout << "c => " << mymap3.find('c')->second << endl;

    return 0;
}