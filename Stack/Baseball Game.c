int calPoints(char** operations, int operationsSize) {
    int sum = 0;
    int arr[operationsSize];
    int top = 0;
    for(int i = 0; i < operationsSize; i++){
        if(strcmp(operations[i], "C") == 0){
            top--;
            continue;
        } else if(strcmp(operations[i], "D") == 0){
            arr[top] = arr[top-1] * 2;  
        } else if(strcmp(operations[i], "+") == 0){
            arr[top] = arr[top-1] + arr[top-2];
        } else {
            arr[top] = atoi(operations[i]);
        }
        top++;
    }
    for(int i = 0; i < top; i++){
        sum += arr[i];
    }
    return sum;
}