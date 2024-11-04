bool isValid(char* s) {
    int top = 0;
    char str[strlen(s)];
    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            str[top++] = s[i];
        }
        else if(top > 0){
            if(
                ((s[i] == ')' && str[top-1] == '(') || 
                (s[i] == ']' && str[top-1] == '[') || 
                (s[i] == '}' && str[top-1] == '{'))
            ){
                top--;
            } else {
                return false;
            }
        } else {
            return false;
        }
    }
    if(top == 0) return true;
    return false;
}