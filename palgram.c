#include<stdio.h>

int isPalangram(char str[]){
    int albhabets[26] = {0};
    for(int i=0 ; str[i] != '\0'; i++){
        char ch = str[i];
        // this will convert uppercase to lowercase
        if(ch >= 'A' && ch <= 'Z'){
            ch = ch + 'a' - 'A' ;                 // ch = ch + 32 ;
        }
        // index of ch is setted to 1
        if(ch >= 'a' && ch <= 'z'){
            albhabets[ch - 'a'] = 1;
        }
    }
    for(int i = 0;i<26;i++){
        if(albhabets[i]==0){
            return 0;
        }
    }
    return 1;
    
}

int main(){

    char str[1000];
    printf("Enter string:");
    fgets(str , sizeof(str),stdin);
    if(isPalangram(str)){
        printf("Palangram");
    }else{
        printf("Not Palangram");
    }

    return 0;
}