#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    
    int arr[4];

    for(int i=0 ;i<4; i++){
        cin>>arr[i];
    }

    unordered_map<int, int> map;

    for(int i:arr){
        map[i]++;
    }

    int size=map.size();

    int ans= 4-size;

    cout<<ans<<endl;


    return 0;
}
