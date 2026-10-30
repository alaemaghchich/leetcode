void sortColors(int* nums, int numsSize) {
    int i = 0;
    int len = numsSize - 1;
    int j;
    int tmp;
    while (i < len)
    {
        j = 0;
        while (j < len - i)
        {
            if(nums[j] > nums[j + 1])
            {
                tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
            j++;
        }
        i++;
    }
}