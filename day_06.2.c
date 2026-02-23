void moveZeroes(int* nums, int numsSize) {
    int k = 0; // Position to place next non-zero element

    // First pass: move all non-zero elements forward
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[k++] = nums[i];
        }
    }

    // Fill remaining positions with zeros
    while (k < numsSize) {
        nums[k++] = 0;
    }
}
