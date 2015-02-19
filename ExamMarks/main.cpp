#include <iostream>
#include <iomanip>
using namespace std;                 //Симулация на система за отчитане на тежестта на оценкки на студенти

double sum(double arr[], int size)   //сумата на всички оценки;
{
    double sum = 0;
    for(int i = 0; i<size; i++)
    {
        sum+=arr[i];
    }
    return sum;
}

double average(double arr[], int size)     //функция която пресмята средна оценка;
{
return sum(arr,size)/size;
}

double weight(double arr[], double scaleDiff[], int size )
{
    double s = 0.0;
    double scaleSum =0.0;
    for(int i = 0; i<size; i++)
    {
        s+=scaleDiff[i]*arr[i];
        scaleSum +=scaleDiff[i];
    }
    return s/scaleSum;
}

double max_element(double arr[], int size)
{
    double mx= arr[0];
    for(int i = 0; i<size; i++)
    {
        if(mx<arr[i])
            mx=arr[i];
    }
    return mx;
}

double min_element(double arr[], int size)
{
    double mn=arr[0];
    for(int i =0; i<size; i++)
    {
        if(mn>arr[i])
            mn=arr[i];
    }
    return mn;
}

double newAverage(double arr[], int size)
{
    double mnmax = min_element(arr, size) + max_element(arr, size);
    return (sum(arr,size) - mnmax)/(size - 2);
}

void print(double arrayX[], int size)
{
    for(int i =0; i<size; i++)
    {
        if(i%10==0)cout<<endl;
        cout<<setw(5)<<arrayX[i];
    }
    cout<<endl;
}

int main()
{
    const int numberMarks = 7;
    double arrayMarks[numberMarks];
    cout<<"Please enter marks for student: "<<endl;
    for(int i =0; i<numberMarks; i++)
    {
        cin>>arrayMarks[i];
        if(arrayMarks[i]>6)
        {
            cout<<"Ivalid input enter another mark: ";
            continue;
        }
    }
    double weightTask[numberMarks] = {1, 2, 1.5, 1, 2 , 1, 1.5};

    cout<<fixed<<setprecision(1);
    print(arrayMarks, numberMarks);
    cout<<"Average marks: "<<average(arrayMarks, numberMarks)<<endl;
    cout<<"New average: "<< newAverage(arrayMarks, numberMarks)<<endl;
    cout<<"Scaled result: "<< weight(arrayMarks, weightTask, numberMarks)<<endl;

    return 0;
}
