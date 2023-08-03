#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void similarCandies(vector<long long> a, int n, int m, unordered_set <long long> s)
{
	for(int i=n; i<n+m; i++)
	{
		cin >> a[i];

		if(s.count(a[i]) > 0)
		cout << "YES" << endl;

		else
		{
			s.insert(a[i]);
			cout << "NO" << endl;
		}
	}

	return;
}

int main() {
	int T;
	cin >> T;
	while(T--)
	{
		int n, m;
		cin >> n >> m;

		vector<long long> a(n+m);
		unordered_set <long long> s;

		for(int i=0; i<n; i++)
		{
			cin >> a[i];
			s.insert(a[i]);
		}
		

		similarCandies(a, n, m, s);
	}
	return 0;
}
