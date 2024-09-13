/*
 * EventStream.h
 *****************************************************************************

 *****************************************************************************/

#ifndef EVENTSTREAM_H_
#define EVENTSTREAM_H_

#include "config.h"

#include "IEventStream.h"
#include "AbstractMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class EventStream : public IEventStream, public AbstractMPDElement
        {
            public:
                EventStream           ();
                virtual ~EventStream  ();

                const std::vector<IEvent *>&    GetEvents       ()  const;
                const std::string&              GetXlinkHref    ()  const;
                const std::string&              GetXlinkActuate ()  const;
                const std::string&              GetSchemeIdUri  ()  const;
                const std::string&              GetValue        ()  const;
                const uint32_t                  GetTimescale    ()  const;
		const std::map<std::string,std::string> GetRawAttributes()  const;

                void    AddEvent                (IEvent *event);
                void    SetXlinkHref            (const std::string& xlinkHref);
                void    SetXlinkActuate         (const std::string& xlinkActuate);
                void    SetSchemeIdUri          (const std::string& schemeIdUri);
                void    SetValue                (const std::string& value);
                void    SetTimescale            (uint32_t timescale);
		void    SetAttributes           (const std::map<std::string,std::string>& attributes);

            private:
                std::vector<IEvent *>  events;
                std::string            xlinkHref;
                std::string            xlinkActuate;
                std::string            schemeIdUri;
                std::string            value;
                uint32_t               timescale;
		std::map<std::string,std::string> attributes;
        };
    }
}

#endif /* EVENTSTREAM_H_ */
