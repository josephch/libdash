#ifndef IRESYNC_H_
#define IRESYNC_H_

#include "config.h"

#include "IMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class IResync : public virtual IMPDElement
        {
            public:
                virtual ~IResync(){}

                virtual uint32_t                                GetdT                   ()  const = 0;
                virtual const std::string&                      GetType                   ()  const = 0;
        };
    }
}

#endif /* IRESYNC_H_ */
