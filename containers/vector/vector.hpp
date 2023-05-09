/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamin <kamin@student.42abudhabi.ae>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:33:29 by kamin             #+#    #+#             */
/*   Updated: 2023/05/09 13:57:39 by kamin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <memory>
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
     * 
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
    template < class T, class Alloc = std::allocator<T> > class vector
    {
        public:
            /**
			 * The first template parameter (T)
			*/
			typedef T                                           value_type;

			/*
			** The second template parameter (Alloc)
			*/
			typedef Alloc                                       allocator_type;
            /*
			** allocator_type::reference
			** A type provides a reference to an element stored in
			** a vector.
			** For the default allocator is a reference to value_type
			** (value_type&)
			*/
			typedef typename allocator_type::reference          reference;

			/*
			** allocator_type::const_reference
			** Type that give a reference to a const element stored.
			** Usefull to read and perform const operator.
			** A type const_reference can't be used to modify the value
			** of an element.
			** For the default allocator is a const reference to value_type
			** (const value_type&)
			*/
			typedef typename allocator_type::const_reference    const_reference;
			
			/*
			** allocator_type::pointer
			** Type that give a pointer to an element stored.
			** A type pointer can be used to modify the value of
			** an element.
			** For the default allocator is a pointer to value_type
			** (value_type*)
			*/
			typedef typename allocator_type::pointer            pointer;

			/*
			** allocator_type::const_pointer
			** Type that give a const pointer to an element stored.
			** Can't be used to modify the value of an element.
			** An iterator is prefered to access to an element.
			** For the default allocator is a const pointer to value_type
			** (const value_type*)
			*/
			typedef typename allocator_type::const_pointer      const_pointer;
            /*
			** An unsigned integral type that can represent any
			** non-negative value of difference_type
			** Usually the same as size_t.
			*/
			typedef typename allocator_type::size_type          size_type;

            
            explicit vector (const allocator_type& alloc = allocator_type()): _allocator(alloc), _start(nullptr), _end(nullptr), _end_capacity(nullptr)
            { }
            explicit vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type()): _allocator(alloc), _start(nullptr), _end(nullptr), _end_capacity(nullptr)
            {
                _start = _allocator.allocate(n);
                _end = _start;
                _end_capacity = _start + n;
                
                while (n--)
                {
                    _allocator.construct(_end, val);
                    _end++;
                }
            }
            ~vector()
            {

            }
        private:
            allocator_type  _allocator;
			pointer         _start;
			pointer         _end;
			pointer         _end_capacity;
            size_t          _capacity; //grows exponentially where it doubles everytime at least for clang
    };
}
#endif