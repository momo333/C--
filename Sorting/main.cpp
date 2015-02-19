#include <iostream>

using namespace std;
print(array[], int numberElements)

int main()
{
    const int N=50;
    int array[N]={0};
     srand(unsigned int(time(0)))
    for(int i=0; i<N; i++)
    {
        array[i]=rand()%100;
    }
    print(array[], N);
}


    void print(int array[], int numberElements)
    {
        for(int i =0; i<numberElements; i++)
        {
            if(i%10)
            cout<<endl;
            cout<<array[i];
        }
    }

    void sortAlg(int array[], int p, int q)
    {
        int minPos, minvalue;
        minValue = array[minPos];
        for(int i =p; i<q-1; i++)
        {
          int minPos =i;
          int minValue = array[minValue];
          for(int j = i+1; j<q; j++)
          {
              if(array[j]<minValue)
              {
                  minValue=array[j];
                  minPos = j;
              }
              minValue = array[i];
              array[i]=j;
          }
        }

    }

