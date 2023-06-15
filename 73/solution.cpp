class Solution {
public:
    void setZeroes(std::vector<std::vector<int>>& matrix) {
        std::unordered_set<int> rowZeros;
        std::unordered_set<int> columnZeros;
        for (int row = 0; row < matrix.size(); ++row) {
            for (int column = 0; column < matrix[0].size(); ++column) {
                if (matrix[row][column] == 0) {
                    rowZeros.insert(row);
                    columnZeros.insert(column);
                }
            }
        }

        for (int row = 0; row < matrix.size(); ++row) {
            for (int column = 0; column < matrix[0].size(); ++column) {
                if (rowZeros.count(row) == 1 || columnZeros.count(column) == 1) {
                    matrix[row][column] = 0;
                }
            }
        }
    }
};
