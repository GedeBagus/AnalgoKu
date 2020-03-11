/*
	Nama    : Gede Bagus Darmagita
	NPM     : 140810180068
	Kelas   : B
*/

#include <iostream>
using namespace std;

main()
{
      int bil[5] = {1, 2, 3, 14, 5};
      int cari = 14;
      int n = sizeof(bil) / sizeof(bil[0]);
      int idx, mid;
      int i = 1;
      int j = n;
      bool found = false;

      while (!found && i <= j)
      {
            mid = (i + j) / 2;
            if (bil[mid] == cari)
                  found = true;
            else if (bil[mid] < cari)
                  i = mid + 1;
            else
                  j = mid - 1;
      }

      if (found == true)
      {
            idx = mid;
            cout << "Found at index " << idx;
      }
      else
      {
            idx = 0;
            cout << "Not Found";
      }

      return 0;
}