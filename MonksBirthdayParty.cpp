#include <iostream>
#include <string>
#include <vector>
#include <set> 
using namespace std;

void unique(vector<string> guests, int n)
{
	set<string> s;

	for(int i=0; i<n; i++)
	s.insert(guests[i]);

	for(auto i: s)
	cout << i << endl;

	return;
}

int main() {
	int T;
	cin >> T;
	while(T--)
	{
		int n;
		cin >> n;
		vector<string> guests(n);

		for(int i=0; i<n; i++)
		cin >> guests[i];

		unique(guests, n);
	}
	return 0;
}
