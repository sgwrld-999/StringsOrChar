#include<bits/stdc++.h>
using namespace std;
/*
Problem name : Reverse Vowels of a String
Problem link : https://leetcode.com/problems/reverse-vowels-of-a-string/
Explanation : 
We've to reverse the vowels order in the string.
We can do this by using two pointer approach. or we can do it using the
a vector of pair<char,int> and then reverse the vector and then replace the
vowels in the string with the reversed vector.

______________________________________________________________________________

To do show we will do the following steps :
store the vowels and their respective index in a vector of pair<char,int>
then iterate the vector from the end and replace the vowels in the string as
we'll take the last index and reoplace it with the first index and so on.

______________________________________________________________________________

*/
class Solution {
public:
    string reverseVowels(string s) {
        vector<pair<char,int>> pairVec ;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                pairVec.push_back({s[i],i});
            }
        }
        for(int i = pairVec.size() - 1 ; i >= 0 ;i--){
            s[pairVec[i].second] = pairVec[pairVec.size() - 1-i].first;
        }
        return s ;
    }
};

int main(){
    Solution s ;
    string str = "leetcode" ;
    cout << s.reverseVowels(str) << endl ;
    return 0 ;
}