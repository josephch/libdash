#include "ServiceDescription.h"

using namespace dash::mpd;

ServiceDescription::ServiceDescription  ()
{
}
ServiceDescription::~ServiceDescription ()
{
	for(size_t i = 0; i < this->scopes.size(); i++)
        	delete(this->scopes.at(i));
    	for(size_t i = 0; i < this->latencys.size(); i++)
        	delete(this->latencys.at(i));
    	for(size_t i = 0; i < this->playbackRates.size(); i++)
        	delete(this->playbackRates.at(i));
}


const std::string&                  ServiceDescription::GetId                   ()  const
{
    return this->id;
}
void                                ServiceDescription::SetId                   (const std::string& id)
{
    this->id = id;
}

const std::vector<IScope *>&      ServiceDescription::GetScopes                 ()  const
{
    return (std::vector<IScope *> &) this->scopes;
}
void                                ServiceDescription::AddScope                (Scope *scope)
{
    this->scopes.push_back(scope);
}

const std::vector<ILatency *>&      ServiceDescription::GetLatencys             ()  const
{
    return (std::vector<ILatency *> &) this->latencys;
}
void                                ServiceDescription::AddLatency              (Latency *latency)
{
    this->latencys.push_back(latency);
}

const std::vector<IPlaybackRate *>&      ServiceDescription::GetPlaybackRates   ()  const
{
    return (std::vector<IPlaybackRate *> &) this->playbackRates;
}
void                                ServiceDescription::AddPlaybackRate          (PlaybackRate *playbackRate)
{
    this->playbackRates.push_back(playbackRate);
}
