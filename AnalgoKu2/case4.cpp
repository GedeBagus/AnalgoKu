/*
	Nama    : Gede Bagus Darmagita
	NPM     : 140810180068
	Kelas   : B
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int bil[5] = {14, 5, 4, 2, 1};
    int n = sizeof(bil) / sizeof(bil[0]);
    int i, j, insert;

    for (i = 1; i < n; i++)
    {
        insert = bil[i];
        j = i - 1;
        while (j >= 0 && bil[j] > insert)
        {
            bil[j + 1] = bil[j];
            j = j - 1;
        }
        bil[j + 1] = insert;
    }

    cout << "Insertion Sort: ";
    for (j = 0; j < n; j++)
    {
        cout << bil[j] << " ";
    }
    return 0;
}