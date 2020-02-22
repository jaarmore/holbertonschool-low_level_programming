#!/usr/bin/python3


def island_perimeter(grid):
    """
    Function that returns the perimter of island
    defined in the grid.
    """

    count, repeat = 0, 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                count += 1
                if i != 0 and grid[i - 1][j] == 1:
                    repeat += 1
                if j != 0 and grid[i][j - 1] == 1:
                    repeat += 1
    return 4*count - 2*repeat
