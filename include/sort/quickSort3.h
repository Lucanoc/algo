#pragma once

#include <utility>

namespace dsa {
	template <typename IteratorType, typename CompFuncType>
	auto paritition3(IteratorType begin, IteratorType end, CompFuncType && cmp) -> std::pair<IteratorType> {
		std::pair<IteratorType> bases(begin, end);
		IteratorType moving{begin + 1};

		while (moving != end) {

		}

		return bases;
	}

	template <typename IteratorType,
		typename CompFuncType = std::less<
		typename std::iterator_traits<IteratorType>::value_type>>
		void quickSort3(IteratorType begin, IteratorType end, CompFuncType && cmp = CompFuncType{}) {
		if (end - begin < 2) {
			return;
		}

		std::pair<IteratorType> bases {dsa::partition3(begin, end, cmp)};

		quickSort3(begin, bases.first, cmp);
		quickSort3(bases.second, end, cmp);
	}
}