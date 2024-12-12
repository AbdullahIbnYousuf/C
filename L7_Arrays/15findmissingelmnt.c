#include <stdio.h>
#include <stdbool.h>
int main()
{
    // int sum_arr=0, sum100=0;
    int missing, index;
    bool flag = false;
    int arr[99]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
    31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
    41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 59, 60,
    61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
    71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
    81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
    91, 92, 93, 94, 95, 96, 97, 98, 99, 100};

    for (int i = 0; i < 100; i++)
    {
        if (i+1!=arr[i])
        {
            flag = true;
            missing=i+1;
            index=i;
            break;
        }
        
    }
    

    printf("The missing num is %d & index is %d", missing, index);

    return 0;
}
// By  difference of sum;
    // for (int i = 0; i < 99; i++)
    // {
    //     sum_arr=sum_arr+arr[i];
    // }
    
    // for (int i = 1; i <= 100; i++)
    // {
    //     sum100=sum100 + i;
    // }
    // sum =n*(n-1)/2

