#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// �� �� ������ ��������, ����� ������ ������-������������� �� ������ ����� � ���������
// [start,end],start<end. �� �� ������ �������� �� ��������� �� �������� �����.
int main()
{
    int start, end;

    cout << "start = "; cin >> start;
    cout << "end = "; cin >> end;

    if(!cin)
    {
        cout << "Numbers are expected!\n";
        return 1;
    }

    if(start >= end)
    {
        cout << "The START of the interval should be less than the END!\n";
        return 1;
    }

    int sum = 0;
    unsigned count = 0;

    for(int i = start; i <= end; ++i)
    {
        sum += i;
        ++count;
    }

    double avg = static_cast<double>(sum) / count;

    cout << "The average is: " << avg << endl;
}
