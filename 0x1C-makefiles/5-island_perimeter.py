#!/usr/bin/python3
""" Module that contains the island_perimeter function """


def island_perimeter(grid):
    """ A Function that returns the perimeter of island described in grid """
    perimeter = 0

    num_rows = len(grid)

    if grid != []:
        num_columns = len(grid[0])

    for x in range(num_rows):
        for y in range(num_columns):
            if grid[x][y] == 1:
                if (x - 1) == -1 or grid[x - 1][y] == 0:
                    perimeter += 1
                if (x + 1) == num_rows or grid[x + 1][y] == 0:
                    perimeter += 1
                if (y - 1) == -1 or grid[x][y - 1] == 0:
                    perimeter += 1
                if (y + 1) == num_columns or grid[x][y + 1] == 0:
                    perimeter += 1

    return perimeter
