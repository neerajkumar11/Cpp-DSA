#include <iostream>
using namespace std;

int main(){

    // int a=10;
    // int *aptr = &a;

    // cout<<*aptr<<endl;
    // cout<<aptr<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;

    // *aptr = 20;
    // cout<<*aptr<<endl;
    // cout<<aptr<<endl;

    //Pointer arithmatic
    // We can do 4 opertaion with ptr
    // ptr++, ptr--, +, -

    // // array is also like a pointer bcz it stores the address of first elements
    // int arr[4] = {1,2,3,4};
    // cout<<*arr<<endl;
    // cout<<arr<<endl;

    // //We can print array with the help of pointers
    // int arr[4] = {1,2,3,4};
    // int *ptr = arr; //We not need to write &arr bcz it already stores the address
    // for(int i = 0; i < 4; i++){
    //     cout<<*ptr<<endl;
    //     cout<<ptr<<endl;
    //     ptr++; //Here the value increases by 4 bytes bcz it is int pointer (like if it is char pointer then by ++ value increse by 1 bytes)
    // }

    // // print array with arr
    // int arr[4] = {1,2,3,4};
    // for(int i = 0; i < 4; i++){
    //     cout<<arr+i<<endl;
    //     cout<<*(arr+i)<<endl; //arr is indexing ponter so if we do +1 to it, it goes to next index not in next memory location(so here it goes to memory location have 4 bytes difference bcz it is a int array )
    //     // arr++; //arr is constant pointer so we can't directly change its value but we can add i to arr and print that value as above
    // }


    // //Ponter to pointer
    // int a = 10;
    // int *p;
    // p = &a;
    // int **q = &p;
    // cout<<a<<endl;
    // cout<<*p<<endl;
    // cout<<p<<endl;
    // cout<<**q<<endl;
    // cout<<*q<<endl;
    // cout<<q<<endl;

    //Passing pointers to function
    // see in swapIntValuUsingfunction


    return 0;
}