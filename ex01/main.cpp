/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:05:30 by cvu               #+#    #+#             */
/*   Updated: 2023/12/18 22:05:37 by cvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieFunctions.hpp"
#include <iostream>

int main() {
    int N = 5;
    Zombie* horde = zombieHorde(N, "HordeMember");

    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }

    delete[] horde;
    return 0;
}

