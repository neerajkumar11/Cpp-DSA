#include<iostream>
using namespace std;

int conversion(int num, int base1, int base2){
    int check = num;
    while(check > 0){
        if(check % 10 >= base1){
            return -1;
        }
        check /= 10;
    }

    int ans = 0;
    int mplier = 1;

    while(num > 0){
        int rem = num % base2;
        ans += mplier*rem;
        num /= base2;
        mplier *= base1;

    }
    return ans;
}

int main(){
    int num, base1, base2;
    cout<<"Enter the base of number : ";
    cin>>base1;
    cout<<"Enter the base you want : ";
    cin>>base2;
    cout<<"Enter number : ";
    cin>>num;

    int ans = conversion(num, base1, base2);
    if(ans == -1){
        cout<<"Please enter a valid nummber"<<endl;
    } else {
        cout<<ans;
    }

    return 0;
}