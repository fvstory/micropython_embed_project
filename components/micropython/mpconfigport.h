/* This file is part of the MicroPython project, http://micropython.org/
 * The MIT License (MIT)
 * Copyright (c) 2022-2023 Damien P. George
 */

// Include common MicroPython embed configuration.
#include <port/mpconfigport_common.h>

// Use the minimal starting configuration (disables all optional features).
#define MICROPY_CONFIG_ROM_LEVEL                (MICROPY_CONFIG_ROM_LEVEL_MINIMUM)

// MicroPython base configuration.
#define MICROPY_ENABLE_COMPILER                 (1)
#define MICROPY_ENABLE_GC                       (1)
#define MICROPY_PY_GC                           (1)
//MicroPython optional configuration.
#define MICROPY_GCREGS_SETJMP                   (1)
//#define MICROPY_PERSISTENT_CODE_LOAD            (1)
//#define MICROPY_OBJ_REPR                        (MICROPY_OBJ_REPR_A)
//#define MICROPY_NLR_SETJMP                      (1)
//#define MICROPY_ENABLE_EMERGENCY_EXCEPTION_BUF  (1)
//#define MICROPY_LONGINT_IMPL                    (MICROPY_LONGINT_IMPL_MPZ)
//#define MICROPY_ERROR_REPORTING                 (MICROPY_ERROR_REPORTING_NORMAL)