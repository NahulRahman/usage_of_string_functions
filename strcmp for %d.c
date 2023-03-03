#include<stdio.h>
#include<string.h>
#define MAX 10000
int main(){
    char A[MAX],B[MAX];
    gets(A);
    gets(B);
    printf("%d",strcmp(A,B));
    return 0;
}
/*
    test 1: i/p: aunindo bhaiya
                 nahul
            o/p: -1

    test 2: i/p: nahul
                 AUNINDO BHAIYA
            o/p: 1

    test 3: i/p: nahul
                 nahul
            o/p: 0

*/
