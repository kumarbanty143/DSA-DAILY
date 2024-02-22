#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

int takeInput(int arr[], int size)
{
}

void binarySearch(vector<int> v, int target)
{
    int x = 0;
    int n = v.size();
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (v[mid] == target)
        {
            cout << "target found " << mid << endl;
            return;
        }
        else if (v[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        cout << x << endl;
        x++;
    }
    cout << "NO ELEMENT found" << endl;
}

int main()
{

    int n;
    cout << "enter size" << endl;
    cin >> n;
    vector<int> v(n);
    cout << "enter" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    cout << v[0];

    int k;
    cout << "enter number you wanna to search" << endl;
    cin >> k;

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    binarySearch(v, k);

    return 0;
}