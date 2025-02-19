// $Id: EC_Busy_Lock.cpp 14 2007-02-01 15:49:12Z mitza $

#ifndef TAO_EC_BUSY_LOCK_CPP
#define TAO_EC_BUSY_LOCK_CPP

#include "orbsvcs/Event/EC_Busy_Lock.h"

#if ! defined (__ACE_INLINE__)
#include "orbsvcs/Event/EC_Busy_Lock.inl"
#endif /* __ACE_INLINE__ */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template<class T>
int TAO_EC_Busy_Lock_Adapter<T>::remove (void)
{
  return 0;
}

template<class T>
int TAO_EC_Busy_Lock_Adapter<T>::acquire (void)
{
  return this->adaptee_->busy ();
}

template<class T>
int TAO_EC_Busy_Lock_Adapter<T>::tryacquire (void)
{
  return this->adaptee_->busy ();
}

template<class T>
int TAO_EC_Busy_Lock_Adapter<T>::release (void)
{
  return this->adaptee_->idle ();
}

template<class T>
int TAO_EC_Busy_Lock_Adapter<T>::acquire_read (void)
{
  return this->adaptee_->busy ();
}

template<class T>
int TAO_EC_Busy_Lock_Adapter<T>::acquire_write (void)
{
  return this->adaptee_->busy ();
}

template<class T>
int TAO_EC_Busy_Lock_Adapter<T>::tryacquire_read (void)
{
  return this->adaptee_->busy ();
}

template<class T>
int TAO_EC_Busy_Lock_Adapter<T>::tryacquire_write (void)
{
  return this->adaptee_->busy ();
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* TAO_EC_BUSY_LOCK_CPP */
