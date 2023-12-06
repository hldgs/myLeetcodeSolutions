# Description
[12 Roman to integer](https://leetcode.cn/problems/integer-to-roman/solutions/?envType=study-plan-v2&envId=top-interview-150)

# Solution
It is easy, if I have $x$ $1000$, then append x $M$, and $num = num % 1000$, so the $num$ after updated is less than $1000$. So it has one $900$ at most. And so on.