/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:49:35 by bebuber           #+#    #+#             */
/*   Updated: 2025/03/05 16:12:41 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <vector>
#include <exception>

class Span {
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
		
		void addNumber(int i);
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
	private:
		unsigned int size;
		std::vector<int> nums;
};

#endif