#ifndef IFAILOVERCONTENT_H_
#define IFAILOVERCONTENT_H_

#include "config.h"
#include "IMPDElement.h"
#include "IFCS.h"

namespace dash
{
    namespace mpd
    {
        class IFailoverContent : public virtual IMPDElement
        {
            public:
                virtual ~IFailoverContent(){}

                /**
                 *  Returns a pointer to a vector of dash::mpd::FCS objects, which contains the failover content.
                 *  @return     a pointer to a vector of dash::mpd::FCS objects
                 */
                virtual std::vector<IFCS *>&          GetFCS           ()  const = 0;
                
                /**
                 *  Returns a boolean that indicates whether the corresponding data results is a valid or not
                 *  @return     a bool value
                 */
                virtual bool                          IsValid          ()  const = 0;
        };
    }
}

#endif /* IFAILOVERCONTENT_H_ */
