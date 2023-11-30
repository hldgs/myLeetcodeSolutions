// This my solution similar to official one.
class Solution {
public:
    int traverse(vector<int>& gas, vector<int>& cost, int start){
        int n = gas.size();
        int position = start;
        int currentGas = 0;
        for(; position < n + start; position++){
            currentGas = currentGas + gas[position % n] - cost[position % n];
            if(currentGas < 0){
                break;
            }
        }
        return position;
    }
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int start = 0;
        while(start < n){
            int newStart = traverse(gas, cost, start);
            if(newStart == n + start){
                return start;
            }
            start = newStart + 1;
        }
        return -1;
    }
};