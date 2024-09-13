#include "Resync.h"

using namespace dash::mpd;

Resync::Resync  () :
                type(""),
                dT       (0)
{
}
Resync::~Resync ()
{
}

const std::string&                          Resync::GetType                       () const
{
    return this->type;
}
void                                        Resync::SetType                       (const std::string &type)
{
    this->type = type;
}
uint32_t                                    Resync::GetdT                () const
{
    return this->dT;
}
void                                        Resync::SetdT                (uint32_t dT)
{
    this->dT = dT;
}
