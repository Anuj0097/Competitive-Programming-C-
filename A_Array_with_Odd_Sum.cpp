
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        bool odd = false, even = false;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            sum += a;
            odd |= a % 2 != 0;
            even |= a % 2 == 0;
        }
        if (sum % 2 != 0 || (odd && even))

            cout << "YES" << endl;

        else

            cout << "NO" << endl;
    }
    return 0;
}