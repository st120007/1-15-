#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

    setlocale(0, "");
    int x, i, a;
    cout << "Введите произвольное число ";
    while (!(cin >> x) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Введите только число" << endl;
    }
    int arr[100];
    i = 1;
    while (x != 0)
    {
        a = x % 10;
        arr[i] = abs(a);
        x = x / 10;
        i++;
    }
    for (i = i--; i > 0; i--)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
