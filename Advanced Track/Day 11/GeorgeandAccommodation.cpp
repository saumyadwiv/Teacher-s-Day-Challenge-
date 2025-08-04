#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int p[n];
    int q[n];

    int count=0;

    int arr[2];

    for(int i=0; i<n; i++){

        cin>>p[i]>>q[i];

        if( q[i]-p[i]>=2){
            count++;
        }

    }

    cout<<count<<endl;
    return 0;
}
