#include "isogram.h"
#include <stdio.h>

int main(int argc, char *argv[]){
    if(is_isogram(argv[1])){
        printf("The phrase is an isogramm.\n");
    }else {
        printf("The phrase is not an isogram.\n");
    }
    return 0;
}