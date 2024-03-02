#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int N;
    cin >> N;

    if (N > 0 && (N & (N - 1)) == 0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
