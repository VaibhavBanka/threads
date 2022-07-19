// 1Re 1chocolate and 3 wrappers 1 chocolate 
#include<iostream>
using namespace std;
int main(){
    int n;
    int w=0;
    int c=0;
    cin>>n;
    c+=n;
    w+=n;
    int m=0;
    while(w>=3){
        m=w/3;
        c+=m;
        w=m+(w%3);
    }
    cout<<c;
}