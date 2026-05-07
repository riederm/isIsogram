#include "isogram.h"
#include <stdio.h>

int main(int arg, char *argv[]){
    if (is_isogram(argv[1])){
        printf("The Pharse is an isogram.\n");
    }else {
        printf("The pharse is not an isogram.\n");
    }
    return 0;
}