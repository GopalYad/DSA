#include<iostream>
using namespace std;


int main(){

  string name = "Maharana Pratap";
  // cout<<name[0]<<endl;
  // cout<<name.at(0)<<endl;


  // cout<<name.front()<<endl;
  // cout<<name.back()<<endl;


  string  word = "I am doing great";
  string findW = "doing great";
  if(word.find(findW)!= str::npos){
    //found
  } else{
    ///not found
  }

    

  // if(name.empty()){
  //   cout<<"String is empty";
  // } else{
  //   cout<<"string is not empty";
  // }

  auto it  = name.begin();
  while(it!=name.end()){
    cout<<*it<<" ";
    it++;
  }
  cout<<endl;





//     //creation
// string str;

// str.push_back('g');
// str.push_back('o');
// str.push_back('p');
// str.push_back('a');
// str.push_back('l');
// cout<<str<<endl;


// string sentence;

// //input
// getline(cin,sentence,'\n');
// cout<<sentence<<endl;

    return 0;
}