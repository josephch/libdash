#ifndef LATENCY_H_
#define LATENCY_H_

#include "config.h"

#include "ILatency.h"
#include "AbstractMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class Latency : public ILatency, public AbstractMPDElement
        {
            public:
                Latency         ();
                virtual ~Latency();

                const uint32_t         GetTarget                 ()  const;
                const uint32_t         GetMax                    ()  const;
                const uint32_t         GetMin                    ()  const;

                void    SetTarget             (uint32_t target);
                void    SetMax                (uint32_t max);
                void    SetMin                (uint32_t min);
            private:
                uint32_t                        target;
                uint32_t                        max;
                uint32_t                        min;
        };
    }
}

#endif /* LATENCY_H_ */
