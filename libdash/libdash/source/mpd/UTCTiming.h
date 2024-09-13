#ifndef UTCTIMING_H_
#define UTCTIMING_H_

#include "config.h"

#include "IUTCTiming.h"
#include "AbstractMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class UTCTiming : public IUTCTiming, public AbstractMPDElement
        {
            public:
                UTCTiming          ();
                virtual ~UTCTiming ();

                const std::string&      GetSchemeIdUri  () const;
                const std::string&      GetValue        () const;

                void    SetValue        (const std::string& value);
                void    SetSchemeIdUri  (const std::string& schemeIdUri);

            private:
                std::string  schemeIdUri;
                std::string  value;
        };
    }
}

#endif /* UTCTIMING_H_ */
