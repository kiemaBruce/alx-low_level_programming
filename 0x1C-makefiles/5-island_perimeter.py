#!/usr/bin/python3
"""Defines a function that returns the perimeter of an island."""


def island_perimeter(grid):
    """Returns the perimeter of island defined with a grid.

    Args:
        grid (list): list of lists of integers that defines the island.

    Returns:
        int: the perimeter of the island.
    """
    if grid is None or len(grid) == 0:
        return 0
    perimeter = 0
    for position, lis in enumerate(grid):
        for index, item in enumerate(lis):
            if item == 1:
                # Check how many land zones are surrounding it.
                if position == 0:  # First list (edge)
                    # Check left and right elements
                    if index != (len(lis) - 1) and lis[index + 1] == 0:
                        perimeter += 1
                    if index != 0 and lis[index - 1] == 0:
                        perimeter += 1
                    # Check bottom element
                    if position != (len(grid) - 1):
                        next_list = grid[position + 1]
                        if next_list[index] == 0:
                            perimeter += 1
                    # No need to check for top elements, just add 1
                    perimeter += 1
                elif position == len(grid) - 1:  # Last list (edge)
                    # Check left and right elements
                    if index != (len(lis) - 1) and lis[index + 1] == 0:
                        perimeter += 1
                    if index != 0 and lis[index - 1] == 0:
                        perimeter += 1
                    # Check top element
                    prev_list = grid[position - 1]
                    if prev_list[index] == 0:
                        perimeter += 1
                    # No need to check for bottom element, just add 1
                    perimeter += 1
                else:  # lists in between
                    # Check left and right elements
                    if index != (len(lis) - 1) and lis[index + 1] == 0:
                        perimeter += 1
                    if index != 0 and lis[index - 1] == 0:
                        perimeter += 1
                    # Check top element
                    prev_list = grid[position - 1]
                    if prev_list[index] == 0:
                        perimeter += 1
                    # Check bottom element
                    next_list = grid[position + 1]
                    if next_list[index] == 0:
                        perimeter += 1
    return perimeter
