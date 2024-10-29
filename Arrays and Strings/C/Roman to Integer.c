typedef struct {
    int value;
    char letter;
} Roman;

int romanToInt(char* s) {
    Roman rn[7];
    for(int i = 0; i < 7; i++){
        switch(i){
            case 6:
                rn[i].letter = 'I';
                rn[i].value = 1;
                break;
            case 5:
                rn[i].letter = 'V';
                rn[i].value = 5;
                break;
            case 4:
                rn[i].letter = 'X';
                rn[i].value = 10;
                break;
            case 3:
                rn[i].letter = 'L';
                rn[i].value = 50;
                break;
            case 2:
                rn[i].letter = 'C';
                rn[i].value = 100;
                break;
            case 1:
                rn[i].letter = 'D';
                rn[i].value = 500;
                break;
            case 0:
                rn[i].letter = 'M';
                rn[i].value = 1000;
                break;
        }
    }
    int result = 0;
    int j, k;
    int curr, next;
    for(int i = 0; s[i] != '\0'; i++){
        curr = 0;
        next = 0;
        for(j = 0; rn[j].letter != s[i]; j++);
        curr = rn[j].value;
        for(k = 0; rn[k].letter != s[i+1] && s[i+1] != '\0'; k++);
        if(s[i+1] != '\0'){
            next = rn[k].value;
        }
        if(next > curr){
            result += (next - curr);
            i++;
        } else {
            result += curr;
        }
    }
    return result;
}