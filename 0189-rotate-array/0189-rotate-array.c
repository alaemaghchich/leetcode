void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    int i = 0;
    int copy[numsSize];
    while (i < numsSize)
    {
        copy[i] = nums[i];
        i++;
    }
    i = 0;
    int len = numsSize - k;
    int j = 0;
    while (len < numsSize)
    {
        nums[i++] = copy[len++];
    }
    while (i < numsSize)
    {
        nums[i++] = copy[j++];
    }
}