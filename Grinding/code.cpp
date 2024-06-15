#include <iostream>
#include <vector>
#include <algorithm>
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

    /// key pairs solution 
    	bool hasArrayTwoCandidates(int arr[], int n, int target) {
	    // code here
	    //steo1.sort the array
	    sort(arr,arr+n);
	  int l = 0 ;
	  int h = n -1;
	  while(l < h){
	      if(arr[l]+ arr[h]==target){
	          return true;
	      }
	      if(arr[l]+ arr[h]>target){
	          h--;
	      }
	      if(arr[l]+ arr[h]<target){
	          l++;
	      }
	  }
	  return false;
	} 

    int pivotIndex(vector<int>& nums) {
     for(int i = 0 ; i < nums.size(); i++) {
        int lSum =0 ;
        int rSum = 0;
        for( int j = 0 ; j < i ; j++){
            lSum += nums[j];
        } 
        cout<<lSum;
        for(int  j = i+1 ; j < nums.size() ; j++){
            rSum +=nums[j];
        }
        if(lSum == rSum){
            return i;
        }
     }
     return -1;
    }


    int main(){
     // Define a vector of integers and a target value
    vector<int>nums = {2, 7, 11, 15};
    int target = 9;

    // Call the twoSum function
    vector<int> result = twoSum(nums, target);

    // Print the result
    cout << "Indices of the numbers that add up to " << target << " are: ";
    for(int index : result) {
        cout << index << " ";
    }
    cout << endl;

    
    int arr[] = {10,20,30,40,50};
    int x = 70;
    int n = 5;
    bool ans = hasArrayTwoCandidates(arr, n,x);
    cout << "key pairs has :"<<ans<<endl;

   

   ///find pivot index
   vector<int>arr1 ={1,7,3,6,5,6};
   vector<int>res = pivotIndex(arr1);
   for(int ind : res) {
        cout << ind << " ";
    }
    cout << endl;




        return 0;
    }