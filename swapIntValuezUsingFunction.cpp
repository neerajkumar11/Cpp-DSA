#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;

}

void swap2(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a,b;
    cin>>a>>b;

    // call by value(pass the value to function)
    // swap(a,b)<<endl; // It not swap the value bcz here we pass only the value to swap function which make its own local variable and swap their values but our main variable remains unchanged
    // cout<<a<<" "<<b;

    int *aptr = &a;
    int *bptr = &b;

    //call by reference(pass the address of value to function)
    swap2(aptr, bptr);
    //or swap2(&a, &b);
    cout<<a<<" "<<b; 

    return 0;
}