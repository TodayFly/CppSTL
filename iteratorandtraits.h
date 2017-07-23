#ifndef ITERATORANDTRAITS_H
#define ITERATORANDTRAITS_H


#include <cstddef>
// simple auto_ptr
template<class T> class Auto_ptr{
private:
    T* ptr;
public:
    explicit Auto_ptr(T *p=nullptr):ptr{p}{   }
    template<class U> Auto_ptr(Auto_ptr<U> &rhs):ptr{rhs.release()} {} //???
    ~Auto_ptr(){ delete ptr; }

    template<class U> Auto_ptr<T>& operator=(Auto_ptr<U>& rhs){
        if(this!=&rhs) reset(rhs.release());
        return *this;
    }
    T& operator* () const {return *ptr;}
    T* operator->() const {return ptr;}
    T* get() const {return ptr;}
};

/*

*/
// 类型嵌套，未解决迭代器为原生指针类型情况（不是类，无法定义内嵌型别）
template <class T> class MyIter{
public:
    typedef T value_type; //定义内嵌型别
    T* ptr;
    MyIter(T* p=0) :ptr(p){}
    T& operator*() const {return *ptr;}
};
template <class I> typename I::value_type  getv(I itr) { return *itr; }
// 解决原生指针的情况例子
template <class I> struct MyIter_traits{//traits意为特性
    typedef typename I::value_type value_type;// 迭代器为类的情况
    typedef typename I::iterator_category iterator_category; //与STL统一
    typedef typename I::difference_type difference_type;// 迭代器之间的距离
    typedef typename I::pointer  pointer;
    typedef typename I::reference reference;
};
template <class T> struct MyIter_traits<T*>{
    typedef T value_type; //偏特化-迭代器为原生指针
    typedef ptrdiff_t difference_type;
    typedef T* pointer;
    typedef T& reference;
};
template <class T> struct MyIter_traits<const T*>{
    typedef T value_type; //迭代器为指向常数时，萃取出来型别是T而非const T
    typedef ptrdiff_t difference_type;
    typedef const T* pointer;
    typedef const T& reference;
};
template <class I> // 使用时
typename MyIter_traits<I>::value_type getv2(I itr) {return *itr;}






#endif // ITERATORANDTRAITS_H
