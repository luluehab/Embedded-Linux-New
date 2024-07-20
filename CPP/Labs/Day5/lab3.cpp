
#include <iostream>
#include <string>
#include <vector>

std::vector<std::vector<int>> trans(std::vector<std::vector<int>> &matrix)
{
    int j=0;
    int rows = matrix.size();
    int cols = matrix[0].size();
    std::vector<std::vector<int>> transmatrix(cols, std::vector<int>(rows));
    for (auto &row : matrix)
    {
    int i=0;
        for (auto &elem : row)
        {
            transmatrix[i][j] = elem;
            i++; 
        }
        j++;
    }
    return transmatrix;
}
void printmatrix(std::vector<std::vector<int>> &matrix)
{
    std::cout << "Matrix elements: " << std::endl;
    for (const auto &row : matrix)
    {
        for (const auto &elem : row)
        {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{

    std::vector<std::vector<int>> matrix = {
        {1, 2, 3,7},
        {4, 5, 6,3}};
    std::vector<std::vector<int>> transposedMatrix = trans(matrix);
    printmatrix(transposedMatrix);
}
