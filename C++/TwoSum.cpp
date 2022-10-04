class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
vector<int>store;
        store=nums;
        sort(nums.begin(),nums.end());
        vector<int>ans;

        //no a here bcoz b+c=target
        int hi=nums.size()-1;
        int lo=0;
           while(lo<hi){
if(nums[lo]+nums[hi]==target){
    ans.push_back(lo);
    ans.push_back(hi);
    lo++;
    hi--;
    return ans;
   }
            else{
                if(nums[lo]+nums[hi] < target)
                    lo++;
                else
                    hi--;
            }
        }
        return {-1,-1};
    }
};