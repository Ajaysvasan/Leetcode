'''Given a string s, return the longest 
palindromic substring in s.

 

Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"
 

Constraints:

1 <= s.length <= 1000
s consist of only digits and English letters.'''

class Solution:
    def longestPalidrome(self,string):
        res = ""
        resLen = 0
        for i in range(len(string)):
            left,right = i,i
            while left>=0 and right<len(string) and string[left] == string[right]:
                if (right - left)+1>resLen:
                    res = string[left:right+1]
                    resLen = right-left+1
                left-=1
                right+=1
            left,right = i,i+1
            while left>=0 and right<len(string) and string[left] == string[right]:
                if (right-left) + 1>resLen:
                    res = string[left:right+1]
                    resLen = right-left+1
                left+=1
                right-=1
        return res
    

testCases = ["babad","cbbd"]

s = Solution()

for testCase in testCases:
    print(s.longestPalidrome(testCase))