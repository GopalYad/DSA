#include <iostream>
using namespace std;
int getLength(char arr[] , int size){

    int count = 0 ;
    int index= 0 ;
    while(arr[index]!='\0'){
        count++;
        index++;
    }
    return count;
}

//orginal char = @
///new char = _
void replaceCharacter( char originalCharacter , char newChar , char arr[] , int size){
    for(int i = 0 ; i < size ;  i++)
    {
        if(arr[i] == originalCharacter){
            arr[i] = newChar;
        }
    }
}

void convertIntoUpperCase(hcar arr [] , int size){
   for(int i = 0 ; i < size ; i++)
   {
    char ch = arr[i];
    ch = ch -'a'+'A';
    arr[i]=ch;
   }
}

void convertIntoLowerCase(char arr [] , int size){
    
   for(int i = 0 ; i < 5 ; i++)
   {
    char ch = arr[i];
    if(ch>='A' && ch<='Z'){
    ch = ch -'A'+'a';
    }
    arr[i]=ch;
   }
}


void reverseCharArray(char arr [] , int n){
    int len =   getLength(arr,n);
    int i = 0 ;
    int j = len-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
bool checkPalindrome(char arr[], int n){
    int len = 4;
    int i = 0 ;
    int j = len -1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
          
        } else{
            return false;
        }
    }
    return true;
}
int main() {
    //creation 
    // char arr[10];
    // cout<<"Enter your name"<<endl;
    //input
    // cin>>arr;
    // cin.getline(arr,100);
    // cin.getline(arr,100,'\t');
    // cout<<"Your name is  :"<<arr<<endl;
    // cout<<arr[0]<<"->"<< (int)arr[0]<<endl;
    // cout<<arr[1]<<"->"<< (int)arr[1]<<endl;
    // cout<<arr[2]<<"->"<< (int)arr[2]<<endl;
    // cout<<arr[3]<<"->"<< (int)arr[3]<<endl;
    // cout<<arr[4]<<"->"<< (int)arr[4]<<endl;
    



//      char arr1[100];
//   cin>>arr1;
//   cout<<getLength(arr1,1000)<<endl;;


char arr[100];
  cin>>arr;
  replaceCharacter('@' , ' ', arr, 1000);
  cout<<arr<<endl;

    return 0;
}