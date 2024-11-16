#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        int digit_sum = 0;
        while (x > 0)
        {
            int last_digit = x % 10;
            digit_sum = digit_sum + last_digit;
            x = x / 10;
        }
        cout << digit_sum << endl;
        return 0;
    }
}
