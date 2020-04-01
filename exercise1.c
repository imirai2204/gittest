#include <stdio.h>
#include <stdlib.h>
int main(int argc, char ** argv) {    
    int i=1;
    int n=atoi(argv[1]);
    int S=0;
    if (argc <= 2){
        if(n>0){
           for(i=1; i<=n; i++){
               S+=i;
           }
           printf("S = %d",S);
        }else if(n < 0){
            printf("The number must be positive");
        }else if(n == 0){
            printf("Argument is not a number");
        }
    }else{
        printf("There are so many arguments");
    }
    return 0;
}