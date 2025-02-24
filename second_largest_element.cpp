#include <iostream>
#include <climits>
using namespace std;

int main()
{



//Second largest element from an array

    int arr[5] = {34, 3, 45, 5, 9};
    int max = INT_MIN, second_max = INT_MIN;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            second_max = max;
            max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] != max)
        {
            second_max = arr[i];
        }
    }

    if (second_max == INT_MIN)
        cout << "No second largest element";
    else
        cout << "Second largest element: " << second_max;

    return 0;
}