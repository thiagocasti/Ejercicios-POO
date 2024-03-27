#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num = atoi(argv[1]);

    if(num > 0){
        printf("Es positivo");
    }else if(num < 0){
        printf("Es negativo");
    }else{
        printf("Es cero");
    }
    return 0;
}
