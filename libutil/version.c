/*
 * Copyright (c) 1999, 2000, 2001, 2007
 *	Tama Communications Corporation
 *
 * This file is part of GNU GLOBAL.
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

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include <stdio.h>
#ifdef STDC_HEADERS
#include <stdlib.h>
#endif
#ifdef USE_SQLITE3
#include "sqlite3.h"
#endif
#include "version.h"

static const char *copy = "\
Copyright (c) %s Tama Communications Corporation\n\
License GPLv3+: GNU GPL version 3 or later <http://www.gnu.org/licenses/gpl.html>\n\
This is free software; you are free to change and redistribute it.\n\
There is NO WARRANTY, to the extent permitted by law.\n\
";
static const char *sysname = "Global";
/**
 * get_version: get version string.
 */
char *
get_version(void)
{
	return VERSION;
}
/**
 * version: print version information.
 *
 *	@param[in]	name
 *	@param[in]	verbose
 */
void
version(const char *name, const int verbose)
{
	if (name == NULL)
		name = progname;
	/*
	 * if the -q option is not specified then always verbose
	 * according to the GNU coding standard
	 */
	if (qflag)
		fprintf(stdout, "%s\n", VERSION);
	else {
		fprintf(stdout, "%s (%s) %s\n", name, sysname, VERSION);
		fprintf(stdout, "Powered by Berkeley DB 1.85");
#ifdef USE_SQLITE3
		fprintf(stdout, " and SQLite3 %s", sqlite3_version);
#endif
		fprintf(stdout, ".\n");
		fprintf(stdout, copy, COPYRIGHT_YEAR);
	}
	exit(0);
}
