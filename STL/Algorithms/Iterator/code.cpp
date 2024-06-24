#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void printDouble(int a){
    cout<< 2*a << " ";
}
bool findEven(int a){
    return a%2==0;
}
int main(){

   vector<int>arr(5);
   arr[0]=10;
   arr[1]=10;
   arr[2]=20;
   arr[3]=20;
   arr[4]=50;
  //find unique
  auto it = unique(arr.begin(),arr.end());
  arr.erase(it,arr.end());
   for(int a : arr){
    cout<< a<< " ";
   }
   //rotatte
//    cout<<"Before :"<<endl;
//    for(int a : arr){
//     cout<< a<< " ";
//    }
//    rotate(arr.begin(),arr.begin()+3,arr.end());
//    cout<<"After :"<<endl;
// for(int a : arr){
//     cout<< a<< " ";
//    }
//    //sorting
//    sort(arr.begin(),arr.end());
//    for(int a : arr){
//     cout<< a<< " ";
//    }
//    cout<<endl;
//    //reverse
//    reverse(arr.begin(),arr.end());
//    for(int a : arr){
//     cout<< a<< " ";
//    }
//    for_each(arr.begin(),arr.end(),printDouble);

//    int target = 40;
//    auto it = find(arr.begin(),arr.end(),target);
//    cout<< it <<endl;


// ///find_if
// auto it=find_if(arr.begin(),arr.end(),findEven);
//  cout<<*it<<endl;


 //count
//  int target = 40;
//  int ans = count(arr.begin(),arr.end(),target);
// cout<<ans<<endl;


//count_if
// int ans = count_if(arr.begin(),arr.end(),findEven);
// cout<<ans<<endl;



    return 0;


}