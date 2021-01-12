#include<iostream>
#include<climits>
using namespace std;

// For each kid check if there is a way to distribute extraCandies
// among the kids such that he or she can have the greatest number
// of candies among them. Notice that multiple kids can have the
// greatest number of candies.

// Example :

// Input: candies = [2,3,5,1,3], extraCandies = 3
// Output: [true,true,true,false,true] 
// Explanation: 
// Kid 1 has 2 candies and if he or she receives all extra candies (3) will have 5 candies --- the greatest number of candies among the kids. 
// Kid 2 has 3 candies and if he or she receives at least 2 extra candies will have the greatest number of candies among the kids. 
// Kid 3 has 5 candies and this is already the greatest number of candies among the kids. 
// Kid 4 has 1 candy and even if he or she receives all extra candies will only have 4 candies. 
// Kid 5 has 3 candies and if he or she receives at least 2 extra candies will have the greatest number of candies among the kids.

int main(){

    int n;
    cin>>n;
    int candies[n];
    for(int i = 0; i < n; i++){
        cin>>candies[i];
    }

    bool res[n];

    int extraCandies;
    cin>>extraCandies;

    int maxNum = INT_MIN;
    for(int i = 0; i < n; i++){
        maxNum = max(maxNum, candies[i]);
    }

    for(int i = 0; i < n; i++){
        if((candies[i]+extraCandies) >= maxNum){
            res[i] = true;
        } else {
            res[i] = false;
        }
    }

    for(int i = 0; i < n; i++){
        if(res[i] == 1){
            cout<<"true ";
        } else {
            cout<<"false ";
        }
    }



    return 0;

}