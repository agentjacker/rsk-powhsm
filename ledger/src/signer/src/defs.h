/**
 * The MIT License (MIT)
 *
 * Copyright (c) 2021 RSK Labs Ltd
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef DEFS_H
#define DEFS_H

#include "apdu.h"

// Version and patchlevel
#define VERSION_MAJOR 0x03
#define VERSION_MINOR 0x00
#define VERSION_PATCH 0x01

// Instructions
#define INS_SIGN 0x02
#define INS_GET_PUBLIC_KEY 0x04
#define RSK_IS_ONBOARD 0x06
#define RSK_MODE_CMD 0x43

// Operations within instructions
#define P1_PATH 0x01
#define P1_BTC 0x02
#define P1_RECEIPT 0x04
#define P1_MERKLEPROOF 0x08
#define P1_SUCCESS 0x81

// App mode response for the mode command
#define RSK_MODE_APP 0x03

// Size constants
#define HASH_LEN 32
#define KEY_LEN 32
#define RSK_PATH_LEN 5
#define MAX_SIGNATURE_LEN 72

#endif // DEFS_H
