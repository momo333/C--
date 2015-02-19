#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
   const int rows = 12;
   const int cols = 2;
   string month[rows]={"Jan", "Feb", "March", "April", "May", "June",
                        "July", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int temperatures[rows][cols];
    for(int i=0; i<rows; i++)
    {
        cout<<"Please enter min/max temperature for : "<<month[i]<<" :"<<endl;
        for(int j = 0; i<cols; j++)
        {
            cin>>temperatures[i][j];
        }
    }
    cout<<"\n Month Minimum Maximum Temperatures for: "<<endl;
    for(int i =0; i<rows; i++)
    {
        cout<<setw(5)<<month[i];
        for(int j=0; j<cols; j++)
            cout<<setw(5)<<temperatures[i][j];
    }
        int mn, mx;
        mn=temperatures[0];
        mx=temperatures[0];
        for(int i =0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                if(mn>temperatures[j]) mn=temperatures[j];
                if(mx<temperatures[j]) mx= temperatures[j];
            }
        }
        cout<<"Maximum temperature for month: "<<mx<<endl;
        cout<<"Minimum temperatures for month: "<<mn<<endl;
    return 0;
}
