#ifndef FCS_H_
#define FCS_H_

#include "config.h"
#include "IFCS.h"
#include "AbstractMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class FCS : public IFCS, public AbstractMPDElement
        {
            public:
                FCS             ();
                virtual ~FCS    ();

                uint64_t    GetStartTime    ()  const;
                uint64_t    GetDuration     ()  const;

                void    SetStartTime    (uint64_t startTime);
                void    SetDuration     (uint64_t duration);

            private:
                uint64_t    startTime;
                uint64_t    duration;
        };
    }
}

#endif /*IFCS_H_*/
