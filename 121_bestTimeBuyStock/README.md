# Description
Refer to the url: https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/

# Solution
This problem can't be solved by exhaustive search, because of the time limitation. But there is a fact: assuming we choose ith day to buy stock, unless the price of one day after ith day is lower than ith day, the ith day is best choice. You don't need to consider when you sell stock, because you can try to sell every day after your best choice for buying, keeping the maximum profit.