#include<bits/stdc++.h>
using namespace std;
/*
Problem name : Final Value of Variable After Performing Operations
Problem link : https://leetcode.com/problems/final-value-of-variable-after-performing-operations/
Description : 
    There is a programming language with only four operations and one variable X:
        ++X and X++ increments the value of the variable X by 1.
        --X and X-- decrements the value of the variable X by 1.
    Initially, the value of X is 0.
    Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.

*/
// Solution 1:
//Comparing the first two characters of each string in the vector and incrementing or decrementing the count variable accordingly.
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0 ;
        for(int i = 0 ; i < operations.size() ; i++){
            bool flag = false;
            for(int j = 0 ; j < 2 ; j++){
                if(operations[i][j] == '+' && !flag){
                    count++;
                    flag = true;
                }else if(operations[i][j] == '-' && !flag){
                    count--;
                    flag = true;
                }
            }
        }
        return count;
    }
};
//Solution 2 
//Using switch case to increment or decrement the count variable accordingly.

class Solution2 {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0 ;
        for(int i = 0 ; i < operations.size() ; i++){
            switch(operations[i][1]){
                case '+':
                    count++;
                    break;
                case '-':
                    count--;
                    break;
            }
        }
        return count;
    }
};

//Solution 3
//Comparing the string with the string "++X" and "--X" and incrementing or decrementing the count variable accordingly.

class Solution3 {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int count = 0 ;
        int sizeOfOperations = operations.size();
        for(int i = 0 ; i < sizeOfOperations ; i++){
            if(operations[i] == "++X" || operations[i] == "X++"){
                count++;
            }else if(operations[i] == "--X" || operations[i] == "X--"){
                count--;
            }
        }
        return count;
    }
};


int main(){
    Solution s;
    vector<string> operations = {"--X","X++","X++"};
    cout << s.finalValueAfterOperations(operations) << endl;
    return 0;
}