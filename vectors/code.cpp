#include <iostream>
#include <vector>
using namespace std;
// void fun(int a[] , int n){
//     for(int i = 0 ; i < n ; i++){
//         cout << a[i] << endl;
//     }
// }

void print(vector<int>v){
  int size =  v.size();
  for(int i = 0 ; i < size; i++){
    cout << v[i]<<endl;
  }
}

int main(){
  //dynamic allocation 
  // int n ;
  // cin>>n;
  // int *arr = new int[n];

  // //i-->>0 t0 3
  // for(int i = 0 ; i < n ; i++){
  //   int data;
  //   cin>>data;
  //   arr[i]=data;
  // }
  //  //i - >>4 to 13
  //  //will not work 
  // for(int i = 0 ; i < 10 ; i++){
  //   arr[n+i]= 80;
  // }
  // fun(arr, n);


  //in vector don't tell size of vector.
  //just keep inserting , it will mange the allocations.
  vector<int>v;
   ///infinite loop
  //  while(1){
  //   int d;
  //   cin>>d;
  //   v.push_back(d);
  //   cout << "capacity:"<<v.capacity()<<"size:"<<v.size()<<endl;
  //  }
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);
  // v.push_back(4);
  //  print(v);


  //  //pop -- >> delete--->>from end;
  //  v.pop_back();
  //  print(v);

  //insert 
  int n ; 
  cin >>n;
  for(int i = 0 ; i <n ; i++){
    int d;
    cin>>d;
    v.push_back(d);
  }
  print(v);
  for(int i  = 0 ; i < 10; i++){
    v.push_back(80);
  }
  print(v);

  //i want to clear the vector
  v.clear();
  v.push_back(50);
  print(v);

    return 0;
}