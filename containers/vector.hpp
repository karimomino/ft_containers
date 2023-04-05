/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:33:29 by kamin             #+#    #+#             */
/*   Updated: 2023/04/05 17:48:17 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

namespace ft
{
    /**
     * @brief This is a replica of the vector container in STL c++98
     *
     * usage: ft::vector
     *
     * (constructor):        Construct list
     *  (1) empty container constructor (default constructor)
     *      Constructs an empty container, with no elements.
     *  (2) fill constructor
     *      Constructs a container with n elements. Each element is a copy of val.
     *  (3) range constructor
     *      Constructs a container with as many elements as the range [first,last), with each element constructed from its corresponding element in that range, in the same order.
     *  (4) copy constructor
     *      Constructs a container with a copy of each of the elements in x, in the same order.
     * (destructor):         Destruct list
     * operator=:            Assign list
     * - Iterators:
     * begin:                Return iterator to beginning (public member function)
     * end:                  Return iterator to end (public member function)
     * rbegin:               Return reverse iterator to reverse beginning (public member function)
     * rend:                 Return reverse iterator to reverse end (public member function)
     *
     * - Capacity:
     * size:                 Return size (public member function)
     * max_size:             Return maximum size (public member function)
     * empty:                Test whether container is empty (public member function)
     * resize:               Resizes the container so that it contains n elements (public member function)
     * capacity:             Returns the size of the storage space currently allocated for the vector, expressed in terms of elements (public member function)
     * reserve:              Requests that the vector capacity be at least enough to contain n elements (public member function)
     *
     * - Element access:
     * front:                Access first element (public member function)
     * back:                 Access last element (public member function)
     * operator[]:           Returns a reference to the element at position n in the vector container (public member function)
     * at:                   Returns a reference to the element at position n in the vector (public member function)
     *
     * - Modifiers:
     * assign:               Assign new content to container (public member function)
     * insert:               Insert elements (public member function)
     * erase:                Erase elements (public member function)
     * push_back:            Add element at the end (public member function)
     * pop_back:             Delete last element (public member function)
     * clear:                Clear content (public member function)
     * swap:                 Swap content (public member function)
     *
     * - Observers
     * get_allocator:        Get allocator (public member function)
     *
     * - Non-member function overloads
     * relational operators: Relational operators for list (function template)
     * swap:                 Exchanges contents of two lists (function template)
     *
     */
    template <typename T> class vector
    {
        private:
            sizt_t  capacity; //grows exponentially where it doubles everytime at least for clang
    };
}
#endif