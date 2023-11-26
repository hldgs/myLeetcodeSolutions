# Description
refer :https://leetcode.cn/problems/jump-game-ii/solutions/230241/tiao-yue-you-xi-ii-by-leetcode-solution/?envType=study-plan-v2&envId=top-interview-150

# Solution
Use greedy algorithm.

## Solution_0
My own solution. We start at 0, and record the farest position $maxPos$ we can reach, and traverse from 0 to farest location, record the new farest position when $nums[i] + i > maxPos$ as $candidateMax$, and record $i$ as $candidateStart$. And when we reach $maxPos$, we back to $candidatePos$, and traverse from it to $candidateMax$(now, $candidateMax$ is new $maxPos$), and repeat above process. 

**Disadvantage**: This method lead to the useless traverse between $candidateStart$ and $maxPos$(the former version). The visualization is as below:
```c++
// > means start point;
// < means end point or maxPos;
// + means useless traverse.
>---<----
->+++-<--
```

## Solution_1
So we can optimize the above solution to do just one traverse from 0 to n - 2, and record $end$ to save of every step. If i reach end, we need one more step, and the new end is maxPos.

## Solution_2
We record the farest position which is able to reach the final point, and find the farest position to reach the position, and so on.
