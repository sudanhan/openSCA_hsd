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
// .\be\be_codegen.cpp:460

#ifndef _TAO_IDL_COSEVENTCOMMS_QIE1RJ_H_
#define _TAO_IDL_COSEVENTCOMMS_QIE1RJ_H_


#include "CosEventCommC.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Any_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Collocation_Proxy_Broker.h"
#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

#include /**/ "orbsvcs/CosEvent/event_skel_export.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Event_Skel_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_COSEVENTCOMM_PUSHCONSUMER__SARG_TRAITS_)
#define _COSEVENTCOMM_PUSHCONSUMER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosEventComm::PushConsumer>
    : public
        Object_SArg_Traits_T<
            ::CosEventComm::PushConsumer_ptr,
            ::CosEventComm::PushConsumer_var,
            ::CosEventComm::PushConsumer_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_COSEVENTCOMM_PUSHSUPPLIER__SARG_TRAITS_)
#define _COSEVENTCOMM_PUSHSUPPLIER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosEventComm::PushSupplier>
    : public
        Object_SArg_Traits_T<
            ::CosEventComm::PushSupplier_ptr,
            ::CosEventComm::PushSupplier_var,
            ::CosEventComm::PushSupplier_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_COSEVENTCOMM_PULLCONSUMER__SARG_TRAITS_)
#define _COSEVENTCOMM_PULLCONSUMER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosEventComm::PullConsumer>
    : public
        Object_SArg_Traits_T<
            ::CosEventComm::PullConsumer_ptr,
            ::CosEventComm::PullConsumer_var,
            ::CosEventComm::PullConsumer_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_COSEVENTCOMM_PULLSUPPLIER__SARG_TRAITS_)
#define _COSEVENTCOMM_PULLSUPPLIER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosEventComm::PullSupplier>
    : public
        Object_SArg_Traits_T<
            ::CosEventComm::PullSupplier_ptr,
            ::CosEventComm::PullSupplier_var,
            ::CosEventComm::PullSupplier_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:41

namespace POA_CosEventComm
{
  

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class PushConsumer;
  typedef PushConsumer *PushConsumer_ptr;

  class TAO_Event_Skel_Export PushConsumer
    : public virtual PortableServer::ServantBase
  {
  protected:
    PushConsumer (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosEventComm::PushConsumer _stub_type;
    typedef ::CosEventComm::PushConsumer_ptr _stub_ptr_type;
    typedef ::CosEventComm::PushConsumer_var _stub_var_type;

    PushConsumer (const PushConsumer& rhs);
    virtual ~PushConsumer (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::CosEventComm::PushConsumer *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void push (
      const ::CORBA::Any & data) = 0;

    static void push_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void disconnect_push_consumer (
      void) = 0;

    static void disconnect_push_consumer_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class PushSupplier;
  typedef PushSupplier *PushSupplier_ptr;

  class TAO_Event_Skel_Export PushSupplier
    : public virtual PortableServer::ServantBase
  {
  protected:
    PushSupplier (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosEventComm::PushSupplier _stub_type;
    typedef ::CosEventComm::PushSupplier_ptr _stub_ptr_type;
    typedef ::CosEventComm::PushSupplier_var _stub_var_type;

    PushSupplier (const PushSupplier& rhs);
    virtual ~PushSupplier (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::CosEventComm::PushSupplier *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void disconnect_push_supplier (
      void) = 0;

    static void disconnect_push_supplier_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class PullConsumer;
  typedef PullConsumer *PullConsumer_ptr;

  class TAO_Event_Skel_Export PullConsumer
    : public virtual PortableServer::ServantBase
  {
  protected:
    PullConsumer (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosEventComm::PullConsumer _stub_type;
    typedef ::CosEventComm::PullConsumer_ptr _stub_ptr_type;
    typedef ::CosEventComm::PullConsumer_var _stub_var_type;

    PullConsumer (const PullConsumer& rhs);
    virtual ~PullConsumer (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::CosEventComm::PullConsumer *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void disconnect_pull_consumer (
      void) = 0;

    static void disconnect_pull_consumer_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class PullSupplier;
  typedef PullSupplier *PullSupplier_ptr;

  class TAO_Event_Skel_Export PullSupplier
    : public virtual PortableServer::ServantBase
  {
  protected:
    PullSupplier (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosEventComm::PullSupplier _stub_type;
    typedef ::CosEventComm::PullSupplier_ptr _stub_ptr_type;
    typedef ::CosEventComm::PullSupplier_var _stub_var_type;

    PullSupplier (const PullSupplier& rhs);
    virtual ~PullSupplier (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::CosEventComm::PullSupplier *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Any * pull (
      void) = 0;

    static void pull_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Any * try_pull (
      ::CORBA::Boolean_out has_event) = 0;

    static void try_pull_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void disconnect_pull_supplier (
      void) = 0;

    static void disconnect_pull_supplier_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:72

} // module CosEventComm

TAO_END_VERSIONED_NAMESPACE_DECL



#include "CosEventCommS_T.h"

#if defined (__ACE_INLINE__)
#include "CosEventCommS.inl"
#endif /* defined INLINE */

#endif /* ifndef */

