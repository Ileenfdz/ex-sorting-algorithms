#include <iostream>

using namespace std;

int main()
{
    int N = 10;
    int list [10] = {38, 10, 68, 21, 3, 78, 90, 58, 43, 22};
    int i;

    for (i = 0; i <= N - 1; i++)
    {
        for (int j = N - 1; j >= i + 1; j--)
        {
            if (list[j - 1] > list[j])
            {
                int var = list[j];
                list[j] = list[j - 1];
                list[j - 1] = var;
            }
        }

        cout << list[i] << ",";
    }

    system("PAUSE");
    return 0;
}