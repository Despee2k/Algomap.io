int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    if(numsSize == 0){
        *returnSize = 0;
        return NULL;
    }
    int *newArr = malloc(sizeof(int) * numsSize);
    for(int i = 0; i < numsSize; i++){
        if(i != 0){
            newArr[i] = nums[i - 1] * newArr[i - 1];
        } else {
            newArr[i] = 1;
        }
    }
    int count = numsSize - 1;
    int temp = 1;
    for(int j = count; j >= 0; j--){
        if(j != count){
            temp *= nums[j+1];
            newArr[j] *= temp;
        }
    }
    *returnSize = numsSize;
    return newArr;
}