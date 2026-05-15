"""
Function to determine whether a number is an Armstrong number.
"""


def is_armstrong_number(number):
    """
    :param number: int - number to check
    :return: bool - Armstrong number or not
    """
    num = str(number)
    number_of_digits = len(num)
    
    return number == sum(int(digit)**number_of_digits for digit in num)
