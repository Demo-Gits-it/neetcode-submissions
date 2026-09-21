class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        // int n=nums.size();
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i]==nums[j])return true;
        //     }
        // }
        // return false;

        int n = unordered_set<int>(nums.begin(),nums.end()).size();
        if(n < nums.size()) return true;
        return false;
    }
};