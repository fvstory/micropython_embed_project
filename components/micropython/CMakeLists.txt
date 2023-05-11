# This file is part of the MicroPython project, http://micropython.org/
# The MIT License (MIT)
# Copyright (c) 2022-2023 Damien P. George
#
# This is a very simple makefile that demonstrates how to build the embed port.
# All it needs to do is build all *.c files in the micropython_embed directory.
# This makefile would be replaced with your custom build system.
file(GLOB_RECURSE SOURCES   ./src/*.c
                            ./micropython_embed/port/*.c
                            ./micropython_embed/py/*.c
                            ./micropython_embed/shared/runtime/*.c)

idf_component_register(SRCS ${SOURCES}
                    INCLUDE_DIRS "."
                                 "./include"
                                 "./micropython_embed")
