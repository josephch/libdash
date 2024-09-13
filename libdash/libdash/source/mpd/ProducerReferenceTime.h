#ifndef PRODUCERREFERENCETIME_H_
#define PRODUCERREFERENCETIME_H_

#include "config.h"

#include "IProducerReferenceTime.h"
#include "UTCTiming.h"

namespace dash
{
    namespace mpd
    {
        class ProducerReferenceTime : public IProducerReferenceTime, public AbstractMPDElement
        {
            public:
                ProducerReferenceTime          ();
                virtual ~ProducerReferenceTime ();

                const std::vector<IUTCTiming *>&              GetUTCTimings                 ()  const;
                const std::string&                            GetId                         ()  const;
                const std::string&                            GetType                       ()  const;
                const std::string&                            GetWallClockTime              ()  const;
                uint32_t                                      GetPresentationTime           ()  const;
                bool                                          GetInband                     ()  const;

                void    AddUTCTiming                          (UTCTiming *utcTiming);
                void    SetId                                 (const std::string &id);
                void    SetType                               (const std::string &type);
                void    SetWallClockTime                      (const std::string &wallClockTime);
                void    SetPresentationTime                   (uint32_t presentationTime);
                void    SetInband                             (bool inband);

            private:
                std::vector<IUTCTiming *>                      utcTimings;
                std::string                                    id;
                std::string                                    type;
                std::string                                    wallClockTime;
                uint32_t                                       presentationTime;
                bool                                           inband;
        };
    }
}

#endif /* PRODUCERREFERENCETIME_H_ */
