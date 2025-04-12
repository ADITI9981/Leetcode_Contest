class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        int remainder=sum%k;
        return remainder ==0?0:remainder;
    }
};
