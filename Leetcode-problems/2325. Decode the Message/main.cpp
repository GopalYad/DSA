class Solution {
public:
    string decodeMessage(string key, string message) {
     //step1: create mapping
     unordered_map<char,char>mapping;
     char space = ' ';
     mapping[space] =space;
     char start = 'a';
     int index = 0;
     while(start<='z'  && index<key.length()){
      char keyCurrentChar = key[index];
      //start-> mapping abcd..
      //mapping ->keCurremtChar ->alphabet
      if(mapping.find(keyCurrentChar)!=mapping.end()){
        //agar currCharacter ki mapping already present ho
        //no need to store any mapping here
        //just move to next character in key
        index++;
      } else{
        //agar currCharacter ki mapping present nhi ho
        //create mapping and move ahead
        mapping[keyCurrentChar]=start;
        start++;
        index++;
      }

     }
     string ans = "";
     for(int i = 0 ; i < message.length();i++){
        char messageChar = message[i];
        char mappedChar = mapping[messageChar];
        ans.push_back(mappedChar);
     }
     //step2:use mapping and decode mesage
     return ans;
    }
};