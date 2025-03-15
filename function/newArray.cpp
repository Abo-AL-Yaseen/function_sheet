//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L

#include <iostream>
#include <algorithm>
#include<cmath>
#include <vector>
#include <iomanip>
using namespace std;

void concatinationArray(vector<int>&a, vector<int>&b)
{
	int n = a.size() + b.size();
	vector<int>c;
	c.insert(c.end(), b.begin(), b.end());
	c.insert(c.end(), a.begin(), a.end());

	for (int i = 0; i < c.size(); i++)
	{
		if (i == c.size() - 1)
			cout << c[i];
		else
			cout << c[i] << " ";
	}
}

int main()
{
	int n;
	cin >> n;
	vector<int>a(n);
	vector<int>b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	concatinationArray(a, b);

}