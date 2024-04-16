class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       vector<int>a;
       int n=k%nums.size();
       for(int i=n;i>0;i--){
        a.push_back(nums[nums.size()-i]);
       } 
       for(int i=0;i<nums.size()-n;i++){
           a.push_back(nums[i]);
       }
       nums=a;
    }

};
