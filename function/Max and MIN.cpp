//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G

#include <iostream>
#include <algorithm>
#include<cmath>
#include <vector>
using namespace std;


void max_min(vector<int>vs)
{
	int maxi = vs[0];
	int mini = vs[0];
	for (int i = 1; i < vs.size(); i++)
	{
		if (vs[i] < mini)
			mini = vs[i];
		if (vs[i] > maxi)
			maxi = vs[i];

	}
	cout << mini << " " << maxi;
}


int main()
{
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	max_min(v);
}

