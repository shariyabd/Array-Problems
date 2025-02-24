#include <stdio.h>

int main()
{


    // 3. * *Counting Pairs * *
    //     -Given an array of integers,
    //     print all unique pairs `(a, b)` such that `a != b`.- Example input : `[1, 2, 3]` - Example output :
    //  ``` (1, 2)(1, 3)(2, 3)

int arr[3] = {1, 2, 3};

for (int i = 0; i < 3; i++)
{
    for (int j = i + 1; j < 3; j++)
    {                                     
        printf("%d%d\n", arr[i], arr[j]); 
    }
}

        return 0;
}
