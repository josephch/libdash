#ifndef SERVICEDESCRIPTION_H_
#define SERVICEDESCRIPTION_H_

#include "config.h"

#include "IServiceDescription.h"
#include "AbstractMPDElement.h"
#include "Scope.h"
#include "Latency.h"
#include "PlaybackRate.h"

namespace dash
{
    namespace mpd
    {
        class ServiceDescription : public IServiceDescription, public AbstractMPDElement
        {
            public:
                ServiceDescription          ();
                virtual ~ServiceDescription ();

                const std::string&                    GetId               ()  const;
                const std::vector<IScope *>&          GetScopes             ()  const;
				const std::vector<ILatency *>&        GetLatencys           ()  const;
				const std::vector<IPlaybackRate *>&   GetPlaybackRates      ()  const;

                void    SetId                         (const std::string& id);
				void    AddScope                      (Scope *scope);
				void    AddLatency                    (Latency *latency);
				void    AddPlaybackRate               (PlaybackRate *playbackRate);
	   private:
                std::string                           id;
                std::vector<IScope *>                 scopes;
                std::vector<ILatency *>               latencys;
                std::vector<IPlaybackRate *>          playbackRates;

        };
    }
}

#endif /* SERVICEDESCRIPTION_H_ */
