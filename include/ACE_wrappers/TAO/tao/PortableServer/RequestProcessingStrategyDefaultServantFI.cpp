// $Id: RequestProcessingStrategyDefaultServantFI.cpp 1861 2011-08-31 16:18:08Z mesnierp $

#include "tao/orbconf.h"

#if (TAO_HAS_MINIMUM_POA == 0) && !defined (CORBA_E_COMPACT) && !defined (CORBA_E_MICRO)

#include "tao/PortableServer/RequestProcessingStrategyDefaultServantFI.h"
#include "tao/PortableServer/RequestProcessingStrategy.h"
#include "tao/PortableServer/RequestProcessingStrategyDefaultServant.h"
#include "ace/Dynamic_Service.h"
#include "ace/Log_Msg.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace Portable_Server
  {
    RequestProcessingStrategy*
    RequestProcessingStrategyDefaultServantFactoryImpl::create (
      ::PortableServer::RequestProcessingPolicyValue value,
      ::PortableServer::ServantRetentionPolicyValue /*srvalue*/)
    {
      RequestProcessingStrategy* strategy = 0;

      switch (value)
      {
        case ::PortableServer::USE_DEFAULT_SERVANT :
        {
          ACE_NEW_RETURN (strategy, RequestProcessingStrategyDefaultServant, 0);
          break;
        }
        default :
        {
          ACE_ERROR ((LM_ERROR, "Incorrect type in RequestProcessingStrategyDefaultServantFactoryImpl"));
          break;
        }
      }

      return strategy;
    }

    void
    RequestProcessingStrategyDefaultServantFactoryImpl::destroy (
      RequestProcessingStrategy *strategy
      )
    {
      strategy->strategy_cleanup ();

      delete strategy;
    }
  }
}



ACE_STATIC_SVC_DEFINE (
  RequestProcessingStrategyDefaultServantFactoryImpl,
  ACE_TEXT ("RequestProcessingStrategyDefaultServantFactory"),
  ACE_SVC_OBJ_T,
  &ACE_SVC_NAME (RequestProcessingStrategyDefaultServantFactoryImpl),
  ACE_Service_Type::DELETE_THIS | ACE_Service_Type::DELETE_OBJ,
  0)

ACE_FACTORY_NAMESPACE_DEFINE (
  ACE_Local_Service,
  RequestProcessingStrategyDefaultServantFactoryImpl,
  TAO::Portable_Server::RequestProcessingStrategyDefaultServantFactoryImpl)

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* TAO_HAS_MINIMUM_POA == 0 */

