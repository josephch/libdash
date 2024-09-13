#ifndef IUTCTIMING_H_
#define IUTCTIMING_H_

#include "config.h"

#include "IMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class IUTCTiming : public virtual IMPDElement
        {
            public:
                virtual ~IUTCTiming(){}

                /**
                 *  Returns a reference to a string that specifies a URI to identify the scheme. \n
                 *  The semantics of this element are specific to the scheme specified by this attribute.
                 *  The \c \@schemeIdUri may be a URN or URL. When a URL is used, it should also contain a month-date in the form 
                 *  mmyyyy; the assignment of the URL must have been authorized by the owner of the domain name in that URL on 
                 *  or very close to that date, to avoid problems when domain names change ownership.
                 *  @return     a reference to a string
                 */
                virtual const std::string&      GetSchemeIdUri  () const = 0;
                
                /**
                 *  Returns a reference to a string that specifies the value for the descriptor element. \n
                 *  The value space and semantics must be defined by the owners of the scheme identified in the \c \@schemeIdUri attribute.
                 *  @return     a reference to a string
                 */
                virtual const std::string&      GetValue        () const = 0;
        };
    }
}

#endif /* IUTCTIMING_H_ */
