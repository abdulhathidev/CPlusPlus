#include <iostream>
#include <map>

using namespace std;

int main()
{
    multimap<int, string> m;
    m.insert(pair<int, string>(1, "Abdul"));
    m.insert(pair<int, string>(2, "Aysha"));
    m.insert(pair<int, string>(3, "Afsar"));
    m.insert(pair<int, string>(4, "Afraz"));
    m.insert(pair<int, string>(5, "Amira"));
    m.insert(pair<int, string>(5, "Amira1"));

    multimap<int, string>::iterator itr;

    for (itr = m.begin(); itr != m.end(); itr++)
        cout << itr->first << " " << itr->second << endl;

    multimap<int, string>::iterator itr1 = m.find(5);
    cout << itr1->first << " " << itr1->second << endl;
}