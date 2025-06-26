#include<stdio.h>

int isPrime(int n){
    if (n<=1){return 0;}         // 0 : not prime 
    for(int i = 2 ; i <=n/2 ;i++){
        if(n%i==0){return 0;}
    }
    return 1;                // 1 : prime
}

int main(){
    int n ;

    printf("Enter the number of elements");
    scanf("%d",&n);    

    int arr[n];

    for(int i =0 ;i<n;i++){
        printf("\n Enter %d element : ",i);
        scanf("%d",&arr[i]);
    } 

    for(int i =0 ;i<n;i++){
        if(isPrime(arr[i])){
            for(int j = 1;j<n;j++){
                if(isPrime(arr[j]) && arr[j]-arr[i]==6 || arr[i]- arr[j]==6){

                    printf("\n %d and %d are sexy prime numbers",arr[i],arr[j]);

                }
            }
        }
    }

    return 0;
}