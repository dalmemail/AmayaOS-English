/*
 * Copyright (C) 2012 Felipe Cabrera
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <TerminalCodes.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <files.h>
#include <debug.h>

using namespace debug;

int main(int argc, char **argv)
{
    out() << "Hello world" << endl;
    error() << "This is an error message" << endl;
    
    char *s;
    puts("[Trying gets()...]");
    printf("Write random text: ");
    gets_s(s, 1024);
    out() << s << endl;
    
    puts("[Trying getchar()...]");
    puts("Press any key to exit...");
    getchar();

    return EXIT_SUCCESS;
}
