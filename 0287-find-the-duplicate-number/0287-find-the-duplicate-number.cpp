class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        for(auto i:mpp){
            if(i.second>1) return i.first;
        }
        return 0;
    }
};