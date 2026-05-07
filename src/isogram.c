#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>


bool is_isogram(const char phrase[]){

    int i = 0;
    int freq[256] = {0};

    while(phrase[i] != '\0'){
        char c = phrase[i];
        freq[c]++;
        i++;
    }
    int max = 0;
    for (int i = 0; i<256; i++) {
	    if (freq[i] != 0) {
		    //first time
		    if(max == 0) {
			    max = freq[i];
		    } else if(freq[i] != max) {
			    return false;
		    }
	}
}

    return true;
}
