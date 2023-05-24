#include <bits/stdc++.h>
using namespace std;
int *getlps(string pattern)
{
    int len = pattern.length();
    int *lps = new int[len];
    lps[0] = 0;
    int i = 1;
    int j = 0;
    while (i < len)
    {
        if (pattern[i] == pattern[j])
        {
            lps[i] = j + 1;
            j++;
            i++;
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
bool kmpsearch(string text, string pattern)
{
    int lentext = text.length();
    int lenpat = pattern.length();
    int i = 0;
    int j = 0;
    int *lps = getlps(pattern);
    while (i < lentext && j < lenpat)
    {
        if (text[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    if (j == lenpat)
    {
        return true;
    }
    return false;
}
int main()
{
    string str = "abcxabcdabcdabcy";
    string substring = "ax";
    cout << kmpsearch(str, substring) << endl;
    return 0;
}
