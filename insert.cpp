#include<iostream>
#include<vector>
using namespace std;
// {1,4.7,9,11} target -> 3 in the array or not , which position to insert
class Solution {
public:
	int search(vector<int>& nums,int target) {
		int left = 0, right = nums.size() - 1;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (nums[mid] == target) {
				return mid;
			}
			else if (nums[mid] > target) {
				right = mid - 1;
			}
			else if (nums[mid] < target) {
				left = mid + 1;
			}
		}
		return left;
	}
};

int main() {
	vector<int> nums = {1,4,7,11,13,17};
	int target = 3;
	Solution s;
	cout << s.search(nums, target);
}