#pragma once

#include "CommonTypes.hpp"
#include "Frame.hpp"
#include <vector>

class Bus
{
public:
    explicit Bus(uint16 size = 100u);
    ~Bus();

    void reserveSpace(uint16 size);
    void addFrame(const Frame& frame);
    void displayFramesInBus();
    uint32 getVectorCapacity();
    const std::vector<Frame>& getFrames() const;
private:
    std::vector<Frame> m_frame_vector;
};