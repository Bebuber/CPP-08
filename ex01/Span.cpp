/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:03:14 by bebuber           #+#    #+#             */
/*   Updated: 2025/03/05 16:17:18 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() :  size(0) {}

Span::Span(unsigned int N) : size(N) {}

Span::Span(const Span& other) : size(other.size) {
	nums = other.nums;
}

Span& Span::operator=(const Span& other) {
	if (this != &other)
	{
		this->size = other.size;
		this->nums = other.nums;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int i) {
	if (nums.size() == size)
		throw std::length_error("que full");
	else
		nums.push_back(i);
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (std::distance(begin, end) > (size - static_cast<int>(nums.size())))
		throw std::length_error("not enough space");
	nums.insert(nums.end(), begin, end);
}

unsigned int Span::longestSpan() {
	if (nums.size() <= 1)
		throw std::length_error("not enough arguments");
	int min = *std::min_element(nums.begin(), nums.end());
	int max = *std::max_element(nums.begin(), nums.end());
	return (max - min);
}

unsigned int Span::shortestSpan() {
	if (nums.size() <= 1)
		throw std::length_error("not enough arguments");
	int mindiff = INT_MAX;
	for (int i = 0; i < static_cast<int>(nums.size()); i++) {
		for (int n = i + 1; n < static_cast<int>(nums.size()); n++) {
			int diff = std::abs(nums[i] - nums[n]);
			if (diff < mindiff)
				mindiff = diff;
		}
	}
	return mindiff;
}