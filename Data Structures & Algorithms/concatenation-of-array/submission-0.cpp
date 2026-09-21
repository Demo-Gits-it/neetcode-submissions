class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            nums.push_back(nums[i]);
        }

        //vector<int> nums1 = nums;
        //for(int num:nums1){
        //    nums1.push_back(num);
        //}
        return nums;
    }
    
};