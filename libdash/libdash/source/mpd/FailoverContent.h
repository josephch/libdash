#ifndef FAILOVERCONTENT_H_
#define FAILOVERCONTENT_H_

#include "config.h"
#include "IFailoverContent.h"
#include "AbstractMPDElement.h"
#include "FCS.h"

namespace dash
{
    namespace mpd
    {
        class FailoverContent : public IFailoverContent, public AbstractMPDElement
        {
            public:
                FailoverContent();
                virtual ~FailoverContent();

                std::vector<IFCS *>&  GetFCS()  const;
                bool IsValid()  const;

                void    SetFCS   (FCS *fcs_el);
                void    SetValid (bool valid);

            protected:
                std::vector<IFCS *> fcs;
                bool valid;
        };
    }
}

#endif /* FAILOVERCONTENT_H_ */
