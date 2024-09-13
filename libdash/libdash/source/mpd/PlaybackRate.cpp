#include "PlaybackRate.h"

using namespace dash::mpd;

PlaybackRate::PlaybackRate    () :
                max(0),
                min(0)
{
}
PlaybackRate::~PlaybackRate   ()
{
}

const double                                PlaybackRate::GetMax                      ()  const
{
    return this->max;
}
void                                    PlaybackRate::SetMax                      (double max)
{
    this->max = max;
}
const double                                PlaybackRate::GetMin                      ()  const
{
    return this->min;
}
void                                    PlaybackRate::SetMin                      (double min)
{
    this->min = min;
}
