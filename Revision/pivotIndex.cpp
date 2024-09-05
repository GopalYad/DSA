class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum =0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum+=nums[i];
        }
       int pivot = 0;
          int lsum =0;;
        while(pivot<nums.size()){
          int rsum = sum -lsum - nums[pivot];
          if(rsum ==lsum){
            return pivot;
          }
          lsum+=nums[pivot];
          pivot++;
        }
        return -1;
    }
};