bool isSubsequence(char* s, char* t) {
    int i, j = 0;
    int count = 0;
    int goal = strlen(s);
    for(i = 0; s[i] != '\0'; i++){
        for(; t[j] != '\0'; j++){
            if(s[i] == t[j]){
                count++;
                j++;
                break;
            }
        }
    }
    if(count == goal) return true;
    return false;
}