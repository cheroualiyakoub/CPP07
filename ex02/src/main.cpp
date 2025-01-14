/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:52 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/14 21:21:27 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main (void)
{
	Array<int> nums;
	// Array<std::string> strings(5);
	// Array<float> floats(8);
	//int
	try
	{
		std::cout << nums[0] << std::endl;
		std::cout << nums[1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "error: " << e.what() << std::endl;
	}
}

