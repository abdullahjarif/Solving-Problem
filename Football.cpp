#include<bits/stdc++.h>
using namespace std;
bool isDangerous(const string & situation)
{
    int consecutiveCount = 1;
    char prevPlayer = situation[0];
    for(int i=1; i<situation.size(); i++)
    {
        if(situation[i] == prevPlayer)
        {
            consecutiveCount++;
        }
        if(consecutiveCount>=7){
            return true;
        }else{
        consecutiveCount = 1;
        prevPlayer = situation[i];
        }
    }
    return false;
}
int main()
{
    string situation;
    cin >> situation;
    if(isDangerous(situation)){
        cout << "NO" <<endl;
    }else{
    cout << "YES" <<endl;
    }
    return 0;
}
