#include<iostream>
using namespace std;

bool check(int a, int b, int c){

    // int x = max(a,max(b,c));
    // int y,z;

    // if(x == a){
    //     y=b;
    //     z=c;
    // } else if( x == b){
    //     y=a;
    //     z=c;
    // } else {
    //     y=a;
    //     z=b;
    // }

    // if(a*a == b*b + c*c){
    //     return true;
    // } else {
    //     return false;
    // }
    

    int maxNum = max(a, max(b,c));
    int sqSum =  a*a + b*b + c*c -(maxNum*maxNum);

    if(sqSum == maxNum*maxNum){
        return true;
    } else {
        return false;
    }

}

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(check(a,b,c)){
        cout<<"yes";
    } else {
        cout<<"no";
    }

    return 0;
}
