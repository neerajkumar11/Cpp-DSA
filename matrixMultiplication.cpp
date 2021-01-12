#include <iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter row no. for first matrix : ";
    cin>>a;
    cout<<"Enter column no. for first matrix : ";
    cin>>b;
    cout<<"Enter elements for first matrix : "<<endl;
    int A[a][b];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            cin>>A[i][j];
        }
    }
    cout<<"Row no. for second marix : "<<b<<endl;
    cout<<"Enter column no. for second matrix :";
    cin>>c;
    cout<<"Enter elements for second matrix : "<<endl;
    int B[b][c];
    for(int i = 0; i < b; i++){
        for(int j = 0; j < c; j++){
            cin>>B[i][j];
        }
    }
    int C[a][c];
    for(int i = 0; i < a; i++){
        for(int j = 0; j < c; j++){
            C[i][j] = 0;
        }
    }

    for(int i = 0; i < a; i++){
        for(int j = 0; j < c; j++){
            for(int k = 0; k < b; k++){
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    cout<<endl;
    cout<<"Rusultant matrix is : "<<endl;
    for(int i = 0; i<a; i++){
        for(int j = 0; j<c; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}