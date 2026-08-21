class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> hash(3,0);
        for(auto c:nums){
            hash[c]++;
        }
        for(int i=0;i<hash[0];i++){
            nums[i] = 0;
        }
        for(int i=hash[0];i<hash[0]+hash[1];i++){
            nums[i] = 1;
        }
        for(int i=hash[0]+hash[1];i<hash[2]+hash[0]+hash[1];i++){
            nums[i] = 2;
        }
    }
};