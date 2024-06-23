#include<iostream>
#include<stack>
using namespace std;
int main(){
//creation
stack<int>st;
//insertion
st.push(10);
//10
st.push(20);
//10,20
st.push(30);
//10,20,30
cout<<st.size()<<endl;
st.pop();
//10 20
cout<<st.size()<<endl;
cout<<st.top()<<endl;
//20
st.pop();
//10
cout<<st.top()<<endl;

if(st.empty()==true){
    cout<<"stack is empty"<<endl;
} else{
    cout<<"stack is not empty"<<endl;
}

///swap opertaion
stack<int>first;
first.push(10);
first.push(20);
stack<int>second;
second.push(100);
second.push(200);

first.swap(second);



    return 0;
}