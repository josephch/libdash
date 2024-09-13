/*
 * Event.h
 *****************************************************************************

 *****************************************************************************/

#ifndef EVENT_H_
#define EVENT_H_

#include "config.h"

#include "IEvent.h"
#include "AbstractMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class Event : public IEvent, public AbstractMPDElement
        {
            public:
                Event           ();
                virtual ~Event  ();

                const uint64_t                    GetPresentationTime   ()  const;
                const uint32_t                    GetDuration           ()  const;
                const uint32_t                    GetId                 ()  const;
		const std::map<std::string,std::string> GetRawAttributes()  const;

                void                              SetPresentationTime   (uint64_t presentationTime);
                void                              SetDuration           (uint32_t duration);
                void                              SetId                 (uint32_t id);
		void                              SetAttributes         (const std::map<std::string,std::string>& attributes);

            private:
                uint64_t presentationTime;
				uint32_t duration;
                uint32_t id;
		std::map<std::string,std::string> attributes;

        };
    }
}

#endif /* EVENT_H_ */
