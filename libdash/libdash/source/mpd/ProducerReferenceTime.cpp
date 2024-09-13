#include "ProducerReferenceTime.h"

using namespace dash::mpd;

ProducerReferenceTime::ProducerReferenceTime  ()
{
}
ProducerReferenceTime::~ProducerReferenceTime ()
{
    for(size_t i = 0; i < this->utcTimings.size(); i++)
        delete(this->utcTimings.at(i));
}

const std::vector<IUTCTiming *>&              ProducerReferenceTime::GetUTCTimings                 () const
{
    return (std::vector<IUTCTiming *> &) this->utcTimings;
}
void                                        ProducerReferenceTime::AddUTCTiming                  (UTCTiming *utcTiming)
{
    this->utcTimings.push_back(utcTiming);
}

const std::string&                            ProducerReferenceTime::GetId                         ()  const
{
	return this->id;
}
void    ProducerReferenceTime::SetId                                 (const std::string &id)
{
	this->id = id;
}
const std::string&                            ProducerReferenceTime::GetType                       ()  const
{
    return this->type;
}
void    ProducerReferenceTime::SetType                               (const std::string &type)
{
	this->type = type;
}
const std::string&                            ProducerReferenceTime::GetWallClockTime              ()  const
{
   return this->wallClockTime;
}
void    ProducerReferenceTime::SetWallClockTime                      (const std::string &wallClockTime)
{
		this->wallClockTime = wallClockTime;
}
uint32_t                                      ProducerReferenceTime::GetPresentationTime           ()  const
{
   return this->presentationTime;
}
void    ProducerReferenceTime::SetPresentationTime                   (uint32_t presentationTime)
{
	this->presentationTime = presentationTime;
}
bool                                          ProducerReferenceTime::GetInband                     ()  const
{
   return this->inband;
}
void    ProducerReferenceTime::SetInband                             (bool inband)
{
	this->inband = inband;
}