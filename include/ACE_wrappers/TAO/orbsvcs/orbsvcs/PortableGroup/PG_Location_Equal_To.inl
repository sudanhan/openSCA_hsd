// -*- C++ -*-
//
// $Id: PG_Location_Equal_To.inl 14 2007-02-01 15:49:12Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE int
TAO_PG_Location_Equal_To::operator () (
  const PortableGroup::Location &lhs,
  const PortableGroup::Location &rhs) const
{
  return lhs == rhs;
}

TAO_END_VERSIONED_NAMESPACE_DECL
