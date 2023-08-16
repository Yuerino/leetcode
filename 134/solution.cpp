class Solution {
public:
    int canCompleteCircuit(const std::vector<int> &gas, const std::vector<int> &cost) {
        int result = 0, total = 0, total_gas = 0, total_cost = 0;

        for (size_t i = 0; i < gas.size(); ++i) {
            total_gas += gas[i];
            total_cost += cost[i];
            total += gas[i] - cost[i];
            if (total < 0) {
                total = 0;
                result = i + 1; 
            }
        }

        return total_gas < total_cost ? -1 : result;
    }
};
