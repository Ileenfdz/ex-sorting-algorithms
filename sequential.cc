#include <iostream>

using namespace std;

int main()
{
    int list[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int find;
    int pos = -1;
    int i = 0;

    cout << "Dame un numero para buscar en el indice entre el 0 y el 10: " << endl;
    cin >> find;

    while ((list[i] != find) && (i < sizeof(list)))
    {
        i++;
    }

    if (i != sizeof(list))
    {
        pos = i;
    }

    if (pos == -1)
    {
        cout << "No encontrado en el indice" << endl;
    }
    else
    {
        cout << "Encontrado en el indice" << endl;
    }

    system("PAUSE");
    return 0;
}