#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

void findElement(int arr[], int n, int k)
{

    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << arr[i] << " ";
    }
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < arr[mid + 1] && arr[mid] < k)
        {
            start = mid + 1;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << endl
             << arr[i] << " ";
    }
}

int main()
{

    int arr[5] = {4, 5, 1, 2, 3};

    findElement(arr, 5, 1);

    return 0;
}