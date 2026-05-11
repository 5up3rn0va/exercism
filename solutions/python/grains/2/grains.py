"""Functions for calculating the number of grains on a chessboard.
"""


def square(number):
    """
    :param number: int - square number
    :return: int - number of grains on the given square
    """
    if not 1 <= number <= 64: 
        raise ValueError("square must be between 1 and 64")
    
    return 2**(number - 1)


def total():
    """
    :return: int - total number of grains on the chess board
    """
    return (2**64)-1
