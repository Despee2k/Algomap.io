char* longestCommonPrefix(char** strs, int strsSize) {
    char *temp = malloc(sizeof(char) * 200);
    int inside = 0, outside;
    for(; strs[outside][inside] != '\0'; inside++){
        outside = 0;
        temp[inside] = strs[outside][inside];
        for(;outside < strsSize && 
            strs[outside][inside] == temp[inside] && 
            strs[outside][inside] != '\0'; 
            outside++){}
        if(outside < strsSize){
            break;
        }
        outside--;
    }
    char *commonPrefix = realloc(temp, inside+1);
    commonPrefix[inside] = '\0';
    return commonPrefix;
}