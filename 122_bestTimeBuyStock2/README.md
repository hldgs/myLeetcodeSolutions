# Description
Refer to url :https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-ii

# Solution
Difference between 122 and 121 is that you can buy and sell over and over again in 122. So let's think about how to make more money when you are in stock? You buy it at low price, and sell it at high price. And after you sell it, you should buy it at lower price than you sell it last time, and then sell it again when price is higher than you buy it.

For example, prices = [1, 2, 3, 2, 10]. You should buy stock on 1st day, and sell it on 3rd day, and buy stock again on 4th day, and then sell it on the final day. Remember the profit you get when you buy on 1st day, and sell it on final day, is equal to when you buy on 1st day, and sell it on 3rd day, and buy it on 3rd day, and sell it on final day. So if you buy stock for the second time on 4th day, rather than 3rd day, you make more money! This is the basic idea. 

So in the increasing sequence, we stand still. And when the stock price series no longer increase, we sell stock at the highest price point. Nextly, we just wait to buy stock. And in the decreasing sequence, we stand still too. And when the decreasing trend changes, we buy stock at lowest price point. And wait to sell stock at highest price point as former.