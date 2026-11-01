
import unittest
from add import add

class TestAddition(unittest.TestCase):

    def test_addition_negative_numbers(self):
        self.assertEqual(add(-7, -8), -15)

    def test_addition_positive_and_negative(self):
        self.assertEqual(add(-7, 8), 1)
