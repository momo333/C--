#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;


void twoDices(double dArray[], int n)
{
    int arr[11]={0};
    srand(unsigned int(time(0)));
    int diseOne, diseTwo;
    for(int i=0; i<n; i++)
    {
        diseOne= rand()%6+1;
        diseTwo= rand()%6+1;
        arr[d1+d2-2]++;
    }
    for(int i =0; i<11; i++)
    {
        dArray[i]=double(arr[i]*100)/n;
        return;
    }
}
void print(double d[], int n)
{
    cout<<fixed<<setprecision(1);
    for(int i=0;i<11; i++)
    {
        cout<<setw(6)<<d[i];
        return;
    }
}

int main()
{
    const int N=11;
    double array[N];
    int n;
    cout<<"Ënter a number: ";
    cin>>n;
    twoDices(array, n);
    print(array,n);
    return 0;
    return 0;
}
