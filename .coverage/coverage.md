# Parasoft C/C++test - Code Coverage Report

* LC - Line Coverage
* DC - Decision (Branch) Coverage
* SCC - Simple Condition Coverage
* MCDC - Modified Condition Decision Coverage

| Element | LC | DC | SCC | MCDC | 
| --- | --- | --- | --- | --- | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/buffer/include/iox/detail/stack.inl | 96% 43/45 | 89% 16/18 | 89% 16/18 | 78% 7/9 | 
| `bool iox::stack<T1, unsigned long>::push<T1...>(T1 &&...)` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::stack<T1, unsigned long>::clear()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::stack<T1, unsigned long>::clearFrom(unsigned long)` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::stack<T1, unsigned long>::copy(const iox::stack<T1, unsigned long>&)` | 100% 10/10 | 100% 4/4 | 100% 4/4 | 100% 2/2 | 
| `iox::stack<T1, unsigned long>::getUnchecked(unsigned long)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::stack<T1, unsigned long>::getUnchecked(unsigned long) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::stack<T1, unsigned long>::move(iox::stack<T1, unsigned long>&&)` | 100% 11/11 | 100% 4/4 | 100% 4/4 | 100% 2/2 | 
| `iox::stack<T1, unsigned long>::operator =(const iox::stack<T1, unsigned long>&)` | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::stack<T1, unsigned long>::operator =(iox::stack<T1, unsigned long>&&)` | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::stack<T1, unsigned long>::pop()` | 100% 5/5 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::stack<T1, unsigned long>::size() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::stack<T1, unsigned long>::stack(const iox::stack<T1, unsigned long>&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::stack<T1, unsigned long>::stack(iox::stack<T1, unsigned long>&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::stack<T1, unsigned long>::~stack()` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/container/include/iox/detail/uninitialized_array.inl | 100% 4/4 | N/A | N/A | N/A | 
| `iox::UninitializedArray<T1, unsigned long, T3>::begin()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::UninitializedArray<T1, unsigned long, T3>::begin() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::UninitializedArray<T1, unsigned long, T3>::end()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::UninitializedArray<T1, unsigned long, T3>::end() const` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/container/include/iox/detail/vector.inl | 100% 97/97 | 95% 40/42 | 93% 54/58 | 86% 25/29 | 
| `bool iox::vector<T1, unsigned long>::emplace<T1...>(unsigned long, T1 &&...)` | 100% 11/11 | 100% 6/6 | 100% 10/10 | 100% 5/5 | 
| `bool iox::vector<T1, unsigned long>::emplace_back<T1...>(T1 &&...)` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `bool iox::vector<T1, unsigned long>::resize<T1...>(unsigned long, const T1 &...)` | 100% 7/7 | 100% 6/6 | 100% 6/6 | 100% 3/3 | 
| `iox::vector<T1, unsigned long>::at(unsigned long)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::at(unsigned long) const` | 100% 2/2 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::vector<T1, unsigned long>::at_unchecked(unsigned long)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::at_unchecked(unsigned long) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::back()` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::back() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::begin()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::begin() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::clear()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::clearFrom(unsigned long)` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::vector<T1, unsigned long>::data()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::data() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::empty() const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::vector<T1, unsigned long>::end()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::end() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::erase(T1 *)` | 100% 10/10 | 100% 4/4 | 100% 6/6 | 100% 3/3 | 
| `iox::vector<T1, unsigned long>::front()` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::front() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::operator =(const iox::vector<T1, unsigned long>&)` | 100% 11/11 | 83% 5/6 | 83% 5/6 | 67% 2/3 | 
| `iox::vector<T1, unsigned long>::operator =(iox::vector<T1, unsigned long>&&)` | 100% 12/12 | 83% 5/6 | 83% 5/6 | 67% 2/3 | 
| `iox::vector<T1, unsigned long>::operator [](unsigned long)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::operator [](unsigned long) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::pop_back()` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::vector<T1, unsigned long>::push_back(T1 &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::push_back(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::size() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::vector(const iox::vector<T1, unsigned long>&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::vector(iox::vector<T1, unsigned long>&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::vector<T1, unsigned long>::vector(unsigned long)` | 100% 5/5 | 100% 4/4 | 83% 5/6 | 67% 2/3 | 
| `iox::vector<T1, unsigned long>::vector(unsigned long, const T1 &)` | 100% 4/4 | 100% 4/4 | 88% 7/8 | 75% 3/4 | 
| `iox::vector<T1, unsigned long>::~vector()` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/design/include/iox/detail/functional_interface.inl | 97% 67/69 | 90% 18/20 | 100% 6/6 | 100% 3/3 | 
| `T1 & iox::internal::AndThenWithValue<T1, T2>::and_then<T1>(const T1 &) &` | 100% 6/6 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `T1 & iox::internal::OrElseWithValue<T1, T2>::or_else<T1>(const T1 &) &` | 100% 6/6 | 100% 2/2 | N/A | N/A | 
| `T1 && iox::internal::AndThenWithValue<T1, T2>::and_then<T1>(const T1 &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `T1 && iox::internal::OrElseWithValue<T1, T2>::or_else<T1>(const T1 &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `T2 & iox::internal::ExpectWithValue<T1, T2>::expect<T1>(const T1 &) &` | 100% 6/6 | 100% 2/2 | N/A | N/A | 
| `T2 && iox::internal::ExpectWithValue<T1, T2>::expect<T1>(const T1 &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `T2 iox::internal::ValueOr<T1, T2>::value_or<T1>(T1 &&) &&` | 75% 3/4 | 50% 1/2 | N/A | N/A | 
| `T2 iox::internal::ValueOr<T1, T2>::value_or<T1>(T1 &&) const &` | 75% 3/4 | 50% 1/2 | N/A | N/A | 
| `const T1 & iox::internal::AndThenWithValue<T1, T2>::and_then<T1>(const T1 &) const &` | 100% 6/6 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `const T1 & iox::internal::OrElseWithValue<T1, T2>::or_else<T1>(const T1 &) const &` | 100% 6/6 | 100% 2/2 | N/A | N/A | 
| `const T1 && iox::internal::AndThenWithValue<T1, T2>::and_then<T1>(const T1 &) const &&` | 100% 1/1 | N/A | N/A | N/A | 
| `const T1 && iox::internal::OrElseWithValue<T1, T2>::or_else<T1>(const T1 &) const &&` | 100% 1/1 | N/A | N/A | N/A | 
| `const T2 & iox::internal::ExpectWithValue<T1, T2>::expect<T1>(const T1 &) const &` | 100% 2/2 | N/A | N/A | N/A | 
| `const T2 && iox::internal::ExpectWithValue<T1, T2>::expect<T1>(const T1 &) const &&` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::internal::AndThen<T1>::and_then(const iox::function_ref<void ()> &) &` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::internal::AndThen<T1>::and_then(const iox::function_ref<void ()> &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::internal::AndThen<T1>::and_then(const iox::function_ref<void ()> &) const &` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::internal::AndThen<T1>::and_then(const iox::function_ref<void ()> &) const &&` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::internal::OrElse<T1>::or_else(const iox::function_ref<void ()> &) &` | 100% 4/4 | 100% 2/2 | N/A | N/A | 
| `iox::internal::OrElse<T1>::or_else(const iox::function_ref<void ()> &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::internal::OrElse<T1>::or_else(const iox::function_ref<void ()> &) const &` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::internal::OrElse<T1>::or_else(const iox::function_ref<void ()> &) const &&` | 100% 1/1 | N/A | N/A | N/A | 
| `void iox::internal::Expect<T1>::expect<T1>(const T1 &) const` | 100% 5/5 | 100% 2/2 | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/design/include/iox/detail/newtype.inl | 100% 21/21 | 50% 2/4 | 50% 2/4 | 0% 0/2 | 
| `iox::NewType<T1, T2, T3>::NewType()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::NewType<T1, T2, T3>::NewType(const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::NewType<T1, T2, T3>::NewType(const iox::NewType<T1, T2, T3>&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::NewType<T1, T2, T3>::NewType(iox::NewType<T1, T2, T3>&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::NewType<T1, T2, T3>::NewType(iox::newtype::internal::ProtectedConstructor_t, const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::NewType<T1, T2, T3>::operator =(T2 &&)` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::NewType<T1, T2, T3>::operator =(const T2 &)` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::NewType<T1, T2, T3>::operator =(const iox::NewType<T1, T2, T3>&)` | 100% 4/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::NewType<T1, T2, T3>::operator =(iox::NewType<T1, T2, T3>&&)` | 100% 4/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::NewType<T1, T2, T3>::operator T2() const` | 100% 2/2 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/design/include/iox/detail/newtype/arithmetic.hpp | 100% 4/4 | N/A | N/A | N/A | 
| `iox::newtype::operator *(const T2 &, const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::newtype::operator +(const T2 &, const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::newtype::operator -(const T2 &, const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::newtype::operator /(const T2 &, const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/design/include/iox/detail/newtype/comparable.hpp | 100% 2/2 | N/A | N/A | N/A | 
| `iox::newtype::operator !=(const T2 &, const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::newtype::operator ==(const T2 &, const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/design/include/iox/detail/newtype/decrementable.hpp | 100% 2/2 | N/A | N/A | N/A | 
| `iox::newtype::operator --(T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::newtype::operator --(T2 &, int)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/design/include/iox/detail/newtype/incrementable.hpp | 100% 2/2 | N/A | N/A | N/A | 
| `iox::newtype::operator ++(T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::newtype::operator ++(T2 &, int)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/design/include/iox/detail/newtype/internal.hpp | 100% 2/2 | N/A | N/A | N/A | 
| `T1::value_type & iox::newtype::internal::newTypeRefAccessor<T1>(T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `T1::value_type iox::newtype::internal::newTypeAccessor<T1>(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/design/include/iox/detail/newtype/sortable.hpp | 100% 4/4 | N/A | N/A | N/A | 
| `iox::newtype::operator <(const T2 &, const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::newtype::operator <=(const T2 &, const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::newtype::operator >(const T2 &, const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::newtype::operator >=(const T2 &, const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/design/include/iox/detail/polymorphic_handler.inl | 96% 25/26 | 100% 4/4 | 100% 8/8 | 100% 4/4 | 
| `bool iox::PolymorphicHandler<T1, T2, T3>::set<T1>(iox::StaticLifetimeGuard<T1>)` | 100% 3/3 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::PolymorphicHandler<T1, T2, T3>::PolymorphicHandler()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::PolymorphicHandler<T1, T2, T3>::finalize()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::PolymorphicHandler<T1, T2, T3>::get()` | 100% 5/5 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::PolymorphicHandler<T1, T2, T3>::getCurrentRelaxed()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::PolymorphicHandler<T1, T2, T3>::getCurrentSync()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::PolymorphicHandler<T1, T2, T3>::getDefault()` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::PolymorphicHandler<T1, T2, T3>::guard()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::PolymorphicHandler<T1, T2, T3>::reset()` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::PolymorphicHandler<T1, T2, T3>::self()` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::PolymorphicHandler<T1, T2, T3>::setHandler(T1 &)` | 100% 7/7 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::detail::DefaultHooks<T1>::onSetAfterFinalize(T1 &, T1 &)` | 0% 0/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/design/include/iox/detail/static_lifetime_guard.inl | 100% 22/22 | 90% 9/10 | 90% 9/10 | 80% 4/5 | 
| `T1 & iox::StaticLifetimeGuard<T1>::instance<T1...>(T1 &&...)` | 100% 9/9 | 100% 4/4 | 100% 4/4 | 100% 2/2 | 
| `iox::StaticLifetimeGuard<T1>::StaticLifetimeGuard()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::StaticLifetimeGuard<T1>::StaticLifetimeGuard(const iox::StaticLifetimeGuard<T1>&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::StaticLifetimeGuard<T1>::StaticLifetimeGuard(iox::StaticLifetimeGuard<T1>&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::StaticLifetimeGuard<T1>::count()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::StaticLifetimeGuard<T1>::destroy()` | 100% 6/6 | 75% 3/4 | 75% 3/4 | 50% 1/2 | 
| `iox::StaticLifetimeGuard<T1>::setCount(unsigned long)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::StaticLifetimeGuard<T1>::~StaticLifetimeGuard()` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/design/source/functional_interface.cpp | 100% 1/1 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::internal::print_expect_message(const char *)` | 100% 1/1 | N/A | 50% 1/2 | 0% 0/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/filesystem/include/iox/detail/filesystem.inl | 100% 72/72 | 100% 30/30 | 100% 24/24 | 100% 12/12 | 
| `bool iox::doesEndWithPathSeparator<unsigned long>(const iox::string<unsigned long> &)` | 100% 7/7 | 100% 6/6 | 100% 4/4 | 100% 2/2 | 
| `bool iox::isValidFileName<unsigned long>(const iox::string<unsigned long> &)` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `bool iox::isValidPathEntry<unsigned long>(const iox::string<unsigned long> &, iox::RelativePathComponents)` | 100% 16/16 | 100% 8/8 | 100% 8/8 | 100% 4/4 | 
| `bool iox::isValidPathToDirectory<(unsigned long)1023>(const iox::string<T1> &)::[lambda(const T1 &) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::isValidPathToDirectory<(unsigned long)107>(const iox::string<T1> &)::[lambda(const T1 &) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::isValidPathToDirectory<(unsigned long)128>(const iox::string<T1> &)::[lambda(const T1 &) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::isValidPathToDirectory<(unsigned long)767>(const iox::string<T1> &)::[lambda(const T1 &) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::isValidPathToDirectory<unsigned long>(const iox::string<unsigned long> &)` | 100% 19/19 | 100% 10/10 | 100% 4/4 | 100% 2/2 | 
| `bool iox::isValidPathToFile<(unsigned long)1023>(const iox::string<T1> &)::[lambda(const T1 &) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::isValidPathToFile<(unsigned long)1023>(const iox::string<T1> &)::[lambda(const T1 &) (instance 2)]` | 100% 3/3 | N/A | N/A | N/A | 
| `bool iox::isValidPathToFile<(unsigned long)107>(const iox::string<T1> &)::[lambda(const T1 &) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::isValidPathToFile<(unsigned long)107>(const iox::string<T1> &)::[lambda(const T1 &) (instance 2)]` | 100% 3/3 | N/A | N/A | N/A | 
| `bool iox::isValidPathToFile<(unsigned long)128>(const iox::string<T1> &)::[lambda(const T1 &) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::isValidPathToFile<(unsigned long)128>(const iox::string<T1> &)::[lambda(const T1 &) (instance 2)]` | 100% 3/3 | N/A | N/A | N/A | 
| `bool iox::isValidPathToFile<unsigned long>(const iox::string<unsigned long> &)` | 100% 11/11 | 100% 4/4 | 100% 6/6 | 100% 3/3 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/filesystem/source/filesystem.cpp | 96% 55/57 | 100% 32/32 | 100% 32/32 | 100% 16/16 | 
| `iox::operator <<(iox::log::LogStream &, iox::access_rights)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::operator <<(std::ostream&, iox::access_rights)` | 0% 0/2 | N/A | N/A | N/A | 
| `void iox::finishEntry<T1>(T1 &, bool, bool)` | 100% 5/5 | 100% 4/4 | 100% 4/4 | 100% 2/2 | 
| `void iox::outputToStream<T1>(T1 &, const char *, bool &)` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `void iox::printAccessControl<T1>(T1 &, iox::access_rights)` | 100% 7/7 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `void iox::printGroupPermissions<T1>(T1 &, iox::access_rights)` | 100% 9/9 | 100% 6/6 | 100% 6/6 | 100% 3/3 | 
| `void iox::printOtherPermissions<T1>(T1 &, iox::access_rights)` | 100% 9/9 | 100% 6/6 | 100% 6/6 | 100% 3/3 | 
| `void iox::printOwnerPermissions<T1>(T1 &, iox::access_rights)` | 100% 9/9 | 100% 6/6 | 100% 6/6 | 100% 3/3 | 
| `void iox::printSpecialBits<T1>(T1 &, iox::access_rights)` | 100% 10/10 | 100% 6/6 | 100% 6/6 | 100% 3/3 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/functional/include/iox/detail/function_ref.inl | 100% 17/17 | 50% 1/2 | 67% 4/6 | 33% 1/3 | 
| `iox::function_ref<T1 (T2...)>::function_ref(T1 (&)(T2...))` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::function_ref<T1 (T2...)>::function_ref(T1 (&)(T2...))::[lambda(void *, T2...) (instance 1)]` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::function_ref<T1 (T2...)>::function_ref(iox::function_ref<T1 (T2...)>&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::function_ref<T1 (T2...)>::function_ref<T1, T2>(T1 &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::function_ref<T1 (T2...)>::function_ref<T1, T2>(T1 &&)::[lambda(void *, T2...) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::function_ref<T1 (T2...)>::operator ()(T2...) const` | 100% 2/2 | N/A | 75% 3/4 | 50% 1/2 | 
| `iox::function_ref<T1 (T2...)>::operator =(iox::function_ref<T1 (T2...)>&&) &` | 100% 6/6 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::function_ref<T1 (T2...)>::swap(iox::function_ref<T1 (T2...)>&)` | 100% 2/2 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/functional/include/iox/detail/storable_function.inl | 100% 70/70 | 67% 8/12 | 64% 9/14 | 29% 2/7 | 
| `T2 iox::storable_function<unsigned long, T2 (T3...)>::invoke<T1>(void *, T3 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::storable_function<T1, T2 (T3...)>::storable_function<T1, T2>(T1 &, T2 (T1::*)(T3...))::[lambda(T3...) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::storable_function<T1, T2 (T3...)>::storable_function<T1, T2>(const T1 &, T2 (T1::*)(T3...) const)::[lambda(T3...) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::storable_function<unsigned long, T2 (T3...)>::copyFreeFunction(const iox::storable_function<unsigned long, T2 (T3...)>&, iox::storable_function<unsigned long, T2 (T3...)>&)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::storable_function<unsigned long, T2 (T3...)>::invokeFreeFunction(void *, T3 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::storable_function<unsigned long, T2 (T3...)>::moveFreeFunction(iox::storable_function<unsigned long, T2 (T3...)>&, iox::storable_function<unsigned long, T2 (T3...)>&)` | 100% 4/4 | N/A | N/A | N/A | 
| `iox::storable_function<unsigned long, T2 (T3...)>::operations::copy(const iox::storable_function<unsigned long, T2 (T3...)>&, iox::storable_function<unsigned long, T2 (T3...)>&) const` | 100% 2/2 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::storable_function<unsigned long, T2 (T3...)>::operations::destroy(iox::storable_function<unsigned long, T2 (T3...)>&) const` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::storable_function<unsigned long, T2 (T3...)>::operations::move(iox::storable_function<unsigned long, T2 (T3...)>&, iox::storable_function<unsigned long, T2 (T3...)>&) const` | 100% 2/2 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::storable_function<unsigned long, T2 (T3...)>::operator ()(T3...) const` | 100% 2/2 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::storable_function<unsigned long, T2 (T3...)>::operator =(const iox::storable_function<unsigned long, T2 (T3...)>&)` | 100% 6/6 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::storable_function<unsigned long, T2 (T3...)>::operator =(iox::storable_function<unsigned long, T2 (T3...)>&&)` | 100% 6/6 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::storable_function<unsigned long, T2 (T3...)>::storable_function(T2 (*)(T3...))` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::storable_function<unsigned long, T2 (T3...)>::storable_function(const iox::storable_function<unsigned long, T2 (T3...)>&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::storable_function<unsigned long, T2 (T3...)>::storable_function(iox::storable_function<unsigned long, T2 (T3...)>&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::storable_function<unsigned long, T2 (T3...)>::storable_function<T1, T2>(T1 &, T2 (T1::*)(T3...))` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::storable_function<unsigned long, T2 (T3...)>::storable_function<T1, T2>(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::storable_function<unsigned long, T2 (T3...)>::storable_function<T1, T2>(const T1 &, T2 (T1::*)(T3...) const)` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::storable_function<unsigned long, T2 (T3...)>::swap(iox::storable_function<unsigned long, T2 (T3...)>&)` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::storable_function<unsigned long, T2 (T3...)>::~storable_function()` | 100% 1/1 | N/A | N/A | N/A | 
| `void iox::storable_function<unsigned long, T2 (T3...)>::copy<T1>(const iox::storable_function<unsigned long, T2 (T3...)>&, iox::storable_function<unsigned long, T2 (T3...)>&)` | 100% 5/5 | N/A | N/A | N/A | 
| `void iox::storable_function<unsigned long, T2 (T3...)>::destroy<T1>(iox::storable_function<unsigned long, T2 (T3...)>&)` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `void iox::storable_function<unsigned long, T2 (T3...)>::move<T1>(iox::storable_function<unsigned long, T2 (T3...)>&, iox::storable_function<unsigned long, T2 (T3...)>&)` | 100% 8/8 | N/A | N/A | N/A | 
| `void iox::storable_function<unsigned long, T2 (T3...)>::storeFunctor<T1, T2>(const T1 &)` | 100% 7/7 | N/A | N/A | N/A | 
| `void iox::swap<unsigned long, T2>(iox::storable_function<unsigned long, T2> &, iox::storable_function<unsigned long, T2> &)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/error_reporting/custom/default/error_reporting.inl | 98% 40/41 | N/A | 50% 8/16 | 0% 0/8 | 
| `iox::er::panic()` | 67% 2/3 | N/A | N/A | N/A | 
| `iox::er::panic(const iox::er::SourceLocation &)` | 100% 2/2 | N/A | 50% 1/2 | 0% 0/1 | 
| `void iox::er::panic<T1>(const iox::er::SourceLocation &, T1 &&)` | 100% 2/2 | N/A | 50% 1/2 | 0% 0/1 | 
| `void iox::er::report<T1, T2>(const iox::er::SourceLocation &, T1, const T2 &)` | 100% 7/7 | N/A | 50% 1/2 | 0% 0/1 | 
| `void iox::er::report<T1, T2>(const iox::er::SourceLocation &, iox::er::AssumptionViolationKind, const T1 &, T2 &&)` | 100% 5/5 | N/A | 50% 1/2 | 0% 0/1 | 
| `void iox::er::report<T1, T2>(const iox::er::SourceLocation &, iox::er::PreconditionViolationKind, const T1 &, T2 &&)` | 100% 5/5 | N/A | 50% 1/2 | 0% 0/1 | 
| `void iox::er::report<T1>(const iox::er::SourceLocation &, iox::er::AssumptionViolationKind, const T1 &)` | 100% 5/5 | N/A | 50% 1/2 | 0% 0/1 | 
| `void iox::er::report<T1>(const iox::er::SourceLocation &, iox::er::FatalKind, const T1 &)` | 100% 7/7 | N/A | 50% 1/2 | 0% 0/1 | 
| `void iox::er::report<T1>(const iox::er::SourceLocation &, iox::er::PreconditionViolationKind, const T1 &)` | 100% 5/5 | N/A | 50% 1/2 | 0% 0/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/error_reporting/error_forwarding.hpp | 80% 12/15 | N/A | N/A | N/A | 
| `void iox::er::forwardFatalError<T1, T2, T3>(T1 &&, T2 &&, const iox::er::SourceLocation &, T3 &&)` | 80% 4/5 | N/A | N/A | N/A | 
| `void iox::er::forwardFatalError<T1, T2>(T1 &&, T2 &&, const iox::er::SourceLocation &)` | 80% 4/5 | N/A | N/A | N/A | 
| `void iox::er::forwardNonFatalError<T1, T2>(T1 &&, T2 &&, const iox::er::SourceLocation &)` | 100% 3/3 | N/A | N/A | N/A | 
| `void iox::er::forwardPanic<T1>(const iox::er::SourceLocation &, T1 &&)` | 50% 1/2 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/error_reporting/errors.hpp | 100% 14/14 | N/A | 100% 6/6 | 100% 3/3 | 
| `auto iox::er::toError<T1>(T1 &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `const char * iox::er::toErrorName<T1>(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `const char * iox::er::toModuleName<T1>(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::ErrorCode iox::er::toCode<T1>(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::ErrorCode iox::er::toCode<iox::er::ErrorCode>(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::ModuleId iox::er::toModule<T1>(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::Violation::Violation(iox::er::ErrorCode)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::Violation::Violation(iox::er::ErrorCode, iox::er::ModuleId)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::Violation::code() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::Violation::createAssumptionViolation()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::Violation::createPreconditionViolation()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::Violation::module() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::Violation::operator !=(const iox::er::Violation&) const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::er::Violation::operator ==(const iox::er::Violation&) const` | 100% 1/1 | N/A | 100% 4/4 | 100% 2/2 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/error_reporting/source_location.hpp | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::SourceLocation::SourceLocation(const char *, int, const char *)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/error_reporting/types.hpp | 100% 4/4 | N/A | 100% 8/8 | 100% 4/4 | 
| `iox::er::ErrorCode::operator !=(const iox::er::ErrorCode&) const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::er::ErrorCode::operator ==(const iox::er::ErrorCode&) const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::er::ModuleId::operator !=(const iox::er::ModuleId&) const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::er::ModuleId::operator ==(const iox::er::ModuleId&) const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/concurrent/fifo.inl | 100% 15/15 | 100% 4/4 | 100% 10/10 | 100% 5/5 | 
| `iox::concurrent::FiFo<T1, unsigned long>::empty() const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::concurrent::FiFo<T1, unsigned long>::is_full() const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::concurrent::FiFo<T1, unsigned long>::pop()` | 100% 7/7 | 100% 2/2 | 100% 4/4 | 100% 2/2 | 
| `iox::concurrent::FiFo<T1, unsigned long>::push(const T1 &)` | 100% 6/6 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/concurrent/lockfree_queue/cyclic_index.inl | 100% 19/19 | 100% 6/6 | 100% 6/6 | 100% 3/3 | 
| `iox::concurrent::CyclicIndex<unsigned long, T2>::CyclicIndex(T2)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::CyclicIndex<unsigned long, T2>::CyclicIndex(T2, T2)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::CyclicIndex<unsigned long, T2>::getCycle() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::CyclicIndex<unsigned long, T2>::getIndex() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::CyclicIndex<unsigned long, T2>::getValue() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::CyclicIndex<unsigned long, T2>::isOneCycleBehind(const iox::concurrent::CyclicIndex<unsigned long, T2>&) const` | 100% 5/5 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::concurrent::CyclicIndex<unsigned long, T2>::next() const` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::concurrent::CyclicIndex<unsigned long, T2>::operator +(T2) const` | 100% 5/5 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::concurrent::CyclicIndex<unsigned long, T2>::operator -(const iox::concurrent::CyclicIndex<unsigned long, T2>&) const` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/concurrent/lockfree_queue/index_queue.inl | 90% 70/78 | 69% 25/36 | 85% 17/20 | 70% 7/10 | 
| `iox::concurrent::IndexQueue<unsigned long, T2>::IndexQueue(iox::concurrent::IndexQueue<unsigned long, T2>::ConstructEmpty_t)` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::concurrent::IndexQueue<unsigned long, T2>::IndexQueue(iox::concurrent::IndexQueue<unsigned long, T2>::ConstructFull_t)` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::concurrent::IndexQueue<unsigned long, T2>::empty() const` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::concurrent::IndexQueue<unsigned long, T2>::loadvalueAt(const iox::concurrent::CyclicIndex<unsigned long, unsigned long> &, std::memory_order) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::IndexQueue<unsigned long, T2>::pop()` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::concurrent::IndexQueue<unsigned long, T2>::pop(T2 &)` | 93% 14/15 | 67% 4/6 | 50% 1/2 | 0% 0/1 | 
| `iox::concurrent::IndexQueue<unsigned long, T2>::popIfFull()` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::concurrent::IndexQueue<unsigned long, T2>::popIfFull(T2 &)` | 100% 11/11 | 75% 3/4 | N/A | N/A | 
| `iox::concurrent::IndexQueue<unsigned long, T2>::popIfSizeIsAtLeast(unsigned long)` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::concurrent::IndexQueue<unsigned long, T2>::popIfSizeIsAtLeast(unsigned long, T2 &)` | 93% 14/15 | 75% 6/8 | 100% 4/4 | 100% 2/2 | 
| `iox::concurrent::IndexQueue<unsigned long, T2>::push(T2)` | 65% 11/17 | 25% 2/8 | 50% 2/4 | 0% 0/2 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/concurrent/lockfree_queue/lockfree_queue.inl | 100% 40/40 | 90% 9/10 | 50% 1/2 | 0% 0/1 | 
| `iox::concurrent::LockFreeQueue<T1, unsigned long>::LockFreeQueue()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::LockFreeQueue<T1, unsigned long>::empty() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::LockFreeQueue<T1, unsigned long>::pop()` | 100% 6/6 | 100% 2/2 | N/A | N/A | 
| `iox::concurrent::LockFreeQueue<T1, unsigned long>::push(T1 &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::LockFreeQueue<T1, unsigned long>::push(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::LockFreeQueue<T1, unsigned long>::readBufferAt(const unsigned long &)` | 100% 5/5 | N/A | N/A | N/A | 
| `iox::concurrent::LockFreeQueue<T1, unsigned long>::size() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::LockFreeQueue<T1, unsigned long>::tryPush(T1 &&)` | 100% 6/6 | 100% 2/2 | N/A | N/A | 
| `iox::concurrent::LockFreeQueue<T1, unsigned long>::tryPush(const T1 &)` | 100% 6/6 | 100% 2/2 | N/A | N/A | 
| `iox::optional<T1> iox::concurrent::LockFreeQueue<T1, unsigned long>::pushImpl<T1>(T1 &&)` | 100% 9/9 | 75% 3/4 | 50% 1/2 | 0% 0/1 | 
| `void iox::concurrent::LockFreeQueue<T1, unsigned long>::writeBufferAt<T1>(const unsigned long &, T1 &&)` | 100% 3/3 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/concurrent/lockfree_queue/resizeable_lockfree_queue.inl | 95% 57/60 | 87% 26/30 | 88% 21/24 | 75% 9/12 | 
| `bool iox::concurrent::ResizeableLockFreeQueue<T1, unsigned long>::setCapacity<T1, T2>(unsigned long, T1 &&)` | 93% 13/14 | 88% 7/8 | 88% 7/8 | 75% 3/4 | 
| `iox::concurrent::ResizeableLockFreeQueue<T1, T2>::setCapacity(unsigned long)::[lambda(const T1 &) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::ResizeableLockFreeQueue<T1, unsigned long>::ResizeableLockFreeQueue(unsigned long)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::ResizeableLockFreeQueue<T1, unsigned long>::capacity() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::ResizeableLockFreeQueue<T1, unsigned long>::increaseCapacity(unsigned long)` | 89% 8/9 | 75% 3/4 | 75% 3/4 | 50% 1/2 | 
| `iox::concurrent::ResizeableLockFreeQueue<T1, unsigned long>::push(T1 &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::ResizeableLockFreeQueue<T1, unsigned long>::push(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::ResizeableLockFreeQueue<T1, unsigned long>::setCapacity(unsigned long)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::concurrent::ResizeableLockFreeQueue<T1, unsigned long>::tryGetUsedIndex(unsigned long &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::optional<T1> iox::concurrent::ResizeableLockFreeQueue<T1, unsigned long>::pushImpl<T1>(T1 &&)` | 100% 9/9 | 75% 3/4 | 50% 1/2 | 0% 0/1 | 
| `unsigned long iox::concurrent::ResizeableLockFreeQueue<T1, unsigned long>::decreaseCapacity<T1>(unsigned long, T1 &&)` | 95% 19/20 | 93% 13/14 | 100% 10/10 | 100% 5/5 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/concurrent/periodic_task.inl | 100% 17/17 | 100% 4/4 | 80% 8/10 | 60% 3/5 | 
| `iox::concurrent::PeriodicTask<T1>::PeriodicTask<T1...>(iox::concurrent::PeriodicTaskAutoStart_t, iox::units::Duration, const iox::string<(unsigned long)15> &, T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::PeriodicTask<T1>::PeriodicTask<T1...>(iox::concurrent::PeriodicTaskManualStart_t, const iox::string<(unsigned long)15> &, T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::PeriodicTask<T1>::isActive() const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::concurrent::PeriodicTask<T1>::run()` | 100% 6/6 | 100% 2/2 | 75% 3/4 | 50% 1/2 | 
| `iox::concurrent::PeriodicTask<T1>::start(iox::units::Duration)` | 100% 4/4 | N/A | N/A | N/A | 
| `iox::concurrent::PeriodicTask<T1>::stop()` | 100% 3/3 | 100% 2/2 | 75% 3/4 | 50% 1/2 | 
| `iox::concurrent::PeriodicTask<T1>::~PeriodicTask()` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/concurrent/smart_lock.inl | 100% 5/5 | N/A | N/A | N/A | 
| `iox::concurrent::smart_lock<T1, T2>::Proxy::Proxy(T1 &, T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::smart_lock<T1, T2>::Proxy::operator ->()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::smart_lock<T1, T2>::Proxy::~Proxy()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::smart_lock<T1, T2>::getScopeGuard()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::smart_lock<T1, T2>::operator ->()` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/concurrent/sofi.inl | 98% 49/50 | 75% 12/16 | 77% 23/30 | 53% 8/15 | 
| `bool iox::concurrent::SoFi<T1, unsigned long>::popIf<T1>(T1 &, const T1 &)` | 100% 14/14 | 83% 5/6 | 80% 8/10 | 60% 3/5 | 
| `iox::concurrent::SoFi<T1, T2>::pop(T1 &)::[lambda(T1) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::SoFi<T1, unsigned long>::capacity() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::SoFi<T1, unsigned long>::empty() const` | 100% 7/7 | 50% 1/2 | 83% 5/6 | 67% 2/3 | 
| `iox::concurrent::SoFi<T1, unsigned long>::pop(T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::concurrent::SoFi<T1, unsigned long>::push(const T1 &, T1 &)` | 92% 12/13 | 75% 3/4 | 67% 4/6 | 33% 1/3 | 
| `iox::concurrent::SoFi<T1, unsigned long>::setCapacity(unsigned long)` | 100% 7/7 | 100% 2/2 | 100% 4/4 | 100% 2/2 | 
| `iox::concurrent::SoFi<T1, unsigned long>::size() const` | 100% 6/6 | 50% 1/2 | 50% 2/4 | 0% 0/2 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/cxx/list.inl | 98% 175/178 | 85% 46/54 | 88% 60/68 | 76% 26/34 | 
| `T1 & iox::cxx::list<T1, unsigned long>::emplace_back<T1...>(T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `T1 & iox::cxx::list<T1, unsigned long>::emplace_front<T1...>(T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::cxx::list<T1, unsigned long>::IteratorBase<bool>::operator !=<bool>(const iox::cxx::list<T1, unsigned long>::IteratorBase<bool> &) const` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::cxx::list<T1, unsigned long>::IteratorBase<bool>::operator ==<bool>(const iox::cxx::list<T1, unsigned long>::IteratorBase<bool> &) const` | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `decltype(T2) iox::cxx::list<T1, unsigned long>::remove_if<T1>(T1)` | 100% 8/8 | 100% 4/4 | 100% 4/4 | 100% 2/2 | 
| `iox::cxx::list<T1, T2>::remove(const T1 &)::[lambda(T1 &) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::IteratorBase<(bool)0> iox::cxx::list<T1, unsigned long>::emplace<T1...>(iox::cxx::list<T1, unsigned long>::IteratorBase<(bool)1>, T1 &&...)` | 93% 13/14 | 75% 3/4 | 67% 4/6 | 33% 1/3 | 
| `iox::cxx::list<T1, unsigned long>::IteratorBase<bool>::IteratorBase(const iox::cxx::list<T1, unsigned long>::IteratorBase<(bool)0> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::IteratorBase<bool>::IteratorBase(std::conditional<bool, const iox::cxx::list<T1, unsigned long>*, iox::cxx::list<T1, unsigned long>*>::type, decltype(T2))` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::IteratorBase<bool>::operator *() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::IteratorBase<bool>::operator ++()` | 100% 4/4 | 75% 3/4 | 100% 2/2 | 100% 1/1 | 
| `iox::cxx::list<T1, unsigned long>::IteratorBase<bool>::operator --()` | 100% 4/4 | 75% 3/4 | 100% 2/2 | 100% 1/1 | 
| `iox::cxx::list<T1, unsigned long>::IteratorBase<bool>::operator ->() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::IteratorBase<bool>::operator =(const iox::cxx::list<T1, unsigned long>::IteratorBase<(bool)0> &)` | 100% 4/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::cxx::list<T1, unsigned long>::back()` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::back() const` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::begin()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::capacity() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::cbegin() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::cend() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::clear()` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::cxx::list<T1, unsigned long>::empty() const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::cxx::list<T1, unsigned long>::end()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::erase(iox::cxx::list<T1, unsigned long>::IteratorBase<(bool)1>)` | 93% 14/15 | 75% 3/4 | 67% 4/6 | 33% 1/3 | 
| `iox::cxx::list<T1, unsigned long>::front()` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::front() const` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::full() const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::cxx::list<T1, unsigned long>::getDataPtrFromIdx(decltype(T2))` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::getDataPtrFromIdx(decltype(T2)) const` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::getNextIdx(const iox::cxx::list<T1, unsigned long>::IteratorBase<(bool)1> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::getNextIdx(decltype(T2))` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::getNextIdx(decltype(T2)) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::getPrevIdx(const iox::cxx::list<T1, unsigned long>::IteratorBase<(bool)1> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::getPrevIdx(const iox::cxx::list<T1, unsigned long>::IteratorBase<(bool)1> &) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::getPrevIdx(decltype(T2))` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::getPrevIdx(decltype(T2)) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::init()` | 100% 11/11 | 100% 2/2 | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::insert(iox::cxx::list<T1, unsigned long>::IteratorBase<(bool)1>, T1 &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::insert(iox::cxx::list<T1, unsigned long>::IteratorBase<(bool)1>, const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::isInvalidIterOrDifferentLists(const iox::cxx::list<T1, unsigned long>::IteratorBase<(bool)1> &) const` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::isInvalidIterator(const iox::cxx::list<T1, unsigned long>::IteratorBase<(bool)1> &) const` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::isValidElementIdx(decltype(T2)) const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::cxx::list<T1, unsigned long>::list()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::list(const iox::cxx::list<T1, unsigned long>&)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::list(iox::cxx::list<T1, unsigned long>&&)` | 100% 5/5 | 100% 2/2 | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::max_size() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::operator =(const iox::cxx::list<T1, unsigned long>&)` | 100% 16/16 | 88% 7/8 | 88% 7/8 | 75% 3/4 | 
| `iox::cxx::list<T1, unsigned long>::operator =(iox::cxx::list<T1, unsigned long>&&)` | 100% 17/17 | 88% 7/8 | 88% 7/8 | 75% 3/4 | 
| `iox::cxx::list<T1, unsigned long>::pop_back()` | 100% 3/3 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::cxx::list<T1, unsigned long>::pop_front()` | 100% 3/3 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::cxx::list<T1, unsigned long>::push_back(T1 &&)` | 100% 4/4 | 100% 2/2 | 100% 4/4 | 100% 2/2 | 
| `iox::cxx::list<T1, unsigned long>::push_back(const T1 &)` | 100% 4/4 | 100% 2/2 | 100% 4/4 | 100% 2/2 | 
| `iox::cxx::list<T1, unsigned long>::push_front(T1 &&)` | 100% 4/4 | 100% 2/2 | 100% 4/4 | 100% 2/2 | 
| `iox::cxx::list<T1, unsigned long>::push_front(const T1 &)` | 100% 4/4 | 100% 2/2 | 100% 4/4 | 100% 2/2 | 
| `iox::cxx::list<T1, unsigned long>::remove(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::setNextIdx(decltype(T2), decltype(T2))` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::setPrevIdx(decltype(T2), decltype(T2))` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::size() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::list<T1, unsigned long>::~list()` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/cxx/variant_queue.inl | 90% 28/31 | 78% 14/18 | N/A | N/A | 
| `iox::cxx::VariantQueue<T1, unsigned long>::VariantQueue(iox::cxx::VariantQueueTypes)` | 100% 8/8 | 80% 4/5 | N/A | N/A | 
| `iox::cxx::VariantQueue<T1, unsigned long>::empty() const` | 80% 4/5 | 75% 3/4 | N/A | N/A | 
| `iox::cxx::VariantQueue<T1, unsigned long>::getUnderlyingFiFo()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::cxx::VariantQueue<T1, unsigned long>::pop()` | 86% 6/7 | 75% 3/4 | N/A | N/A | 
| `iox::cxx::VariantQueue<T1, unsigned long>::push(const T1 &)` | 90% 9/10 | 80% 4/5 | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/error_handling/error_handler.inl | 100% 2/2 | N/A | N/A | N/A | 
| `auto iox::errorToStringIndex<T1>(T1)` | 100% 1/1 | N/A | N/A | N/A | 
| `void iox::errorHandler<T1>(T1, iox::ErrorLevel)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/posix_wrapper/mutex.hpp | 0% 0/10 | N/A | 0% 0/4 | 0% 0/2 | 
| `iox::posix::MutexBuilder::isInterProcessCapable(bool &&) &&` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::MutexBuilder::isInterProcessCapable(const bool &) &&` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::MutexBuilder::mutexType(const iox::posix::MutexType &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MutexBuilder::mutexType(iox::posix::MutexType &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MutexBuilder::priorityCeiling(const iox::optional<int> &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MutexBuilder::priorityCeiling(iox::optional<int> &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MutexBuilder::priorityInheritance(const iox::posix::MutexPriorityInheritance &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MutexBuilder::priorityInheritance(iox::posix::MutexPriorityInheritance &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MutexBuilder::threadTerminationBehavior(const iox::posix::MutexThreadTerminationBehavior &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MutexBuilder::threadTerminationBehavior(iox::posix::MutexThreadTerminationBehavior &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/posix_wrapper/posix_call.inl | 97% 34/35 | 100% 12/12 | 88% 7/8 | 75% 3/4 | 
| `iox::posix::PosixCallBuilder<T1, T2...> iox::posix::internal::createPosixCallBuilder<T1, T2...>(T1 (*)(T2...), const char *, const char *, int, const char *)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::PosixCallBuilder<T1, T2...>::PosixCallBuilder(T1 (*)(T2...), const char *, const char *, int, const char *)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::PosixCallBuilder<T1, T2...>::operator ()(T2...) &&` | 100% 7/7 | 100% 4/4 | 100% 4/4 | 100% 2/2 | 
| `iox::posix::PosixCallEvaluator<T1> iox::posix::PosixCallEvaluator<T1>::ignoreErrnos<T1...>(T1...) const &&` | 100% 3/3 | 100% 2/2 | N/A | N/A | 
| `iox::posix::PosixCallEvaluator<T1> iox::posix::PosixCallEvaluator<T1>::suppressErrorMessagesForErrnos<T1...>(T1...) const &&` | 100% 3/3 | 100% 2/2 | N/A | N/A | 
| `iox::posix::PosixCallEvaluator<T1> iox::posix::PosixCallVerificator<T1>::failureReturnValue<T1...>(T1...) &&` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::posix::PosixCallEvaluator<T1> iox::posix::PosixCallVerificator<T1>::successReturnValue<T1...>(T1...) &&` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::posix::PosixCallEvaluator<T1>::PosixCallEvaluator(iox::posix::internal::PosixCallDetails<T1> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::PosixCallEvaluator<T1>::evaluate() const &&` | 100% 5/5 | 100% 4/4 | 75% 3/4 | 50% 1/2 | 
| `iox::posix::PosixCallResult<T1>::getHumanReadableErrnum() const` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::posix::PosixCallVerificator<T1>::PosixCallVerificator(iox::posix::internal::PosixCallDetails<T1> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::PosixCallVerificator<T1>::returnValueMatchesErrno() &&` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::posix::internal::PosixCallDetails<T1>::PosixCallDetails(const char *, const char *, int, const char *)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::internal::errorLiteralToString(const char *, char *)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::internal::errorLiteralToString(int, char *)` | 0% 0/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/posix_wrapper/shared_memory_object.hpp | 50% 6/12 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObjectBuilder::accessMode(const iox::posix::AccessMode &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObjectBuilder::accessMode(iox::posix::AccessMode &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObjectBuilder::baseAddressHint(const iox::optional<const void *> &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObjectBuilder::baseAddressHint(iox::optional<const void *> &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObjectBuilder::memorySizeInBytes(const unsigned long &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObjectBuilder::memorySizeInBytes(unsigned long &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObjectBuilder::name(const iox::string<(unsigned long)4096> &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObjectBuilder::name(iox::string<(unsigned long)4096> &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObjectBuilder::openMode(const iox::posix::OpenMode &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObjectBuilder::openMode(iox::posix::OpenMode &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObjectBuilder::permissions(const iox::access_rights &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObjectBuilder::permissions(iox::access_rights &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/posix_wrapper/shared_memory_object/memory_map.hpp | 50% 6/12 | N/A | N/A | N/A | 
| `iox::posix::MemoryMapBuilder::accessMode(const iox::posix::AccessMode &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMapBuilder::accessMode(iox::posix::AccessMode &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMapBuilder::baseAddressHint(const void *&&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMapBuilder::baseAddressHint(const void *const &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMapBuilder::fileDescriptor(const int &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMapBuilder::fileDescriptor(int &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMapBuilder::flags(const iox::posix::MemoryMapFlags &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMapBuilder::flags(iox::posix::MemoryMapFlags &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMapBuilder::length(const unsigned long &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMapBuilder::length(unsigned long &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMapBuilder::offset(const long &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMapBuilder::offset(long &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/posix_wrapper/shared_memory_object/shared_memory.hpp | 90% 9/10 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryBuilder::accessMode(const iox::posix::AccessMode &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryBuilder::accessMode(iox::posix::AccessMode &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryBuilder::filePermissions(const iox::access_rights &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryBuilder::filePermissions(iox::access_rights &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryBuilder::name(const iox::string<(unsigned long)4096> &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryBuilder::name(iox::string<(unsigned long)4096> &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryBuilder::openMode(const iox::posix::OpenMode &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryBuilder::openMode(iox::posix::OpenMode &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryBuilder::size(const unsigned long &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryBuilder::size(unsigned long &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/internal/posix_wrapper/unix_domain_socket.hpp | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::expected<iox::posix::UnixDomainSocket, iox::posix::IpcChannelError> iox::posix::UnixDomainSocket::create<T1...>(T1 &&...)` | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/posix_wrapper/file_lock.hpp | 67% 4/6 | N/A | N/A | N/A | 
| `iox::posix::FileLockBuilder::name(const iox::string<(unsigned long)249> &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::FileLockBuilder::name(iox::string<(unsigned long)249> &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::FileLockBuilder::path(const iox::string<(unsigned long)767> &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::FileLockBuilder::path(iox::string<(unsigned long)767> &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::FileLockBuilder::permission(const iox::access_rights &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::FileLockBuilder::permission(iox::access_rights &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/posix_wrapper/named_semaphore.hpp | 75% 6/8 | N/A | N/A | N/A | 
| `iox::posix::NamedSemaphoreBuilder::initialValue(const unsigned int &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::NamedSemaphoreBuilder::initialValue(unsigned int &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::NamedSemaphoreBuilder::name(const iox::string<(unsigned long)250> &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::NamedSemaphoreBuilder::name(iox::string<(unsigned long)250> &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::NamedSemaphoreBuilder::openMode(const iox::posix::OpenMode &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::NamedSemaphoreBuilder::openMode(iox::posix::OpenMode &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::NamedSemaphoreBuilder::permissions(const iox::access_rights &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::NamedSemaphoreBuilder::permissions(iox::access_rights &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/posix_wrapper/thread.hpp | 50% 1/2 | N/A | N/A | N/A | 
| `iox::posix::ThreadBuilder::name(const iox::string<(unsigned long)15> &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::ThreadBuilder::name(iox::string<(unsigned long)15> &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/include/iceoryx_hoofs/posix_wrapper/unnamed_semaphore.hpp | 75% 3/4 | N/A | 25% 1/4 | 0% 0/2 | 
| `iox::posix::UnnamedSemaphoreBuilder::initialValue(const unsigned int &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::UnnamedSemaphoreBuilder::initialValue(unsigned int &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::UnnamedSemaphoreBuilder::isInterProcessCapable(bool &&) &&` | 100% 1/1 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::posix::UnnamedSemaphoreBuilder::isInterProcessCapable(const bool &) &&` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/memory/include/iox/detail/pointer_repository.inl | 96% 25/26 | 89% 16/18 | 88% 14/16 | 75% 6/8 | 
| `iox::PointerRepository<T1, T2, unsigned long>::PointerRepository()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::PointerRepository<T1, T2, unsigned long>::addPointerIfIdIsFree(T1, T2, unsigned long)` | 100% 7/7 | 100% 4/4 | 100% 4/4 | 100% 2/2 | 
| `iox::PointerRepository<T1, T2, unsigned long>::getBasePtr(T1) const` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::PointerRepository<T1, T2, unsigned long>::registerPtrWithId(T1, T2, unsigned long)` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::PointerRepository<T1, T2, unsigned long>::searchId(T2) const` | 100% 4/4 | 100% 4/4 | 100% 4/4 | 100% 2/2 | 
| `iox::PointerRepository<T1, T2, unsigned long>::unregisterAll()` | 100% 3/3 | 100% 2/2 | N/A | N/A | 
| `iox::PointerRepository<T1, T2, unsigned long>::unregisterPtr(T1)` | 80% 4/5 | 50% 2/4 | 50% 2/4 | 0% 0/2 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/memory/include/iox/detail/relative_pointer.inl | 95% 35/37 | 100% 6/6 | 90% 9/10 | 80% 4/5 | 
| `bool iox::operator !=<T1>(iox::RelativePointer<T1>, std::nullptr_t)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::RelativePointer(T1 *)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::RelativePointer(T1 *)::[lambda() (instance 1)]` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::RelativePointer(T1 *, iox::segment_id_t)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::RelativePointer(iox::RelativePointer<T1>&&)` | 0% 0/2 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::RelativePointer(unsigned long, iox::segment_id_t)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::computeOffset(T1 *) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::computeRawPtr() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::get() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::getBasePtr() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::getBasePtr(iox::segment_id_t)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::getId() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::getOffset() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::getOffset(iox::segment_id_t, T1 *)` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::RelativePointer<T1>::getPtr(iox::segment_id_t, unsigned long)` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::RelativePointer<T1>::operator =(T1 *)` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::operator bool() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::registerPtrWithId(iox::segment_id_t, T1 *, unsigned long)` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::RelativePointer<T1>::searchId(T1 *)` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::RelativePointer<T1>::unregisterAll()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointer<T1>::unregisterPtr(iox::segment_id_t)` | 100% 1/1 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::getRepository()` | 100% 2/2 | N/A | N/A | N/A | 
| `std::enable_if<(!std::is_void<T1>::value), const T1 &>::type iox::RelativePointer<T1>::operator *<T1>() const` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/memory/include/iox/detail/scope_guard.inl | 100% 11/11 | 75% 3/4 | 75% 3/4 | 50% 1/2 | 
| `iox::ScopeGuardWithVariableCapacity<unsigned long>::ScopeGuardWithVariableCapacity(const iox::function_ref<void ()> &, const iox::storable_function<unsigned long, void ()> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::ScopeGuardWithVariableCapacity<unsigned long>::ScopeGuardWithVariableCapacity(const iox::storable_function<unsigned long, void ()> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::ScopeGuardWithVariableCapacity<unsigned long>::ScopeGuardWithVariableCapacity(iox::ScopeGuardWithVariableCapacity<unsigned long>&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::ScopeGuardWithVariableCapacity<unsigned long>::destroy()` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::ScopeGuardWithVariableCapacity<unsigned long>::operator =(iox::ScopeGuardWithVariableCapacity<unsigned long>&&)` | 100% 5/5 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::ScopeGuardWithVariableCapacity<unsigned long>::~ScopeGuardWithVariableCapacity()` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/memory/include/iox/detail/unique_ptr.inl | 100% 24/24 | 75% 3/4 | 63% 5/8 | 25% 1/4 | 
| `bool iox::operator !=<T1, T2>(const iox::unique_ptr<T1> &, const iox::unique_ptr<T2> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::operator ==<T1, T2>(const iox::unique_ptr<T1> &, const iox::unique_ptr<T2> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::unique_ptr<T1>::destroy()` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::unique_ptr<T1>::get()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::unique_ptr<T1>::get() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::unique_ptr<T1>::operator ->()` | 100% 2/2 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::unique_ptr<T1>::operator ->() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::unique_ptr<T1>::operator =(iox::unique_ptr<T1>&&)` | 100% 6/6 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::unique_ptr<T1>::release(iox::unique_ptr<T1>&&)` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::unique_ptr<T1>::swap(iox::unique_ptr<T1>&)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::unique_ptr<T1>::unique_ptr(T1 *, const iox::storable_function<(unsigned long)128, void (iox::add_const_conditionally<T1 *const , T1>::type)> &)` | 100% 1/1 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::unique_ptr<T1>::unique_ptr(iox::unique_ptr<T1>&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::unique_ptr<T1>::~unique_ptr()` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/memory/include/iox/memory.hpp | 100% 1/1 | N/A | N/A | N/A | 
| `T1 iox::align<T1>(T1, T1)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/memory/source/bump_allocator.cpp | 100% 16/16 | 100% 4/4 | 75% 6/8 | 50% 2/4 | 
| `iox::BumpAllocator::BumpAllocator(void *, unsigned long)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::BumpAllocator::allocate(unsigned long, unsigned long)` | 100% 14/14 | 100% 4/4 | 75% 6/8 | 50% 2/4 | 
| `iox::BumpAllocator::deallocate()` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/memory/source/memory.cpp | 0% 0/9 | 0% 0/4 | 0% 0/4 | 0% 0/2 | 
| `iox::alignedAlloc(unsigned long, unsigned long)` | 0% 0/7 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 
| `iox::alignedFree(void *)` | 0% 0/2 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/memory/source/relative_pointer_data.cpp | 100% 4/4 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::RelativePointerData::id() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointerData::isLogicalNullptr() const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::RelativePointerData::offset() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::RelativePointerData::reset()` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/posix/design/include/iox/detail/file_management_interface.inl | 81% 21/26 | 50% 5/10 | 50% 5/10 | 0% 0/5 | 
| `iox::FileManagementInterface<T1>::get_ownership() const` | 80% 4/5 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::FileManagementInterface<T1>::get_permissions() const` | 83% 5/6 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::FileManagementInterface<T1>::get_size() const` | 80% 4/5 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::FileManagementInterface<T1>::set_ownership(iox::Ownership)` | 80% 4/5 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::FileManagementInterface<T1>::set_permissions(iox::access_rights)` | 80% 4/5 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/posix/design/source/file_management_interface.cpp | 29% 14/49 | 14% 3/22 | 8% 3/38 | 0% 0/19 | 
| `iox::Ownership::Ownership(unsigned int, unsigned int)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::Ownership::from_process()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::Ownership::from_user_and_group(const iox::UserName &, const iox::GroupName &)` | 0% 0/5 | 0% 0/2 | 0% 0/4 | 0% 0/2 | 
| `iox::Ownership::from_user_and_group(unsigned int, unsigned int)` | 0% 0/3 | 0% 0/2 | 0% 0/4 | 0% 0/2 | 
| `iox::Ownership::gid() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::Ownership::uid() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::details::get_file_status(int)` | 36% 4/11 | 20% 1/5 | 13% 1/8 | 0% 0/4 | 
| `iox::details::set_owner(int, unsigned int, unsigned int)` | 19% 3/16 | 13% 1/8 | 7% 1/14 | 0% 0/7 | 
| `iox::details::set_permissions(int, iox::access_rights)` | 30% 3/10 | 20% 1/5 | 13% 1/8 | 0% 0/4 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/posix/filesystem/include/iox/file.hpp | 50% 4/8 | N/A | N/A | N/A | 
| `iox::FileBuilder::access_mode(const iox::posix::AccessMode &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::FileBuilder::access_mode(iox::posix::AccessMode &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::FileBuilder::open_mode(const iox::posix::OpenMode &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::FileBuilder::open_mode(iox::posix::OpenMode &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::FileBuilder::owner(const iox::Ownership &) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::FileBuilder::owner(iox::Ownership &&) &&` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::FileBuilder::permissions(const iox::access_rights &) &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::FileBuilder::permissions(iox::access_rights &&) &&` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/posix/filesystem/source/file.cpp | 37% 66/179 | 37% 35/95 | 24% 39/162 | 14% 11/81 | 
| `iox::File::File(int, iox::posix::AccessMode)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::File::File(iox::File&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::File::close_fd()` | 38% 6/16 | 38% 3/8 | 25% 3/12 | 17% 1/6 | 
| `iox::File::does_exist(const iox::FilePath &)` | 33% 5/15 | 38% 3/8 | 17% 2/12 | 17% 1/6 | 
| `iox::File::get_file_handle() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::File::operator =(iox::File&&)` | 100% 6/6 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::File::read(unsigned char *, unsigned long) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::File::read_at(unsigned long, unsigned char *, unsigned long) const` | 32% 7/22 | 33% 4/12 | 23% 5/22 | 9% 1/11 | 
| `iox::File::remove(const iox::FilePath &)` | 23% 5/22 | 25% 3/12 | 11% 2/18 | 11% 1/9 | 
| `iox::File::set_offset(unsigned long) const` | 25% 4/16 | 22% 2/9 | 14% 2/14 | 0% 0/7 | 
| `iox::File::write(const unsigned char *, unsigned long) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::File::write_at(unsigned long, const unsigned char *, unsigned long) const` | 25% 7/28 | 27% 4/15 | 18% 5/28 | 7% 1/14 | 
| `iox::File::~File()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::FileBuilder::create(const iox::FilePath &)` | 60% 3/5 | 75% 3/4 | 50% 3/6 | 33% 1/3 | 
| `iox::FileBuilder::open(const iox::FilePath &)` | 40% 17/43 | 48% 12/25 | 33% 16/48 | 21% 5/24 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/posix/time/source/adaptive_wait.cpp | 100% 8/8 | 100% 6/6 | 100% 6/6 | 100% 3/3 | 
| `iox::detail::adaptive_wait::wait()` | 100% 6/6 | 100% 4/4 | 100% 4/4 | 100% 2/2 | 
| `iox::detail::adaptive_wait::wait_loop(const iox::function_ref<bool ()> &)` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/posix/time/source/deadline_timer.cpp | 100% 13/13 | 100% 2/2 | 83% 5/6 | 67% 2/3 | 
| `iox::deadline_timer::deadline_timer(iox::units::Duration)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::deadline_timer::getCurrentMonotonicTime()` | 100% 3/3 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::deadline_timer::hasExpired() const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::deadline_timer::remainingTime() const` | 100% 5/5 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::deadline_timer::reset()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::deadline_timer::reset(iox::units::Duration)` | 100% 2/2 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/posix/vocabulary/source/file_name.cpp | 100% 11/11 | 100% 4/4 | 89% 32/36 | 72% 13/18 | 
| `iox::details::file_name_does_contain_invalid_characters(const iox::string<(unsigned long)255> &)` | 100% 10/10 | 100% 4/4 | 87% 26/30 | 67% 10/15 | 
| `iox::details::file_name_does_contain_invalid_content(const iox::string<(unsigned long)255> &)` | 100% 1/1 | N/A | 100% 6/6 | 100% 3/3 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/posix/vocabulary/source/file_path.cpp | 100% 16/16 | 100% 8/8 | 89% 34/38 | 74% 14/19 | 
| `iox::details::file_path_does_contain_invalid_characters(const iox::string<(unsigned long)1023> &)` | 100% 11/11 | 100% 4/4 | 88% 30/34 | 71% 12/17 | 
| `iox::details::file_path_does_contain_invalid_characters(const iox::string<(unsigned long)1023> &)::[lambda() (instance 1)]` | 100% 4/4 | 100% 4/4 | 100% 2/2 | 100% 1/1 | 
| `iox::details::file_path_does_contain_invalid_content(const iox::string<(unsigned long)1023> &)` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/posix/vocabulary/source/group_name.cpp | 100% 12/12 | 100% 6/6 | 92% 24/26 | 85% 11/13 | 
| `iox::details::group_name_does_contain_invalid_characters(const iox::string<(unsigned long)32> &)` | 100% 8/8 | 100% 4/4 | 94% 17/18 | 89% 8/9 | 
| `iox::details::group_name_does_contain_invalid_content(const iox::string<(unsigned long)32> &)` | 100% 4/4 | 100% 2/2 | 88% 7/8 | 75% 3/4 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/posix/vocabulary/source/path.cpp | 100% 1/1 | N/A | N/A | N/A | 
| `iox::details::path_does_contain_invalid_content(const iox::string<(unsigned long)1023> &)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/posix/vocabulary/source/user_name.cpp | 100% 12/12 | 100% 6/6 | 92% 24/26 | 85% 11/13 | 
| `iox::details::user_name_does_contain_invalid_characters(const iox::string<(unsigned long)32> &)` | 100% 8/8 | 100% 4/4 | 94% 17/18 | 89% 8/9 | 
| `iox::details::user_name_does_contain_invalid_content(const iox::string<(unsigned long)32> &)` | 100% 4/4 | 100% 2/2 | 88% 7/8 | 75% 3/4 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/primitives/include/iox/attributes.hpp | 100% 1/1 | N/A | N/A | N/A | 
| `void iox::internal::IOX_DISCARD_RESULT_IMPL<T1>(T1 &&)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/reporting/include/iox/detail/log/building_blocks/console_logger.inl | 92% 11/12 | 75% 3/4 | 50% 1/2 | 0% 0/1 | 
| `void iox::log::ConsoleLogger::logArithmetic<T1>(T1, const char *)` | 89% 8/9 | 75% 3/4 | 50% 1/2 | 0% 0/1 | 
| `void iox::log::ConsoleLogger::logDec<T1, T2>(T1)` | 100% 1/1 | N/A | N/A | N/A | 
| `void iox::log::ConsoleLogger::logHex<T1, T2>(T1)` | 100% 1/1 | N/A | N/A | N/A | 
| `void iox::log::ConsoleLogger::logOct<T1, T2>(T1)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/reporting/include/iox/detail/log/building_blocks/logger.inl | 63% 19/30 | 63% 5/8 | 63% 5/8 | 25% 1/4 | 
| `bool iox::log::equalStrings<unsigned int>(const char *, const char (&)[T1])` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::log::internal::Logger<T1>::activeLogger(iox::log::internal::Logger<T1>*)` | 63% 10/16 | 75% 3/4 | 75% 3/4 | 50% 1/2 | 
| `iox::log::internal::Logger<T1>::get()` | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::log::internal::Logger<T1>::init(iox::log::LogLevel)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::log::internal::Logger<T1>::initLoggerInternal(iox::log::LogLevel)` | 57% 4/7 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::log::internal::Logger<T1>::setActiveLogger(iox::log::internal::Logger<T1>&)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/reporting/include/iox/detail/log/logstream.inl | 80% 28/35 | 100% 2/2 | 83% 5/6 | 67% 2/3 | 
| `iox::log::LogStream& iox::log::LogStream::operator <<<T1, T2>(T1)` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::log::LogStream& iox::log::LogStream::operator <<<T1, T2>(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::log::LogStream& iox::log::LogStream::operator <<<T1, T2>(iox::log::LogHex<T1>)` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::log::LogStream& iox::log::LogStream::operator <<<T1, T2>(iox::log::LogOct<T1>)` | 100% 4/4 | N/A | N/A | N/A | 
| `iox::log::LogStream::LogStream(const char *, int, const char *, iox::log::LogLevel)` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::log::LogStream::LogStream(const char *, int, const char *, iox::log::LogLevel, bool)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::log::LogStream::LogStream(iox::log::internal::Logger<iox::log::ConsoleLogger> &, const char *, int, const char *, iox::log::LogLevel)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::log::LogStream::flush()` | 100% 3/3 | 100% 2/2 | 75% 3/4 | 50% 1/2 | 
| `iox::log::LogStream::operator <<(bool)` | 100% 2/2 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::log::LogStream::operator <<(const char *)` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::log::LogStream::operator <<(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::log::LogStream::operator <<(iox::log::LogHex<const void *const >)` | 0% 0/3 | N/A | N/A | N/A | 
| `iox::log::LogStream::operator <<(iox::log::LogLevel)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::log::LogStream::self()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::log::LogStream::~LogStream()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::log::hex(const void *)` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::log::internal::LogStreamOff::LogStreamOff(const char *, int, const char *, iox::log::LogLevel, bool)` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::log::internal::LogStreamOff::self()` | 0% 0/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/reporting/include/iox/logging.hpp | 100% 1/1 | N/A | 75% 3/4 | 50% 1/2 | 
| `iox::log::internal::isLogLevelActive(iox::log::LogLevel)` | 100% 1/1 | N/A | 75% 3/4 | 50% 1/2 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/reporting/source/log/building_blocks/console_logger.cpp | 85% 47/55 | 50% 8/16 | 55% 11/20 | 20% 2/10 | 
| `iox::log::ConsoleLogger::assumeFlushed()` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::log::ConsoleLogger::createLogMessageHeader(const char *, int, const char *, iox::log::LogLevel)` | 88% 28/32 | 50% 5/10 | 50% 6/12 | 0% 0/6 | 
| `iox::log::ConsoleLogger::flush()` | 0% 0/3 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 
| `iox::log::ConsoleLogger::getLogBuffer() const` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::log::ConsoleLogger::getLogLevel()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::log::ConsoleLogger::getThreadLocalData()` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::log::ConsoleLogger::initLogger(iox::log::LogLevel)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::log::ConsoleLogger::logBool(bool)` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::log::ConsoleLogger::logString(const char *)` | 89% 8/9 | 75% 3/4 | 75% 3/4 | 50% 1/2 | 
| `iox::log::ConsoleLogger::setLogLevel(iox::log::LogLevel)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/reporting/source/log/building_blocks/logger.cpp | 14% 3/21 | 6% 1/16 | 6% 1/16 | 0% 0/8 | 
| `iox::log::logLevelFromEnvOr(iox::log::LogLevel)` | 14% 3/21 | 6% 1/16 | 6% 1/16 | 0% 0/8 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/concurrent/loffli.cpp | 100% 31/31 | 75% 9/12 | 75% 18/24 | 50% 6/12 | 
| `iox::concurrent::LoFFLi::init(iox::not_null<unsigned int *, void>, unsigned int)` | 100% 10/10 | 75% 3/4 | 80% 8/10 | 60% 3/5 | 
| `iox::concurrent::LoFFLi::pop(unsigned int &)` | 100% 11/11 | 75% 3/4 | 67% 4/6 | 33% 1/3 | 
| `iox::concurrent::LoFFLi::push(unsigned int)` | 100% 10/10 | 75% 3/4 | 75% 6/8 | 50% 2/4 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/cxx/requires.cpp | 100% 6/6 | 100% 4/4 | 75% 6/8 | 50% 2/4 | 
| `iox::cxx::internal::Require(bool, const char *, int, const char *, const char *)` | 100% 3/3 | 100% 2/2 | 75% 3/4 | 50% 1/2 | 
| `iox::cxx::internal::Require(bool, const char *, int, const char *, const char *, const char *)` | 100% 3/3 | 100% 2/2 | 75% 3/4 | 50% 1/2 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/error_handling/error_handler.cpp | 0% 0/12 | 0% 0/4 | 0% 0/6 | 0% 0/3 | 
| `iox::ErrorHandler::defaultHandler(unsigned int, const char *, iox::ErrorLevel)` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::ErrorHandler::reactOnErrorLevel(iox::ErrorLevel, const char *)` | 0% 0/11 | 0% 0/4 | 0% 0/6 | 0% 0/3 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/error_handling/error_handling.cpp | 100% 1/1 | N/A | N/A | N/A | 
| `iox::asStringLiteral(iox::HoofsError)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/error_reporting/custom/default/default_error_handler.cpp | 100% 3/3 | N/A | N/A | N/A | 
| `iox::er::DefaultErrorHandler::onPanic()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::DefaultErrorHandler::onReportError(iox::er::ErrorDescriptor)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::er::DefaultErrorHandler::onReportViolation(iox::er::ErrorDescriptor)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/access_control.cpp | 75% 76/101 | 73% 40/55 | 49% 44/90 | 22% 10/45 | 
| `iox::posix::AccessController::addAclPermission(__acl_permset_ext *, unsigned int)` | 60% 3/5 | 50% 1/2 | 25% 1/4 | 0% 0/2 | 
| `iox::posix::AccessController::addGroupPermission(iox::posix::AccessController::Permission, const iox::string<(unsigned long)32> &)` | 71% 5/7 | 75% 3/4 | 63% 5/8 | 50% 2/4 | 
| `iox::posix::AccessController::addPermissionEntry(iox::posix::AccessController::Category, iox::posix::AccessController::Permission, unsigned int)` | 100% 17/17 | 100% 9/9 | 71% 10/14 | 43% 3/7 | 
| `iox::posix::AccessController::addUserPermission(iox::posix::AccessController::Permission, const iox::string<(unsigned long)32> &)` | 71% 5/7 | 75% 3/4 | 50% 4/8 | 25% 1/4 | 
| `iox::posix::AccessController::createACL(int)` | 80% 4/5 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::posix::AccessController::createACL(int)::[lambda(__acl_ext *) (instance 1)]` | 100% 2/2 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::posix::AccessController::createACLEntry(__acl_ext *, const iox::posix::AccessController::PermissionEntry &)` | 64% 23/36 | 60% 12/20 | 29% 8/28 | 0% 0/14 | 
| `iox::posix::AccessController::writePermissionsToFile(int) const` | 77% 17/22 | 79% 11/14 | 58% 14/24 | 33% 4/12 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/file_lock.cpp | 41% 38/92 | 38% 15/40 | 23% 18/80 | 10% 4/40 | 
| `iox::posix::FileLock::FileLock(int, const iox::string<(unsigned long)1023> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::FileLock::FileLock(iox::posix::FileLock&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::FileLock::closeFileDescriptor()` | 88% 7/8 | 75% 3/4 | 75% 3/4 | 50% 1/2 | 
| `iox::posix::FileLock::closeFileDescriptor()::[lambda(T1 &) (instance 1)]` | 0% 0/3 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::FileLock::closeFileDescriptor()::[lambda(T1 &) (instance 2)]` | 0% 0/3 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::FileLock::closeFileDescriptor()::[lambda(T1 &) (instance 3)]` | 0% 0/3 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::FileLock::convertErrnoToFileLockError(int, const iox::string<(unsigned long)1023> &)` | 5% 2/40 | 5% 1/20 | 0% 0/38 | 0% 0/19 | 
| `iox::posix::FileLock::invalidate()` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::posix::FileLock::operator =(iox::posix::FileLock&&)` | 86% 6/7 | 50% 2/4 | 33% 2/6 | 0% 0/3 | 
| `iox::posix::FileLock::~FileLock()` | 50% 1/2 | 50% 1/2 | 25% 1/4 | 0% 0/2 | 
| `iox::posix::FileLockBuilder::create()` | 90% 18/20 | 80% 8/10 | 60% 12/20 | 30% 3/10 | 
| `iox::posix::FileLockBuilder::create()::[lambda(T1 &) (instance 1)]` | 0% 0/2 | N/A | 0% 0/2 | 0% 0/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/mutex.cpp | 46% 71/155 | 40% 31/77 | 25% 34/136 | 7% 5/68 | 
| `iox::posix::MutexAttributes::enableIpcSupport(bool)` | 38% 3/8 | 25% 1/4 | 25% 2/8 | 0% 0/4 | 
| `iox::posix::MutexAttributes::init()` | 44% 4/9 | 25% 1/4 | 17% 1/6 | 0% 0/3 | 
| `iox::posix::MutexAttributes::setPrioCeiling(int)` | 0% 0/12 | 0% 0/6 | 0% 0/8 | 0% 0/4 | 
| `iox::posix::MutexAttributes::setProtocol(iox::posix::MutexPriorityInheritance)` | 25% 3/12 | 17% 1/6 | 10% 1/10 | 0% 0/5 | 
| `iox::posix::MutexAttributes::setThreadTerminationBehavior(iox::posix::MutexThreadTerminationBehavior)` | 60% 3/5 | 50% 1/2 | 25% 1/4 | 0% 0/2 | 
| `iox::posix::MutexAttributes::setType(iox::posix::MutexType)` | 60% 3/5 | 50% 1/2 | 25% 1/4 | 0% 0/2 | 
| `iox::posix::MutexAttributes::~MutexAttributes()` | 75% 3/4 | 50% 2/4 | 33% 2/6 | 0% 0/3 | 
| `iox::posix::MutexBuilder::create(iox::optional<iox::posix::mutex> &)` | 68% 21/31 | 50% 9/18 | 46% 11/24 | 8% 1/12 | 
| `iox::posix::initializeMutex(pthread_mutex_t *, const pthread_mutexattr_t *)` | 25% 3/12 | 17% 1/6 | 10% 1/10 | 0% 0/5 | 
| `iox::posix::mutex::lock()` | 40% 6/15 | 43% 3/7 | 25% 3/12 | 17% 1/6 | 
| `iox::posix::mutex::make_consistent()` | 100% 2/2 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::posix::mutex::make_consistent()::[lambda(T1) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::mutex::make_consistent()::[lambda(T1) (instance 2)]` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::mutex::mutex(bool)` | 0% 0/9 | N/A | 0% 0/16 | 0% 0/8 | 
| `iox::posix::mutex::try_lock()` | 54% 7/13 | 50% 3/6 | 30% 3/10 | 20% 1/5 | 
| `iox::posix::mutex::unlock()` | 75% 6/8 | 75% 3/4 | 50% 3/6 | 33% 1/3 | 
| `iox::posix::mutex::~mutex()` | 75% 6/8 | 67% 4/6 | 50% 4/8 | 25% 1/4 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/named_semaphore.cpp | 63% 50/80 | 60% 27/45 | 46% 31/68 | 29% 10/34 | 
| `iox::posix::NamedSemaphore::NamedSemaphore(sem_t *, const iox::string<(unsigned long)250> &, bool)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::NamedSemaphore::getHandle()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::NamedSemaphore::~NamedSemaphore()` | 75% 3/4 | 75% 3/4 | 50% 3/6 | 33% 1/3 | 
| `iox::posix::NamedSemaphoreBuilder::create(iox::optional<iox::posix::NamedSemaphore> &) const` | 89% 24/27 | 85% 17/20 | 77% 20/26 | 54% 7/13 | 
| `iox::posix::createNameWithSlash(const iox::string<(unsigned long)250> &)` | 100% 3/3 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::posix::createSemaphore(iox::optional<iox::posix::NamedSemaphore> &, const iox::string<(unsigned long)250> &, iox::posix::OpenMode, iox::access_rights, unsigned int)` | 44% 8/18 | 38% 3/8 | 21% 3/14 | 14% 1/7 | 
| `iox::posix::tryOpenExistingSemaphore(iox::optional<iox::posix::NamedSemaphore> &, const iox::string<(unsigned long)250> &)` | 39% 7/18 | 33% 3/9 | 21% 3/14 | 14% 1/7 | 
| `iox::posix::unlink(const iox::string<(unsigned long)250> &)` | 38% 3/8 | 25% 1/4 | 17% 1/6 | 0% 0/3 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/posix_access_rights.cpp | 38% 26/68 | 31% 8/26 | 23% 12/52 | 15% 4/26 | 
| `iox::posix::PosixGroup::PosixGroup(const iox::string<(unsigned long)32> &)` | 0% 0/5 | 0% 0/2 | 0% 0/4 | 0% 0/2 | 
| `iox::posix::PosixGroup::PosixGroup(unsigned int)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::PosixGroup::doesExist() const` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::PosixGroup::getGroupID(const iox::string<(unsigned long)32> &)` | 100% 5/5 | 100% 2/2 | 75% 3/4 | 50% 1/2 | 
| `iox::posix::PosixGroup::getGroupName(unsigned int)` | 100% 5/5 | 100% 2/2 | 75% 3/4 | 50% 1/2 | 
| `iox::posix::PosixGroup::getGroupOfCurrentProcess()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::PosixGroup::getID() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::PosixGroup::getName() const` | 0% 0/4 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 
| `iox::posix::PosixGroup::operator ==(const iox::posix::PosixGroup&) const` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::PosixUser::PosixUser(const iox::string<(unsigned long)32> &)` | 0% 0/5 | 0% 0/2 | 0% 0/4 | 0% 0/2 | 
| `iox::posix::PosixUser::PosixUser(unsigned int)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::PosixUser::doesExist() const` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::PosixUser::getGroups() const` | 0% 0/21 | 0% 0/10 | 0% 0/18 | 0% 0/9 | 
| `iox::posix::PosixUser::getID() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::PosixUser::getName() const` | 0% 0/4 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 
| `iox::posix::PosixUser::getUserID(const iox::string<(unsigned long)32> &)` | 100% 5/5 | 100% 2/2 | 75% 3/4 | 50% 1/2 | 
| `iox::posix::PosixUser::getUserName(unsigned int)` | 100% 5/5 | 100% 2/2 | 75% 3/4 | 50% 1/2 | 
| `iox::posix::PosixUser::getUserOfCurrentProcess()` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/scheduler.cpp | 0% 0/12 | 0% 0/4 | 0% 0/8 | 0% 0/4 | 
| `iox::posix::getSchedulerPriorityMaximum(iox::posix::Scheduler)` | 0% 0/6 | 0% 0/2 | 0% 0/4 | 0% 0/2 | 
| `iox::posix::getSchedulerPriorityMinimum(iox::posix::Scheduler)` | 0% 0/6 | 0% 0/2 | 0% 0/4 | 0% 0/2 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/semaphore_interface.cpp | 64% 18/28 | 50% 6/12 | 44% 8/18 | 22% 2/9 | 
| `iox::posix::internal::SemaphoreInterface<T1>::getHandle()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::internal::SemaphoreInterface<T1>::post()` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::posix::internal::SemaphoreInterface<T1>::timedWait(const iox::units::Duration &)` | 80% 4/5 | 50% 1/2 | 75% 3/4 | 50% 1/2 | 
| `iox::posix::internal::SemaphoreInterface<T1>::tryWait()` | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::posix::internal::SemaphoreInterface<T1>::wait()` | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::posix::internal::errnoToEnum(int)` | 30% 3/10 | 25% 1/4 | 13% 1/8 | 0% 0/4 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/shared_memory_object.cpp | 67% 33/49 | 69% 11/16 | 47% 17/36 | 17% 3/18 | 
| `iox::posix::SharedMemoryObject::SharedMemoryObject(iox::posix::SharedMemory &&, iox::posix::MemoryMap &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObject::getBaseAddress()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObject::getBaseAddress() const` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObject::getFileHandle() const` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObject::get_file_handle() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryObject::hasOwnership() const` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::SharedMemoryObjectBuilder::create()` | 74% 25/34 | 71% 10/14 | 50% 15/30 | 20% 3/15 | 
| `iox::posix::SharedMemoryObjectBuilder::create()::[lambda() (instance 1)]` | 100% 2/2 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::posix::SharedMemoryObjectBuilder::create()::[lambda() (instance 1)]::operator ()() const::[lambda(iox::log::LogStream &) (instance 1)]` | 75% 3/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::posix::memsetSigbusHandler(int)` | 0% 0/3 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/shared_memory_object/memory_map.cpp | 35% 20/57 | 29% 7/24 | 16% 7/44 | 5% 1/22 | 
| `iox::posix::MemoryMap::MemoryMap(iox::posix::MemoryMap&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMap::MemoryMap(void *, unsigned long)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMap::destroy()` | 67% 6/9 | 75% 3/4 | 50% 3/6 | 33% 1/3 | 
| `iox::posix::MemoryMap::errnoToEnum(int)` | 0% 0/26 | 0% 0/12 | 0% 0/24 | 0% 0/12 | 
| `iox::posix::MemoryMap::getBaseAddress()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMap::getBaseAddress() const` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::posix::MemoryMap::operator =(iox::posix::MemoryMap&&)` | 88% 7/8 | 50% 2/4 | 33% 2/6 | 0% 0/3 | 
| `iox::posix::MemoryMap::~MemoryMap()` | 50% 1/2 | 50% 1/2 | 25% 1/4 | 0% 0/2 | 
| `iox::posix::MemoryMapBuilder::create()` | 38% 3/8 | 50% 1/2 | 25% 1/4 | 0% 0/2 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/shared_memory_object/shared_memory.cpp | 70% 73/105 | 63% 26/41 | 53% 51/96 | 38% 18/48 | 
| `iox::posix::SharedMemory::SharedMemory(const iox::string<(unsigned long)4096> &, int, bool)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemory::SharedMemory(iox::posix::SharedMemory&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemory::close()` | 100% 5/5 | 100% 2/2 | 75% 3/4 | 50% 1/2 | 
| `iox::posix::SharedMemory::close()::[lambda(T1 &) (instance 1)]` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::SharedMemory::destroy()` | 100% 2/2 | N/A | 50% 2/4 | 0% 0/2 | 
| `iox::posix::SharedMemory::errnoToEnum(int)` | 19% 5/27 | 15% 2/13 | 8% 2/26 | 0% 0/13 | 
| `iox::posix::SharedMemory::getHandle() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemory::get_file_handle() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemory::hasOwnership() const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::posix::SharedMemory::operator =(iox::posix::SharedMemory&&)` | 100% 7/7 | 50% 1/2 | 75% 3/4 | 50% 1/2 | 
| `iox::posix::SharedMemory::reset()` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::posix::SharedMemory::unlink()` | 75% 6/8 | 75% 3/4 | 50% 4/8 | 25% 1/4 | 
| `iox::posix::SharedMemory::unlinkIfExist(const iox::string<(unsigned long)4096> &)` | 80% 4/5 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::posix::SharedMemory::~SharedMemory()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryBuilder::create()` | 88% 30/34 | 94% 17/18 | 87% 33/38 | 74% 14/19 | 
| `iox::posix::SharedMemoryBuilder::create()::[lambda() (instance 1)]` | 100% 1/1 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::posix::SharedMemoryBuilder::create()::[lambda() (instance 2)]` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SharedMemoryBuilder::create()::[lambda(T1 &) (instance 1)]` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::SharedMemoryBuilder::create()::[lambda(T1 &) (instance 2)]` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::addLeadingSlash(const iox::string<(unsigned long)4096> &)` | 100% 3/3 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/signal_handler.cpp | 72% 13/18 | 67% 4/6 | 33% 4/12 | 17% 1/6 | 
| `iox::posix::SignalGuard::SignalGuard(iox::posix::Signal, const sigaction &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SignalGuard::SignalGuard(iox::posix::SignalGuard&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::SignalGuard::restorePreviousAction()` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::posix::SignalGuard::restorePreviousAction()::[lambda(T1 &) (instance 1)]` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::SignalGuard::~SignalGuard()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::registerSignalHandler(iox::posix::Signal, void (*)(int))` | 64% 7/11 | 50% 2/4 | 25% 2/8 | 0% 0/4 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/system_configuration.cpp | 0% 0/3 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::internal::pageSize()` | 0% 0/1 | N/A | N/A | N/A | 
| `iox::internal::pageSize()::[lambda(T1 &) (instance 1)]` | 0% 0/2 | N/A | 0% 0/2 | 0% 0/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/thread.cpp | 39% 17/44 | 23% 3/13 | 14% 4/28 | 0% 0/14 | 
| `iox::posix::Thread::Thread(const iox::string<(unsigned long)15> &, const iox::storable_function<(unsigned long)128, void ()> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::Thread::errnoToEnum(int)` | 0% 0/11 | 0% 0/5 | 0% 0/10 | 0% 0/5 | 
| `iox::posix::Thread::getName() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::Thread::startRoutine(void *)` | 100% 5/5 | N/A | N/A | N/A | 
| `iox::posix::Thread::startRoutine(void *)::[lambda(T1 &) (instance 1)]` | 0% 0/2 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::Thread::~Thread()` | 38% 3/8 | 33% 2/6 | 25% 2/8 | 0% 0/4 | 
| `iox::posix::ThreadBuilder::create(iox::optional<iox::posix::Thread> &, const iox::storable_function<(unsigned long)128, void ()> &)` | 75% 6/8 | 50% 1/2 | 50% 2/4 | 0% 0/2 | 
| `iox::posix::getThreadName(unsigned long)` | 0% 0/3 | N/A | N/A | N/A | 
| `iox::posix::getThreadName(unsigned long)::[lambda(T1 &) (instance 1)]` | 0% 0/2 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::setThreadName(unsigned long, const iox::string<(unsigned long)15> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::setThreadName(unsigned long, const iox::string<(unsigned long)15> &)::[lambda(T1 &) (instance 1)]` | 0% 0/2 | N/A | 0% 0/2 | 0% 0/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/types.cpp | 100% 19/19 | 100% 12/12 | 50% 3/6 | 0% 0/3 | 
| `iox::posix::convertToOflags(iox::posix::AccessMode)` | 100% 6/6 | 100% 4/4 | 50% 1/2 | 0% 0/1 | 
| `iox::posix::convertToOflags(iox::posix::AccessMode, iox::posix::OpenMode)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::convertToOflags(iox::posix::OpenMode)` | 100% 6/6 | 100% 4/4 | 50% 1/2 | 0% 0/1 | 
| `iox::posix::convertToProtFlags(iox::posix::AccessMode)` | 100% 6/6 | 100% 4/4 | 50% 1/2 | 0% 0/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/unix_domain_socket.cpp | 57% 92/162 | 49% 38/78 | 36% 40/112 | 18% 10/56 | 
| `iox::posix::UnixDomainSocket::UnixDomainSocket(const iox::string<(unsigned long)100> &, iox::posix::IpcChannelSide, unsigned long, unsigned long)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::UnixDomainSocket::UnixDomainSocket(const iox::string<(unsigned long)100> &, iox::posix::IpcChannelSide, unsigned long, unsigned long)::[lambda() (instance 1)]` | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::posix::UnixDomainSocket::UnixDomainSocket(iox::posix::UnixDomainSocket&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::UnixDomainSocket::UnixDomainSocket(iox::posix::UnixDomainSocket::NoPathPrefix_t, const iox::string<(unsigned long)107> &, iox::posix::IpcChannelSide, unsigned long, unsigned long)` | 44% 4/9 | 50% 2/4 | 50% 2/4 | 0% 0/2 | 
| `iox::posix::UnixDomainSocket::UnixDomainSocket(iox::posix::UnixDomainSocket::NoPathPrefix_t, const iox::string<(unsigned long)107> &, iox::posix::IpcChannelSide, unsigned long, unsigned long)::[lambda() (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::UnixDomainSocket::UnixDomainSocket(iox::posix::UnixDomainSocket::NoPathPrefix_t, const iox::string<(unsigned long)107> &, iox::posix::IpcChannelSide, unsigned long, unsigned long)::[lambda(iox::posix::IpcChannelError &) (instance 1)]` | 0% 0/2 | N/A | N/A | N/A | 
| `iox::posix::UnixDomainSocket::closeFileDescriptor()` | 75% 9/12 | 63% 5/8 | 63% 5/8 | 25% 1/4 | 
| `iox::posix::UnixDomainSocket::convertErrnoToIpcChannelError(int) const` | 4% 2/46 | 4% 1/24 | 0% 0/42 | 0% 0/21 | 
| `iox::posix::UnixDomainSocket::destroy()` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::posix::UnixDomainSocket::initalizeSocket()` | 73% 16/22 | 60% 6/10 | 60% 6/10 | 20% 1/5 | 
| `iox::posix::UnixDomainSocket::initalizeSocket()::[lambda() (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::UnixDomainSocket::initalizeSocket()::[lambda(T1 &) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::UnixDomainSocket::initalizeSocket()::[lambda(T1) (instance 1)]` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::UnixDomainSocket::initalizeSocket()::[lambda(T1) (instance 2)]` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::UnixDomainSocket::isInitialized() const` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `iox::posix::UnixDomainSocket::operator =(iox::posix::UnixDomainSocket&&)` | 92% 12/13 | 50% 2/4 | 38% 3/8 | 0% 0/4 | 
| `iox::posix::UnixDomainSocket::receive[abi:cxx11]() const` | 100% 4/4 | N/A | N/A | N/A | 
| `iox::posix::UnixDomainSocket::send(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::UnixDomainSocket::timedReceive[abi:cxx11](const iox::units::Duration &) const` | 92% 12/13 | 83% 5/6 | 75% 6/8 | 50% 2/4 | 
| `iox::posix::UnixDomainSocket::timedSend(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, const iox::units::Duration &) const` | 85% 11/13 | 75% 6/8 | 70% 7/10 | 40% 2/5 | 
| `iox::posix::UnixDomainSocket::unlinkIfExists(const iox::string<(unsigned long)107> &)` | 100% 5/5 | 100% 4/4 | 100% 4/4 | 100% 2/2 | 
| `iox::posix::UnixDomainSocket::unlinkIfExists(iox::posix::UnixDomainSocket::NoPathPrefix_t, const iox::string<(unsigned long)107> &)` | 83% 5/6 | 75% 3/4 | 75% 3/4 | 50% 1/2 | 
| `iox::posix::UnixDomainSocket::~UnixDomainSocket()` | 50% 1/2 | 50% 1/2 | 25% 1/4 | 0% 0/2 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/source/posix_wrapper/unnamed_semaphore.cpp | 44% 11/25 | 38% 5/13 | 36% 8/22 | 18% 2/11 | 
| `iox::posix::UnnamedSemaphore::getHandle()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::posix::UnnamedSemaphore::~UnnamedSemaphore()` | 38% 3/8 | 33% 2/6 | 25% 2/8 | 0% 0/4 | 
| `iox::posix::UnnamedSemaphoreBuilder::create(iox::optional<iox::posix::UnnamedSemaphore> &) const` | 44% 7/16 | 43% 3/7 | 43% 6/14 | 29% 2/7 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/compile_test.cpp | 0% 0/8 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 
| `CompileTest::CompileTest(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, const std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &)` | 0% 0/2 | 0% 0/2 | N/A | N/A | 
| `CompileTest::verify(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &) const` | 0% 0/6 | N/A | 0% 0/2 | 0% 0/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/error_reporting/testing_error_handler.cpp | 97% 32/33 | 92% 11/12 | 78% 14/18 | 56% 5/9 | 
| `iox::testing::TestErrorHandler::TestErrorHandler()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::testing::TestErrorHandler::hasError() const` | 100% 2/2 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::testing::TestErrorHandler::hasError(iox::er::ErrorCode, iox::er::ModuleId) const` | 88% 7/8 | 83% 5/6 | 67% 4/6 | 33% 1/3 | 
| `iox::testing::TestErrorHandler::hasPanicked() const` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::testing::TestErrorHandler::hasViolation(iox::er::ErrorCode) const` | 100% 5/5 | 100% 4/4 | 100% 2/2 | 100% 1/1 | 
| `iox::testing::TestErrorHandler::jump()` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::testing::TestErrorHandler::jumpIndicator()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::testing::TestErrorHandler::onPanic()` | 100% 2/2 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::testing::TestErrorHandler::onReportError(iox::er::ErrorDescriptor)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::testing::TestErrorHandler::onReportViolation(iox::er::ErrorDescriptor)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::testing::TestErrorHandler::prepareJump()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::testing::TestErrorHandler::reset()` | 100% 5/5 | N/A | 50% 1/2 | 0% 0/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/error_reporting/testing_support.cpp | 100% 8/8 | N/A | 67% 12/18 | 33% 3/9 | 
| `iox::testing::hasAssumptionViolation()` | 100% 2/2 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::testing::hasError()` | 100% 1/1 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::testing::hasPanicked()` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::testing::hasPreconditionViolation()` | 100% 2/2 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::testing::hasViolation()` | 100% 1/1 | N/A | 50% 2/4 | 0% 0/2 | 
| `iox::testing::isInNormalState()` | 100% 1/1 | N/A | 50% 3/6 | 0% 0/3 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/include/iceoryx_hoofs/testing/barrier.hpp | 69% 9/13 | 100% 2/2 | 100% 4/4 | 100% 2/2 | 
| `Barrier::Barrier(unsigned int)` | 100% 1/1 | N/A | N/A | N/A | 
| `Barrier::notify()` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `Barrier::reset(unsigned int)` | 0% 0/4 | N/A | N/A | N/A | 
| `Barrier::wait()` | 100% 3/3 | N/A | N/A | N/A | 
| `Barrier::wait()::[lambda() (instance 1)]` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/include/iceoryx_hoofs/testing/error_reporting/testing_support.hpp | 92% 12/13 | 67% 4/6 | 67% 4/6 | 33% 1/3 | 
| `bool iox::testing::hasError<T1>(T1 &&)` | 100% 2/2 | N/A | N/A | N/A | 
| `void iox::testing::runInTestThread<T1, T2...>(T1 &&, T2 &&...)` | 100% 4/4 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `void iox::testing::runInTestThread<T1, T2...>(T1 &&, T2 &&...)::[lambda() (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `void iox::testing::testContext<T1, T2...>(T1 &&, T2 &&...)` | 83% 5/6 | 75% 3/4 | 75% 3/4 | 50% 1/2 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/include/iceoryx_hoofs/testing/fatal_failure.inl | 88% 23/26 | 67% 4/6 | 70% 7/10 | 40% 2/5 | 
| `bool iox::testing::IOX_EXPECT_FATAL_FAILURE<T1>(iox::function_ref<void ()>, T1)` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::testing::IOX_EXPECT_FATAL_FAILURE<T1>(iox::function_ref<void ()>, T1)::[lambda() (instance 1)]` | 0% 0/1 | N/A | N/A | N/A | 
| `bool iox::testing::IOX_EXPECT_FATAL_FAILURE<iox::HoofsError>(iox::function_ref<void ()>, T1)::[lambda(T1, T2) (instance 1)]` | 100% 2/2 | 50% 2/4 | 50% 2/4 | 0% 0/2 | 
| `bool iox::testing::IOX_EXPECT_NO_FATAL_FAILURE<T1>(iox::function_ref<void ()>)` | 50% 1/2 | N/A | N/A | N/A | 
| `bool iox::testing::IOX_EXPECT_NO_FATAL_FAILURE<T1>(iox::function_ref<void ()>)::[lambda() (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::testing::IOX_EXPECT_NO_FATAL_FAILURE<iox::HoofsError>(iox::function_ref<void ()>)::[lambda(T1, T2) (instance 1)]` | 0% 0/1 | N/A | N/A | N/A | 
| `bool iox::testing::detail::IOX_FATAL_FAILURE_TEST<T1>(iox::function_ref<void ()>, iox::function_ref<void (T1, iox::ErrorLevel)>, iox::function_ref<void ()>)` | 100% 4/4 | N/A | 100% 2/2 | 100% 1/1 | 
| `bool iox::testing::detail::IOX_FATAL_FAILURE_TEST<T1>(iox::function_ref<void ()>, iox::function_ref<void (T1, iox::ErrorLevel)>, iox::function_ref<void ()>)::[lambda() (instance 1)]` | 100% 11/11 | 100% 2/2 | 75% 3/4 | 50% 1/2 | 
| `bool iox::testing::detail::IOX_FATAL_FAILURE_TEST<iox::HoofsError>(iox::function_ref<void ()>, iox::function_ref<void (T1, iox::ErrorLevel)>, iox::function_ref<void ()>)::[lambda() (instance 1)]::operator ()() const::[lambda(T1, T2) (instance 1)]` | 100% 3/3 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/include/iceoryx_hoofs/testing/mocks/error_handler_mock.hpp | 93% 13/14 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::ScopeGuardWithVariableCapacity<(unsigned long)128> iox::ErrorHandlerMock::setTemporaryErrorHandler<T1>(const iox::storable_function<(unsigned long)128, void (T1, iox::ErrorLevel)> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::ScopeGuardWithVariableCapacity<(unsigned long)128> iox::ErrorHandlerMock::setTemporaryErrorHandler<T1>(const iox::storable_function<(unsigned long)128, void (T1, iox::ErrorLevel)> &)::[lambda() (instance 1)]` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::ScopeGuardWithVariableCapacity<(unsigned long)128> iox::ErrorHandlerMock::setTemporaryErrorHandler<T1>(const iox::storable_function<(unsigned long)128, void (T1, iox::ErrorLevel)> &)::[lambda() (instance 2)]` | 100% 3/3 | N/A | N/A | N/A | 
| `void iox::errorHandlerForTest<T1>(unsigned int, const char *, iox::ErrorLevel)` | 83% 5/6 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `void iox::errorHandlerForTest<T1>(unsigned int, const char *, iox::ErrorLevel)::[lambda(iox::storable_function<(unsigned long)128, void (T1, iox::ErrorLevel)>) (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/include/iceoryx_hoofs/testing/mocks/logger_mock.hpp | 100% 10/10 | N/A | N/A | N/A | 
| `iox::testing::Logger_Mock::createLogMessageHeader(const char *, int, const char *, iox::log::LogLevel)` | 100% 7/7 | N/A | N/A | N/A | 
| `iox::testing::Logger_Mock::flush()` | 100% 3/3 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/include/iceoryx_hoofs/testing/mocks/mocks.inl | 100% 3/3 | N/A | N/A | N/A | 
| `T1 mocks::assignSymbol<T1>(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)` | 100% 3/3 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/include/iceoryx_hoofs/testing/mocks/time_mock.hpp | 0% 0/10 | N/A | N/A | N/A | 
| `time_MOCK::clock_getres(int, timespec *)` | 0% 0/1 | N/A | N/A | N/A | 
| `time_MOCK::clock_gettime(int, timespec *)` | 0% 0/1 | N/A | N/A | N/A | 
| `time_MOCK::clock_settime(int, const timespec *)` | 0% 0/1 | N/A | N/A | N/A | 
| `time_MOCK::gmock_clock_getres(const testing::Matcher<int> &, const testing::Matcher<timespec *> &)` | 0% 0/1 | N/A | N/A | N/A | 
| `time_MOCK::gmock_clock_getres(const testing::internal::WithoutMatchers &, testing::internal::Function<int (int, timespec *)> *) const` | 0% 0/1 | N/A | N/A | N/A | 
| `time_MOCK::gmock_clock_gettime(const testing::Matcher<int> &, const testing::Matcher<timespec *> &)` | 0% 0/1 | N/A | N/A | N/A | 
| `time_MOCK::gmock_clock_gettime(const testing::internal::WithoutMatchers &, testing::internal::Function<int (int, timespec *)> *) const` | 0% 0/1 | N/A | N/A | N/A | 
| `time_MOCK::gmock_clock_settime(const testing::Matcher<int> &, const testing::Matcher<const timespec *> &)` | 0% 0/1 | N/A | N/A | N/A | 
| `time_MOCK::gmock_clock_settime(const testing::internal::WithoutMatchers &, testing::internal::Function<int (int, const timespec *)> *) const` | 0% 0/1 | N/A | N/A | N/A | 
| `time_MOCK::~time_MOCK()` | 0% 0/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/mocks/time_mock.cpp | 29% 2/7 | N/A | 17% 1/6 | 0% 0/3 | 
| `clock_getres()` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `clock_getres::[lambda() (instance 1)]` | 0% 0/1 | N/A | N/A | N/A | 
| `clock_gettime()` | 100% 1/1 | N/A | 50% 1/2 | 0% 0/1 | 
| `clock_gettime::[lambda() (instance 1)]` | 100% 1/1 | N/A | N/A | N/A | 
| `clock_settime()` | 0% 0/1 | N/A | 0% 0/2 | 0% 0/1 | 
| `clock_settime::[lambda() (instance 1)]` | 0% 0/1 | N/A | N/A | N/A | 
| `time_MOCK::time_MOCK()` | 0% 0/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/testing_logger.cpp | 51% 30/59 | 24% 4/17 | 29% 4/14 | 0% 0/7 | 
| `iox::testing::LogPrinter::OnTestPartResult(const testing::TestPartResult &)` | 50% 1/2 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::testing::LogPrinter::OnTestStart(const testing::TestInfo &)` | 100% 10/10 | N/A | N/A | N/A | 
| `iox::testing::LogPrinter::OnTestStart(const testing::TestInfo &)::[lambda() (instance 1)]` | 0% 0/3 | N/A | N/A | N/A | 
| `iox::testing::TestingLogger::checkLogMessageIfLogLevelIsSupported(iox::log::LogLevel, const std::function<void (const std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &)> &)` | 100% 2/2 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::testing::TestingLogger::clearLogBuffer()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::testing::TestingLogger::flush()` | 83% 5/6 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::testing::TestingLogger::getLogMessages[abi:cxx11]()` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::testing::TestingLogger::getNumberOfLogMessages()` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::testing::TestingLogger::init()` | 50% 7/14 | 25% 1/4 | 17% 1/6 | 0% 0/3 | 
| `iox::testing::TestingLogger::printLogBuffer()` | 0% 0/7 | 0% 0/4 | 0% 0/2 | 0% 0/1 | 
| `iox::testing::sigHandler(int, siginfo_t *, void *)` | 0% 0/10 | 0% 0/3 | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/testing/timing_test.cpp | 92% 12/13 | 83% 5/6 | 88% 7/8 | 75% 3/4 | 
| `iox::utils::testing::performingTimingTest(const std::function<void ()> &, unsigned long, std::atomic<bool> &)` | 83% 5/6 | 75% 3/4 | 75% 3/4 | 50% 1/2 | 
| `iox::utils::testing::verifyTimingTestResult[abi:cxx11](const char *, int, const char *, bool, bool, std::atomic<bool> &)` | 100% 7/7 | 100% 2/2 | 100% 4/4 | 100% 2/2 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/time/source/duration.cpp | 100% 25/25 | 100% 6/6 | 79% 11/14 | 57% 4/7 | 
| `iox::units::Duration::timespec(iox::units::TimeSpecReference) const` | 100% 21/21 | 100% 6/6 | 79% 11/14 | 57% 4/7 | 
| `iox::units::operator <<(iox::log::LogStream &, iox::units::Duration)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::units::operator <<(std::ostream&, iox::units::Duration)` | 100% 2/2 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/utility/source/unique_id.cpp | 100% 1/1 | N/A | N/A | N/A | 
| `iox::UniqueId::UniqueId()` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/vocabulary/include/iox/detail/expected.inl | 100% 45/45 | 83% 5/6 | 83% 5/6 | 67% 2/3 | 
| `const std::enable_if<(!std::is_void<T1>::value), T1>::type & iox::expected<T1, T2>::operator *<T1>() const` | 100% 1/1 | N/A | N/A | N/A | 
| `const std::enable_if<(!std::is_void<T1>::value), T1>::type & iox::expected<T1, T2>::value<T1>() const &` | 100% 1/1 | N/A | N/A | N/A | 
| `const std::enable_if<(!std::is_void<T1>::value), T1>::type & iox::expected<T1, T2>::value_checked<T1>() const &` | 100% 2/2 | N/A | N/A | N/A | 
| `const std::enable_if<(!std::is_void<T1>::value), T1>::type && iox::expected<T1, T2>::value<T1>() const &&` | 100% 1/1 | N/A | N/A | N/A | 
| `const std::enable_if<(!std::is_void<T1>::value), T1>::type * iox::expected<T1, T2>::operator -><T1>() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::err<T1> iox::err<T1, T2...>(T2 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::err<T1> iox::err<T1, T2>(T1 &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::err<T1> iox::err<T1>(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::ok<T1> iox::ok<T1, T2, T3>(T1 &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::ok<T1> iox::ok<T1, T2..., T3>(T2 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::ok<T1> iox::ok<T1, T2>(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::ok<void> iox::ok<T1, T2>()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::error() &` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::error() &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::error() const &` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::error() const &&` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::error_checked() &` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::error_checked() const &` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::expected(const iox::detail::err<T2> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::expected(const iox::detail::ok<T1> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::expected(iox::detail::err<T2> &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::expected(iox::detail::ok<T1> &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::expected(iox::expected<T1, T2>&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::expected<T1...>(iox::in_place_t, T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::expected<T1...>(iox::unexpect_t, T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::has_error() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::has_value() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::operator =(iox::expected<T1, T2>&&)` | 100% 3/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::expected<T1, T2>::operator bool() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, T2>::operator iox::expected<void, T2>() const` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::optional<std::enable_if<(!std::is_void<T1>::value), T1>::type> iox::expected<T1, T2>::to_optional<T1>() const` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `std::enable_if<(!std::is_void<T1>::value), T1>::type & iox::expected<T1, T2>::operator *<T1>()` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<(!std::is_void<T1>::value), T1>::type & iox::expected<T1, T2>::value<T1>() &` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<(!std::is_void<T1>::value), T1>::type & iox::expected<T1, T2>::value_checked<T1>() &` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<(!std::is_void<T1>::value), T1>::type && iox::expected<T1, T2>::value<T1>() &&` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<(!std::is_void<T1>::value), T1>::type * iox::expected<T1, T2>::operator -><T1>()` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/vocabulary/include/iox/detail/expected_helper.hpp | 100% 17/17 | N/A | N/A | N/A | 
| `iox::detail::err<T1>::err(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::err<T1>::err<T1, T2>(T1 &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::err<T1>::err<T1...>(T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::expected_storage<T1, T2>::error_unchecked() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::expected_storage<T1, T2>::expected_storage<T1...>(iox::in_place_t, T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::expected_storage<T1, T2>::expected_storage<T1...>(iox::unexpect_t, T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::expected_storage<T1, T2>::has_error() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::expected_storage<T1, T2>::has_value() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::expected_storage<T1, T2>::value_unchecked() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::expected_storage<void, T1>::error_unchecked() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::expected_storage<void, T1>::expected_storage<T1...>(iox::in_place_t, T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::expected_storage<void, T1>::expected_storage<T1...>(iox::unexpect_t, T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::expected_storage<void, T1>::has_error() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::expected_storage<void, T1>::has_value() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::ok<T1>::ok(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::ok<T1>::ok<T1, T2>(T1 &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::detail::ok<T1>::ok<T1...>(T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/vocabulary/include/iox/detail/optional.inl | 100% 69/69 | 93% 28/30 | 90% 38/42 | 81% 17/21 | 
| `T1 & iox::optional<T1>::emplace<T1...>(T1 &&...)` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `bool iox::operator !=<T1>(const iox::optional<T1> &, const iox::optional<T1> &)` | 100% 4/4 | N/A | N/A | N/A | 
| `bool iox::operator !=<T1>(const iox::optional<T1> &, iox::nullopt_t)` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::operator !=<T1>(iox::nullopt_t, const iox::optional<T1> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::operator ==<T1>(const iox::optional<T1> &, const iox::optional<T1> &)` | 100% 3/3 | N/A | N/A | N/A | 
| `bool iox::operator ==<T1>(const iox::optional<T1> &, iox::nullopt_t)` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::operator ==<T1>(iox::nullopt_t, const iox::optional<T1> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::optional<T1> iox::make_optional<T1, T2...>(T2 &&...)` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::optional<T1>::destruct_value()` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::optional<T1>::operator *()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::optional<T1>::operator *() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::optional<T1>::operator ->()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::optional<T1>::operator ->() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::optional<T1>::operator =(const iox::optional<T1>&)` | 100% 9/9 | 88% 7/8 | 86% 12/14 | 71% 5/7 | 
| `iox::optional<T1>::operator =(iox::optional<T1>&&)` | 100% 11/11 | 90% 9/10 | 88% 14/16 | 75% 6/8 | 
| `iox::optional<T1>::optional()` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::optional<T1>::optional(T1 &&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::optional<T1>::optional(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::optional<T1>::optional(const iox::optional<T1>&)` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::optional<T1>::optional(iox::nullopt_t)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::optional<T1>::optional(iox::optional<T1>&&)` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::optional<T1>::optional<T1...>(iox::in_place_t, T1 &&...)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::optional<T1>::reset()` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::optional<T1>::value() &` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::optional<T1>::value() &&` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::optional<T1>::value() const &` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::optional<T1>::~optional()` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `std::enable_if<(!std::is_same<T1, iox::optional<T1>&>::value), iox::optional<T1>>::type & iox::optional<T1>::operator =<T1>(T1 &&)` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `void iox::optional<T1>::construct_value<T1...>(T1 &&...)` | 100% 2/2 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/vocabulary/include/iox/detail/semantic_string.inl | 100% 35/35 | 100% 12/12 | 70% 14/20 | 40% 4/10 | 
| `iox::SemanticString<T1, unsigned long, T3, T4>::SemanticString<unsigned long>(const iox::string<unsigned long> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::SemanticString<T1, unsigned long, T3, T4>::operator !=(const iox::SemanticString<T1, unsigned long, T3, T4>&) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::SemanticString<T1, unsigned long, T3, T4>::operator <(const iox::SemanticString<T1, unsigned long, T3, T4>&) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::SemanticString<T1, unsigned long, T3, T4>::operator <=(const iox::SemanticString<T1, unsigned long, T3, T4>&) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::SemanticString<T1, unsigned long, T3, T4>::operator ==(const iox::SemanticString<T1, unsigned long, T3, T4>&) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::SemanticString<T1, unsigned long, T3, T4>::operator >(const iox::SemanticString<T1, unsigned long, T3, T4>&) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::SemanticString<T1, unsigned long, T3, T4>::operator >=(const iox::SemanticString<T1, unsigned long, T3, T4>&) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, iox::SemanticStringError> iox::SemanticString<T1, unsigned long, T3, T4>::create<unsigned long>(const char (&)[T1])` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, iox::SemanticStringError> iox::SemanticString<T1, unsigned long, T3, T4>::create<unsigned long>(const iox::string<unsigned long> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<T1, iox::SemanticStringError> iox::SemanticString<T1, unsigned long, T3, T4>::create_impl<unsigned long>(const char *)` | 100% 11/11 | 100% 6/6 | 70% 7/10 | 40% 2/5 | 
| `iox::expected<void, iox::SemanticStringError> iox::SemanticString<T1, unsigned long, T3, T4>::append<T1>(const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::expected<void, iox::SemanticStringError> iox::SemanticString<T1, unsigned long, T3, T4>::insert<T1>(unsigned long, const T1 &, unsigned long)` | 100% 12/12 | 100% 6/6 | 70% 7/10 | 40% 2/5 | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||iox::is_custom_string<T1>::value), bool>::type iox::SemanticString<T1, unsigned long, T3, T4>::operator !=<T1>(const T1 &) const` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||iox::is_custom_string<T1>::value), bool>::type iox::SemanticString<T1, unsigned long, T3, T4>::operator ==<T1>(const T1 &) const` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/vocabulary/include/iox/detail/string.inl | 99% 182/183 | 98% 57/58 | 89% 55/62 | 77% 24/31 | 
| `iox::log::LogStream & iox::operator <<<unsigned long>(iox::log::LogStream &, const iox::string<unsigned long> &)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::string<T1>::string(iox::TruncateToCapacity_t, const char *)::[lambda() (instance 1)]` | 100% 1/1 | N/A | 100% 2/2 | 100% 1/1 | 
| `iox::string<unsigned long>& iox::string<unsigned long>::assign<unsigned long>(const char (&)[T1])` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::string<unsigned long>& iox::string<unsigned long>::assign<unsigned long>(const iox::string<unsigned long> &)` | 100% 3/3 | N/A | N/A | N/A | 
| `iox::string<unsigned long>& iox::string<unsigned long>::copy<unsigned long>(const iox::string<unsigned long> &)` | 100% 6/6 | N/A | N/A | N/A | 
| `iox::string<unsigned long>& iox::string<unsigned long>::move<unsigned long>(iox::string<unsigned long> &&)` | 100% 7/7 | N/A | N/A | N/A | 
| `iox::string<unsigned long>& iox::string<unsigned long>::operator =<unsigned long>(const char (&)[T1])` | 89% 8/9 | 75% 3/4 | 67% 4/6 | 33% 1/3 | 
| `iox::string<unsigned long>& iox::string<unsigned long>::operator =<unsigned long>(const iox::string<unsigned long> &)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::string<unsigned long>& iox::string<unsigned long>::operator =<unsigned long>(iox::string<unsigned long> &&)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::string<unsigned long>::append(iox::TruncateToCapacity_t, char)` | 100% 7/7 | 100% 2/2 | 75% 3/4 | 50% 1/2 | 
| `iox::string<unsigned long>::c_str() const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::string<unsigned long>::compare(char) const` | 100% 6/6 | 100% 4/4 | 100% 6/6 | 100% 3/3 | 
| `iox::string<unsigned long>::operator =(const iox::string<unsigned long>&)` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::string<unsigned long>::operator =(iox::string<unsigned long>&&)` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::string<unsigned long>::string(const iox::string<unsigned long>&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::string<unsigned long>::string(iox::TruncateToCapacity_t, const char *)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::string<unsigned long>::string(iox::TruncateToCapacity_t, const char *, unsigned long)` | 100% 10/10 | 100% 4/4 | 83% 5/6 | 67% 2/3 | 
| `iox::string<unsigned long>::string(iox::string<unsigned long>&&)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::string<unsigned long>::string<unsigned long>(const char (&)[T1])` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::string<unsigned long>::string<unsigned long>(const iox::string<unsigned long> &)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::string<unsigned long>::string<unsigned long>(iox::string<unsigned long> &&)` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::string<unsigned long>::substr(unsigned long) const` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::string<unsigned long>::substr(unsigned long, unsigned long) const` | 100% 8/8 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::string<unsigned long>::unsafe_assign(const char *)` | 100% 10/10 | 100% 4/4 | 83% 5/6 | 67% 2/3 | 
| `std::enable_if<(((iox::is_char_array<T1>::value||iox::is_iox_string<T1>::value)||std::is_same<T1, char>::value)&&((iox::is_char_array<T2>::value||iox::is_iox_string<T2>::value)||std::is_same<T2, char>::value)), iox::string<iox::internal::SumCapa<T1, T2, T3...>::value>>::type iox::concatenate<T1, T2, T3...>(const T1 &, const T2 &, const T3 &...)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<(((iox::is_char_array<T1>::value||iox::is_iox_string<T1>::value)||std::is_same<T1, char>::value)&&((iox::is_char_array<T2>::value||iox::is_iox_string<T2>::value)||std::is_same<T2, char>::value)), iox::string<iox::internal::SumCapa<T1, T2>::value>>::type iox::concatenate<T1, T2>(const T1 &, const T2 &)` | 100% 9/9 | N/A | N/A | N/A | 
| `std::enable_if<(((iox::is_char_array<T1>::value||std::is_same<T1, char>::value)&&iox::is_iox_string<T2>::value)||(iox::is_iox_string<T1>::value&&((iox::is_char_array<T2>::value||std::is_same<T2, char>::value)||(iox::is_iox_string<T1>::value&&iox::is_iox_string<T2>::value)))), iox::string<iox::internal::SumCapa<T1, T2>::value>>::type iox::operator +<T1, T2>(const T1 &, const T2 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_char_array<T1>::value||std::is_same<T1, char>::value)||iox::is_custom_string<T1>::value), bool>::type iox::operator !=<T1, unsigned long>(const T1 &, const iox::string<unsigned long> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_char_array<T1>::value||std::is_same<T1, char>::value)||iox::is_custom_string<T1>::value), bool>::type iox::operator <<T1, unsigned long>(const T1 &, const iox::string<unsigned long> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_char_array<T1>::value||std::is_same<T1, char>::value)||iox::is_custom_string<T1>::value), bool>::type iox::operator <=<T1, unsigned long>(const T1 &, const iox::string<unsigned long> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_char_array<T1>::value||std::is_same<T1, char>::value)||iox::is_custom_string<T1>::value), bool>::type iox::operator ==<T1, unsigned long>(const T1 &, const iox::string<unsigned long> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_char_array<T1>::value||std::is_same<T1, char>::value)||iox::is_custom_string<T1>::value), bool>::type iox::operator ><T1, unsigned long>(const T1 &, const iox::string<unsigned long> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_char_array<T1>::value||std::is_same<T1, char>::value)||iox::is_custom_string<T1>::value), bool>::type iox::operator >=<T1, unsigned long>(const T1 &, const iox::string<unsigned long> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||(std::is_same<T1, char>::value||iox::is_custom_string<T1>::value)), bool>::type iox::operator !=<T1, unsigned long>(const iox::string<unsigned long> &, const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||(std::is_same<T1, char>::value||iox::is_custom_string<T1>::value)), bool>::type iox::operator <<T1, unsigned long>(const iox::string<unsigned long> &, const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||(std::is_same<T1, char>::value||iox::is_custom_string<T1>::value)), bool>::type iox::operator <=<T1, unsigned long>(const iox::string<unsigned long> &, const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||(std::is_same<T1, char>::value||iox::is_custom_string<T1>::value)), bool>::type iox::operator ==<T1, unsigned long>(const iox::string<unsigned long> &, const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||(std::is_same<T1, char>::value||iox::is_custom_string<T1>::value)), bool>::type iox::operator ><T1, unsigned long>(const iox::string<unsigned long> &, const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||(std::is_same<T1, char>::value||iox::is_custom_string<T1>::value)), bool>::type iox::operator >=<T1, unsigned long>(const iox::string<unsigned long> &, const T1 &)` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||(std::is_same<T1, char>::value||iox::is_custom_string<T1>::value)), bool>::type iox::string<unsigned long>::unsafe_append<T1>(const T1 &)` | 100% 10/10 | 100% 2/2 | 50% 1/2 | 0% 0/1 | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||(std::is_same<T1, char>::value||iox::is_custom_string<T1>::value)), iox::string<unsigned long>&>::type iox::string<unsigned long>::append<T1>(iox::TruncateToCapacity_t, const T1 &)` | 100% 9/9 | 100% 2/2 | 50% 1/2 | 0% 0/1 | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||iox::is_custom_string<T1>::value), iox::optional<unsigned long>>::type iox::string<unsigned long>::find<T1>(const T1 &, unsigned long) const` | 100% 6/6 | 100% 4/4 | 100% 4/4 | 100% 2/2 | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||iox::is_custom_string<T1>::value), iox::optional<unsigned long>>::type iox::string<unsigned long>::find_first_of<T1>(const T1 &, unsigned long) const` | 100% 9/9 | 100% 6/6 | 100% 4/4 | 100% 2/2 | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||iox::is_custom_string<T1>::value), iox::optional<unsigned long>>::type iox::string<unsigned long>::find_last_of<T1>(const T1 &, unsigned long) const` | 100% 15/15 | 100% 10/10 | 100% 6/6 | 100% 3/3 | 
| `std::enable_if<((iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value)||iox::is_custom_string<T1>::value), long>::type iox::string<unsigned long>::compare<T1>(const T1 &) const` | 100% 8/8 | 100% 4/4 | 100% 4/4 | 100% 2/2 | 
| `std::enable_if<(iox::is_iox_string<T1>::value||iox::is_char_array<T1>::value), bool>::type iox::string<unsigned long>::insert<T1>(unsigned long, const T1 &, unsigned long)` | 100% 12/12 | 100% 6/6 | 100% 4/4 | 100% 2/2 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/vocabulary/include/iox/detail/string_internal.hpp | 100% 6/6 | N/A | N/A | N/A | 
| `iox::internal::GetData<char [T1]>::call(const char (&)[T1])` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::internal::GetData<char>::call(const char &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::internal::GetData<iox::string<unsigned long>>::call(const iox::string<unsigned long> &)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::internal::GetSize<char [T1]>::call(const char (&)[T1])` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::internal::GetSize<char>::call(char)` | 100% 1/1 | N/A | N/A | N/A | 
| `iox::internal::GetSize<iox::string<unsigned long>>::call(const iox::string<unsigned long> &)` | 100% 1/1 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/vocabulary/include/iox/detail/variant.inl | 100% 36/36 | 100% 12/12 | 92% 11/12 | 83% 5/6 | 
| `T1 * iox::variant<T1...>::get<T1>()` | 100% 1/1 | N/A | N/A | N/A | 
| `T1 * iox::variant<T1...>::get_if<T1>(T1 *)` | 100% 1/1 | N/A | N/A | N/A | 
| `bool iox::variant<T1...>::has_bad_variant_element_access<T1>() const` | 100% 2/2 | N/A | N/A | N/A | 
| `const T1 * iox::variant<T1...>::get<T1>() const` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `const T1 * iox::variant<T1...>::get_if<T1>(const T1 *) const` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `const iox::internal::get_type_at_index<(unsigned long)0, unsigned long, T1..., >::type * iox::variant<T1...>::get_at_index<unsigned long>() const` | 100% 2/2 | N/A | N/A | N/A | 
| `iox::internal::get_type_at_index<(unsigned long)0, unsigned long, T1..., >::type * iox::variant<T1...>::get_at_index<unsigned long>()` | 100% 4/4 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::variant<T1...>::call_element_destructor()` | 100% 2/2 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::variant<T1...>::error_message(const char *, const char *)` | 100% 1/1 | N/A | 50% 1/2 | 0% 0/1 | 
| `iox::variant<T1...>::~variant()` | 100% 1/1 | N/A | N/A | N/A | 
| `std::enable_if<(!std::is_same<T1, iox::variant<T1...>&>::value), iox::variant<T1...>>::type & iox::variant<T1...>::operator =<T1>(T1 &&)` | 100% 7/7 | 100% 4/4 | 100% 2/2 | 100% 1/1 | 
| `void iox::variant<T1...>::emplace<T1, T2...>(T2 &&...)` | 100% 4/4 | N/A | N/A | N/A | 
| `void iox::variant<T1...>::emplace_at_index<unsigned long, T2...>(T2 &&...)` | 100% 5/5 | N/A | N/A | N/A | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/vocabulary/include/iox/detail/variant_internal.hpp | 70% 26/37 | 63% 15/24 | 63% 15/24 | 33% 4/12 | 
| `iox::internal::call_at_index<unsigned long, T2, >::copy(unsigned long, const void *, void *)` | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::internal::call_at_index<unsigned long, T2, >::copyConstructor(unsigned long, const void *, void *)` | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::internal::call_at_index<unsigned long, T2, >::destructor(unsigned long, void *)` | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::internal::call_at_index<unsigned long, T2, >::equality(unsigned long, const void *, const void *)` | 0% 0/4 | 0% 0/2 | 0% 0/2 | 0% 0/1 | 
| `iox::internal::call_at_index<unsigned long, T2, >::move(unsigned long, void *, void *)` | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::internal::call_at_index<unsigned long, T2, >::moveConstructor(unsigned long, void *, void *)` | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::internal::call_at_index<unsigned long, T2, T3...>::copy(unsigned long, const void *, void *)` | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::internal::call_at_index<unsigned long, T2, T3...>::copyConstructor(unsigned long, const void *, void *)` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::internal::call_at_index<unsigned long, T2, T3...>::destructor(unsigned long, void *)` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::internal::call_at_index<unsigned long, T2, T3...>::equality(unsigned long, const void *, const void *)` | 67% 2/3 | 50% 1/2 | 50% 1/2 | 0% 0/1 | 
| `iox::internal::call_at_index<unsigned long, T2, T3...>::move(unsigned long, void *, void *)` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| `iox::internal::call_at_index<unsigned long, T2, T3...>::moveConstructor(unsigned long, void *, void *)` | 100% 3/3 | 100% 2/2 | 100% 2/2 | 100% 1/1 | 
| /home/demo-user/sandbox/demo-project/iceoryx_master/iceoryx_hoofs/vocabulary/include/iox/not_null.hpp | 100% 1/1 | N/A | N/A | N/A | 
| `iox::not_null<T1, T2>::not_null(T1)` | 100% 1/1 | N/A | N/A | N/A | 
| TOTAL (115 files, 1002 functions) | 77% 2729/3551 | 66% 857/1294 | 55% 1087/1972 | 39% 385/986 | 
