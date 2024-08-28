#include<iostream>
#include<queue>
using namespace std;
int main(){


    //min-heap creation -->Minimum  value -->>.hight priority
    priority_queue<int,vector<int>,greater<int>> qp;
    qp.push(23);
    qp.push(45);
    qp.push(3);
    cout<<qp.top()<<endl;
    qp.pop();
    cout<<qp.top()<<endl;
   


//creation
priority_queue<int>pq;  
//max-heap-->>maximum value -->>highest priorit

pq.push(10);
//10
pq.push(45);
//10 45
pq.push(30);
//10 30 45
//top element --> highest priority element
cout<<pq.top()<<endl;
//top-->30
pq.pop();
//highest priority element 
//i.e ->30 ko pop kardiya
// 10 20 
cout<<pq.top()<<endl;

//size
cout<<pq.size()<<endl;
//check empty
if(pq.empty()==true){
    cout<<"priority queue is empty"<<endl;
} else{
    cout<<"priority queue is not empty"<<endl;

}
    return 0;
}