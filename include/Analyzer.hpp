#pragma once

#include "Frame.hpp"
#include <vector>


class Analyzer
{
public:
    Analyzer(const std::vector<Frame>& frames);
    ~Analyzer();

    uint16 analyzeDiag();
    uint16 analyzeInfo();
    uint16 analyzeError();
    void printSummary();
private:
    std::vector<Frame> m_frames;
};