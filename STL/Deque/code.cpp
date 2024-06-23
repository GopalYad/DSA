#include<iostream>
#include<queue>
using namespace std;
int main(){
//creation
deque<int>dq;
//insertion
dq.push_back(10);
//10
dq.push_back(20);
//10 20
dq.push_back(30);
//10 20 30
dq.push_front(100);
//100 10 20 30
cout<<dq[0]<<endl;
// deque<int>::iterator it = dq.begin();
// while(it !=dq.end()){
//     cout<<*it<<endl;
//     it++;
// }
dq.push_front(200);
//200 100 10 20 30
dq.push_front(300);
//300 200 100 10 20 30
dq.pop_front();
//200 100 10 2o 30
dq.pop_back();
//20 100 10 20

dq.erase(dq.begin(),dq.end());
cout<< dq.size()<<endl;
cout<< "front element:"<<dq.front()<<" "<<"last element: "<<dq.back()<<endl;
// if(dq.empty()==true){
//     cout<<"deque is empty";
// } else{
//     cout<<"deque is not empty";
// }
// dq.clear();
// cout<<dq.size()<<endl;
// dq.insert(dq.begin(),101);
// cout<<dq[0]<<endl;
    return 0;
}