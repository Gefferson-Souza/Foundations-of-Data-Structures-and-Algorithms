import random
from typing import List


def generate_random_array(length: int, min_value: int, max_value) -> List[int]:
    return random.sample(range(min_value, max_value + 1), length)


def insertion_sort(array: List[int]) -> None:
    for i in range(1, len(array)):
        temp: int = number_array[i]
        j: int = i - 1

        while j >= 0 and number_array[j] > temp:
            number_array[j + 1] = number_array[j]
            j -= 1

        array[j + 1] = temp


number_array: List[int] = generate_random_array(100, 1, 100)
print(number_array)
insertion_sort(number_array)
print(number_array)

