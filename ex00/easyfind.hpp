/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:55:38 by bebuber           #+#    #+#             */
/*   Updated: 2025/02/26 19:34:40 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP


template<typename T> 
typename T::iterator easyfind(T& cont, int i) {
	for (auto it = cont.begin(); it != cont.end(); it++) {
		if (*it == i)
			return it;
	}
	return cont.end();
}

#endif