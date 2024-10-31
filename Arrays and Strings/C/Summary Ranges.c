char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    if(numsSize == 0){
        *returnSize = 0;
        return NULL;
    }

    int count = 0;
    char **ranges = malloc(sizeof(char*) * numsSize);

    for(int i = 0; i < numsSize;){
        int start = nums[i];
        while(i+1 < numsSize && nums[i+1] - 1 == nums[i]){
            i++;
        }
        int end = nums[i];

        if(start == end){
            ranges[count] = malloc(sizeof(char) * 12);
            sprintf(ranges[count], "%d", start);
        } else {
            ranges[count] = malloc(sizeof(char) * 25);
            sprintf(ranges[count], "%d->%d", start, end);
        }
        count++;
        i++;
    }

    *returnSize = count;
    return ranges;
}