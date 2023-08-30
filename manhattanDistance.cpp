#include <bits/stdc++.h>
using namespace std;

long long int manhattanDistance(int n, long long total_x, long long total_y, vector<long long> x, vector<long long> y)
{
    long long int res = 0;
    long long int curr_x = 0, curr_y = 0;

    for(int i=0; i<n-1; i++)
    {
        res += (total_x - (n-i) * x[i]) - curr_x;
        res += (total_y - (n-i) * y[i]) - curr_y;
        curr_x += x[i];
        curr_y += y[i];
    }

    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int total_x = 0, total_y = 0;
        vector<long long int> x(n);
        vector<long long int> y(n);

        for(int i=0; i<n; i++)
        {
            cin >> x[i] >> y[i];
            total_x += x[i];
            total_y += y[i];
        }

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        cout << manhattanDistance(n, total_x, total_y, x, y) << endl;
    }
}
