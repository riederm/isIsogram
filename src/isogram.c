#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>


bool is_isogram(const char phrase[]){
    char char_check[10] = "";
    for (int i = 0; phrase[i] != 0; i++) {
        for(int j = 0; j < 10; i++) {
            if(char_check[j] == 0) break;
            if(char_check[j] == phrase[i]) return false;
            char_check[i] = phrase[i];
        }
    }

    return true;
}
