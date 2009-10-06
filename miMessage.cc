/*
  libqUtilities - Diverse Qt-classes and coserver base
  
  $Id$

  Copyright (C) 2006 met.no

  Contact information:
  Norwegian Meteorological Institute
  Box 43 Blindern
  0313 OSLO
  NORWAY
  email: diana@met.no
  
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
  
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/


#include <sstream>
#include <miMessage.h>
#include <QLetterCommands.h>
#include <iostream>

miMessage::miMessage()
{
  to = qmstrings::default_id;
}


miMessage::miMessage(int t, int f, const char * c, const char *d)
{
  to = t; 
  from = f; 
  command = c;
  description = d;
}



miString miMessage::content()
{
  int i;
  ostringstream os;
  os << "======================================" << endl
     << "from:        " << from                  << endl
     << "to:          " << to                    << endl
     << "commondesc:  " << commondesc            << endl
     << "common:      " << common                << endl
     << "description: " << description           << endl
     << "command:     " << command               << endl
     << (data.size() ? "DATA:"  : "NO DATA")     << endl;
  for (i = 0; i < data.size(); i++)
    os << i  << " > " << data[i] << endl; 
  os << "======================================" << endl;
  return os.str();
}