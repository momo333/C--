#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;
void print(int[], int);
int linSearch(int[], int, int);

int main()
{
    const int N = 30;
    int a[N];
    int value;

    srand(unsigned int(time(0)));
    for(int i =0;i<N; i++)
    {
        a[i] = rand()%900 +101;
    }
    print(a, N);
    cout<<"Please enter a number: ";
    int x = linSearch(a[], N);
    if(x,0)
        cout<<"There is no such number in the array!"
        else
        cout<< "You found the number:)";
}

void print(int a[], int elements)
{
    for(int i =0; i<elements; i++)
    {
        if(i%10==0)
        cout<<endl;
        cout<<setw(5)<<a[i];
    }
    cout<<endl;
}

int linSearch(int a[],int value, int number)
{
    bool found=false;
    int x=0;
    while (x<number && !found)
    {
        if(a[x]==value)
            x++;
        else
            found=true;
    }
        return found?x:-1;
}
