////WORD CAPITALIZATION///////
#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    int ch= toupper(s[0]);
    s[0]=ch;

    cout<<s;
    
    return 0;
}
