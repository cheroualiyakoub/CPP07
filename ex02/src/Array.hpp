/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:31:49 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/17 16:30:19 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		size_t _size;
		
	public :
		Array(void);
		Array(unsigned int n);
		~Array();
		Array(const Array<T>& copy);
		
		size_t size(void) const;
		
		Array &operator=(const Array<T> &copy);
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		
};

#include "Array.tpp"

#endif