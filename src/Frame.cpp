#include "../include/Frame.hpp"

Frame::Frame(uint8 ID, FrameType FrameType, uint32 Data, std::time_t Timestamp) : 
    m_id(ID), 
    m_frame_type(FrameType),
    m_payload(Data),
    m_timestamp(Timestamp)
{

}

Frame::Frame()
{
    m_id = 0x1;
    m_frame_type = DIAG;
    m_payload = 123;
    std::time(&m_timestamp);
}

Frame::~Frame()
{
    
}

void Frame::displayFrame()
{
    const char* FrameTypeTab[] = {"DIAG", "INFO", "ERROR"};

    std::cout << "m_id = " << +m_id << std::endl <<
                "m_frame_type = " << FrameTypeTab[m_frame_type] << std::endl <<
                "m_payload = " << m_payload << std::endl <<
                "m_timestamp = " << std::asctime(std::localtime(&m_timestamp)) << std::endl <<
                std::endl;
}

const uint8 Frame::getID()
{
    return m_id;
}

const FrameType Frame::getFrameType()
{
    return m_frame_type;
}

const uint32 Frame::getPayload()
{
    return m_payload;
}

const std::tm* Frame::getTimeFromTimestamp()
{
    return std::localtime(&m_timestamp);
}

const std::time_t Frame::getTimestamp()
{
    return m_timestamp;
}