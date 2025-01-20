#include <stdio.h>
void sort(int arr[], int num)
{
    for(int i =0; i < num -1; ++i)
    {
        for(int j =0; j < num -i-1; ++j)
        {
            if ( arr[j] > arr[j+1])
            {
                int tmp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d" , &n);
    int array1[n];
    int array2[n];
    int result[n];
    for(int i =0; i < n; ++i)
    {
        scanf("%d",&array1[i] );
        array2[i] = array1[i];
    }
    sort(array1, n);
    for(int i =0; i < n; ++i)
    {
        for(int j =0; j < n ; ++j)
        {
            if (array2[i] == array1[j])
            {
                result[i] = j +1;
                array1[j] = 0;
                break;
            }
        }
    }
    for(int i =0; i < n; ++i)
    {
        printf("%d ",result[i]);
    }

    
    
    return 0;
}