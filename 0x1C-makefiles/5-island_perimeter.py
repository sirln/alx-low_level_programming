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
    columns = len(grid[0])
    perimeter = 0

    if not grid:
        return perimeter

    for r in range(rows):
        for c in range(columns):
            if grid[r][c] == 1:
                if r == 0 or grid[r - 1][c] == 0:
                    perimeter += 1
                if r == rows - 1 or grid[r + 1][c] == 0:
                    perimeter += 1
                if c == 0 or grid[r][c - 1] == 0:
                    perimeter += 1
                if c == columns or grid[r][c + 1] == 0:
                    perimeter += 1
    return perimeter
