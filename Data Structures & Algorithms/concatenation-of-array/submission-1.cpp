class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        vector<int> ans;
        int n=nums.size();
        for(int i=0; i<2*n; i++){
            ans.push_back(nums[i%n]);
        }

        //vector<int> nums1 = nums;
        //for(int num:nums1){
        //    nums1.push_back(num);
        //}
        return ans;
    }
    
};