#include <iostream>
using namespace std;
int main()
{
    int c = 0;
    int n;
    cout << "enter the  mumber:";
    cin >> n;
    while (n != 0)
    {
        n = n / 10;
        c++;
    }
    cout << "show the digit=" << c << endl;
    return 0;
}