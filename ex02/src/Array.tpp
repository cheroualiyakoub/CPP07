/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycheroua <ycheroua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:13:09 by ycheroua          #+#    #+#             */
/*   Updated: 2025/01/14 21:31:42 by ycheroua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array(void):_array(NULL), _size(0)
{
	
}

template <typename T>
Array<T>::Array(unsigned int n):_array(new T(n)), _size(n)
{
	
}
template <typename T>
Array<T>::~Array()
{
	if(_array)
		delete _array;
}

template <typename T>
Array<T>::Array(const T& copy):_size(copy.size())
{
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
		_array[i]  = copy._array[i];
}

template<typename T>
size_t Array<T>::size(void) const
{
	return (this->_size);
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T> &copy)
{
	
	if(copy && this!=&copy)
	{
		if(!_array)
			delete _array;
		if(copy._array)
		{
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i]  = copy._array[i];
			_size = copy.size;
		}
		else
			_array = nullptr;
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if(!_array && index >= this->size())
		throw std::out_of_range("index out of rage");
	return (_array[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (!_array || index >= this->_size)
		throw std::out_of_range("Index out of bounds");
	return _array[index];
}

#endif