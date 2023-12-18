/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:55:08 by cvu               #+#    #+#             */
/*   Updated: 2023/12/18 22:59:34 by cvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

int main(int argc, char* argv[]) {
    Harl harl;

    if (argc == 2) {
        std::string level(argv[1]);
        harl.complain(level);
    } else {
        std::cerr << "Usage: " << argv[0] << " [DEBUG/INFO/WARNING/ERROR]" << std::endl;
    }

    return 0;
}


