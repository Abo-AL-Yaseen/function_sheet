//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J

#include <iostream>
#include <algorithm>
#include<cmath>
#include <vector>
#include <iomanip>
using namespace std;

void average(int n,const vector<double>&A)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += A[i];
	}
	double res = sum / n;
	cout <<fixed<< setprecision(7)<< res;
}

int main()
{
	int n;
	cin >> n;
	vector<double>A(n);
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	average(n, A);
}