#include <iostream>
using namespace std;
int main()
{
    int arr[1000], n, target;
    cout << "enter the number of elements : ";
    cin >> n;
    cout << "enter elements : \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    cout << "enter the target : ";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "element found at " << i;
            return 0;
        }
    }

    cout << "element not found ";
    return 0;
}