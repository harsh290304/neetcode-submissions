class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(int x:nums){
            hash[x]++;
        if(hash[x]>1){
            return true;
        }
        }
        return false;
    }
};