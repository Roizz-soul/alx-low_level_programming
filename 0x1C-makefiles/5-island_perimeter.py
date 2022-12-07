#!/usr/bin/python3
"""Module to define the island_perimeter method"""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid
    Args:
        grid: a list of list of integers either 1 or 0
                1 reps land and 0 reps water
    Returns:
        perimeter of island
    """
    perimeter = 0
    for a in range(len(grid)):
        for b in range(len(grid[0])):
            if grid[a][b] == 1:
                perimeter += 4
                if grid[a - 1] and grid[a - 1][b] == 1 and a > 0:
                    perimeter -= 1
                if grid[a + 1] and grid[a + 1][b] == 1 and a > 0:
                    perimeter -= 1
                if grid[a][b - 1] and grid[a][b - 1] == 1 and b > 0:
                    perimeter -= 1
                if grid[a][b + 1] and grid[a][b + 1] == 1 and b > 0:
                    perimeter -= 1
    return perimeter
