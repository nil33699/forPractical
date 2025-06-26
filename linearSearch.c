// C program to implement linear search using loop
#include <stdio.h>

int main() {
    int num;
    int arr[10];

    printf("Enter you Array ...");
    for (int i = 0 ;i<10; i++){
        scanf("%d",&arr[i]);
    }

    printf("\nEnter number to search : ");
    scanf("%d",&num);
    for(int i = 0 ;i<10; i++){
        if( arr[i] == num ){
            printf("\n Element found at index %d",i);
            break;
        }
    }

    return 0;
}