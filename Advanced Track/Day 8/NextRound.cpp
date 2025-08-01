#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>> n>>k;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count=0;

    int score= arr[k-1]; // score of  kth place finisher

    for(int i=0; i<n; i++){
        if(arr[i]>=score && arr[i]>0){
            count++;
        }
    }

    cout<<count<<endl;


    return 0;
}
