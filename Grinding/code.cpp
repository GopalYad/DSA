#include <iostream>
using namespace std;
  vector<int> twoSum(vector<int>& nums, int target) {
      //step1. intiilize ans vector for indices
      vector<int> ans;

      //step2.iterate without getting same element
      for( int i  = 0 ; i < nums.size(); i++)
      {
        for(int j = i + 1 ; j < nums.size(); j++)
        { 
        //step3.check sum of target
            if(nums[i]+nums[j]==target){
            //step4.push ans in your ans vector
            ans.push_back(i);
            ans.push_back(j);
            }
        }
      }
      ///return ans
      return ans;
    }
    int main(){
     // Define a vector of integers and a target value
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    // Call the twoSum function
    vector<int> result = twoSum(nums, target);

    // Print the result
    cout << "Indices of the numbers that add up to " << target << " are: ";
    for(int index : result) {
        cout << index << " ";
    }
    cout << endl;

    







        return 0;
    }