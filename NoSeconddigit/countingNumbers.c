#include <iostream>
using namespace std;

int main()
{
    int number, count,  maxNumber, lastNumber;
    cout<<"Please enter a number: ";
    cin>>number;
    count=0;
    maxNumber = -1000000;
    while(number)
    {
        lastNumber = number%10;
        if(lastNumber>maxNumber)
            maxNumber=lastNumber;
        ++count;
        number/=10;
    }
    cout<<"The maximum number is: "<<maxNumber<<endl;
    cout<<"Number of digit of the number is: "<<count;
}
