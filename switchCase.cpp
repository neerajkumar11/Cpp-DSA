#include<iostream>
using namespace std;

int main(){

    // simple calculater
    float a, b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    char o;
    cout<<"Enter operation to perform : ";
    cin>>o;

    switch (o)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        cout<<a/b;
        break;
    default:
        cout<<"Enter a valid operation :)";
        break;
    }

    return 0;
}