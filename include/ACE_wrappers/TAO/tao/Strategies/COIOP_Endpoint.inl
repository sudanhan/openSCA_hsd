// -*- C++ -*-
//
// $Id: COIOP_Endpoint.inl 14 2007-02-01 15:49:12Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE const ACE_Utils::UUID&
TAO_COIOP_Endpoint::uuid (void) const
{
  return this->uuid_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
