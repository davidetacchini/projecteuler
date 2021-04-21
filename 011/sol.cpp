#include <iostream>
#include <fstream>
#include <vector>

bool can_go_up(int y) {
    return y > 2;
}

bool can_go_down(int y, int size) {
    return y < size - 3;
}

bool can_go_left(int x) {
    return x > 2; 
}

bool can_go_right(int x, int size) {
    return x < size - 3;
}

int main() {
    std::ifstream file ("grid.txt");
    std::vector<std::vector<int>> grid (20, std::vector<int>(20, 0));
    int size = grid.size();
    int product;
    int max = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            file >> grid[i][j];
        }
    }

    for (int y = 0; y < size; y++) {
        for (int x = 0; x < grid[y].size(); x++) {
            if (can_go_up(y)) {
                product = grid[y][x] * grid[y - 1][x] * grid[y - 2][x] * grid[y - 3][x];
                if (product > max) max = product;
            }
            if (can_go_down(y, size)) {
                product = grid[y][x] * grid[y + 1][x] * grid[y + 2][x] * grid[y + 3][x];
                if (product > max) max = product;
            }
            if (can_go_left(x)) {
                product = grid[y][x] * grid[y][x - 1] * grid[y][x - 2] * grid[y][x - 3];
                if (product > max) max = product;
            }
            if (can_go_right(x, size)) {
                product = grid[y][x] * grid[y][x + 1] * grid[y][x + 2] * grid[y][x + 3];
                if (product > max) max = product;
            }
            // check every diagonal, pretty sure there's a better way to do this
            if (can_go_up(y) && can_go_left(x)) {
                product = grid[y][x] * grid[y - 1][x - 1] * grid[y - 2][x - 2] * grid[y - 3][x - 3];
                if (product > max) max = product;
            }
            if (can_go_down(y, size) && can_go_left(x)) {
                product = grid[y][x] * grid[y + 1][x - 1] * grid[y + 2][x - 2] * grid[y + 3][x - 3];
                if (product > max) max = product;
            }
            if (can_go_up(y) && can_go_right(x, size)) {
                product = grid[y][x] * grid[y - 1][x + 1] * grid[y - 2][x + 2] * grid[y - 3][x + 3];
                if (product > max) max = product;
            }
            if (can_go_down(y, size) && can_go_right(x, size)) {
                product = grid[y][x] * grid[y + 1][x + 1] * grid[y + 2][x + 2] * grid[y + 3][x + 3];
                if (product > max) max = product;
            }
        }
    }
    std::cout << max;
}
