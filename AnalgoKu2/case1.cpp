/*
	Nama    : Gede Bagus Darmagita
	NPM     : 140810180068
	Kelas   : B
*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i, x, maks;
    float arr[255];

    cout << "Max array : ";
    cin >> x;
    cout << "Input data: \n";

    for (i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    i = 2;
    maks = arr[0];
    while (i <= x)
    {
        if (arr[i] > maks)
        {
            maks = arr[i];
        }
        i = i + 1;
    }
    cout << maks;
}