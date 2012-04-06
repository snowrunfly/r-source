/*
 *  R : A Computer Language for Statistical Data Analysis
 *  Copyright (C) 1998, 1999   Robert Gentleman, Ross Ihaka 
 *                             and the R Development Core Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *
 * Memory Allocation (garbage collected) --- INCLUDING S compatibility ---
 */

#ifndef MEMORY_H_
#define MEMORY_H_

char*	vmaxget(void);
void	vmaxset(char*);

void	gc(void);

void	call_R(char*, long, void**, char**, long*, char**, long, char**);
char*	R_alloc(long, int);
char*	S_alloc(long, int);
char*	S_realloc(char*, long, long, int);

/* C Memory Management Interface */
void	Init_C_alloc(void);
void	Reset_C_alloc(void);
char*	C_alloc(long, int);
void	C_free(char *);

#endif