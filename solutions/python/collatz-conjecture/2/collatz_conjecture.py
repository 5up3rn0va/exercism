"""Function for calculating the number of steps it takes a number to reach 1 according to 
the Collatz Conjecture.
"""


def steps(number):
    """
    :param number: int - a positive integer
    :return: int - number of steps
    """
    if number <= 0:
        raise ValueError("Only positive integers are allowed")
    
    number_of_steps = 0

    while number != 1:
        number = number * 3 + 1 if number % 2 else number / 2
        number_of_steps += 1

    return number_of_steps