#include<iostream>
#include<vector>
using namespace std;

vector<int>AllPrimeFactors(int N) {
    int i = 2;
    vector<int> v;
    while(N != 0){
        if(N % i != 0){
            i = i+1;
        } else {
            N = N/i;
            v.push_back(i);
        }
    }
    return v;
}

int main(){
    vector<int> v = AllPrimeFactors(20);
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<endl;
    }
}