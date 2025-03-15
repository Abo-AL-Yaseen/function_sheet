//Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E

#include <iostream>
using namespace std;

void swap(int& xvalue, int& yvalue) {
    int temp = xvalue;
    xvalue = yvalue;
    yvalue = temp;
}

int main() {
    int x, y;
    cin >> x >> y;
    swap(x, y);
    cout << x << " " << y;
}
