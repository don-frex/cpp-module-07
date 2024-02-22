/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 12:32:00 by asaber            #+#    #+#             */
/*   Updated: 2024/02/22 12:58:14 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, size_t length, void (*func)(const T&))
{
	for(size_t i = 0; i < length; i++)
		func (arr[i]);
}

template <typename T>
void printit(const T elemnt)
{
	std::cout << elemnt;
}

#endif