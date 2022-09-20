#include <iostream>
#include <format>
#include <vector>
#include "sort/selectionSort.h"
#include "sort/insertionSort.h"
#include "sort/mergeSort.h"
#include "sort/quickSort.h"
#include "sort/quickSort3.h"

auto main() -> int {
	std::vector<int> vec {1, 2, 3, 4, 8, 1, 2, 3, 1, 9};

	dsa::quickSort3(vec.begin(), vec.end(), std::greater<int>());

	for (int i : vec) {
		std::cout << i << ' ';
	}
	std::cout << '\n';

	return 0;
}