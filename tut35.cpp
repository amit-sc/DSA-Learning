#include <iostream>
using namespace std;

int main()
{
    string s("I am Amit.");
    cout << s << endl;

    // string s1;
    // getline(cin, s1);
    // cout << s1 << endl;

    // string s2(5,'*');
    // cout << s2 << endl;

    // cout << s.length() << endl;
    // cout << s.at(5) << endl;
    // s2.clear();

    // string t;
    // getline(cin,t);
    // s.append(t);
    // cout << s << endl;

    cout << s.find("Amit") << endl;
    cout << s.length() << endl;
    cout << s.size() << endl;
    cout << s.capacity() << endl;
    return 0;
}