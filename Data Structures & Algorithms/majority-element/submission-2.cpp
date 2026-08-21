class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int a =0, b=0;
        for(int i=0;i<nums.size();i++){
            if(b==0) a = nums[i];
            if(nums[i]==a){
                b++;
            }else{
                b--;
            }
        }
        return a;
    }
};