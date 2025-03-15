//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/D

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n) 
{
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    int limit = sqrt(n);
    for (long long i = 5; i <= limit; i += 2) 
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;
        cout << (isPrime(N) ? "YES" : "NO") << endl;
    }
    return 0;
}