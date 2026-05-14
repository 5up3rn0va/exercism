"""
Function to determine whether a number is an Armstrong number.
"""


def is_armstrong_number(number):
    """
    :param number: int - number to check
    :return: bool - Armstrong number or not
    """
    num = str(number)
    digits = len(num)
    total = sum(int(d)**digits for d in num)

    return total == number
