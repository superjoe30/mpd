/* the Music Player Daemon (MPD)
 * Copyright (C) 2003-2007 by Warren Dukes (warren.dukes@gmail.com)
 * This project's homepage is: http://www.musicpd.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MPD_LS_H
#define MPD_LS_H

#include "decoder_list.h"

#include <stdbool.h>

struct stat;
struct client;

const char *getSuffix(const char *utf8file);

/**
 * Checks whether the specified URI has a schema in the form
 * "scheme://".
 */
bool uri_has_scheme(const char *uri);

bool isRemoteUrl(const char *url);

const struct decoder_plugin *
hasMusicSuffix(const char *utf8file, unsigned int next);

void printRemoteUrlHandlers(struct client *client);

#endif