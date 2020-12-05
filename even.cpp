// print even number

#include <iostream>
#include <conio.h>
using namespace std;
void even_num(int n)
{
    int i = 0;
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int i = 0;
    cout << "firse number de" << endl;
    cin >> i;
    even_num(i);
    return 0;
}
