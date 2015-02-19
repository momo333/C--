#include <iostream>

using namespace std;
const int max_size = 10;

bool isSymmetric(int arr[][max_size], int rows)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<rows - i; j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                return false;
            }
        }
    }
    return true;
}

void transMatrix(int arr[][max_size],int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n;j++)
        {
            arr[i][j]=arr[j][i];
        }
    }
}

int main()
{
    int rows;
    cout<<"Please enter number rows and columns: ";
    cin>>rows;
    int arr[max_size][max_size];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<rows; j++)
        {
            cin>>arr[i][j];
        }
    }

    if(!isSymmetric(arr, rows))
    {
        cout<<"The matrix is not symmetric: ";
    }
    else
        cout<<"The matrix is symmetric symmetric";


    return 0;
}
