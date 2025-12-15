
#include <iostream>
using namespace std;

// Function declarations
void increasing_order_sort(int arr[], int n);
void decreasing_order_sort(int arr[], int n);

int main()
{

    int arr[1000], n, choice;
    cout << "enter the number of elements : ";
    cin >> n;
    cout << "enter elements : \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "choose insertion sort method \n";
    cout << "1. increasing order \n2. decreasing order\nenter choice : ";
    cin >> choice;

    if (choice == 1)
    {
        increasing_order_sort(arr, n);
        cout << "Array sorted using insertion sort(increasing order ): ";
    }
    else if (choice == 2)
    {
        decreasing_order_sort(arr, n);
        cout << "Array sorted using insertion sort(decreasing order ): ";
    }
    else
    {
        cout << "invalid choice ";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// insertion sort function (increasing order)
void increasing_order_sort(int arr[], int n)
{
    bool swaped;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            swaped = false;
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                swaped = true;
            }

            if (swaped == false)
            {
                break;
            }
        }
    }
}

// insertion sort function (decreasing order)
void decreasing_order_sort(int arr[], int n)
{

    bool swaped;
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            swaped = false;
            if (arr[j] > arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                swaped = true;
            }

            if (swaped == false)
            {
                break;
            }
        }
    }
}