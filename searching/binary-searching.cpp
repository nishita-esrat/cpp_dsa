#include <iostream>
using namespace std;

// Function declarations
int increasing_order_binary_search(int arr[], int n, int target);
int decreasing_order_binary_search(int arr[], int n, int target);

int main()
{
    int arr[1000], n, target;

    cout << "enter the number of elements: ";
    cin >> n;
    if (n < 2)
    {
        cout << "not enough elements";
        return 0;
    }

    cout << "enter elements (in sorted) : \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "enter the target : ";
    cin >> target;

    if (arr[0] > arr[1] > arr[2])
        decreasing_order_binary_search(arr, n, target);
    else if (arr[0] < arr[1] < arr[2])
        increasing_order_binary_search(arr, n, target);
    else
        cout << "your elements are not sorted";

    return 0;
}



// binary searching function (increasing order)
int increasing_order_binary_search(int arr[], int n, int target)
{

    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            cout << "target found at " << mid;
            return 0;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << "target not found ";
    return 0;
}


// binary searching function (decreasing order)
int decreasing_order_binary_search(int arr[], int n, int target)
{
    int start = 0, end = n - 1, mid;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            cout << "target found at " << mid;
            return 0;
        }
        else if (arr[mid] > target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "target not found ";
    return 0;
}