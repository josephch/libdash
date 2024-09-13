#include "Latency.h"

using namespace dash::mpd;

Latency::Latency    () :
                target(0),
                max(0),
                min(0)
{
}
Latency::~Latency   ()
{
}

const uint32_t                                Latency::GetTarget                  ()  const
{   
    return this->target;
}
void                                    Latency::SetTarget                  (uint32_t target)
{   
    this->target = target;
}
const uint32_t                                Latency::GetMax                      ()  const
{
    return this->max;
}
void                                    Latency::SetMax                      (uint32_t max)
{
    this->max = max;
}
const uint32_t                                Latency::GetMin                      ()  const
{
    return this->min;
}
void                                    Latency::SetMin                      (uint32_t min)
{
    this->min = min;
}
