#include<bits/stdc++.h>
using namespace std;


// Problem name : Reverse String II
// Problem : https://leetcode.com/problems/reverse-string-ii/
/*
Explanation ; Iterate over the lsit and reverse the string after every 2k character 
and reverse the string from i to i+k-1.
*/
//Time Complexity : O(n * (k+2k+4k+6k+8k+...)) = O(n * k^2)
//Space Complexity : O(1)
class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        for (int i = 0; i < n; i += 2 * k) {
            int start = i;
            int end = min(i + k, n) - 1;
            while (start < end) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};

int main(){
    Solution s;
    string str = "abcdefg";
    int k = 2;
    cout << s.reverseStr(str, k) << endl;
    return 0;
}