//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C


#include <iostream>
#include <algorithm>
using namespace std;


string wonderful(int value)
{
	if (value % 2 == 1)
	{
		string binary = "";
		while (value > 0)
		{
			binary += (value % 2) + '0';
			value /= 2;
		}

		string binaryrev = binary;
		reverse(binaryrev.begin(), binaryrev.end());
		return binaryrev == binary ? "YES" : "NO";
	}
	else return "NO";
}

int main()
{
	int n;
	cin >> n;
	cout << wonderful(n) << endl;
}