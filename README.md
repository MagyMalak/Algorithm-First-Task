# Breadth-First Search (BFS) Path Finding Algorithm

This code implements the Breadth-First Search (BFS) algorithm to find the shortest path between two points in a grid. The grid is represented as a 2D vector where obstacles are marked with a value of 1 and open spaces are marked with a value of 0.

## Usage

To use the BFS algorithm, follow these steps:

1. Define your grid by modifying the `grid` variable in the code. The grid should be a 2D vector with obstacle and open space values.
2. Specify the start and end points in the grid by modifying the `start` and `end` variables in the code. These points should be represented as a pair of row and column indices.
3. Run the code.

The BFS algorithm will find the shortest path from the start point to the end point, considering only horizontal and vertical movements (no diagonal movements).

## Code Explanation

The code starts by defining a `Point` struct to store the current position, distance, and path taken. The `isValidMove` function checks if a move to a new position is valid based on the grid's boundaries, obstacles, and whether the position has been visited.

The `printPath` function prints the path taken from the start to the current position. The `bfs` function implements the BFS algorithm using a queue to explore neighboring positions. It keeps track of visited positions and updates the distance and path as it traverses the grid. If the end point is reached, it prints the shortest path and distance. Otherwise, it prints a message indicating that no path was found.

Finally, the `main` function initializes the grid, start, and end points, and calls the `bfs` function to find the shortest path.

## How to Run

1. Clone this repository or download the `bfs_path_planning.cpp` file.
2. Open a terminal and navigate to the directory containing the file.
3. Compile the code using the following command:

   ```bash
   g++ bfs_path_planning.cpp -o bfs_path_planning
   ./bfs_path_planning

## Example

For example, the provided code solves a 5x5 grid maze with the following configuration:
(1 represent obstacle, 0 represent open path)
{1, 1, 1, 0, 0},
{1, 0, 0, 0, 0},
{0, 0, 0, 0, 1},
{0, 1, 0, 0, 1},
{0, 0, 0, 0, 1}

## Priority of moves
Up, Right, Left, Down.
{{1, 0}, {0, 1}, {0, -1}, {-1, 0}}

## Output
Shortest Path Found!
Distance: 4
Path: (2, 1) -> (2, 2) -> (3, 2) -> (4, 2) -> (4, 3) -> 

![BFS](https://github.com/MagyMalak/Algorithm-First-Task/assets/153592737/b5f3b97f-c6f8-4114-9fa2-c67d95fa929a)

The start point is (2, 1) and the end point is (4, 3). Running the code will output the shortest path from the start to the end point.

## Contributing

Contributions to this project are welcome! If you have any improvements or additional features to add, feel free to open a pull request.

# Depth-First Search (DFS) Path Finding Algorithm

This code implements the Depth-First Search (DFS) algorithm to find a path between two points in a grid. The grid is represented as a 2D vector where obstacles are marked with a value of 1 and open spaces are marked with a value of 0.

## Usage

To use the DFS algorithm, follow these steps:

1. Define your grid by modifying the `grid` variable in the code. The grid should be a 2D vector with obstacle and open space values.
2. Specify the start and end points in the grid by modifying the `start` and `end` variables in the code. These points should be represented as a pair of row and column indices.
3. Run the code.

The DFS algorithm will attempt to find a path from the start point to the end point, considering only horizontal and vertical movements (no diagonal movements).

## Code Explanation

The code starts by defining a `Point` struct to store the current position, distance, and path taken. The `isValidMove` function checks if a move to a new position is valid based on the grid's boundaries, obstacles, and whether the position has been visited.

The `printPath` function prints the path taken from the start to the current position. The `dfs` function implements the DFS algorithm using a stack to explore neighboring positions. It keeps track of visited positions and updates the distance and path as it traverses the grid. If the end point is reached, it prints the path and distance. Otherwise, it prints a message indicating that no path was found.

Finally, the `main` function initializes the grid, start, and end points, and calls the `dfs` function to find a path.

## Example

For example, the provided code solves a 5x5 grid maze with the following configuration:
(1 represent obstacle, 0 represent open path)
{1, 1, 1, 0, 0},
{1, 0, 0, 0, 0},
{0, 0, 0, 0, 1},
{0, 1, 0, 0, 1},
{0, 0, 0, 0, 1}

## Priority of moves
Up, Right, Left, Down.
{{1, 0}, {0, 1}, {0, -1}, {-1, 0}}

## Output
Path Found!
Distance: 6
Path: (2, 1) -> (1, 1) -> (1, 2) -> (1, 3) -> (2, 3) -> (3, 3) -> (4, 3) -> 

![DFS](https://github.com/MagyMalak/Algorithm-First-Task/assets/153592737/970204c2-cae5-44c3-a698-e7ea7914d61a)

The start point is (2, 1) and the end point is (4, 3). Running the code will output either the found path and distance or a message indicating that no path was found.

## Contributing

Contributions to this project are welcome! If you have any improvements or additional features to add, feel free to open a pull request.
