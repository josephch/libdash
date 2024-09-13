#ifndef SCOPE_H_
#define SCOPE_H_

#include "config.h"

#include "IScope.h"
#include "AbstractMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class Scope : public IScope, public AbstractMPDElement
        {
            public:
                Scope         ();
                virtual ~Scope();
        };
    }
}

#endif /* SCOPE_H_ */
