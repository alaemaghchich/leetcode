int removeDuplicates(int* nums, int numsSize) {
if (numsSize == 1){
    return 1;
    }
    int write = 1;
    int read = 1;

while (read < numsSize)
{
    if (nums[read] != nums[read - 1])
{
    nums[write] = nums[read];
write++;
}
    read++;
}
return write;
    }

