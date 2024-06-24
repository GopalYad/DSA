#include<iostream>
#include<set>
using namespace std;

int main(){
 set<int>st;
 st.insert(10);
 st.insert(15);
 st.insert(18);
 st.insert(4);
 cout<<st.size()<<endl;
//  st.clear();
//  cout<<st.size()<<endl;

if(st.find(18)!=st.end()){
     cout<<"found";
} else{
    cout<<"not found";
}
// if(st.empty()){
//     cout<<"set is empty";
// } else{
//     cout<<"set is not empty";
// }
 //traverse
 set<int>::iterator it = st.begin();
  while(it!=st.end()){

    cout<<*it<<endl;
    it++;
  }

    return 0;
}