#pragma once

#include <iostream>

typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned int        uint32;
typedef unsigned long long  uint64;

enum FrameType
{
    DIAG,
    INFO,
    ERROR,
    LAST_FRAME_TYPE = ERROR
};