# Description
[134 Gas Station](https://leetcode.cn/problems/gas-station/solutions/488357/jia-you-zhan-by-leetcode-solution/?envType=study-plan-v2&envId=top-interview-150)

# Solution
When we start from $i$, and we reach $j$, finding that we cannot move to $j + 1$, then starting from the location between $i$ and $j$ can't reach $j+1$ either.consequently we can directly start from $j+1$.

And if we start from $i$, walking through $n-1$, reaching $j$, which is less than $i$, finding that we cannot move to $j+1$, then starting from the rest of locations can not reach to $j+1$ either. So there is no solution in this case.