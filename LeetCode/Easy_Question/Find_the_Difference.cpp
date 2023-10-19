#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifferenceBysorting(string s, string t) {
        //TC : O(logN * N)
        sort(begin(s), end(s));
        sort(begin(t), end(t));
        for (int i = 0; i < t.size(); i++) {
            if (i < s.size()) {
                if (t[i] != s[i]) {
                    return t[i];
                }
            } else {
                return t[i];
            }
        }
        return '\0';
    }
    char findTheDifferenceUsingMap(string s, string t) {
        //TC : Linear
        unordered_map<char, int> mp;
        for (auto c : t) {
            mp[c]++;
        }
        for (auto c : s) {
            mp[c]--;
        }
        for (auto c : mp) {
            if (c.second == 1) {
                return c.first;
            }
        }
        return '\0';
    }
};

int main(int argc, char const *argv[]) {
    string s, t;

    // Prompt the user to enter strings s and t
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    // Create an instance of the Solution class
    Solution solution;

    // Call the findTheDifference function and display the result
    char result = solution.findTheDifferenceUsingMap(s, t);
    cout << "The extra character is: " << result << endl;

    return 0;
}
