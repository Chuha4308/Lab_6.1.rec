#include <iostream>
#include <iomanip>

using namespace std;

void create(int* r,  int MIN, int MAX, int i)
{
    if (i < 23)
    {
        r[i] = MIN + rand() % (MAX - MIN + 1);
        create(r, MIN, MAX, ++i);
    }
}

void Print(int* r, int i)
{
    cout << setw(4) << r[i];
    if (i < 23 - 1)
        Print(r, i + 1);
    else
        cout << endl;
}

int Sum(int* r,  int sum, int i)
{
    if (i < 23)
    {
        if (!(r[i] % 2 == 0 || r[i] % 13 == 0))
            sum += r[i];

        Sum(r, sum, ++i);
    }
    else return sum;
}

int Count(int* r,  int count, int i)
{
    if (i < 23)
    {
        if (!(r[i] % 2 == 0 || r[i] % 13 == 0))
            count++;
    
        Count(r,  count, ++i);
    }
    else return count;
}

void updateArray(int* r, int i)
{
    if (i < 23)
    {
        if (!(r[i] % 2 == 0 || r[i] % 13 == 0))
        {
            r[i] = 0;
        }
        updateArray(r,  ++i);
    }
}

int main()
{
    srand((unsigned)time(NULL));

   
    int r[23];
    create(r,  4, 68, 0);
    Print(r,  0);
    cout << endl;
    cout << "sum = " << Sum(r, 0, 0) << endl;
    cout << "count = " << Count(r, 0, 0) << endl;
    updateArray(r, 0);
    Print(r,  0);
    cout << endl;
    return 0;
}
