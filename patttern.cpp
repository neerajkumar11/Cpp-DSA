#include<iostream>
using namespace std;

int main(){
     // // For double input
    // int row, col;
    // cout<<"Enter no. of row : ";
    // cin>>row;
    // cout<<"\nEnter no. of columns : ";
    // cin>>col;
    // cout<<endl;

    // For single input
    int n;
    cout<<"Enter size of pattern : ";
    cin>>n;
    cout<<endl;

    // // Rectangular pattern
    // for(int i = 0; i < row; i++){
    //     for(int j = 0; j < col; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // // Hollow rectangular pattern
    // for(int i = 1; i <= row; i++){
    //     for(int j = 1; j <= col; j++){
    //         if(i == 1 || i == row || j == 1 || j == col){
    //             cout<<"* ";
    //         } else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // //Inverted Half Pyramid
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n-i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // // Half Pyramid after 180 deg rotation
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n; j++){
    //         if(j <= n-i){
    //             cout<<"  ";
    //         } else {
    //             cout<<"* ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // // Half pyramid using numbers
    // for( int i = 1; i <= n; i++){
    //     for( int j = 1; j <= i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }


    // // Floyd;s Triangle
    // int count = 1;
    // for( int i = 1; i <= n; i++){
    //     for( int j = 1; j <= i; j++){
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }

    
    // //Butterfly Pattern
    // for(int i = 1; i <= n; i++){
    //     for( int j = 1; j <= 2*n; j++){
    //         if(j <= i || j >= 2*n-i+1){
    //             cout<<"* ";
    //         } else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i = n; i >= 1; i--){
    //     for( int j = 1; j <= 2*n; j++){
    //         if(j <= i || j >= 2*n-i+1){
    //             cout<<"* ";
    //         } else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // // Inverted half pyramid pattern using numbers
    // for(int i = n; i>=1; i--){
    //     for(int j = 1; j <= i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // // Half pyramid using 0 and 1
    // // int num = 1;
    // for(int i = 1; i <= n; i++){
    //     // for(int j = 1; j <= i; j++){
    //     //     cout<<num<<" ";
    //     //     if(num == 1){
    //     //         num = 0;
    //     //     } else {
    //     //         num = 1;
    //     //     }
    //     // }
    //     for(int  j = 1; j <= i; j++){
    //         if((i+j)%2 == 0){
    //             cout<<1<<" ";
    //         } else {
    //             cout<<0<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // // Rhombus pattern
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j <= n; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // // Number triangle
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j<=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j <= i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }


    // // Palindrome Pattern
    // for(int i =1; i <= n; i++){
    //     // for(int j = 1; j <= n-i; j++){
    //     //     cout<<"  ";
    //     // }
    //     // for(int j = i; j >= 1; j--){
    //     //     cout<<j<<" ";
    //     // }
    //     // for(int j = 2; j <= i; j++){
    //     //     cout<<j<<" ";
    //     // }
    //     // cout<<endl;
    //     int j;
    //     for(j = 1; j <= n-i; j++){
    //         cout<<"  ";
    //     }
    //     int k = i;
    //     for( ; j <= n; j++){
    //         cout<<k--<<" ";
    //     }
    //     k = 2;
    //     for( ; j <= n+i-1; j++){
    //         cout<<k++<<" ";
    //     }
    //     cout<<endl;
    // }


    // // Diamond Pattern
    // for(int i = 1; i <=n; i++){
    //     for(int j = 1; j <= n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(int j = 1; j < 2*i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i = n; i >=1; i--){
    //     for(int j = 1; j <= n-i; j++){
    //         cout<<"  ";
    //     }
    //     for(int j = 1; j < 2*i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // //Zig-Zag Pattern
    // for(int i = 1; i <= 3; i++){
    //     for(int j = 1; j <= n; j++){
    //         if((i+j)%4 == 0 || (i==2 && (i+j)%2==0)){  //or we can also take
    //         // if((i+j)%4 == 0 || (i==2 && j%4==0)){
    //             cout<<"* ";
    //         } else {
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // //Hollow diamond pattern
    // for(int i =1; i <= n; i++){
    //     for(int j = 1; j <= n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j < 2*i; j++){
    //         if(j==1 || j==(2*i)-1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i =n; i >= 1; i--){
    //     for(int j = 1; j <= n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j < 2*i; j++){
    //         if(j==1 || j==(2*i)-1){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // } 


    //Hollow diamond inscribed in a rectange
    for(int i = n; i >= 1; i--){
        for(int j = 1; j < 2*n; j++){
            if( j <= i || j >= (2*n)-i){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < 2*n; j++){
            if( j <= i || j >= (2*n)-i){
                cout<<"*";
            } else {
                cout<<" ";
            }
        }
        cout<<endl;
    }


    
}