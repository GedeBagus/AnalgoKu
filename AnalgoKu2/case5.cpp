/*
	Nama    : Gede Bagus Darmagita
	NPM     : 140810180068
	Kelas   : B
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int bil[5] = {14, 5, 4, 3, 2};
    int n = sizeof(bil) / sizeof(bil[0]);
    int i, j, imaks, temp;

    for (i = 2; i < n; i++)
    {
        imaks = 1;
        for (j = 2; j < i; j++)
        {
            if (bil[j] > bil[imaks])
                imaks = j;
        }
        temp = bil[i];
        bil[i] = bil[imaks];
        bil[imaks] = temp;
    }

    cout << "Selection Sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << bil[i] << " ";
    }
    return 0;
}