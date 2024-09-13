#ifndef IPLAYBACKRATE_H_
#define IPLAYBACKRATE_H_

#include "config.h"

#include "IMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class IPlaybackRate : public virtual IMPDElement
        {
            public:
                virtual ~IPlaybackRate(){}

                virtual const double         GetMax                    ()  const = 0;
                virtual const double         GetMin                    ()  const = 0;
        };
    }
}

#endif /* IPLAYBACKRATE_H_ */
