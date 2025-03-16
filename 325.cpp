#include<vector>
#include<unordered_map>
#include<iostream>

using namespace std;

class Solution {
    public:
        int maxSubArrayLen(vector<int>& nums, int k) {
            unordered_map<int, int> prefixMap;
            int sum = 0, maxLen = 0;
    
            for(int i = 0; i < nums.size(); ++i) {
                sum += nums[i];
                if(sum == k)
                    maxLen = i + 1;
                if(prefixMap.count(sum - k))
                    maxLen = max(maxLen, i - prefixMap[sum - k]);
                if(!prefixMap.count(sum))
                    prefixMap[sum] = i;
            }
            return maxLen;
        }
    };
    

main(){
    Solution s;
    vector<int> arr = {10, 5, 2, 7, 1, -10};
    int k = 15;
    cout << s.maxSubArrayLen(arr, k) << endl;
    return 0;
}