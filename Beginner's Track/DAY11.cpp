////////////STRING TASK///////////////
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    string st;

    for(int i=0; i<s.length();i++){
        char e=tolower(s[i]);

        if(e=='a' || e=='e' || e=='i' || e=='o' || e=='u' || e=='y'){
            continue;
        }
        else{
            st+=e;
        }
    }

    for(int i=0; i<st.length(); i++){
        cout<<"."<<st[i];
    }
    return 0;
}
