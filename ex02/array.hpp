/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:01:33 by asaber            #+#    #+#             */
/*   Updated: 2024/02/24 14:24:37 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
#include <string>


template <typename T>
class array
{
	private:
		unsigned int n;
		T *element;
	public:
		array();
		array(unsigned int n);
		array(const array &copy);
		~array();
		array& operator = (const array& other);
		T& operator[](unsigned int index);
		unsigned int size() const;		
};
#include "array.tpp"

#endif