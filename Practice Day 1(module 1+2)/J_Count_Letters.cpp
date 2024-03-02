#include <iostream>
#include <vector>
using namespace std;

int main() {
    string input;
    cin >> input;

    vector<int> freq(26, 0); // Initialize a vector to store frequency of each letter

    for (char c : input) {
        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}
