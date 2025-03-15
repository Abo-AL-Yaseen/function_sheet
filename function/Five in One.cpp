//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/O

#include <iostream>
#include <algorithm>
#include<cmath>
#include <vector>
#include <iomanip>
#include <set>
using namespace std;

int maximum(vector<int>v)
{
	int maxi=-1000000;
	for (int i = 0; i < v.size(); i++)
	{
		if (maxi < v[i])
		{
			maxi = v[i];
		}
	}
	return maxi;
}

int minimum(vector<int>v)
{
	int mini = 1000000;
	for (int i = 0; i < v.size(); i++)
	{
		if (mini> v[i])
		{
			mini = v[i];
		}
	}
	return mini;
}

int primeNumber(vector<int>v)
{
	int result = 0;
	for (int i = 0; i < v.size(); i++)
	{
		int n = v[i];
		int count = 0;
		for (int j = 1; j <= n; j++)
		{
			if (v[i] % j == 0)
				count++;
		}
		if (count == 2)
			result++;
	}
	return result;
}

bool isPalindrom(int num)
{
	int x = 0;
	int value = num;
	while (num > 0)
	{
		x = x * 10 + num % 10;
		num /= 10;
	}
	return value == x;
}

int palindrom(vector<int>v)
{
	int count = 0;
	for (int i = 0; i < v.size(); i++)
	{
		
		if (isPalindrom(v[i]))
			count++;
	}
	return count;
}


int maximumNDiv(vector<int> v)
{
	vector<int> maxi(v.size()); 
	vector<int> element(v.size()); 
	for (int i = 0; i < v.size(); i++)
	{
		int result = 0; 
		for (int count = 1; count <= v[i]; count++)
		{
			if (v[i] % count == 0)
			{
				result++;
			}
		}
		maxi[i] = result;
		element[i] = v[i];
	}

	int maximDiv = -1, index = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (maxi[i] > maximDiv || (maxi[i] == maximDiv && element[i] > element[index]))
		{
			maximDiv = maxi[i];
			index = i;
		}
	}

	return element[index];
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
	cout << "The maximum number : " <<maximum(v) <<endl;
	cout << "The minimum number : " << minimum(v) << endl;
	cout << "The number of prime numbers : " << primeNumber(v) << endl;
	cout << "The number of palindrome numbers : " << palindrom(v) << endl;
	cout << "The number that has the maximum number of divisors : " << maximumNDiv(v) << endl;
}