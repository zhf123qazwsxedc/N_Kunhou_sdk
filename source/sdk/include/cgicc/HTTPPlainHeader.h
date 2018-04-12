/* -*-mode:c++; c-file-style: "gnu";-*- */
/*
 *  $Id: HTTPPlainHeader.h,v 1.8 2014/04/23 20:55:08 sebdiaz Exp $
 *
 *  Copyright (C) 1996 - 2004 Stephen F. Booth <sbooth@gnu.org>
 *                       2007 Sebastien DIAZ <sebastien.diaz@gmail.com>
 *  Part of the GNU cgicc library, http://www.gnu.org/software/cgicc
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 3 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA 
 */

#ifndef _HTTPPLAINHEADER_H_
#define _HTTPPLAINHEADER_H_ 

/*! \file HTTPPlainHeader.h
 * \brief Shortcut to HTTPContentHeader for \c text/plain
 * 
 */

#include "HTTPContentHeader.h"

namespace cgicc {
  
  // ============================================================
  // Class HTTPPlainHeader
  // ============================================================
  /*! \class HTTPPlainHeader HTTPPlainHeader.h cgicc/HTTPPlainHeader.h
   * \brief Shortcut to HTTPContentHeader for \c text/html
   *
   */
  class CGICC_API HTTPPlainHeader : public HTTPContentHeader 
  {
  public:
    /*! \brief Create a new \c text/plain header  */
    HTTPPlainHeader();
    
    /*! \brief Destructor */
    virtual ~HTTPPlainHeader();
  };
  
} // namespace cgicc

#endif /* ! _HTTPPLAINHEADER_H_ */
