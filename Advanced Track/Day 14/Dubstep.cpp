#include<iostream>
using namespace std;

bool isWUB(string s,int i,int j){

    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    string s;
    cin>>s;

    int n=s.length();

    string ans="";
    //WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
    int i=0;
    while(i<n){

        int j=i+2;

        if(isWUB(s,i,j)){
            
            i=j+1;
            continue;
        }
        else{
            ans+=s[i];
            if(isWUB(s,i+1,i+3)){
                ans+=" ";
                i=i+4;
            }
            else{
                i++;
            }
            
        }

    }

    cout<<ans<<endl;

    // for(int i=0; i<n ;i++){
    //     int j=i+2;
    //     if(isWUB(i,j)){
    //         continue;
    //     }
    //     ans+=s[i]; 

    // }
    return 0;
}
