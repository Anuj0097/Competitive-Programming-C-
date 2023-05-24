#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin >> s;
    stack<char> st;
    for (char x : s)
        st.push(x);
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}
//     string str;
//     cin >> str;
//     string str_rev;
//     for (int i = str.size() - 1; i >= 0; --i)
//     {
//         str_rev.push_back(str[i]);
//     }
//     // cout << str_rev << endl;abn
//     if (str == str_rev)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
//     return 0;
// }
