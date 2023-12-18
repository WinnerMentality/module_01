/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieFunctions.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:39:20 by cvu               #+#    #+#             */
/*   Updated: 2023/12/18 21:39:27 by cvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEFUNCTIONS_HPP
#define ZOMBIEFUNCTIONS_HPP

#include "Zombie.hpp"
#include <string>

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif

