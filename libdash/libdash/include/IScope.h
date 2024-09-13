#ifndef ISCOPE_H_
#define ISCOPE_H_

#include "config.h"

#include "IMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class IScope : public virtual IMPDElement
        {
            public:
                virtual ~IScope(){}
        };
    }
}

#endif /* ISCOPE_H_ */
