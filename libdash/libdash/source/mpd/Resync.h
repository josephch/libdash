#ifndef RESYNC_H_
#define RESYNC_H_

#include "config.h"

#include "IResync.h"
#include "AbstractMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class Resync : public IResync, public AbstractMPDElement
        {
            public:
                Resync          ();
                virtual ~Resync ();

                uint32_t                                    GetdT                ()  const;
                const std::string&                          GetType                     ()  const;

                void    SetType                     (const std::string &type);
                void    SetdT                (uint32_t dT);

            private:
                std::string                         type;
                uint32_t                            dT;
        };
    }
}

#endif /* RESYNC_H_ */
