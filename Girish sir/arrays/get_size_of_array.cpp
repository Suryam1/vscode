#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40,50,60,70,80};
    int n=sizeof(a)/sizeof(int);
    for (int i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}