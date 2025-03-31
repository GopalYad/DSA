#include<iostream>
using namespace std;
//define struct 
typedef struct students
{
    string name;
    int id;
    long int salary;
    char section;
}stud;
 //defining enum
 enum Color {Red,Green , Blue};
union Data
{
  int  Apple;

  int  Grapes;
 
  int  Banana;
};

int main(){
stud s1;
s1.id=1;
s1.name="Alex";
s1.salary=10000000;
s1.section='c';
cout<<"Students details of s1 :" <<"id :"<< s1.id << " ,name : " << s1.name << "  , salary:" << s1.salary <<"  ,section:"<<s1.section<<endl;

Color c = Green;
Color e = Blue;
Color f = Red;
if(c==Green)cout<<"Green color selected"<<endl;
if(e==Blue)cout<<"Blue color selected"<<endl;
if(f==Red)cout<<"Red color selected"<<endl;


Data fruit;
fruit.Apple=1;
cout<<fruit.Apple<<endl;
return 0;
}