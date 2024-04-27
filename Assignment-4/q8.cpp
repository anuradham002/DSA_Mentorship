class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=nums.size();
        int i;
        vector<int>a;
        int start=-1;
        int end=-1;
    auto it=find(nums.begin(),nums.end(),target);
    if(it!=nums.end()) 
    {
        start=it-nums.begin();
    }
    if (start!=-1){
    for(i=l-1;i>=end;i--){
        if(nums[i]==target){
        end=i;
        break;}
    }}
    a.push_back(start);
    a.push_back(end);
    return a;
    }
};
