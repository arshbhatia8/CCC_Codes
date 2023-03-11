#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    string word;
    cin >> n >> word;

    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};
    char prev_vowel = '\0';
    string result;

    for (int i = 0; i < n; i++) {
        char c = word[i];
        if (vowels.count(c)) {
            if (c == prev_vowel) {
                if ((c == 'e' || c == 'o') && i >= 2 && word.substr(i-2, 2) == string(2, c)) {
                    // skip repeating 'e' or 'o' if it's exactly 2 times in a row
                    continue;
                } else {
                    // skip repeated vowel
                    continue;
                }
            } else {
                // add new vowel
                result.push_back(c);
                prev_vowel = c;
            }
        } else {
            // add non-vowel
            result.push_back(c);
        }
    }

    // capitalize and print result
    result[0] = toupper(result[0]);
    cout << result << endl;

    return 0;
}
