/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:37:52 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/14 16:04:02 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"

void print_array_int(int &value)
{
	std::cout << value << std::endl;
}
void print_array_string(std::string &value)
{
	std::cout << value << std::endl;
}

void print_x(void)
{
	std::cout << "x" << std::endl;
}

void print_1(void)
{
	std::cout << 1 << std::endl;	
}

void call_function(void (*func)())
{
    func();
}

int main (void)
{
	int int_array[] = {1, 2, 3};
	iter(int_array, 3, print_array_int);

	std::string string_array[] = {"khnichou", "kerfa", "oui"};
	iter(string_array, 3, print_array_string);
	
	void(*function_array[])() = {print_1, print_x};
	iter(function_array, 2, call_function);
    return 0;
}

