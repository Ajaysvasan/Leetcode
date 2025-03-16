#include<vector>
#include<unordered_set>
#include<iostream>

using namespace std;

class Solution{
    public:
    int maxSubArraySize(vector<int>&nums,int k){
        int res = 0;
        for(int i = 0;i<nums.size();++i){
            int sum = 0;
            for(int j = i;j<nums.size();++j){
                sum += nums[j];
                if (sum == k){
                    int subLen = j - i + 1;
                    res = max(subLen,res);
                }
            }
        }
        return res;
    }
};

main(){
    Solution s;
    vector<int> arr = {10, 5, 2, 7, 1, -10};
    int k = 15;
    cout << s.maxSubArraySize(arr, k) << endl;
    return 0;
}