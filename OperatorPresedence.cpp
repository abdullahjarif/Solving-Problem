#include<bits/stdc++.h>
using namespace std;
int main()
{
    // calculation order in data types

    // double
    // float
    // long long int
    // long int
    // int
    // char
    int a = 7;
    int b = 2;
    double c = 2.0;
    cout << a/b <<endl;
    cout << a/double(b) << endl ;
    cout << a/c << endl ;
    cout << 'c'+b << endl;
    cout << 7/2*3 <<endl ;
    cout << 3*7/2<<endl ;

    //Overflow
    //long long int x = 100000;
    //long long int y = 100000;
   /* int x = 100000;
    int y = 100000;
    long long int z = x * 1LL * y;
    cout << z << endl;*/
    double x = 100000;
    double y = 100000;
    double z = x*y;
    // using fixed keyword to remove scientific mode
    cout << fixed << z <<endl;
    // using setprecision(0) keyword
    cout << fixed << setprecision(0) << z <<endl;
    cout <<endl;
    int mx = INT_MAX;
    cout << mx << endl;
    cout << mx + 1<< endl;
    return 0;
}
