char * mergeAlternately(char * word1, char * word2){
    int count = 0;
    char *temp = malloc(200 * sizeof(char));
    int a = 0, b = 0, c = 0;
    for(; word1[a] != '\0' && word2[b] != '\0'; c++){
        count++;
        if(c % 2 == 0){
            temp[c] = word1[a++];
        } else {
            temp[c] = word2[b++];
        }
    }
    while(word1[a] != '\0'){
        count++;
        temp[c++] = word1[a++];
    }
    while(word2[b] != '\0'){
        count++;
        temp[c++] = word2[b++];
    }
    char *merged = realloc(temp, sizeof(char) * (count+1));
    merged[count] = '\0';
    return merged; 
}