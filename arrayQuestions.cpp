#include<iostream>
#include<climits>
using namespace std;

int repeatElementIndex(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                return i;
            }
        }
    }
    return -1;
}

int kadane(int arr[], int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){

    // Input array
    int n;
    cin>>n;

    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

/*
    // #1 Givenn an array a[] of size n. For every i from 0 to n-1
    // output max(a[0], a[1], ...... , a[i]).

    int maxNum = INT_MIN;
    for(int i = 0; i < n; i++){
        maxNum = max(maxNum, a[i]);
        cout<<maxNum<<endl;
    }
*/


/*
    // #2 Given an array a[] of size n. Output sum
    // of each subarray of the given array
    
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum = sum + a[j];
            cout<<sum<<" ";
        }
    }
*/



/*
    // #3
    // Problem
    // An arithmetic array is an array that contains at least two integers and the
    // differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
    // and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
    // not arithmetic arrays.
    // Sarasvati has an array of N non-negative integers. The i-th integer of the array is
    // Ai
    // . She wants to choose a contiguous arithmetic subarray from her array that has
    // the maximum length. Please help her to determine the length of the longest
    // contiguous arithmetic subarray.


    int maxSize = 2;
    int prevDiff = a[1]-a[0];
    int currSize = 2;
    int i = 2;
    while(i<n){
        if((a[i] - a[i-1]) == prevDiff){
            currSize++;
        } else {
            prevDiff = a[i] - a[i-1];
            currSize = 2;
        }
        maxSize = max(maxSize, currSize);
        i++;
    }

    cout<<maxSize<<endl;
*/

/*
    // #4
    // Isyana is given the number of visitors at her local theme park on N consecutive
    // days. A day is record breaking if it
    // satisfies both of the following conditions:
    // ● The number of visitors on the day is strictly larger than the number of
    // visitors on each of the previous days.
    // ● Either it is the last day, or the number of visitors on the day is strictly larger
    // than the number of visitors on the following day.
    // Note that the very first day could be a record breaking day!

    int maxVis = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i] > maxVis){
            if( i == n-1 || a[i] > a[i+1] ){
                cout<<i+1<<endl;
            }
            maxVis = a[i];
        }
    }
*/


/*
    // Given an array arr[] of size N. The task is to find the index of first repeating element in an
    // array of integers, i.e., an element that occurs more than once and whose index of
    // first occurrence is smallest.

    // int ans = repeatElementIndex(a, n);
    // if(ans == -1){
    //     cout<<"No repeating element"<<endl;
    // } else {
    //     cout<<ans<<endl;
    // }

            // or in optimised way
    
    int maxNum = INT_MIN;
    for(int i =0; i < n; i++){
        maxNum = max(a[i] , maxNum);
    }
    int idx[maxNum+1];
    for(int i = 0; i < maxNum+1; i++){
        idx[i] = -1;
    }

    int minIdx = INT_MAX;

    for(int i =0; i<n; i++){
        if(idx[a[i]] == -1){
            idx[a[i]] = i;
        } else {
            minIdx = min(minIdx, idx[a[i]]);
        }
    }

    if(minIdx == INT_MAX){
        cout<<"No repeated element"<<endl;;
    } else {
        cout<<minIdx<<endl;
    }
*/



    //  #6
    // Problem
    // Given an unsorted array A of size N of non-negative integers, find a continuous
    // subarray which adds to a given number S.
    // Example
    // Input:
    // N = 5, S = 12
    // A[] = {1,2,3,7,5}
    // Output: 2 4

/*
    int S;
    cin>>S;
    int s = -1; 
    int e = -1;

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum = sum + a[j];
            if(sum == S){
                s = i+1;
                e = j+1;
                break;
            } else if( sum > S){
                break;
            }
        }
        if(s != -1 && e != -1){
            break;
        }
    }

    if(s != -1 && e != -1){
        cout<<s<<" "<<e;
    } else {
        cout<<"No such subarray";
    }
*/


/*
    // #7
    // Problem
    // Find the smallest positive missing number in the given array.
    // Example: [0, -10, 1, 3, -20], Ans = 2
    
    int maxNum = INT_MIN;
    for(int i =0; i < n; i++){
        maxNum = max(a[i] , maxNum);
    }

    bool check[maxNum + 1];
    for(int i = 0; i<maxNum+1; i++){
        check[i] = false;
    }

    for(int i = 0; i < n; i++){
        if(a[i] >= 0){
            check[a[i]] = true;
        }
    }

    for(int i = 1; i < maxNum+1; i++){
        if(check[i] == false){
            cout<<i;
            break;
        }
    }
*/

/*
    // #8 Max Subarray Sum

    // int maxSum = INT_MIN;
    // for(int i=0; i<n; i++){
    //     for( int j = i; j < n; j++){
    //         int sum = 0;
    //         for(int k = i; k <= j; k++){
    //             sum = sum + a[k];
    //             // cout<<a[k]<<" ";   //For printing subarray
    //         }
    //         maxSum = max(sum, maxSum);
    //         // cout<<endl;
    //     }
    // }
    // cout<<maxSum<<endl;


    // or in Optimised way

    // int maxSum = INT_MIN;
    // for(int i=0; i<n; i++){
    //     int currSum = 0;
    //     for( int j = i; j < n; j++){
    //         currSum = currSum + a[j];
    //         maxSum = max(currSum, maxSum);
    //     }
    // }
    // cout<<maxSum<<endl;


    // by CUMULATIVE SUM APPROACH

    // int cumSum[n+1];
    // cumSum[0] = 0;
    // for(int i = 1; i < n+1; i++){
    //     cumSum[i] = cumSum[i-1] + a[i-1];
    // }
    // int maxSum = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     for(int j = i+1; j <= n; j++){
    //         int sum = cumSum[j] - cumSum[i];
    //         maxSum = max(maxSum, sum);      
    //     }
    // }
    // cout<<maxSum<<endl;


    // or in more Optimised way
    // by KADANE'S ALGORITHM

    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++){
        currSum = currSum + a[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<maxSum<<endl;
*/


/*
    // #9 Maximum circular subarray sum

    int maxSubArrSum = INT_MIN;
    int wrapSum = 0;
    int nonWrapSum = 0;
    nonWrapSum = kadane(a, n);
    int arrSum = 0;
    for(int i = 0; i < n; i++){
        arrSum += a[i];
        a[i] = -a[i];
    }
    nonWrapSum = arrSum -(-1 * kadane(a, n));
    maxSubArrSum = max(wrapSum, nonWrapSum);
    cout<<maxSubArrSum<<endl;
*/


    // #10 Pair Sum Problem
    // Check that if there exist two elements iin an array
    // such that their sum is equal to given k

    int givenNum;
    cin>>givenNum;
    bool isPresent = false;

    // for(int i = 0; i < n-1; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(a[i] + a[j] == givenNum){
    //             isPresent = true;
    //             cout<<a[i]<<" "<<a[j]<<endl;
    //             break;
    //         }
    //     }
    // }
    // if(!isPresent){
    //     cout<<"No such elements";
    // }

    // or in optimised way 
    // work only if array is sorted else we need to first sort the array

    int low = 0;
    int high = n-1;
    while(low<high){
        if(a[low] + a[high] == givenNum){
            isPresent = true;
            cout<<a[low]<<" "<<a[high]<<endl;
            break;
        } else if(a[low] + a[high] > givenNum){
            high--;
        } else if(a[low] + a[high] < givenNum){
            low++;
        }
    }
    if(!isPresent){
        cout<<"No such elements"<<endl;
    }

    return 0;
}