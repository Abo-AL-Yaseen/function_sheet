//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N

#include <iostream>
#include <algorithm>
#include<cmath>
#include <vector>
#include <iomanip>
#include <set>
using namespace std;

void shiftZero(vector<int>&v)
{
	int nonZero= 0; 

	for (int i = 0; i < v.size(); i++)
	{
		if (nonZero > v.size())
			break;
		if (v[i] == 0)
		{
			v.erase(v.begin() + i);
			v.push_back(0);
			i--;
			nonZero++;
		}
	}

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
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	shiftZero(v);
}