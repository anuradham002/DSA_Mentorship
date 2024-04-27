class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int pos=0;
      auto it=find(nums.begin(),nums.end(),target) ;
      if(it!=nums.end()){
         pos=it-nums.begin();
      } 
      else{
      for(int i=0;i<nums.size();i++)
      {
        if(target<(nums[i])){
        pos=i;
        break;
        }
        else
        {
            pos=i+1;
        }
      }
      }
      return pos;
    }
};
