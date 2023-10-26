#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int sizeOfS = s.size();
        for (int i = 0; i < sizeOfS / 2; i++) {
            char temp = s[sizeOfS - i - 1];
            s[sizeOfS - i - 1] = s[i];
            s[i] = temp;
        }
    }
};

int main(){
    vector<char> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char temp;
        cin >> temp;
        s.push_back(temp);
    }
    Solution solution;
    solution.reverseString(s);
    for (auto c : s) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}