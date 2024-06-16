#include <iostream>
#include <unordered_map>
using namespace std;

int main(){

  unordered_map<int,int> desk_map; ///roll_no,desk_no

  //insertion
  ///roll_no,desk_no
  desk_map[1] =53; //desk_map ki  1 key  par ,  53  desk no assign kar diye
  desk_map[2] =54;
  desk_map[3] =55;

  desk_map[2]=57;
//interate
 //I have to iterate over three entries.
 //for loop
 //map mein iterate karne  ke liy iterator banana padtha hain
 unordered_map<int,int>:: iterator it;
 for(it = desk_map.begin(); it!=desk_map.end(); it++){
    int key = it ->first;
    int freq = it ->second;
    cout<<"Key:"<<key<<" "<<"value:"<<freq<<endl;
 }

 //another way iterator
 for(auto it : desk_map){
    int key = it.first;
    int freq = it.second;
    cout<<"Key:"<<key<<" "<<"value:"<<freq<<endl;
 }
    return 0;
}