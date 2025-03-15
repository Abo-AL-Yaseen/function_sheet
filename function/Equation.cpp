//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F

#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

void equation(long long xs, long long ns)
{
	long long result = 0;
	for (int i = 2; i <= ns; i += 2)
	{
		result += pow(xs, i);
	}

	cout << result << endl;
}

int main()
{
	long long x, n;
	cin >> x >> n;
	equation(x, n);
}