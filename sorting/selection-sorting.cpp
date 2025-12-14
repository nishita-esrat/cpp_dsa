
#include <iostream>
using namespace std;

// Function declarations
void increasing_order_sort(int arr[], int n);
void increasing_order_but_start_from_last_sort(int arr[], int n);
void decreasing_order_sort(int arr[], int n);

int main()
{

    int n, arr[1000], choice;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Choose selection sorting method:\n";
    cout << "1. increasing Sort\n2. decreasing sort \n3. increasing sort but start from last\n Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        increasing_order_sort(arr, n);
        cout << "Array sorted using Selection sort(increasing order ): ";
    }
    else if (choice == 2)
    {
        decreasing_order_sort(arr, n);
        cout << "Array sorted using Selection Sort (decreasing order): ";
    }
    else if (choice == 3)
    {
        increasing_order_but_start_from_last_sort(arr, n);
        cout << "Array sorted using Selection sort (increasing order but from last ): ";
    }
    else
    {
        cout << "Invalid choice!";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Selection Sort Function (increasing oder)
void increasing_order_sort(int arr[], int n)
{
    int index;
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}

// Selection Sort Function (increasing oder but from last)
void increasing_order_but_start_from_last_sort(int arr[], int n)
{
    int index;
    for (int i = n - 1; i > 0; i--)
    {
        index = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
        }

        swap(arr[i], arr[index]);
    }
}
// Selection Sort Function (decreasing oder)
void decreasing_order_sort(int arr[], int n)
{
    int index;

    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
        }

        swap(arr[i], arr[index]);
    }
}