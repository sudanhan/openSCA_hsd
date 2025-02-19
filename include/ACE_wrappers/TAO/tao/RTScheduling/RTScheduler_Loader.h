// -*- C++ -*-

//=============================================================================
/**
 *  @file    RTScheduler_Loader.h
 *
 *  $Id: RTScheduler_Loader.h 1861 2011-08-31 16:18:08Z mesnierp $
 *
 *   Header file for Loading RTScheduler.
 *
 *
 *  @author  Yamuna Krishnamurthy <yamuna@oomworks.com>
 */
//=============================================================================

#ifndef TAO_RTSCHEDULER_LOADER_H
#define TAO_RTSCHEDULER_LOADER_H
#include /**/ "ace/pre.h"

#include "tao/RTScheduling/rtscheduler_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Versioned_Namespace.h"

#include "ace/Service_Object.h"
#include "ace/Service_Config.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

class TAO_RTScheduler_Export TAO_RTScheduler_Loader : public ACE_Service_Object
{
public:
  /// Constructor.
  TAO_RTScheduler_Loader (void);

  /// Destructor.
  virtual ~TAO_RTScheduler_Loader (void);

  /// Initialize the RTScheduler loader hooks.
  virtual int init (int argc, ACE_TCHAR* []);

private:
  /// Set to true after init is called.
  bool initialized_;
};

ACE_STATIC_SVC_DECLARE_EXPORT (TAO_RTScheduler, TAO_RTScheduler_Loader)
ACE_FACTORY_DECLARE (TAO_RTScheduler, TAO_RTScheduler_Loader)

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"
#endif /* TAO_RTSCHEDULER_LOADER_H */
