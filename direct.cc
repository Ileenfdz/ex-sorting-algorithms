#include <iostream>

using namespace std;

int main()
{
    int list[10] = {32, 6, 85, 33, 11, 90, 87, 74, 16, 24};
    int var;
    int posMin;

    for (int i = 0; i < 10; i++)
    {
        posMin = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (list[posMin] > list[j])
            {
                posMin = j;
            }
        }
        var = list[i];
        list[i] = list[posMin];
        list[posMin] = var;

        cout << list[i] << endl;
    }

    system("PAUSE");
    return 0;
}