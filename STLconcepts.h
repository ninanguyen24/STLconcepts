/*Nina Nguyen
CSC 212
6/13/2017
Program 6: STL Concepts*/

#ifndef STL_CONCEPTS
#define STL_CONCEPTS

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <cmath>

using namespace std;

//Find maximnum element
template <typename ElementType, typename ContainerType >
ElementType maxElement(ContainerType& container) {
	ContainerType::iterator iter = container.begin();
	ElementType max = *iter;
	for (iter = container.begin(); iter != container.end(); iter++) {
		if (*iter > max) {
			max = *iter;
		}
	}
	return max;
}

//Find mininum element
template <typename ElementType, typename ContainerType>
ElementType minElement(ContainerType& container) {
	ContainerType::iterator iter = container.begin();
	ElementType min = *iter;
	for (iter = container.begin(); iter != container.end(); iter++) {
		if (*iter < min) {
			min = *iter;
		}
	}
	return min;
}

//Count the number of occurrances
template <typename ElementType, typename ContainerType>
int countElement(ContainerType& container, const ElementType& value) {
	ContainerType::iterator iter = container.begin();
	int count = 0;
	for (iter = container.begin(); iter != container.end(); iter++) {
		if (*iter == value) {
			count++;
		}
	}
	return count;
}

//Reverse order of elements
template<typename BidirectionalIterator>
void reverse(BidirectionalIterator& beg, BidirectionalIterator& end) {
	while ((beg != end) && (first != --last)) {
		std::iter_swap(beg, end);
		++first;
	}
}

//Reverse order of elements to copy
template<typename BirectionalIterator, typename OutputIterator>
OutputIterator reverse_copy(BirectionalIterator& beg, BirectionalIterator& end, OutputIterator& targetPosition) {
	while (beg != end) {
		--end;
		*targetPosition = *end;
		++targetPosition;
	}
	return targetPosition;
}

//Replace old element with new element
template <typename ForwardIterator, typename T>
void replace(ForwardIterator& beg, ForwardIterator& end, const T& oldValue, const T& newValue) {
	while (beg != end) {
		if (*beg == oldValue) {
			*beg = newValue;
			++beg;
		}
	}
}

//Replace if matches condition
template <typename ForwardIterator, typename boolFunction, typename T>
void replace_if(ForwardIterator& beg, ForwardIterator& end, boolFunction f, const T& newValue) {
	while (beg != end) {
		if (f == true) {
			*beg = newValue;
			++beg;
		}
	}
}

bool greaterThan4(int value) {//wrote to match replace_if function below
	return value > 4;
}

#endif
