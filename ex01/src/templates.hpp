/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 18:31:49 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/14 16:06:42 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T, typename Func>
void iter(T array[], size_t  length, Func funtino)
{
	for(size_t i = 0 ;i < length; i++)
		funtino(array[i]);
}

#endif