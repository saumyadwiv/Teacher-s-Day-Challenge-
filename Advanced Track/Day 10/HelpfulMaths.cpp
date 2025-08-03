#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;

    int n=s.length();

    vector<int> arr;

    for(int i=0; i<n; i++){
        char ch=s[i];
        if(ch == '1' || ch =='2' || ch=='3'){
            arr.push_back(ch-'0');
        }
    }

    sort(arr.begin(),arr.end());

    for(int i=0; i< arr.size(); i++){
        cout<< arr[i] ;

        if(i!=arr.size()-1){
            cout<<"+";
        }
    }




    return 0;
}
