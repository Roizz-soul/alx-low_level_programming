#!/usr/bin/python3
"""Module to define the island_perimeter method"""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid"""
    perimeter = 0
    if grid and type(grid) == list and type(grid[0]) == list:
        if len(grid) > 100:
            return
        for a in range(len(grid)):
            if len(grid[a]) > 100:
                return
            for b in range(len(grid[a])):
                if grid[a][b] and grid[a][b] == 1:
                    perimeter += 4
                    if grid[a - 1] and grid[a - 1][b] == 1:
                        perimeter -= 1
                    if grid[a + 1] and grid[a + 1][b] == 1:
                        perimeter -= 1
                    if grid[a][b - 1] and grid[a][b - 1] == 1:
                        perimeter -= 1
                    if grid[a][b + 1] and grid[a][b + 1] == 1:
                        perimeter -= 1
                if (grid[a][b] and grid[a][b] == 0
                   and grid[a - 1] and grid[a - 1][b] == 1
                   and grid[a + 1] and grid[a + 1][b] == 1
                   and grid[a][b - 1] and grid[a][b - 1] == 1
                   and grid[a][b + 1] and grid[a][b + 1] == 1):
                    return
    return perimeter
