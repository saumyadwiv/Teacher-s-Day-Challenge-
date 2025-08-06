#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string n;
    cin>>n;

    unordered_map<char, int> map;

    for(auto ch : n){
        map[ch]++; 
    }

    int distinct_chars= map.size();

    if(distinct_chars%2==0){
        //female
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        //male
        cout<<"IGNORE HIM!"<<endl;
    }


    return 0;
}
