/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

#include "fdset.h"
#include "unit.h"

int socket_bind_supported(void);

/* Add BPF link fd created before daemon-reload or daemon-reexec.
 * FDs will be closed at the end of socket_bind_install. */
int socket_bind_add_initial_link_fd(Unit *u, int fd);

int socket_bind_install(Unit *u);

int serialize_socket_bind(Unit *u, FILE *f, FDSet *fds);