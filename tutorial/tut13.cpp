#include<iostream>
using namespace std;
typedef struct Employee{
    string name;
    char favChar;
    int Eid;
    long int salary;
} e;
int main(){
       e gopal;
      gopal.Eid=1;
      gopal.favChar='c';
      gopal.name="gopal";
      gopal.salary=100000000;
      cout<<"Employees details :"<< " "<<gopal.Eid<< " ,"<<gopal.favChar <<" ,"<<gopal.name<<" ,"<<gopal.salary<<endl; 
return 0;
}