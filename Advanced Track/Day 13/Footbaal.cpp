#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    string ans="NO";
    
    int n= s.length();
    if(n<7){
        cout<<ans<<endl;
        return 0;
    }

    for(int i=0; i<=n-7; i++){
        int j= i+6;

        unordered_map<int,int> map;

        for(int k=i; k<=j; k++){
            map[s[k]]++;
        }

        if(map.size()==1){
            //not dangerous
            ans="YES";
        }
    }
    cout<<ans<<endl;
    return 0;
}