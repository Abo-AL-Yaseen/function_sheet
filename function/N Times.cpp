//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H

#include <iostream>
#include <algorithm>
#include<cmath>
#include <vector>
using namespace std;

void n_time(int nn, char cc)
{
	cout << cc;
	for(int i = 1; i < nn; i++)
	{
		cout << " " << cc;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		char c;
		cin >> n >> c;
		n_time(n, c);
	}
}