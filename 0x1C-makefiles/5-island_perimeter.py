#!/usr/bin/python3
"""
MODULE DOCS
"""


def island_perimeter(grid):
    """

    Args: Grid is a list of a list of ints
    Returns: The count
    """

    count = 0
    # length = len(grid)
    # length2 = len(grid[0])
    # print(length, length2)

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    count += 1  # up check
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    count += 1  # down check
                if j == 0 or grid[i][j - 1] == 0:
                    count += 1  # left check
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    count += 1  # right check
    return (count)
