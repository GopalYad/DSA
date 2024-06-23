#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector<int>first;
    // vector<int>second;
    // first.push_back(10);
    // first.push_back(11);
    // first.push_back(12);
    // first.push_back(13);

    //traversing  the vector using iteractor
    //create an iterator
  //   vector<int>::iterator it = first.begin();
  //   while(it != first.end()){
  //     cout<<*it<<endl<<" ";
  //     it++;
  //   }

  // second.push_back(100);
  // second.push_back(200);
  // second.push_back(300);
  // second.push_back(400);
  //  first.swap(second);
  //  cout<<first[0]<< " "<<first[1]<<first[2]<<first[3]<<first[4]<<endl;
    


   //creation
//  /  vector<int>marks;
//    cout<<marks.max_size()<<endl;
//    marks.reserve(10);
//    marks.push_back(10);
//    marks.push_back(20);
//    marks.push_back(40);
//    marks.push_back(30);
//    marks.clear();
//   marks.insert(marks.begin(),50);
//    marks[0]=100;
//    cout<<marks[0]<<endl;
    //  cout<<"capacity:"<<marks.capacity()<<endl;
//       cout<<marks.at(0)<<endl;
//    cout<< "Size :"<<marks.size()<<endl;
//    marks.erase(marks.begin(),marks.end());
//       cout<< "Size :"<<marks.size()<<endl;

//40 will be removed.
//  marks.pop_back();
//  cout<< "Size :"<<marks.size()<<endl;
//  cout<< marks.front() <<endl;
//  cout<< marks.back() <<endl;


// if(marks.empty()==true){
//     cout<<"vector is empty"<<endl;
// }else{
//     cout<<"vector is not empty"<<endl;
// }




//    cout<<*(marks.begin())<<endl;



  // vector<int>age(100);
  // age[0] = 10;


  //for each loop
  // for(int i : first){
  //   cout<< i<<endl;
  // }
  // for(int i : second){
  //   cout<<i <<endl;
  // }


  ///2D array / vector
  vector<vector<int>>arr(5,vector<int>(4,0));
  int totalRows = arr.size();
  int totalColumns = arr[0].size();
  //2d array created with 
  //with 5 rows
  //with 4 column
  //with initial value of each cell as '0'
 

 ///zaged array
 vector<vector<int>>brr(4);
 brr[0]=vector<int>(4);
 brr[1]=vector<int>(2);
 brr[2]=vector<int>(3);
 brr[3]=vector<int>(2);
 int totRows = brr.size();
cout<<totRows<<endl;
int firstColumn = brr[0].size();
cout<<firstColumn<<endl;
    return 0;
}