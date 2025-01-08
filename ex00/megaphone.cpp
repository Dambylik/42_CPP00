/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okapshai <okapshai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:01:39 by okapshai          #+#    #+#             */
/*   Updated: 2024/12/13 14:05:42 by okapshai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
    
    int         i = 1;
    int         j;
    std::string argument;
    
    if (argc == 1) {

        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while (i < argc) {
        
        j = 0;
        argument = argv[i];
        while (argument[j])
        {
            argument[j] = toupper(argument[j]);
            j++;
        }
        std::cout << argument << " ";
        i++;
    }
    std::cout << std::endl;
    return (0);
}
