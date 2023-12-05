# Decription
[13 Roman to Interger](https://leetcode.cn/problems/roman-to-integer/description/?envType=study-plan-v2&envId=top-interview-150)

# Solution

```c++
for i in [0, s.length - 2]:
    if s[i + 1] > s[i]:
        v += s[i + 1] - s[i];
    else:
        v += s[i]; 
```