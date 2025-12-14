
#include <iostream>
using namespace std;

// Function declarations
void increasing_order_sort(int arr[], int n);
void increasing_order_but_start_from_first_sort(int arr[], int n);
void decreasing_order_sort(int arr[], int n);

int main()
{
    int arr[1000], n, choice;

    cout << "enter the number of elements : ";
    cin >> n;
    cout << "enter elements \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "choose bubble sorting method \n";
    cout << "1. increasing oder\n2. decreasing oder\n3. increasing oder (from first)\n enter choice : ";
    cin >> choice;

    if (choice == 1)
    {
        increasing_order_sort(arr, n);
        cout << "Array sorted using bubble sort(increasing order ): ";
    }
    else if (choice == 2)
    {
        decreasing_order_sort(arr, n);
        cout << "Array sorted using bubble sort(decreasing order ): ";
    }
    else if (choice == 3)
    {
        increasing_order_but_start_from_first_sort(arr, n);
        cout << "Array sorted using bubble sort(increasing order but from first): ";
    }
    else
    {
        cout << "invalid choice";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Buuble Sort Function (increasing order)
void increasing_order_sort(int arr[], int n)
{
    bool swaped;
    for (int i = 1; i < n; i++)
    {
        swaped = false;
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }

        if (swaped == false)
        {
            break;
        }
    }
}

// Buuble Sort Function (decreasing order)
void decreasing_order_sort(int arr[], int n)
{
    bool swaped;
    for (int i = 1; i <= n - 1; i++)
    {
        swaped = false;
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swaped = true;
            }
        }

        if (swaped == false)
        {
            break;
        }
    }
}

// Buuble Sort Function (increasing order but from first)
void increasing_order_but_start_from_first_sort(int arr[], int n)
{
    bool swaped;
    for (int i = 1; i <= n - 1; i++)
    {
        swaped = false;
        for (int j = n - 1; j >= i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                swaped = true;
            }
        }
        if (swaped == false)
        {
            break;
        }
    }
}
