#include <iostream>
using namespace std;
int main(){
   cout << "Enter your budget :" << endl;
   int budget;
   cin >> budget;
   if(budget > 2000000){
    cout << "You can buy scorrpio" << endl;
   } else{
    cout << "you can't buy scorpio" << endl;
   }

   int age = 100;
   if(age>18){
    cout << "You can Vote" << endl;
   } else {
    cout << "You can't vote" << endl;
   }


   int marks =90;
   if(marks>90){
    cout << "A" <<endl;
   } else if(marks > 80){
    cout << "B" <<endl;
   } else if (marks >60){
    cout <<"D";
   }else{
    cout <<"You failed";
   }



   int height ;
   cout << "Enter your height:" << endl;
   cin >> height;
   int weight;
   cout << "Enter your weight:" << endl;
   cin >> weight;

   if(height >5){
      if(weight >70){
        cout << "Your BMI is GOOD.";
      }
   }
    return 0 ;


}