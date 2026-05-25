//remove duplicates from a sorted array in-place
#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if(n == 0) return 0;

    int i = 0;

    for(int j = 1; j < n; j++)
    {
        if(arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1; // number of unique elements
}

int main()
{
    int arr[] = {1,1,2,2,2,3,3};
    int n = 7;

    int k = removeDuplicates(arr, n);

    cout << "Unique elements: ";

    for(int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nTotal unique = " << k;

    return 0;
}
