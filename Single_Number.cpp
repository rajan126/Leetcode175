//Buteforce
//Using unordered_map
class Solution {
public:
    int singleNumber(vector<int>& nums) { 
      unordered_map<int,int>mp;
      for(auto num:nums){
        mp[num]++;
      }
int ans;
      for(auto it: mp){
        if(it.second==1){
         return it.first;
        }
      }
      return -1;
    }
};

//using Xor 
class Solution {
public:
int ans=0;
    int singleNumber(vector<int>& nums) {
        for(auto num:nums){
            ans^=num;
        }
        return ans;

    }
};