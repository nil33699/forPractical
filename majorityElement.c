#include<stdio.h>
int findCandidate(int arr[],int n){
    int candidate = arr[0];
    int count = 1 ; 
    for(int i = 1 ; i<n ; i++){
        if(candidate == arr[i]){
            count ++;
        }else{
            count--;
            if(count==0){
                candidate=arr[i];
            }
        }
    }
    return candidate;
}
int isMajor(int arr[],int cand ,int  n){
    int count= 0 ;
    for(int i = 0 ; i<n ;i++){
        if(arr[i]==cand){
            count++;
        }
    }
    if(count > n/2){
        return 1;
    }else{
        return 0;
    }
}
int main(){

    int arr[] ={2,3,4,3,3};
    

    int candidate= findCandidate(arr , sizeof(arr)/sizeof(arr[0]));
    int majorityEle = isMajor(arr , candidate ,sizeof(arr)/sizeof(arr[0]) );
    if(majorityEle){
        printf("Majority Element is %d",candidate);
    }else{
        printf("no majority element");
    }

    return 0;
}