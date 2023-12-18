/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:54:47 by cvu               #+#    #+#             */
/*   Updated: 2023/12/18 22:54:54 by cvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug( void ) {
    std::cout << "DEBUG: I love having extra bacon for my burger. I really do!" << std::endl;
}

void Harl::info( void ) {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money." << std::endl;
}

void Harl::warning( void ) {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free." << std::endl;
}

void Harl::error( void ) {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level ) {
    void (Harl::*functions[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            (this->*functions[i])();
            break;
        }
    }
}

