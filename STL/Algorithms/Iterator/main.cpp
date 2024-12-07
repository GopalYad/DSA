#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void LearningPairs(){
    pair<int,int> p = {10,20};
    cout<<p.first << " "<<p.second<<endl;
    
    pair<int,pair<int,int>>q = {30,{40,50}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;
    
    pair<int,int>arr [] = {{100,200},{300,400},{500,600}};
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
}

void LearningVector(){
   vector<int>v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   cout<< v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<endl;
   v.emplace_back(5);
   cout<<v[4]<<endl;
   
   vector<int>:: iterator it = v.begin();
   it++;
   cout<<*(it)<<endl;
   
   vector<int>x(5,100) ;
   cout<<x[0]<<" "<<x[1]<< " "<<x[2]<<" "<<x[3]<<" "<<x[4]<<endl;
   
   
    
}


int main() {
    LearningPairs();
    LearningVector();
        return 0;
}