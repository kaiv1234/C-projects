#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,table;
    cout<<"Entered Number :- ";
    cin>>n;
    for ( i = 1; i <=10; i++)
    {
        table=n*i;
        cout<<n<<" * "<<i<<" = "<<table<<endl;
    }
    
    system("pause");

}