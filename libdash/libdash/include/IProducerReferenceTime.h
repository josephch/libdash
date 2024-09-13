#ifndef IPRODUCERREFERENCETIME_H_
#define IPRODUCERREFERENCETIME_H_

#include "config.h"

#include "IUTCTiming.h"

namespace dash
{
    namespace mpd
    {
        class IProducerReferenceTime : public virtual IMPDElement
        {
            public:
                virtual ~IProducerReferenceTime(){}

                virtual const std::vector<IUTCTiming *>&              GetUTCTimings                 ()  const = 0;
                
                virtual const std::string&                            GetId                         ()  const = 0;
                virtual const std::string&                            GetType                       ()  const = 0;
                virtual const std::string&                            GetWallClockTime              ()  const = 0;
                virtual uint32_t                                      GetPresentationTime           ()  const = 0;
                virtual bool                                          GetInband                     ()  const = 0;
        };
    }
}

#endif /* IPRODUCERREFERENCETIME_H_ */
