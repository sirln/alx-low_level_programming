#!/usr/bin/python3
'''
Island Perimeter Module
'''


def island_perimeter(grid):
    '''
    Get the perimeter of the island

    Arguments
    ---------
    grid: list
        a list of list of integers

    Return
    ------
    int:
        perimeter of the island
    '''
    rows = len(grid)
    cols = len(grid[0])
    perimeter = 0

    if not grid:
        return perimeter

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                if r == 0 or (r > 0 and grid[r - 1][c] == 0):
                    perimeter += 1
                if r == rows - 1 or (r < rows - 1 and grid[r + 1][c] == 0):
                    perimeter += 1
                if c == 0 or (c > 0 and grid[r][c - 1] == 0):
                    perimeter += 1
                if c == cols - 1 or (c < cols - 1 and grid[r][c + 1] == 0):
                    perimeter += 1
    return perimeter
