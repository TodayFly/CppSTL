#ifndef ALLOCATOR_H
#define ALLOCATOR_H
// simple allocator
#include <new>      // for placement new
#include <cstddef>  // for ptrdiff_t, size_t
#include <cstdlib>  // for exit
#include <climits>  // UNIX_MAX
#include <iostream> // for cerr

//namespace JJ {

//template <class T> inline T* _allocate(ptrdiff_t size, T*){
//    std::set_new_handler(0);
//    T* tmp=(T*) (::operator new((size_t)(size*sizeof(T))));
//    if(tmp==0){
//        std::cerr<<"out of memory"<<std::endl;
//        exit(1);
//    }
//    return tmp;
//}
//template <class T> inline void _deallocate(T* buffer){
//    ::operator delete(buffer);
//}
//template <class T1, class T2> inline void _construct(T1* p, const T2& value){
//    new(p) T1(value);
//}
//template <class T>inline void _destroy(T* ptr){
//    ptr->~T();
//}


//template <class T> class allocator{
//public:
//    typedef T v_type;
//    typedef T* ptr;
//    typedef const T* cptr;
//    typedef T& ref;
//    typedef const T& cref;
//    typedef size_t size_type;
//    typedef ptrdiff_t diff_type;
//    // rebind allocator of type U
//    template <class U> struct rebind{
//        typedef allocator<U> other;
//    };
//    // hind used for locality.
//    T* allocate(size_type n, const void * hind=0){
//        return _allocate((diff_type)n,(T*)0);
//    }
//    void deallocate(T* p, size_type n) { _deallocate(p);}
//    void construct(T* p, const T& value){_construct(p,value);    }
//    void destroy(T* p) { _destroy(p); }
//    T* address(ref x) {return (T*)&x;}
//    cptr const_address(cref x){ return (cptr)&x;}
//    size_type max_size() const {
//        return size_type(UINT_MAX/sizeof(T));
//    }
//};

//}

#endif // ALLOCATOR_H
