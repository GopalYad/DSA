//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here
     //creating empty string;   
     string res = "";
     string temp ="";
     int n = s.length()-1;
     //reverse traversal
     for(int i = n ; i >=0 ; i--){
        //find the dots
        if(s[i]=='.'){
        //jab equl ho jaye
        //temp ko reverse karo
          reverse(temp.begin(),temp.end());
          //useee result mein store kara long
          res+=temp;
          //ans mein dot push karlo
          res.push_back('.');
          //temp ko kahali kardo uske age value ke liye
          temp="";
        } else{
     //jab tak dot ke equl na ho toh 
     //tab tak temp mein store karo
            temp +=s[i];
        }
        // cout<<s[i]<<endl;
         
     }
     //last word temp per store hai
     //reverse karl0
     reverse(temp.begin(),temp.end());
     ///aur usse addd kardo
       res= res+temp;
     return res;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends