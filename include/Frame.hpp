#pragma once

#include "CommonTypes.hpp"
#include <ctime>

class Frame
{
public:
    Frame(uint8 ID, FrameType FrameType, uint32 Data, std::time_t Timestamp);
    Frame();
    ~Frame();
    void displayFrame();
    const uint8 getID();
    const FrameType getFrameType();
    const uint32 getPayload();
    const std::tm* getTimeFromTimestamp();
    const std::time_t getTimestamp();

private:
    uint8 m_id;
    FrameType m_frame_type;
    uint32 m_payload;
    std::time_t m_timestamp;
};