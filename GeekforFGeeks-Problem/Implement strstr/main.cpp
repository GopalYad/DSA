//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x){
  
     for(int i=0; i<s.length(); i++){
         if(s[i]==x[0]){
             int t  = 1,ans = i;
            if(t==x.length())
             return ans;
             while(t<x.length()){
             if(s[i+t]==x[t++]){
             if(t==x.length())
             return ans;
              }
              else break;
             }
         }
     }
    return -1;
     }