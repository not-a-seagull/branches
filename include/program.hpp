/*
 * =====================================================================================
 *
 *       Filename:  main.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/14/2017 09:40:07 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  J.T. Nunley (JaydomStudios), jtnunley01@gmail.com
 *   Organization:  JaydomStudios
 *
 * =====================================================================================
 */

#ifndef PROGRAM_HPP
#define PROGRAM_HPP

#include "branch.hpp"

void print_version(int verbose);
void print_cmds();
branch *usr_input_branch();
int runProgram();

#endif
