/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 22:33:28 by cvu               #+#    #+#             */
/*   Updated: 2023/12/18 22:39:16 by cvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string readFileContents(const std::string& filename) {
    std::ifstream fileStream(filename.c_str());
    if (!fileStream.is_open()) {
        throw std::runtime_error("Cannot open file: " + filename);
    }
    std::stringstream buffer;
    buffer << fileStream.rdbuf();
    return buffer.str();
}

std::string replaceAllOccurrences(std::string str, const std::string& from, const std::string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str = str.substr(0, start_pos) + to + str.substr(start_pos + from.length());
        start_pos += to.length();
    }
    return str;
}

void writeFileContents(const std::string& filename, const std::string& content) {
    std::ofstream fileStream(filename.c_str());
    if (!fileStream.is_open()) {
        throw std::runtime_error("Cannot open file: " + filename);
    }
    fileStream << content;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    try {
        std::string filename = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];

        std::string content = readFileContents(filename);
        std::string replacedContent = replaceAllOccurrences(content, s1, s2);
        writeFileContents(filename + ".replace", replacedContent);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}



