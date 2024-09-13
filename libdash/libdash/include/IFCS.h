#ifndef IFCS_H_
#define IFCS_H_

#include "config.h"
#include "IMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class IFCS : public virtual IMPDElement
        {
            public:
                virtual ~IFCS(){}

                /**
                 *  Returns an unsigned integer that specifies the value of the StartTime which corresponds to the \c @t attribute. 
                 *  The value of this attribute minus the value of the @presentationTimeOffset specifies the MPD 
		 *   start time, in @timescale units, of the first sample in the alternative content section
		 *  The value of this attribute must be equal to or greater than the sum of the previous FCS element earliest presentat			ion time and the sum of the contiguous section duration.
                 */
                virtual uint64_t    GetStartTime    ()  const = 0;

                /**
                 *  Returns an integer that specifies the alternative content section duration in units of the value of the @timescale.
		 *If it is not present, the alternative content section lasts until the start of the next FCS element, or until the end 		of the Period or until the end of MPD duration, whichever occurs first in the timeline. \n\n
                 *  Duration corresponds to the \c \@d attribute.
                 */
                virtual uint64_t    GetDuration            ()  const = 0;
        };
    }
}

#endif /* IFCS_H_ */
