#include <iostream>

using namespace std;

int main()
{
    int i,j,k,m,p;
    float array[25];
    k=0;
    while(k==0)
    {
        cout<<"Enter number of data: ";
        cin>>m;
        if((m>0)&&(m<=25)) k=1;
        else cout<<"Invalid number";
    }
    cout<<"Enter scale factor: ";
    cin>>p;
    for(i=0; i<m; i++)
    {
        cout<<"Enter data number:  "<<i+1<<":";
        cin>>array[i];
    }
    for(j=0; j<m; j++)
    {
        cout<<array[j]<<"|";
        for(i=0; i<array[i]/p;i++)
        {
            cout<<"*";
            cout<<"\n";
        }
    }
    return 0;
}
