//map-->collection of key value pairs
//two type of map -->>unordered map , ordered map
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
///creatiion
unordered_map<string,string>table;

//insertion
table["In"] ="India";
table.insert(make_pair("en","England"));

pair<string,string>p;
p.first = "br";
p.second ="brazil";
if(table.count("In")==0){
    cout<<"not found"<<endl;
} if(table.count("In")==1){
    cout<<"Found"<<endl;
}
// if(table.find("In")!=table.end()){
//     cout<<"key Found"<<endl;
// } else{
//     cout<<"Not found"<<endl;
// }
// table.insert(p);
// table.erase(table.begin(),table.end());
// cout<<table.size()<<endl;
// unordered_map<string,string>:: iterator it = table.begin();
// while(it!=table.end()){
//    pair<string,string> p = *it;
//    cout<<p.first<<" "<<p.second<<endl;
//      it++;
// }
// cout<<table.size()<<endl;
// cout<<table.at("In")<<endl;
// table.at("In")="India2";

// table.clear();

// cout<<table.size()<<endl;
// if(table.empty()==true){
//     cout<<"map is empty";
// } else{
//     cout<<"map is not empty";
// }
    return 0;
}