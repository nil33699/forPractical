#include<stdio.h>
int power(int base  , int exp){
    int result = 1 ;
    for (int i = 0; i < exp ;i++){
        result*=base;
    }
    return result;

}
int ndigits(int n){
    int count = 0 ;
    while(n > 0){
        n/=10;
        count +=1 ;
    }
    return count;
}

int istriMorphic(int n){
    int cube = n*n*n;
    return cube % power(10,ndigits(n)) == n;
}

int main(){

    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    if(istriMorphic(n)){
        printf("Trimorphic");
    }else{
        printf("not Trimorphic");
    }

    return 0;
}