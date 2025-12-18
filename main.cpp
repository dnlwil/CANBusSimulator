#include "CommonTypes.hpp"
#include "include/Frame.hpp"
#include "include/Bus.hpp"
#include "include/Analyzer.hpp"
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <thread>
#include <chrono>
#include <climits>

#define NUMBER_OF_FRAMES 99u

int main(void)
{
    Bus bus(NUMBER_OF_FRAMES);

    srand(time(0));
    
    for(int i = 0; i < bus.getVectorCapacity(); ++i)
    {
        uint8 id = rand() % CHAR_MAX;
        FrameType frame_type = (FrameType)(rand() % (LAST_FRAME_TYPE+1));
        uint32 payload = rand() % INT_MAX;
        std::time_t timestamp = std::time(0);

        Frame frame(id, frame_type, payload, timestamp);
        bus.addFrame(frame);
        std::this_thread::sleep_for(std::chrono::microseconds(1000));
    }

    bus.displayFramesInBus();

    Analyzer analyzer = Analyzer(bus.getFrames());

    analyzer.printSummary();

    return 0;
}