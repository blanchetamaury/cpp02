/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 13:21:43 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/21 13:58:34 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed(void) {
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    value = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        value = other.getRawBits();
    }
    return (*this);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(int const raw) {
    value = raw;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}