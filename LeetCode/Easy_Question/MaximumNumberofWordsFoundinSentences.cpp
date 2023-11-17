#include<bits/stdc++.h>
using namespace std;

/*
Problem name : MaximumNumberofWordsFoundinSentences
Problem link : https://leetcode.com/problems/maximum-number-of-words-you-can-type/

*/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int sizeOfSent = sentences.size();
        int maxLen = INT_MIN ;
        int ctr = 1 ;
        for(int i = 0 ; i < sizeOfSent ;  i++){
            ctr = 1 ;
            for(auto ch : sentences[i]){
                if(ch == ' ')ctr++;
            }
            maxLen = max(maxLen,ctr);
        }
        return maxLen;
    }
};

int main(){
    Solution s;
    vector<string> sentences = {"hello world","hello world","hello world","hello world"};
    cout<<s.mostWordsFound(sentences);
    return 0;
}