/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:02:22 by bebuber           #+#    #+#             */
/*   Updated: 2025/03/11 13:37:34 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <array>

int main() {
	std::vector<int> v = {1, 2, 3, 4, 5};
	std::array<int, 10> arr1 = {6, 7, 8, 9, 0};
	
	auto vptr = easyfind(v, 5);
	if (vptr  == v.end())
		std::cout << "Value did not found." << std::endl;
	else
		std::cout << "Value of the iterator is: " << *vptr << std::endl;
	
	auto it = easyfind(arr1, 8);
	if (it == arr1.end())
		std::cout << "Value did not found." << std::endl;
	else 
		std::cout << "Value of the iterator is: " << *it << std::endl;

	return 0;	
}