// Given a string s consisting only of characters a, b and c.

// Return the number of substrings containing at least one occurrence of all these characters a, b and c.

 

// Example 1:

// Input: s = "abcabc"
// Output: 10
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 
// Example 2:

// Input: s = "aaacb"
// Output: 3
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb". 
// Example 3:

// Input: s = "abc"
// Output: 1



#include<iostream>
using namespace std;

class Solution {
    public:
        int numberOfSubstrings(string s) {
            int n=s.size();
            int i=0;
            //int j=0;
            int hash[3]={-1,-1,-1};
            int count=0;
            while(i<n)
            {
                hash[s[i]-'a']=i;
                if(hash[0]!=-1&&hash[1]!=-1&&hash[2]!=-1)
                {
                    count+=(1+min(hash[0],min(hash[1],hash[2])));
                }
                i++;
            }
            return count;
        }
    };