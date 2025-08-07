#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    unordered_map<int, int> map; //ko->ne

    for(int i=0; i<n; i++){
        int ele= arr[i];
        map[ele]=i+1;
    }

    // for(auto i:map){
    //     cout<< i.first<<"->"<<i.second<<endl;
    // }

    for(int i=1; i<=n; i++){
        cout<<map[i]<<" ";
    }



    return 0;
}