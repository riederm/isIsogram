



bool is_isogram(const char phrase[]){

    char string [] = "Wort"

    for (char candidate = 'a'; candidate <= 'z'; candidate++){
        int counter = 0;

        for (int i=0; string[i] != 0; i++){ //until it is not 0 (/0 is end of string)
            if string[i] == candidate{
                counter++;
            }
        }

    }

}