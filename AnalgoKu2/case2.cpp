/*
	Nama    : Gede Bagus Darmagita
	NPM     : 140810180068
	Kelas   : B
*/

#include<iostream>
using namespace std;

int main (int argc, char const *argv[])
{
    int bil[5] = {1, 2, 3, 4, 14};
    int cari = 14;
    int n = sizeof(bil) / sizeof(bil[0]);
    int idx;
    int i = 1;
    bool found = false;

    while (i <= n && !found)
    {
        if (bil[i] == cari)
            found = true;
        else
            i = i + 1;
    }

    if (found == true)
    {
        idx = i;
        cout << "Found at index " << idx;
    }

    else
    {
        idx = 0;
        cout << "Not Found";
    }

    return 0;
}
