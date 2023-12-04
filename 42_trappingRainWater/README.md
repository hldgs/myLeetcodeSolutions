# Decription
[42 Trapping Rain Water](https://leetcode.cn/problems/trapping-rain-water/description/?envType=study-plan-v2&envId=top-interview-150)

# Solution
Only record one of the official solutions.

## Solution_0
It is evident that for $i_{th}$ location, it can trap $\min\left(leftMax, rightMax \right) - height[i]$. (As long as there are higher height inn both the left and right sides of $i_{th}$ location, the $i_{th}$ location can trap rain. ) So we main two points, $right$ and $left$. The $leftMax$ is the max height in the left side of $left$ pointer, and the $rightMax$ is the max height in the right side of $right$ pointer. If $leftMax$ is less than $rightMax$, it is certain that for $left$ location, it hold $leftMax - height[left]$. (Becasue in the right side of $left$, the maximum height must be greater than or equal to $rightMax$.)