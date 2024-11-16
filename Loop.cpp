#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t ; ++test)
    {
    int n;
    cin >>n;

        for ( int i=0;i<n ; ++i)
        {
            for (int j = 0; j<i ; ++j)
            {
                cout << " * ";
            }
            cout << endl;
        }
    }

    return 0;
}
/* initialization
        while ( condition )
        {
          statement ;
          counter update;
        } */
        /* int i = 1;
        while ( i <= 10 )
        {
            cout << i << endl;
            i++;
        }*/
    /* for (initialization ; condition ; counter update or increment )
        {
            statement ;
        } */
