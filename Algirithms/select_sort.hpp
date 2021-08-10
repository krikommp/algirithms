#pragma once

#include <vector>

namespace kriko_algorithm {
	template<typename T>
	int find_smallest_value_in_list(const std::vector<T>& list, int startIndex) {
		T smallest = list[startIndex];
		int smallest_indedx = startIndex;
		for (int i = startIndex + 1; i < list.size(); ++i) {
			if (smallest > list[i]) {
				smallest = list[i];
				smallest_indedx = i;
			}
		}
		return smallest_indedx;
	}

	template<typename T>
	void select_sort(std::vector<T>& list) {
		for (int i = 0; i < list.size(); ++i) {
			int smallest_index = find_smallest_value_in_list(list, i);
			T tmp = list[i];
			list[i] = list[smallest_index];
			list[smallest_index] = tmp;
		}
	}
}