#include<bits/stdc++.h>
using namespace std ;
//Problem name : Faulty Keyboard
// Problem : https://leetcode.com/problems/maximum-number-of-removable-characters/
/*
Explanation : reverse the string everytime we encounter 'i' in the string.
*/

// Solution 1 : greedy approacp O(n)
/*
It works on the following observation:
1. For even i in string s, we can remove all the 'i' from the string. Because after rotating the string, the 'i' will be at the same position.
2. For odd i in string s, we can remove all the 'i' from the string except the last one. Because after rotating the string, the 'i' will be at the same position.

Correctness is not 100% .
*/
class Solution1 {
public:
    string finalString(string s) {
        int n = s.size();
        vector<int> idx;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'i') {
                idx.push_back(i);
            }
        }
        string ans = "";
        if (idx.size() % 2 == 0) {
            for (int i = 0; i < n; i++) {
                if (s[i] != 'i') {
                    ans += s[i];
                }
            }
            return ans;
        } else {
            int lastIdx = idx[idx.size() - 1];
            for (int i = 0; i < lastIdx / 2 + 1; i++) {
                swap(s[i], s[lastIdx - 1 - i]);
            }
            for (int i = 0; i < n; i++) {
                if (s[i] != 'i') {
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};
// Solution 2 : O(lenght of string * Number of 'i' in string)
// Space Complexity : O(n)
//Correctness : 100%
class Solution2 {
public:
    string finalString(string s) {
        int n = s.size();
        string ans = "" ;
        for(auto &ch : s){
            if(ch == 'i') reverse(begin(ans),end(ans));
            else ans += ch;
        }
        return ans;
    }
};

int main(){
    Solution2 sol;
    string s = "piih";
    cout << sol.finalString(s) << endl;
    return 0;
}