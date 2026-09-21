class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> dupe(nums.begin(), nums.end());
        if(nums.size()!=dupe.size()){return true;}
        return false;
    }
};