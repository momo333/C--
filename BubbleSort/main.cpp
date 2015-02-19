#include<iostream>
#include<conio.h>
using namespace std;

main()
{
int temp;
int array[5];
cout<<"Enter numbers: "<<endl;
for(int i=0; i<5; i++)
{
cin>>array[i];
}
cout<<endl;
cout<<"Orignally entered array by the user is: "<<endl;

for(int j=0; j<5; j++)
{
    cout<<array[j]<<" ";
}

cout<<endl;
for(int i=0; i<4; i++)
{
    for(int j=0; j<4; j++)
    {
        if(array[j]>array[j+1])
        {
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
        }
    }
}
cout<<"Sorted Array: "<<endl;
for(int i=0; i<5; i++)
    {
    cout<<array[i]<<" ";
    }
    getch();
}
