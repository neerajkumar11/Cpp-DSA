#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr, n); //For taking input of entire sentence with space
    cin.ignore();

    int maxLength = 0;
    int cur_length = 0;
    int st = 0;
    int end = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == ' '){
            maxLength = max(maxLength, cur_length);
            cur_length = 0;
        } else {
            cur_length ++;
        }
    }
    maxLength = max(maxLength, cur_length);
    cout<<maxLength<<endl;

    return 0;
}