#include<bits/stdc++.h>
using namespace std;
int main()
{
    //condition check
    int a = 3;
    int b = 6;
    int c = 9;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    // multiple operator && ||
    cout << ((a<b) && (b>c) ) << endl; // 0
    cout << ((a<b) || (b>c) ) << endl; // 1
    cout << ((a<b) && (c>b) ) << endl; // 1
    cout << endl;
    // check even or odd
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else if ( n % 3 == 0)
    {
        cout << "Divisible by 3" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
