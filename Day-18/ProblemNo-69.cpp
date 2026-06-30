//Write a program to bubble sort in an array
#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}
