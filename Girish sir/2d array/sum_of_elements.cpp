#include<iostream>
using namespace std;
int main()
{
    int r,c,sum=0;
    cin>>r>>c;
    int i,j,a[r][c];
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            cin>>a[i][j];
            sum=sum+a[i][j];
        }
    }
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<sum<<endl;
    return 0;
}