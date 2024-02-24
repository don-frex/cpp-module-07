/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:26:27 by asaber            #+#    #+#             */
/*   Updated: 2024/02/24 14:01:33 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"
template <typename T>
array<T>::array(): element(0), n(0){
}
template <typename T>
array<T>::array(unsigned int n): n(n)
{
	this->element = new T[n]();
}
template <typename T>
array<T>::array(const array& other) : element(new T[other.n]()), n(other.n)
{
	for(size_t i = 0; i < n; n++)
	{
		this->element[i] = other.element[i];
	}
	
}
template <typename T>
array<T>& array<T>::operator = (const array& other)
{
	if (this != &other)
	{
		delete[] element;
		n = other.n;
		element = new T[n]();
		for (size_t i = 0; i < n; i++)
		{
			element[i] = other.element[i];
		}
	}
	return *this;
}
template <typename T>
array<T>::~array()
{
	delete[] element;	
}

template <typename T>
T& array<T>::operator[] (unsigned int index)
{
	if (n < index)
		throw std::out_of_range("this index out of bounds");
		return element[index];
}
template <typename T>
unsigned int array<T>::size() const
{
	return n;
}