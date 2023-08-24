#!/usr/bin/python3
""" This module contains a function that returns
the perimeter of the island described in grid """


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (list[list[int]]): The grid representing the island.

    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4  # Each land cell contributes 4 to the perimeter

                # Check neighboring cells (up, down, left, right)
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Deduct 2 for adjacent land cells
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
