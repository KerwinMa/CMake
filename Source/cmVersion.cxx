/*=========================================================================

  Program:   CMake - Cross-Platform Makefile Generator
  Module:    $RCSfile$
  Language:  C++
  Date:      $Date$
  Version:   $Revision$

  Copyright (c) 2002 Kitware, Inc., Insight Consortium.  All rights reserved.
  See Copyright.txt or http://www.cmake.org/HTML/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even 
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR 
     PURPOSE.  See the above copyright notices for more information.

=========================================================================*/
#include "cmVersion.h"

#include "cmVersionMacros.h"

unsigned int cmVersion::GetMajorVersion() { return CMake_VERSION_MAJOR; }
unsigned int cmVersion::GetMinorVersion() { return CMake_VERSION_MINOR; }
unsigned int cmVersion::GetPatchVersion() { return CMake_VERSION_PATCH; }

const char* cmVersion::GetCMakeVersion()
{
  return CMake_VERSION_FULL CMake_VERSION_RC_SUFFIX;
}
