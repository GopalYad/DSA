#include<iostream>
using namespace std;
int main(){
int n = 15;
int countBit = 0;


while(n!=0){
 int lastNum = (n &1);
 if(lastNum == 1){
    countBit++;
 }
 n = n >>1;
}
cout<<countBit<<endl;



    return 0;

}