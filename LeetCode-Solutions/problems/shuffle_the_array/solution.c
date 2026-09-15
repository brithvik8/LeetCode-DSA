

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int*arr=(int*)malloc(2*n*sizeof(int));

    for(int i=0;i<n;i++){
        arr[2*i]=nums[i];
        arr[2*i+1]=nums[i+n];

    }
    *returnSize=2*n;
    return arr;
}