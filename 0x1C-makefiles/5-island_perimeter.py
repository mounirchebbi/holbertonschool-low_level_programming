#!/usr/bin/python3
"""Define perimeter of the island described in grid"""


def island_perimeter(grid):
    """Return island perimiter

    Args:
        grid (list): island grid
    Returns:
        island's perimeter
    """
    width = len(grid[0])
    height = len(grid)
    boarders = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    boarders += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    boarders += 1
    return size * 4 - boarders * 2
