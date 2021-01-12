#include<iostream>
using namespace std;

int main(){

// biggest in three no.
    int a,b,c;

    cin>>a>>b>>c;

    cout<<"Biggest no. in "<<a<<", "<<b<<", "<<c<<" is ";
    if(a > b){
        if(a > c){
            cout<<a<<endl;
        } else {
            cout<<c<<endl;
        }
    } else {
        if(b > c){
            cout<<b<<endl;
        } else {
            cout<<c<<endl;
        }
    }



//   no. is even or odd;
    // int n;
    // cin>>n;

    // if(n%2 == 0){
    //     cout<<n<<" is even "<<endl;
    // } else {
    //     cout<<n<<" is odd "<<endl;
    // }

    return 0;
}