#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Point {
    int row, col, distance;
    vector<pair<int, int>> path;
};

bool isValidMove(const vector<vector<int>>& grid, const vector<vector<bool>>& visited, int row, int col) {
    int rows = grid.size();
    int cols = grid[0].size();
    return (row >= 0 && row < rows && col >= 0 && col < cols && grid[row][col] == 0 && !visited[row][col]);
}

void printPath(const vector<pair<int, int>>& path) {
    for (const auto& p : path) {
        cout << "(" << p.first << ", " << p.second << ") -> ";
    }
    cout << endl;
}

void bfs(const vector<vector<int>>& grid, const pair<int, int>& start, const pair<int, int>& end) {
    int rows = grid.size();
    int cols = grid[0].size();
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));

    // Possible moves: Up, Right, Left, Down.
    vector<pair<int, int>> moves = {{1, 0}, {0, 1}, {0, -1}, {-1, 0}};

    queue<Point> q;
    q.push({start.first, start.second, 0, {start}});

    while (!q.empty()) {
        Point current = q.front();
        q.pop();

        int currentRow = current.row;
        int currentCol = current.col;
        int currentDistance = current.distance;
        vector<pair<int, int>> currentPath = current.path;

        visited[currentRow][currentCol] = true;

        if (currentRow == end.first && currentCol == end.second) {
            cout << "Shortest Path Found!" << endl;
            cout << "Distance: " << currentDistance << endl;
            cout << "Path: ";
            printPath(currentPath);
            return;
        }

        for (const auto& move : moves) {
            int newRow = currentRow + move.first;
            int newCol = currentCol + move.second;

            if (isValidMove(grid, visited, newRow, newCol)) {
                vector<pair<int, int>> newPath = currentPath;
                newPath.push_back({newRow, newCol});
                q.push({newRow, newCol, currentDistance + 1, newPath});
            }
        }
    }

    cout << "No Path Found!" << endl;
}

int main() 
{
    // Example 5x5 grid
    vector<vector<int>> grid = {
        {1, 1, 1, 0, 0},
        {1, 0, 0, 0, 0},
        {0, 0, 0, 0, 1},
        {0, 1, 0, 0, 1},
        {0, 0, 0, 0, 1}
    };

    pair<int, int> start = {2, 1};
    pair<int, int> end = {4, 3};

    bfs(grid, start, end);

    return 0;
}