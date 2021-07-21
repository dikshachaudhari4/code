//Write a recursive solution to print even numbers from 0 to X
#include<iostream>
using namespace std;

int findeven(int start_number,int end_number)
{
    cout<<start_number<<" ";
    if(start_number==end_number)
        return 0;
    else
      findeven(start_number+=2,end_number);
}
int main()
{
    int number;
    cout<<"enter number : "<<endl;
    cin>>number;
    (number%2==0)?findeven(0,number):findeven(0,--number);
}
