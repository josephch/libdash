#include "FCS.h"

using namespace dash::mpd;

FCS::FCS    ()  :
    startTime(0),
    duration(0)
{
}
FCS::~FCS   ()
{
}

uint64_t    FCS::GetStartTime     ()  const
{
    return this->startTime;
}
void        FCS::SetStartTime     (uint64_t startTime) 
{
    this->startTime = startTime;
}
uint64_t    FCS::GetDuration             ()  const
{
    return this->duration;
}
void        FCS::SetDuration             (uint64_t duration) 
{
    this->duration = duration;
}
