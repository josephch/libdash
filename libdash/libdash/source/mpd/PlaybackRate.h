#ifndef PLAYBACKRATE_H_
#define PLAYBACKRATE_H_

#include "config.h"

#include "IPlaybackRate.h"
#include "AbstractMPDElement.h"

namespace dash
{
    namespace mpd
    {
        class PlaybackRate : public IPlaybackRate, public AbstractMPDElement
        {
            public:
                PlaybackRate         ();
                virtual ~PlaybackRate();

                const double         GetMax                    ()  const;
                const double         GetMin                    ()  const;

                void    SetMax                (double max);
                void    SetMin                (double min);
            private:
                double                        max;
                double                        min;
        };
    }
}

#endif /* PLAYBACKRATE_H_ */
