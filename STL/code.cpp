///here we learn about lists
//linkedlist
#include<iostream>
#include<list>
using namespace std;
int main(){
//creation
// list<int> mylist;

// //insertion
// mylist.push_back(29);
// //29
// mylist.push_back(30);
// // 29 30
// mylist.push_back(60);
// // 29 30 60
// mylist.push_back(70);
// //29 30 60 70

// mylist.push_front(100);
// // 100 29 30 60 70
// mylist.pop_back();
// //100 29 30 60

// mylist.pop_front();
// //29 30 60

// mylist.push_back(10);
// //29 30 60 10

// //Iterator
// cout<<"Befor removing traversal"<<endl;
// list<int>::iterator it = mylist.begin();
// while(it != mylist.end()){
//     cout<< *it<<endl;
//     it++;
// }
// mylist.remove(10);
// cout<<"after removing traversal"<<endl;
// list<int>::iterator it2 = mylist.begin();
// while(it2 != mylist.end()){
//     cout<< *it2<<endl;
//     it2++;
// }

// cout<<mylist.front()<<endl;
// cout<<mylist.back()<<endl;
// cout<<mylist.size()<<endl;
// mylist.clear();
// cout<<mylist.size()<<endl;
// if(mylist.empty()==true){
//     cout<<"list is empty"<<endl;
// } else{
//     cout<<"list is not empty"<<endl;
// }

list <int > first;
first.push_back(10);

first.push_back(20);

first.push_back(30);

first.push_back(40);


list <int>second;
second.push_back(100);

second.push_back(200);

second.push_back(300);

second.push_back(400);
 first.swap(second);

 cout<<"Before removing traversal"<<endl;
list<int>::iterator it = first.begin();
while(it != first.end()){
    cout<< *it<<endl;
    it++;
}
    return 0;
}