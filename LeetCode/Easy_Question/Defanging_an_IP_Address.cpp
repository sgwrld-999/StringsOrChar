#include<bits/stdc++.h>
using namespace std;
/*
To concatenate a string with a character, we can use the + operator.
For example, if we want to concatenate the string s with the character c, we can write s + c.
Another way to do is to use the append function.
For example, if we want to concatenate the string s with the character c, we can write s.append(1, c).
*/

class Solution {
public:
    string defangIPaddr(string address) {
        int n = address.size();
        string s = "";
        for(int i = 0 ; i < n ; i++){
            if(address[i] == '.'){
                s += '[';
                s += address[i];
                s += ']';
            }else{
                s += address[i];
            }
        }
        return s;
    }
};

class Solution2 {
public:
    string defangIPaddr(string address) {
        int n = address.size();
        string s = "";
        for(int i = 0 ; i < n ; i++){
            if(address[i] == '.'){
                s.append(1,'[');
                s.append(1,address[i]);
                s.append(1,']');
            }else{
                s.append(1,address[i]);
            }
        }
        return s;
    }
};

int main(){
    string address;
    cin >> address;
    Solution solution;
    cout << solution.defangIPaddr(address) << endl;
    return 0;
}