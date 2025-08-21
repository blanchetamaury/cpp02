/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 11:30:58 by amblanch          #+#    #+#             */
/*   Updated: 2025/08/21 13:22:34 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
#include <iostream>

class Fixed {
    private:
        int value;
        static const int bits;
    public:
        Fixed(void);
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &other);
        ~Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif