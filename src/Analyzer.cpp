#include "../include/CommonTypes.hpp"
#include "../include/Analyzer.hpp"

Analyzer::Analyzer(const std::vector<Frame>& frames) :
    m_frames(frames)
{

}

Analyzer::~Analyzer(){}

uint16 Analyzer::analyzeDiag()
{
    uint16 number_of_frames = 0u;

    for(int i = 0; i < m_frames.size(); ++i)
    {
        if (m_frames[i].getFrameType() != DIAG)
        {
            continue;
        }
        else
        {
            number_of_frames++;
        }
    }
    //std::cout << "Number of DIAG frames: " << number_of_frames << std::endl;
    
    return number_of_frames;
}

uint16 Analyzer::analyzeInfo()
{
    uint16 number_of_frames = 0u;

    for(int i = 0; i < m_frames.size(); ++i)
    {
        if (m_frames[i].getFrameType() != INFO)
        {
            continue;
        }
        else
        {
            number_of_frames++;
        }
    }
    //std::cout << "Number of INFO frames: " << number_of_frames << std::endl;
    
    return number_of_frames;
}

uint16 Analyzer::analyzeError()
{
    uint16 number_of_frames = 0u;

    for(int i = 0; i < m_frames.size(); ++i)
    {
        if (m_frames[i].getFrameType() != ERROR)
        {
            continue;
        }
        else
        {
            number_of_frames++;
        }
    }
    //std::cout << "Number of ERROR frames: " << number_of_frames << std::endl;

    return number_of_frames;
}

void Analyzer::printSummary()
{
    uint16 numberOfDiag = analyzeDiag();
    uint16 numberOfInfo = analyzeInfo();
    uint16 numberOfErrors = analyzeError();

    std::cout << "================ Summary ================" << std::endl;
    std::cout << "Number of DIAG frames: " << numberOfDiag << std::endl;
    std::cout << "Number of INFO frames: " << numberOfInfo << std::endl;
    std::cout << "Number of ERROR frames: " << numberOfErrors << std::endl;
    std::cout << "=========================================" << std::endl;
}