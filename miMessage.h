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


#ifndef _miMessage_h
#define _miMessage_h


/* Created by DNMI/FoU/PU: k.roysland@dnmi.no
   at Tue Mar  5 10:20:47 2002 */

#include <puTools/miString.h>
#include <vector>

class miMessage {
public:
  miMessage();
  miMessage(int , int , const char *,const char* );

  int to,from;
  miutil::miString command,description,commondesc,common,clientType,co;
  std::vector <miutil::miString> data;

  miutil::miString content();

};

#endif
