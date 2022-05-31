#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int s;
    cin >> s;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            for (int k = j + 1; k < 5; k++)
            {
                if (a[i] + a[j] + a[k] == s)
                {
                    cout << a[i] << "," << a[j] << "," << a[k] << endl;
                }
            }
        }
    }
    return 0;
}