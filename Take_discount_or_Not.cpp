-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --* /

    int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T-- > 0)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        rep(i, 0, n)
        {
            cin >> a[i];
        }
        int val1 = 0, val2 = 0, ans = 0;
        rep(i, 0, n)
        {
            ans += a[i];
            if (a[i] <= y)
            {
                val1 += 0;
            }
            else if (a[i] > y)
            {
                val2 += a[i] - y;
            }
        }
        cout << (val2 + x < ans ? "COUPON" : "NO COUPON") << endl;
    }
    return 0;
}