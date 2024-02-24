/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:03:08 by asaber            #+#    #+#             */
/*   Updated: 2024/02/24 14:25:18 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

int main()
{
	array<std::string> test(3);
	array<int> test2(5);
	std::cout << test.size() << std::endl;
	std::cout << test2.size() << std::endl;
}