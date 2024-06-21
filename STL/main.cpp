#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>first;
    vector<int>second;
    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);

  second.push_back(100);
  second.push_back(200);
  second.push_back(300);
  second.push_back(400);
   first.swap(second);
   cout<<first[0]<< " "<<first[1]<<first[2]<<first[3]<<first[4]<<endl;
    


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



  vector<int>age(100);
  age[0] = 10;

    return 0;
}