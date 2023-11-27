# Description
https://leetcode.cn/problems/h-index/solutions/869042/h-zhi-shu-by-leetcode-solution-fnhl/?envType=study-plan-v2&envId=top-interview-150

# Solution
Two solutions are introduced here.

## Solution_0
I sort the $citations$ firstly, and if we are located at $i$, and $ciatations[i] < n - i$, the h-index is at least $citations[i]$, and we can continue to $i+1$. If $ciations[i] > n - i$, that means h-index is the maximum between $nowHIndex$ and $ n - i$.

## Solution_1
Here, although the elements of $citations$ is unordered, the index of it is between 0 and n - 1. It is easy to know that $H-index \in [0, n]$, so we can use binary search, to find H-index. 

**Note**: we need to calculate $mid$ by:
```
mid = (left + right + 1) >> 1 // right version
```
Because we update $left$ by:
```
left = mid;
```
So we must ensure that new $mid$ is bigger than $left$. Otherwise the program will enter the infinite loop. 