#ifndef ISERVICEDESCRIPTION_H_
#define ISERVICEDESCRIPTION_H_

#include "config.h"

#include "IMPDElement.h"
#include "IScope.h"
#include "ILatency.h"
#include "IPlaybackRate.h"

namespace dash
{
    namespace mpd
    {
        class IServiceDescription : public virtual IMPDElement
        {
            public:
                virtual ~IServiceDescription(){}
                virtual const std::string&                    GetId                 ()  const = 0;
                virtual const std::vector<IScope *>&          GetScopes             ()  const = 0;
                virtual const std::vector<ILatency *>&        GetLatencys           ()  const = 0;
                virtual const std::vector<IPlaybackRate *>&   GetPlaybackRates      ()  const = 0;

        };
    }
}

#endif /* ISERVICEDESCRIPTION_H_ */
