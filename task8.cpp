#include <iostream>
#include <string>
using namespace std;
int naivePatternSearch(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();
    if (m == 0) return -1; 
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == m) {
            return i;
        }
    }
    return -1; 
}
int main() {
    string text = "hello world";
    string pattern = "world";
    int result = naivePatternSearch(text, pattern);
    if (result != -1)
        cout << "Pattern found at index: " << result << endl;
    else
        cout << "Pattern not found" << endl;
    return 0;
}
