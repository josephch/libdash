#include "UTCTiming.h"

using namespace dash::mpd;

UTCTiming::UTCTiming  () :
            schemeIdUri (""),
            value       ("")
{
}
UTCTiming::~UTCTiming ()
{
}
const std::string&  UTCTiming::GetSchemeIdUri  ()  const
{
    return this->schemeIdUri;
}
void                UTCTiming::SetSchemeIdUri  (const std::string& schemeIdUri) 
{
    this->schemeIdUri = schemeIdUri;
}
const std::string&  UTCTiming::GetValue        ()  const
{
    return this->value;
}
void                UTCTiming::SetValue        (const std::string& value) 
{
    this->value = value;
}
