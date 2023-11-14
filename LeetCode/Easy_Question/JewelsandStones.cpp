#include<bits/stdc++.h>
using namespace std;
/*
Problem Link : https://leetcode.com/problems/jewels-and-stones/
*/
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ctr = 0 ;
        for(int i = 0 ; i < jewels.size() ; i++){
            for(int j = 0 ; j < stones.size() ; j++){
                if(jewels[i] == stones[j])ctr++;
            }
        }
        return ctr;
    }
};

int main(){
    Solution s;
    cout << s.numJewelsInStones("aA","aAAbbbb") << endl;
    cout << s.numJewelsInStones("z","ZZ") << endl;
    return 0;
}