#include <iostream>
#include <climits>
using namespace std;

int minTwoSubjects(int marksArray[][10], int n){
    int arr[n];
    int res = 0;
    for(int i = 0; i < n; i++){
        arr[i] = 0;
    }

    for(int i = 0; i < 10; i++){
        int minSubMark = INT_MAX;
        int minIndex = -1;
        for(int j = 0; j < n; j++){
            if(marksArray[j][i] < minSubMark){
                minIndex = j;
                minSubMark = marksArray[j][i];
            }
        }
        if(minIndex != -1){
            arr[minIndex] += 1;
        }
        
    }

    for(int i = 0; i < n; i++){
        if(arr[i] >= 2){
            res += 1;
        }
    }

    return res;

}

int main(){

    int arr1[3][10] = {{50, 51, 67, 73, 55, 71, 35, 90, 61, 76}, {8, 23, 47, 49, 56, 38, 12, 65, 17, 45}, {22, 34, 83, 39, 34,82, 33, 45, 92, 91}};
    cout<<minTwoSubjects(arr1, 3)<<endl;

    return 0;
}