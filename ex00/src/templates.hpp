/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:31:49 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/09 18:52:01 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &val1, T &val2)
{
	T temp;

	temp = val1;
	val1 = val2;
	val2 = temp;
}

template <typename T>
T min(T val1, T val2)
{
	return (val1 < val2 ? val1 : val2);
}

template <typename T>
T max(T val1, T val2)
{
	return (val1 > val2 ? val1 : val2);
}

