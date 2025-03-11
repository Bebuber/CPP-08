/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:06:00 by bebuber           #+#    #+#             */
/*   Updated: 2025/03/11 13:55:31 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top element: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	std::cout << "Elements in stack: ";
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	std::cout << "Testing copy constructor:" << std::endl;
    MutantStack<int> copyStack(mstack);
    for (auto it = copyStack.begin(); it != copyStack.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Testing assignment operator:" << std::endl;
    MutantStack<int> assignedStack;
    assignedStack = mstack;
    for (auto it = assignedStack.begin(); it != assignedStack.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
	
	return 0;
}