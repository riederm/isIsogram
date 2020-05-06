#include "isogram.h"
#include "string.h"

// count array[0-255] anzahl des jeweiligen Zeichens im String
    /* forEach( character in phrase){
        count[character]++
    }
    if (aynthing in count > 1) {
        return false
    }
    return true
*/

/*
    [ W o r d ]
      ^
      ^ ^ ^ ^ // w?
        ^ ^ ^ // o?
*/

bool is_isogram(const char phrase[]){
    int len = strlen(phrase);
    for (int i=0; i<len; i++) {
        
        if(phrase[i] != 32){    //only check if not "space"
            char currentChar = phrase[i];
            //check all other chars against currentChar
            //find if there are more than 1 occurences
            int occurences = 0;
            for(int j=0; j<len; j++){
                if ((currentChar >= 'A' ) && (currentChar <= 'Z' )){
                    currentChar += 32;
                }
                if ((phrase[j] == currentChar) | (phrase[j] == currentChar - 32)) {
                    occurences++;
                }
            }
            if (occurences > 1) { //found duplicate characters --> no isogram
                return false;
            }
        }
    }
    // we didnt find duplicates, must be an isogram
    return true;
}
