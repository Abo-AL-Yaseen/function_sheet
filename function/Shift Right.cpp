//Link: http://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/K

#include <iostream>
#include <algorithm>
#include<cmath>
#include <vector>
#include <iomanip>
using namespace std;

void shift_right(vector<int>&v, int x)
{
	
		x %= v.size();
		rotate(v.rbegin(), v.rbegin() + x, v.rend());

		for (int i = 0; i < v.size(); i++)
		{
			if (i == v.size() - 1)
				cout << v[i];
			else
			cout << v[i] << " ";
		}
	
}

int main()
{
	int n, x;
	cin >> n >> x;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	shift_right(v, x);
}