#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cin>>s;
    int upper=0;
    int lower=0;

    for(int i=0; i<s.length();i++){
        char ch=s[i];
        if(isupper(ch)){
            upper++;
        }
        else{
            lower++;
        }
    }

    if(lower<upper){
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }
    else{
        transform(s.begin(),s.end(),s.begin(),::tolower);
    }

    cout<<s<<endl;

    
    return 0;
}
