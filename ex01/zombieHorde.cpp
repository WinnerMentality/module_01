/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:05:07 by cvu               #+#    #+#             */
/*   Updated: 2023/12/18 22:05:14 by cvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieFunctions.hpp"

Zombie* zombieHorde(int N, const std::string& name) {
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);
    }
    return horde;
}

