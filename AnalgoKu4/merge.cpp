/*
	Nama    : Gede Bagus Darmagita
	NPM     : 140810180068
	Kelas   : B
*/

#include <iostream>
#include <chrono>
using namespace std;

void Merge(int *a, int low, int high, int mid)
{
    int i, j, k, temp[high - low + 1];
    i = low;
    k = 0;
    j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = a[j];
            k++;
            j++;
        }
    }

    while (i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }

    while (j <= high)
    {
        temp[k] = a[j];
        k++;
        j++;
    }

    for (i = low; i <= high; i++)
    {
        a[i] = temp[i - low];
    }
}

void MergeSort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        MergeSort(a, low, mid);
        MergeSort(a, mid + 1, high);
        Merge(a, low, high, mid);
    }
}

int main()
{
    int n, i;

    cout << "\nMasukkan Jumlah Data : ";
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "Masukkan elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    auto start = chrono::steady_clock::now();
    MergeSort(arr, 0, n - 1);
    auto end = chrono::steady_clock::now();
    auto elapsed =
        chrono::duration_cast<chrono::nanoseconds>(end - start);

    cout << "\nData Terurut: ";
    for (i = 0; i < n; i++)
        cout << " " << arr[i];

    cout << endl
         << "waktu yang dibutuhkan komputer : "
         << elapsed.count()
         << " nanosekon" << endl;

    return 0;
}