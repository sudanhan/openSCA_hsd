// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.0a
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

#include "WStringSeqA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/alias_typecode.cpp:50



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_defn.cpp:460


#ifndef _TAO_TYPECODE_CORBA_WStringSeq_GUARD
#define _TAO_TYPECODE_CORBA_WStringSeq_GUARD


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        CORBA_WStringSeq_0 (
          ::CORBA::tk_sequence,
          &CORBA::_tc_wstring,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_CORBA_WStringSeq_0 =
        &CORBA_WStringSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_CORBA_WStringSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_WStringSeq (
    ::CORBA::tk_alias,
    "IDL:omg.org/CORBA/WStringSeq:1.0",
    "WStringSeq",
    &TAO::TypeCode::tc_CORBA_WStringSeq_0);
  

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_WStringSeq =
    &_tao_tc_CORBA_WStringSeq;
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_sequence/any_op_cs.cpp:46



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CORBA
{
  
  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::CORBA::WStringSeq &_tao_elem
    )
  {
    if (0 == &_tao_elem) // Trying to de-reference NULL object
      _tao_any <<= static_cast< ::CORBA::WStringSeq *>( 0 ); // Use non-copying insertion of a NULL
    else
      TAO::Any_Dual_Impl_T< ::CORBA::WStringSeq>::insert_copy (
          _tao_any,
          ::CORBA::WStringSeq::_tao_any_destructor,
          ::CORBA::_tc_WStringSeq,
          _tao_elem
        );
  }

  // Non-copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::CORBA::WStringSeq *_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::CORBA::WStringSeq>::insert (
        _tao_any,
        ::CORBA::WStringSeq::_tao_any_destructor,
        ::CORBA::_tc_WStringSeq,
        _tao_elem
      );
  }

  // Extraction to non-const pointer (deprecated).
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::CORBA::WStringSeq *&_tao_elem
    )
  {
    return _tao_any >>= const_cast<
        const ::CORBA::WStringSeq *&> (
        _tao_elem
      );
  }

  // Extraction to const pointer.
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      const ::CORBA::WStringSeq *&_tao_elem
    )
  {
    return
      TAO::Any_Dual_Impl_T< ::CORBA::WStringSeq>::extract (
          _tao_any,
          ::CORBA::WStringSeq::_tao_any_destructor,
          ::CORBA::_tc_WStringSeq,
          _tao_elem
        );
  }
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const CORBA::WStringSeq &_tao_elem
  )
{
  if (0 == &_tao_elem) // Trying to de-reference NULL object
    _tao_any <<= static_cast<CORBA::WStringSeq *>( 0 ); // Use non-copying insertion of a NULL
  else
    TAO::Any_Dual_Impl_T<CORBA::WStringSeq>::insert_copy (
        _tao_any,
        CORBA::WStringSeq::_tao_any_destructor,
        CORBA::_tc_WStringSeq,
        _tao_elem
      );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    CORBA::WStringSeq *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CORBA::WStringSeq>::insert (
      _tao_any,
      CORBA::WStringSeq::_tao_any_destructor,
      CORBA::_tc_WStringSeq,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    CORBA::WStringSeq *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const CORBA::WStringSeq *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const CORBA::WStringSeq *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CORBA::WStringSeq>::extract (
        _tao_any,
        CORBA::WStringSeq::_tao_any_destructor,
        CORBA::_tc_WStringSeq,
        _tao_elem
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


