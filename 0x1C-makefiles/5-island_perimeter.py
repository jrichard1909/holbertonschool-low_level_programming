#!/usr/bin/python3
"""island_perimeter module
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island
    described in grid
    """
    perimeter = 0
    
    for a in range(len(grid)):
            for b in range(len(grid[a])):
                if grid[a][b] == 1:
                    perimeter += 4
                    if a > 0:
                        if grid[a-1][b] == 1:
                            perimeter -= 1
                    if a < len(grid) - 1:
                        if grid[a+1][b] == 1:
                            perimeter -= 1
                    if b > 0:
                        if grid[a][b-1] == 1:
                            perimeter -= 1
                    if b < len(grid[a]) -1:
                        if grid[a][b+1] == 1:
                            perimeter -= 1
    return perimeter
