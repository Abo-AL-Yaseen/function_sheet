//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/M

#include <iostream>
#include <algorithm>
#include<cmath>
#include <vector>
#include <iomanip>
#include <set>
using namespace std;

void distNumber(vector<int>&v)
{
	set<int>s(v.begin(), v.end());
	cout << s.size() << endl;
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
	distNumber(v);
	

}