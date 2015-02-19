#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
    Да се дефинира функция, която слива две сортирани във възходящ ред
    редици от цели числа. Резултатът отново е сортирана редица отцели числа.
*/

const int SIZE = 10;

int main()
{

    int a[SIZE], b[SIZE], n, m, i, j;

    do
    {
        cout << "Count of the elements in the first array: ";
        cin >> n;
    }
    while(n <= 0 || n > SIZE);
    cout << "The elements shoud be sorted in ascending order!\n";
    for(i = 0; i <= n - 1; ++i)
    {
        cout << "array[" << i << "] = ";
        cin >> a[i];
    }
    do
    {
        cout << "Count of the elements in the second array: ";
        cin >> m;
    }
    while(m <= 0 || m > SIZE);
    cout << "The elements shoud be sorted in ascending order!\n";
    for(i = 0; i <= m - 1; ++i)
    {
        cout << "b[" << i << "] = ";
        cin >> b[i];
    }

    int result[2*SIZE], k = 0;


    i = 0; j = 0;
    while(i <= n - 1 && j <= m - 1)
    {
        if(a[i] <= b[j])
        {
            result[k] = a[i];
            ++i;
        }
        else
        {
            result[k] = b[j];
            ++j;
        }
        ++k;
    }

    while(i <= n - 1)
    {
        result[k] = a[i];
        ++i;
        ++k;
    }
    while(j <= m - 1)
    {
        result[k] = b[j];
        ++j;
        ++k;
    }
    cout << "The result is: ";
    for(i = 0; i <= k - 1; ++i)
    {
        cout << result[i] << ' ';
    }
}
