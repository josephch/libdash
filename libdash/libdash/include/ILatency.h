#ifndef ILATENCY_H_
#define ILATENCY_H_

#include "config.h"

#include "IMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class ILatency : public virtual IMPDElement
        {
            public:
                virtual ~ILatency(){}

                virtual const uint32_t         GetTarget                 ()  const = 0;
                virtual const uint32_t         GetMax                    ()  const = 0;
                virtual const uint32_t         GetMin                    ()  const = 0;
        };
    }
}

#endif /* ILATENCY_H_ */
