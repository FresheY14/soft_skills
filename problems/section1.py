def two_sum(nums: list[int], target: int) -> list[int]:
    n = len(nums)
    for i in range(n - 1):
        for j in range(i + 1, n):
            if nums[i] + nums[j] == target:
                return [i, j]
    
    return []  # No solution found


# test case 1
nums1 = [2, 7, 11, 15]
target1 = 9
result1 = two_sum(nums1, target1)
print("1. result:", result1)
assert result1 == [0, 1], f"คำตอบที่คาดไว้คือ [0, 1] แต่ได้ {result1}"

# test case 2
nums2 = [3, 2, 4]
target2 = 6
result2 = two_sum(nums2, target2)
print("2. result:", result2)
assert result2 == [1, 2], f"คำตอบที่คาดไว้คือ [1, 2] แต่ได้ {result2}"

# test case 3
nums3 = [3, 3]
target3 = 6
result3 = two_sum(nums3, target3)
print("3. result:", result3)
assert result3 == [0, 1], f"คำตอบที่คาดไว้คือ [0, 1] แต่ได้ {result3}"

# test case 4
nums4 = [1, 2, 3, 4, 5]
target4 = 10
result4 = two_sum(nums4, target4)
print("4. result:", result4)
assert result4 == [3, 4], f"คำตอบที่คาดไว้คือ [3, 4] แต่ได้ {result4}"
