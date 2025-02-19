// -*- C++ -*-


//=============================================================================
/**
 *  @file    WstringDef_i.h
 *
 *  $Id: WstringDef_i.h 1861 2011-08-31 16:18:08Z mesnierp $
 *
 *  WstringDef servant class.
 *
 *
 *  @author Jeff Parsons <parsons@cs.wustl.edu>
 */
//=============================================================================


#ifndef TAO_WSTRINGDEF_I_H
#define TAO_WSTRINGDEF_I_H

#include "orbsvcs/IFRService/IDLType_i.h"
#include "orbsvcs/IFRService/ifr_service_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/**
 * @class TAO_WstringDef_i
 *
 * @brief TAO_WstringDef_i
 *
 * Represents a bounded wstring (unbounded wstrings
 * are included in PrimitiveDef).
 */
class TAO_IFRService_Export TAO_WstringDef_i : public virtual TAO_IDLType_i
{
public:
  /// Constructor.
  TAO_WstringDef_i (TAO_Repository_i *repo);

  /// Destructor.
  virtual ~TAO_WstringDef_i (void);

  /// Return our definition kind.
  virtual CORBA::DefinitionKind def_kind ();

  /// Remove the repository entry.
  virtual void destroy ();

  virtual void destroy_i ();

  /// From IDLType_i's virtual function.
  virtual CORBA::TypeCode_ptr type ();

  /// From IDLType_i's virtual function.
  virtual CORBA::TypeCode_ptr type_i ();

  virtual CORBA::ULong bound ();

  CORBA::ULong bound_i ();

  virtual void bound (CORBA::ULong bound);

  void bound_i (CORBA::ULong bound);
};

TAO_END_VERSIONED_NAMESPACE_DECL

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#endif /* TAO_WSTRINGDEF_I_H */

