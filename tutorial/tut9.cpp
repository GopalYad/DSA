#include<iostream>
using namespace std;


int main(){
    
    int age;
    cout<<"Tell me your age :" <<endl;
    cin>>age;
    if(age<18 && age>0){
        cout<<"you can  not  come to my party."<<endl;
    }else if(age<0){
        cout<<"you are not born enough"<<endl;
    }else if( age == 18 ){
      cout<<"you can come to my party"<<endl;
    }else{
        cout<<"you are also come to my party"<<endl;
    }

    return 0;
}