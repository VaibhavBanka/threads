#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
        arr[i][j]=i+j+1;
        cout<<arr[i][j];}
        cout<<"\n";
    }
    cout<<arr[n-1][n-1];
}