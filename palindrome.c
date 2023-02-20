#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100000
int main(){
    char x[MAX];
    gets(x);
    if(strcmp(strrev(x),x)==0){
        printf("palindrome");
    }else{
        printf("not palindrome");
    }
}

