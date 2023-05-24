#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(10);
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << endl;
    cout << s.size() << endl;
    int key = 1;
    if (s.find(key) == s.end())
    {
        cout << "Key not found" << endl;
    }
    else
    {
        cout << "Key found" << endl;
    }
    int deleted_key = 10;
    s.erase(deleted_key);
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << endl;
    return 0;
}