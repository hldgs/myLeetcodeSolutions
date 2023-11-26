# Description
Refer to this url: https://leetcode.cn/problems/jump-game/solutions/203549/tiao-yue-you-xi-by-leetcode-solution/?envType=study-plan-v2&envId=top-interview-150

# Solution
There are 2 solutions.

## Solution_0
The basic idea is to ensure that we can reach the index after those *zero indexes*(i.g., $nums[i] == 0$). So we mantain a right pointer to traverse $nums$, in order to search the *zero index*. And after right pointer finds a *zero index*, move left pointer from **0** to right pointer step by step, to validate whether we can jump to the next index after right pointer. 

## Solution_1
This is the official solution. We mantain a variable to save the farest location we can reach. 