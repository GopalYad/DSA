#include <iostream>
using namespace std;
int main(){
    //swich case statements

    char grade;
    cout <<"enter your grade:";
    cin >> grade;
    // if(grade == 'A'){

    // } else if (grade == 'B'){
    //  cout <<"Your grade will be in range of 90 to 100" << endl;
    // } else if (grade == 'C'){
    //  cout <<"Your grade will be in range of 70 to 90" << endl;
    
    // } else if (grade == 'D'){
    //      cout <<"Your grade will be in range of 60 to 70" << endl;
    // } else if (grade == 'E'){
    //     cout <<"Your grade will be in range of 50 to 70" << endl; 
    // } else if (grade == 'F'){
    //     cout <<"Your grade will be in range of 40 to 60" << endl; 
    // } else{
    //     cout <<"You failed";
    // }

    ///using switch case
    switch(grade){
       case 'A':  cout <<"Your grade will be in range of 90 to 100" << endl; break;
       case 'B':   cout <<"Your grade will be in range of 70 to 90" << endl; break;
       case 'C':  cout <<"Your grade will be in range of 50 to 70" << endl;  break;
       case 'D': cout <<"Your grade will be in range of 50 to 70" << endl;   break;
       case 'E':  cout <<"Your grade will be in range of 40 to 60" << endl;  break;
       default :  cout <<"You failed";
    }
    return 0;
}