//Given a matrix of size N*N, your task is to find the sum of the primary and secondary diagonal of the matrix.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
const int N=100;
void DiagonalSum(int matrix[][N],int n){
int i=0,k=n-1;
int diagoal1=0,diagoal2=0;
    while((i!=n)&&(k>=0)){
        diagoal1+=matrix[i][i];
        diagoal2+=matrix[k--][i++];
      }
      cout<<"Primary diagonal:- "<<diagoal1<<"\n"<<"Secondary diagonal:- "<<diagoal2<<endl;

}
int main()
{
    int n;
    cout<<"enter size of matrix : "<<endl;
    cin>>n;
    int matrix[N][N];
    cout<<"enter elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }

    }
    DiagonalSum(matrix,n);
}


