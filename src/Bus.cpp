#include "../include/Bus.hpp"


Bus::Bus(uint16 size)
{
    m_frame_vector.reserve(size);
}

Bus::~Bus()
{

}

void Bus::reserveSpace(uint16 size)
{
    m_frame_vector.reserve(size);
}

void Bus::addFrame(const Frame& frame)
{
    m_frame_vector.push_back(frame);
}

void Bus::displayFramesInBus()
{
    const char* FrameTypeTab[] = {"DIAG", "INFO", "ERROR"};

    for (int i = 0; i < m_frame_vector.size(); ++i)
    {
        std::cout << "Element number " << i << " in vector:" << std::endl <<
            "m_id = " << +m_frame_vector[i].getID() << std::endl <<
            "m_frame_type = " << FrameTypeTab[m_frame_vector[i].getFrameType()] << std::endl <<
            "m_payload = " << m_frame_vector[i].getPayload() << std::endl <<
            "m_timestamp = " << std::asctime(m_frame_vector[i].getTimeFromTimestamp()) << std::endl <<
            std::endl;
    }
}

uint32 Bus::getVectorCapacity()
{
    return m_frame_vector.capacity();
}

const std::vector<Frame>& Bus::getFrames() const
{
    return m_frame_vector;
}