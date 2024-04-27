class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    vector<int> a;
    a.push_back(nums[0]);
    for(int i=1;i<nums.size();i++){
        int target=nums[i];
        int cnt=count(a.begin(),a.end(),target);
        if(cnt==0)
        a.push_back(target);
    }  
    nums=a;
    int k=a.size();
    return k;
    }
};
