#include "isogram.h"
#include "string.h"
#include "math.h"

// array[0-255] Anzhal des jeweiligen Zeichens im String
/* forEach(character in phrase){
        count[character]++;
    }
    if (anything in count >1){
        return false
    }
    return true
*/

/* 
    [W o r d]
     ^
     ^ ^ ^ ^ // W?
       ^ ^ ^ // o?
*/
bool is_isogram(const char phrase[]){
    int len = strlen(phrase);
    for(int i=0; i<len; i++){
        char currentChar = phrase[i];
        //check all other chars against currentChar
        //find if there are more than 1 occurences
        int occurences = 0;
        for(int j=0; j<len; j++){
            if(((phrase[j] == currentChar) && (currentChar !=' ')) || ((phrase[j]-currentChar) == ('a'-'A')) || ((phrase[j]-currentChar) == ('A'-'a'))){
            //if(phrase[j] == currentChar){
                occurences++;
            }
        }
        if(occurences > 1){  //found duplicate characters --> no isogram
            return false;
        }
    }
    //we didnt find duplicates, must be an isogram
    return true;
}
