//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I

#include <iostream>
#include <algorithm>
#include<cmath>
#include <vector>
using namespace std;

void swapRows(vector<vector<int>>& v, int x, int y, int n)
{
	for (int i = 0; i < n; i++) {
		swap(v[x - 1][i], v[y - 1][i]);
	}
}

void swapColumns(vector<vector<int>>& v, int x, int y, int n) 
{
	for (int i = 0; i < n; i++) 
	{
		swap(v[i][x - 1], v[i][y - 1]);
	}
}

int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	vector<vector<int>>v(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> v[i][j];
		}
	}

	swapRows(v, x, y,n);
	swapColumns(v, x, y, n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j > 0)
				cout << " ";
			cout << v[i][j];
		}
		cout << endl;
	}
}