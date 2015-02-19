#include <iostream>

using namespace std;

int main()
{
    int number, newNumber,thirdDig, firstDig,diff;
    if((!cin)||(number<100)||(number>1000))
    {
        cout<<"Invalid number";
    }
   cout<<"Please enter a number: ";
   cin>>num;
   thirdDig=number%10;
   firstDig=number/100;
   newNumber=firstDig*10 + thirdDig;
   diff = number - newNumber;
   if(number%newNumber==0)
   {
       cout<<number;
   }

    return 0;
}
