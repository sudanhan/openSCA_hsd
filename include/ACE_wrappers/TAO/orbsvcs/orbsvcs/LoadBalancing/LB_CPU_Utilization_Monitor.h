// -*- C++ -*-

//=============================================================================
/**
 *  @file LB_CPU_Utilization_Monitor.h
 *
 *  $Id: LB_CPU_Utilization_Monitor.h 935 2008-12-10 21:47:27Z mitza $
 *
 *  @author Jaiganesh Balasubramanian <jai@dre.vanderbilt.edu>
 *  @author Ossama Othman <ossama@uci.edu>
 */
//=============================================================================


#ifndef TAO_LB_CPU_UTILIZATION_MONITOR_H
#define TAO_LB_CPU_UTILIZATION_MONITOR_H

#include /**/ "ace/pre.h"

#include "orbsvcs/LoadBalancing/LoadBalancing_export.h"

# if !defined (ACE_LACKS_PRAGMA_ONCE)
#   pragma once
# endif /* ACE_LACKS_PRAGMA_ONCE */

#include "orbsvcs/CosLoadBalancingS.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/**
 * @class TAO_LB_CPU_Utilization_Monitor
 *
 * @brief LoadMonitor implementation that monitors the overall CPU
 *        load on a given host.
 *
 * Loads returned from this load monitor is the utilization of
 * CPU in the "form" of percentage.
 */
class TAO_LoadBalancing_Export TAO_LB_CPU_Utilization_Monitor
  : public virtual POA_CosLoadBalancing::LoadMonitor
{
public:

  /// Constructor
  /**
   * If no location is supplied the hostname or IP address is used by
   * default.
   */
  TAO_LB_CPU_Utilization_Monitor (const char * location_id = 0,
                                  const char * location_kind = 0);

  /**
   * @name CosLoadBalancing::LoadMonitor Methods
   *
   * Methods required by the CosLoadBalancing::LoadMonitor interface.
   */
  //@{

  /// Return the location at which the LoadMonitor resides.
  /**
   * The returned "Location" is a sequence of length 1.
   */
  virtual CosLoadBalancing::Location * the_location ();

  /// Return the average CPU load at the location which this
  /// LoadMonitor resides.
  /**
   * @return A "Load" sequence of length 1 that contains a LoadId
   *         equal to CosLoadBalancing::LoadAverage, and the average CPU
   *         load.
   */
  virtual CosLoadBalancing::LoadList * loads ();

  //@}

protected:

  /// Destructor
  /**
   * Protected destructor to enforce proper memory management through
   * reference counting.
   */
  ~TAO_LB_CPU_Utilization_Monitor (void);

private:

  /// The name of the location at which this LoadMonitor resides.
  CosLoadBalancing::Location location_;

};

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif  /* TAO_LB_CPU_UTILIZATION_MONITOR_H */
