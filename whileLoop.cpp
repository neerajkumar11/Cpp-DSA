# include<iostream>
using namespace std;

int main(){

    // Take input from user until a negtive number 

    // int n;
    // cin>>n;
    
    // while( n >= 0){
    //     cin>>n;
    // }



    // add only till positive numbers
    int n;
    int sum = 0; 
    cout<<"Enter a number : ";
    cin>>n;

    while (n>0)
    {
       sum+=n;
       cout<<"Ente a nummber : ";
       cin>>n;
    }

    cout<<"\n the sum is "<<sum<<endl;
    



    return 0;
}