#include <iostream>
#include <queue>
#include<vector>
using namespace std;

long long maxCandies(int n, int k, vector<long long> a)
{
	priority_queue<long long> pq;

	for(int i=0; i<n; i++)
	pq.push(a[i]);

	long long count = 0;

	while(k-- && !pq.empty())
	{
		long long num = pq.top();
		pq.pop();
		count += num;
		num /= 2;
		pq.push(num);
	}

	return count;
}

int main() {
	int T;
	cin >> T;
	while(T--)
	{
		int n, k;
		cin >> n >> k;
		
		vector<long long> a(n);

		for(int i=0; i<n; i++)
		cin >> a[i];

		cout << maxCandies(n,k,a) << endl;
	}
	return 0;
}
