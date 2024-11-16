#include <iostream>
using namespace std;
long long int M = 1000000000+7;
int main() {
    int N;
    cin >> N;
    long long product = 1;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        product = (product * num) % M;
    }

    cout << product << endl;

    return 0;
}
