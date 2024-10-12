//Buteforce
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<int> ans;
        for(int i = 1; i <= size(nums); i++) 
            if(!binary_search(begin(nums), end(nums), i)) 
                ans.push_back(i);
        return ans;
    }
};
//not use inbuild binary search 
//use negative index concept
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            int idx = abs(nums[i]) - 1;  // Get the index corresponding to the value
            if(nums[idx] > 0) {
                nums[idx] = -nums[idx];  // Mark as visited by negating the value
            }
        }

        // Step 2: Collect missing numbers
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > 0) {  // If the value is positive, the index is missing
                ans.push_back(i + 1);
            }
        }

        return ans;
    }
};
