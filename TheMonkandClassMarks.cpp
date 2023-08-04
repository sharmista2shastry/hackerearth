#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b)
{
	if(a.second == b.second)
	return a.first < b.first;

	return a.second > b.second;
}

int main() {
	int n;
	cin >> n;

	vector<pair<string, int>> res(n);

	for(int i=0; i<n; i++)
	{
		pair<string, int> p;
		cin >> p.first;
		cin >> p.second;
		res.push_back(p);
	}

	sort(res.begin(), res.end(), compare);

	for(int i=0; i<n; i++)
	{
		cout << res[i].first << " " << res[i].second << endl;
	}

	return 0;
}
