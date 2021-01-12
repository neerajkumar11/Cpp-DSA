#include<bits/stdc++.h>
// #include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int num){
    // int exp = 0;
    int mul = 1;
    int ans = 0;

    while(num > 0){
        // int lastDigit  = num%10;
        // ans = ans + (lastDigit*pow(2, exp));
        // exp = exp+1;
        // num = num/10;

        int lastDigit = num%10;
        ans = ans + (lastDigit*mul);
        mul = mul*2;
        num = num/10;
    }

    return ans;
}

int octalToDecimal(int num){
    int mul = 1;
    int ans = 0;

    while(num > 0){
        int lastDigit = num%10;
        ans = ans + (lastDigit*mul);
        mul = mul*8;
        num = num/10;
    }

    return ans;
}

int hexaDecimalToDecimal(string num){
    int mul = 1;
    int ans = 0;
    int size = num.size();

    for(int i = size-1; i >=0; i--){
        if(num[i] >= '0' && num[i] <= '9'){
            ans = ans + mul*(num[i]-'0');
        } else if(num[i] >= 'A' && num[i] <= 'F'){
            ans = ans + mul*(num[i] - 'A' + 10);
        }
        mul = mul * 16;

    }

    return ans;
}

int decimalToBinary( int num ){
    int mul = 1;
    int res = 0;

    while(num > 0){
        int rem = num % 2;
        res = res + mul*rem;
        mul = mul*10;
        num = num / 2;
    }

    return res;
}

int decimalToOctal(int num){
    int mul = 1;
    int res = 0;

    while( num > 0){
        int rem = num % 8;
        res = res + rem*mul;
        mul = mul*10;
        num = num / 8;
    }

    return res;
}

string decimalToHexadecimal(int num){
    
    string ans = "";

    while(num > 0){
        char digit = '0';
        int rem = num % 16;

        if(rem <= 9){
            digit = rem + '0';
        } else {
            digit = rem + 'A' - 10;
        }
        ans.push_back(digit);
        num = num / 16;
    }

    string temp = ans;

    for(int i = 0; i < ans.size(); i++){
        ans[i] = temp[ans.size() - i - 1];
    }

    return ans;
}


int main(){

    int n;
    // string n;  //Only for hexadecimalToDecimal
    cin>>n;

    cout<<decimalToHexadecimal(n)<<endl;


    return 0;
}