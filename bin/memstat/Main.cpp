/*
 * Copyright (C) 2009 Niek Linnenbank
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

#include <MemoryMessage.h>
#include <Config.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char **argv)
{
    MemoryMessage mem;

    /* Obtenemos el uso de la memoria. */
    mem.action = SystemMemory;
    mem.ipc(MEMSRV_PID, SendReceive, sizeof(mem));
    
    /* Escribimos. */
    printf("Total:      %u KiB\r\n"
           "Available: %u KiB\r\n"
           "Using:     %u KiB\r\n",
           mem.bytes / 1024,
           mem.free / 1024,
           (mem.bytes - mem.free) / 1024);
    
    /* Listo. */
    return EXIT_SUCCESS;
}
