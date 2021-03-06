/*
 * Copyright (c) 2012, ETH Zurich.
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached LICENSE file.
 * If you do not find this file, copies can be found by writing to:
 * ETH Zurich D-INFK, Haldeneggsteig 4, CH-8092 Zurich. Attn: Systems Group.
 */

#include <assert.h>
#include <sys/uio.h>

/**
 * \brief Read a vector.
 */
ssize_t readv(int fd, const struct iovec *iov, int iovcnt)
{
    assert(!"NYI");
    return -1;
}
