int findClosestNumber(int* nums, int numsSize) {
    int closest = nums[0];
    for(int i = 1; i < numsSize; i++){
        if(abs(closest) > abs(nums[i])){
            closest = nums[i];
        }
        if(abs(closest) == nums[i]){
            closest = nums[i];
        }
    }
    return closest;
}