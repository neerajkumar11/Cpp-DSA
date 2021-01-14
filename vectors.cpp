#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // or using iterator
    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;

    v.pop_back(); // Remove last element
    
    for(auto element : v){
        cout<<element<<" ";
    }
    cout<<endl;

    
    vector<int> v2 (3,50); //make vector of 3 elements with each element as 50
    
    for(auto element : v2){
        cout<<element<<" ";
    }
    cout<<endl;

    swap(v, v2); //swap value  of v and v2

    for(auto element : v){
        cout<<element<<" ";
    }
    cout<<endl;
    for(auto element : v2){
        cout<<element<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end()); //for shortin of vector


    return 0;
}

