#include <iostream>
#include <vector>
#include <algorithm>
#include <format>

#include "binary_search.hpp"
#include "select_sort.hpp"

using namespace std;
using namespace kriko_algorithm;

int sum(const vector<int>& list, int begin, int end) {
	if (begin == end) return list[begin];
	if (begin > end) return 0;
	return list[begin] + sum(list, begin + 1, end);
}

int main() {
	vector<int> a = { 1, 1, 1, 1, 1, 1, 1 };
	cout << format("sum = {}", sum(a, 0, a.size() - 1)) << endl ;
	return 0;
}