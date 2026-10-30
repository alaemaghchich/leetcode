/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i , j;
    i = 0;
    int *sum;
    sum = malloc(sizeof(int) * 2);
    if(!sum)
    {
        *returnSize = 0;
        return NULL;
    }
    while (i < numsSize)
    {
        j = i + 1;
        while (j < numsSize)
        {
            if((nums[i] + nums[j]) == target)
            {
                sum[0] = i;
                sum[1] = j;
                *returnSize = 2;
                return sum;
            }
            j++;
        }
        i++;
    }
    return 0;
}