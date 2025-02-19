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

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:150

#ifndef _TAO_IDL_NOTIFY_MONITORCONTROL_NOTIFICATIONSERVICEMCC_FRZJPN_H_
#define _TAO_IDL_NOTIFY_MONITORCONTROL_NOTIFICATIONSERVICEMCC_FRZJPN_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "orbsvcs/Notify/MonitorControl/notify_mc_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Monitor/Monitor_includeA.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/Monitor/Monitor_includeC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 0 || TAO_BETA_VERSION != 4
#error This file should be regenerated with TAO_IDL from version 2.0a
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Notify_MC_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from 
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_root/root_ch.cpp:162

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  class Collocation_Proxy_Broker;
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:41

namespace CosNotification
{

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_COSNOTIFICATION_NOTIFICATIONSERVICEMONITORCONTROL__VAR_OUT_CH_)
#define _COSNOTIFICATION_NOTIFICATIONSERVICEMONITORCONTROL__VAR_OUT_CH_

  class NotificationServiceMonitorControl;
  typedef NotificationServiceMonitorControl *NotificationServiceMonitorControl_ptr;

  typedef
    TAO_Objref_Var_T<
        NotificationServiceMonitorControl
      >
    NotificationServiceMonitorControl_var;
  
  typedef
    TAO_Objref_Out_T<
        NotificationServiceMonitorControl
      >
    NotificationServiceMonitorControl_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class TAO_Notify_MC_Export NotificationServiceMonitorControl
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<NotificationServiceMonitorControl>;

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef NotificationServiceMonitorControl_ptr _ptr_type;
    typedef NotificationServiceMonitorControl_var _var_type;
    typedef NotificationServiceMonitorControl_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static NotificationServiceMonitorControl_ptr _duplicate (NotificationServiceMonitorControl_ptr obj);

    static void _tao_release (NotificationServiceMonitorControl_ptr obj);

    static NotificationServiceMonitorControl_ptr _narrow (::CORBA::Object_ptr obj);
    static NotificationServiceMonitorControl_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static NotificationServiceMonitorControl_ptr _nil (void);

    // TAO_IDL - Generated from
    // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_ch.cpp:43

    class TAO_Notify_MC_Export InvalidName : public ::CORBA::UserException
    {
    public:
      
      Monitor::NameList names;
      InvalidName (void);
      InvalidName (const InvalidName &);
      ~InvalidName (void);

      InvalidName &operator= (const InvalidName &);

      static void _tao_any_destructor (void *);

      static InvalidName *_downcast ( ::CORBA::Exception *);
      static const InvalidName *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);
      

      // TAO_IDL - Generated from
      // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_ctor.cpp:56

      InvalidName (
          const Monitor::NameList & _tao_names);

      virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
    };

    // TAO_IDL - Generated from
    // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

    static ::CORBA::TypeCode_ptr const _tc_InvalidName;

    virtual ::Monitor::NameList * get_statistic_names (
      void);

    virtual ::Monitor::Data * get_statistic (
      const char * name);

    virtual ::Monitor::DataList * get_statistics (
      const ::Monitor::NameList & names);

    virtual ::Monitor::DataList * get_and_clear_statistics (
      const ::Monitor::NameList & names);

    virtual void clear_statistics (
      const ::Monitor::NameList & names);

    virtual void shutdown_event_channel (
      const char * name);

    virtual void remove_consumer (
      const char * name);

    virtual void remove_supplier (
      const char * name);

    virtual void remove_consumeradmin (
      const char * name);

    virtual void remove_supplieradmin (
      const char * name);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  private:
    TAO::Collocation_Proxy_Broker *the_TAO_NotificationServiceMonitorControl_Proxy_Broker_;
  
  protected:
    // Concrete interface only.
    NotificationServiceMonitorControl (void);

    // These methods traverse the inheritance tree and set the
    // parents piece of the given class in the right mode.
    virtual void CosNotification_NotificationServiceMonitorControl_setup_collocation (void);

    // Concrete non-local interface only.
    NotificationServiceMonitorControl (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    NotificationServiceMonitorControl (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~NotificationServiceMonitorControl (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    NotificationServiceMonitorControl (const NotificationServiceMonitorControl &);

    void operator= (const NotificationServiceMonitorControl &);
  };

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Notify_MC_Export ::CORBA::TypeCode_ptr const _tc_NotificationServiceMonitorControl;

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:70

} // module CosNotification

// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_COSNOTIFICATION_NOTIFICATIONSERVICEMONITORCONTROL__ARG_TRAITS_)
#define _COSNOTIFICATION_NOTIFICATIONSERVICEMONITORCONTROL__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::CosNotification::NotificationServiceMonitorControl>
    : public
        Object_Arg_Traits_T<
            ::CosNotification::NotificationServiceMonitorControl_ptr,
            ::CosNotification::NotificationServiceMonitorControl_var,
            ::CosNotification::NotificationServiceMonitorControl_out,
            TAO::Objref_Traits<CosNotification::NotificationServiceMonitorControl>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// Proxy Broker Factory function pointer declarations.

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_root/root_ch.cpp:204

extern TAO_Notify_MC_Export
TAO::Collocation_Proxy_Broker *
(*CosNotification__TAO_NotificationServiceMonitorControl_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj);

// TAO_IDL - Generated from
// .\be\be_visitor_traits.cpp:62


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_COSNOTIFICATION_NOTIFICATIONSERVICEMONITORCONTROL__TRAITS_)
#define _COSNOTIFICATION_NOTIFICATIONSERVICEMONITORCONTROL__TRAITS_

  template<>
  struct TAO_Notify_MC_Export Objref_Traits< ::CosNotification::NotificationServiceMonitorControl>
  {
    static ::CosNotification::NotificationServiceMonitorControl_ptr duplicate (
        ::CosNotification::NotificationServiceMonitorControl_ptr p);
    static void release (
        ::CosNotification::NotificationServiceMonitorControl_ptr p);
    static ::CosNotification::NotificationServiceMonitorControl_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CosNotification::NotificationServiceMonitorControl_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_ch.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CosNotification
{
  TAO_Notify_MC_Export void operator<<= ( ::CORBA::Any &, NotificationServiceMonitorControl_ptr); // copying
  TAO_Notify_MC_Export void operator<<= ( ::CORBA::Any &, NotificationServiceMonitorControl_ptr *); // non-copying
  TAO_Notify_MC_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, NotificationServiceMonitorControl_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Notify_MC_Export void operator<<= (::CORBA::Any &, CosNotification::NotificationServiceMonitorControl_ptr); // copying
TAO_Notify_MC_Export void operator<<= (::CORBA::Any &, CosNotification::NotificationServiceMonitorControl_ptr *); // non-copying
TAO_Notify_MC_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CosNotification::NotificationServiceMonitorControl_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_exception/any_op_ch.cpp:44

#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CosNotification
{
  

  TAO_Notify_MC_Export void operator<<= (::CORBA::Any &, const ::CosNotification::NotificationServiceMonitorControl::InvalidName &); // copying version
  TAO_Notify_MC_Export void operator<<= (::CORBA::Any &, ::CosNotification::NotificationServiceMonitorControl::InvalidName*); // noncopying version
  TAO_Notify_MC_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::CosNotification::NotificationServiceMonitorControl::InvalidName *&); // deprecated
TAO_Notify_MC_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::CosNotification::NotificationServiceMonitorControl::InvalidName *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_Notify_MC_Export void operator<<= (::CORBA::Any &, const CosNotification::NotificationServiceMonitorControl::InvalidName &); // copying version
TAO_Notify_MC_Export void operator<<= (::CORBA::Any &, CosNotification::NotificationServiceMonitorControl::InvalidName*); // noncopying version
TAO_Notify_MC_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CosNotification::NotificationServiceMonitorControl::InvalidName *&); // deprecated
TAO_Notify_MC_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const CosNotification::NotificationServiceMonitorControl::InvalidName *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/cdr_op_ch.cpp:47


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Notify_MC_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CosNotification::NotificationServiceMonitorControl_ptr );
TAO_Notify_MC_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CosNotification::NotificationServiceMonitorControl_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_exception/cdr_op_ch.cpp:43

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



TAO_Notify_MC_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CosNotification::NotificationServiceMonitorControl::InvalidName &);
TAO_Notify_MC_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CosNotification::NotificationServiceMonitorControl::InvalidName &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1581


TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "NotificationServiceMCC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

