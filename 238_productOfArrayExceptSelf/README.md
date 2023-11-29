# Description
https://leetcode.cn/problems/product-of-array-except-self/submissions/?envType=study-plan-v2&envId=top-interview-150

# Solution
The question requires that division can not be used and time complexity should be **O(n)**. The result of $answer[i]$ can be regarded as the product of his left and right. And the left and right are: 
$$left[i] = left[i - 1] * nums[i - 1], left[0] = 1$$
$$right[i] = right[i+1] * nums[i+1], right[n - 1] = 1$$ 

And there is an important technique: **the space consumed by answer array will not be considered when you calculate space complexity**, so we save $left$ in $answer$, and get $right$ every iteration. And as a result, the space complexity is O(1).