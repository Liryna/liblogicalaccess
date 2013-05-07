/**
 * \file Location.cpp
 * \author Maxime C. <maxime-dev@islog.com>
 * \brief Base class location.
 */

#include "logicalaccess/Cards/Location.h"
#include <time.h>
#include <stdlib.h>

namespace LOGICALACCESS
{
	bool Location::operator==(const Location& location) const
	{
		return (typeid(location) == typeid(*this));
	}
}
