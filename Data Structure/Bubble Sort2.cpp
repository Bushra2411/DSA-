#include <stdio.h>
void bubFunc(int a[], int number) {
    int i, j, temp;
    for(i = 0; i < number - 1; i++) {
        for(j = 0; j < number - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[100], size, i;

    printf("\n Please Enter the total Elements  :  ");
    scanf("%d", &size);

    printf("\n Please Enter the Array Elements  :  ");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    bubFunc(arr, size);
    printf("\n List in Ascending Order : ");
    for(i = 0; i < size; i++)
    {
        printf(" %d \t", arr[i]);
    }
    printf("\n");
    return 0;
}
