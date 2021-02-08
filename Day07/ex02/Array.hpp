/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssnowbir <ssnowbir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:28:48 by ssnowbir          #+#    #+#             */
/*   Updated: 2021/02/08 14:56:48 by ssnowbir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>

class Array
{
private:
		unsigned int	_n;
		T 				*_array;
public:
	//-----------------------CONSTRUCTORS---------------------------//
						Array(): _n(0), _array(nullptr) {}				//1
						Array(unsigned int n)						//2
						{
							this->_n = n;
							_array = new T[_n];
							for(unsigned int i = 0; i < _n; i++)
								_array[i] = '\0';
						};
						
						Array(Array const &src)						//3
						{
							if(src._n > 0)
							{
								_n = src._n;
								_array = new T[_n];
								for(int i = 0; i < _n; i++)
									_array[i] = src._array[i];
							}
							else
							{
								this->_n = 0;
								this->_array = nullptr;
							}
						};

	//-----------------------DESSTRUCTOR----------------------------//
						~Array()
						{
							if(_array != nullptr)
							{
								delete []_array;
							}
						};

	//-----------------------OPERATORS----------------------------//

						Array & operator=(Array const &src)		  //1
						{
							if(src._n > 0)
							{
								_n = src._n;
								_array = new T[_n];
								for(int i = 0; i < _n; i++)
									_array[i] = src._array[i];
							}
							else
							{
								this->_n = 0;
								this->_array = nullptr;
							}
							return *this;
						};
						T & operator[](unsigned int i)     //2
						{
							if(i > this->_n)
								throw Array::error();
							else
								return (this->_array[i]);
						}

	//-----------------------METODS----------------------------//

						unsigned int size() const
						{
							return (this->_n);
						}
	
	//-----------------------EXCEPTIONS----------------------------//

	
						class error: public  std::exception
						{
							const char *what() const throw()
							{
								return ("error");
							};
							
						};

};



#endif