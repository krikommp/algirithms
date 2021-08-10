#pragma once
#include <vector>

namespace kriko_algorithm {
	template<typename T>
	int binary_search(const std::vector<T>& list, T value) {
		int low = 0;
		int high = list.size() - 1;

		while (low <= high) {
			int mid = (low + high) >> 1;
			T guess = list[mid];
			if (guess == value) {
				return mid;
			}
			else if (guess > value) {
				high = mid - 1;
			}
			else if (guess < value) {
				low = mid + 1;
			}
		}

		return -1;
	}
}

