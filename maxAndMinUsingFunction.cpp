#include<iostream>
using namespace std;

int max(int n1, int n2, int n3){
    if(n1>n2){
        if(n1>n3){
            return n1;
        } else {
            return n3;
        }
    } else {
        if(n2 > n3){
            return n2;
        } else {
            return n3;
        }
    }
}

int min(int n1, int n2, int n3){
    if(n1<n2){
        if(n1<n3){
            return n1;
        } else {
            return n3;
        }
    } else {
        if(n2 < n3){
            return n2;
        } else {
            return n3;
        }
    }
}

int main(){
    
    int a,b,c;
    cin>>a>>b>>c;

    cout<<"Max is : "<<max(a,b,c)<<endl;
    cout<<"Min is : "<<min(a,b,c)<<endl;


    return 0;
}