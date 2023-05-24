#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";
    m[5] = "cdc";
    auto it = m.find(3);
    if (it != m.end())
        m.erase(it);
    m.clear();
    //  if (it == m.end())
    // {
    //     cout << "NO value";
    // }
    // else
    // {
    //     cout << (*it).first << " " << (*it).second << endl;
    // }

    print(m);
    return 0;
}