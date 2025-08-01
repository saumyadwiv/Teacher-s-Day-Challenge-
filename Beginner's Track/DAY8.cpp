//*******************WAY TOO LONG WORDS*****************
#include<iostream>
#include<vector>
using namespace std;

string process(string s){
    string ans="";
    if(s.length()<=10){
        return s;
    }
    else{
        ans+=s[0];
        int charsInbetween= s.length()-2;
        ans+=to_string(charsInbetween);
        ans+=s[s.length()-1];

    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<string> v;
    
    while(n--){

        string s;
        cin>>s;
        v.push_back(s);

        
    }

    for(int i=0;i<v.size();i++){
        cout<<process(v[i])<<endl;
    }

    return 0;
}
