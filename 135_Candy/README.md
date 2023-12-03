# Description
[135 Candy](https://leetcode.cn/problems/candy/description/?envType=study-plan-v2&envId=top-interview-150)

# Solution
Only record one official solution.

## Solution_0

The rule can be devided into two parts:one is higher than the left, another is higher than right.

So we traverse from left to right, to ensure every child higher than their left child, could get more candy. And we treverse from right to left similarly. And then, the maximum of above two result, is the answer for each child.
