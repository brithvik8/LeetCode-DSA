int removeDuplicates(int* nums, int numsSize) {
    int i,size=0;
    for(i=1;i<numsSize;i++){
        if(nums[size]!=nums[i]){
            nums[++size]=nums[i];
        }
    }
    return size+1;
}
