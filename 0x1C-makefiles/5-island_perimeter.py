#!/usr/bin/python3
"""Define an island perimeter function"""


def island_perimeter(grid):
    """ return the perimeter of the island described in grid
    Args:
        grid: list of lists containing zeros and ones
    Returns:
        the perimeter of the island
    """

    if grid is None:
        return 0
    rows, cols = len(grid), len(grid[0])

    perimeter = 0
    for i in range(rows):
        for j in range(cols):
            perimeter += grid[i][j] * 4
            if i > 0:
                perimeter -= grid[i][j] * grid[i - 1][j]
            if i < rows - 1:
                perimeter -= grid[i][j] * grid[i + 1][j]
            if j > 0:
                perimeter -= grid[i][j] * grid[i][j - 1]
            if j < cols - 1:
                perimeter -= grid[i][j] * grid[i][j + 1]
    return perimeter
