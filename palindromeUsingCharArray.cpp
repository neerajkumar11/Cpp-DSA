#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    char arr[n];
    cin>>arr;
    
    bool isPalindrome = true;
    for(int i = 0; i <= n/2; i++){
        if(arr[i] != arr[n - 1 - i]){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"Palindrome";
    } else {
        cout<<"Not plaindrome";
    }

    return 0;
}