#include <iostream>
using namespace std;


const int N = 4;

int countPaths(int maze[N][N], int x, int y) {
    
    if (x >= N || y >= N || maze[x][y] == 0) {
        return 0;
    }
    
   
    if (x == N - 1 && y == N - 1) {
        return 1;
    }
    
    
    return countPaths(maze, x + 1, y) + countPaths(maze, x, y + 1);
}

int main() {
   
    int maze[N][N] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    
  
    cout << "Total paths: " << countPaths(maze, 0, 0) << "\n";
    
    return 0;
}