/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: Peer <pde-bakk@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 15:35:48 by pde-bakk      #+#    #+#                 */
/*   Updated: 2020/07/28 09:40:46 by Peer          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[]) {
  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  for (int i = 1; argv[i]; i++)
    for (int n = 0; argv[i][n]; n++)
      std::cout << (char)toupper(argv[i][n]);
  std::cout << std::endl;
  return 0;
}
