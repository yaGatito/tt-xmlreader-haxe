#ifndef INCLUDED_lime_utils__ArrayBuffer_ArrayBuffer_Impl_
#define INCLUDED_lime_utils__ArrayBuffer_ArrayBuffer_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,utils,_ArrayBuffer,ArrayBuffer_Impl_)

namespace lime{
namespace utils{
namespace _ArrayBuffer{


class HXCPP_CLASS_ATTRIBUTES ArrayBuffer_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArrayBuffer_Impl__obj OBJ_;
		ArrayBuffer_Impl__obj();

	public:
		enum { _hx_ClassId = 0x3dcccc63 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.utils._ArrayBuffer.ArrayBuffer_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.utils._ArrayBuffer.ArrayBuffer_Impl_"); }

		inline static ::hx::ObjectPtr< ArrayBuffer_Impl__obj > __new() {
			::hx::ObjectPtr< ArrayBuffer_Impl__obj > __this = new ArrayBuffer_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ArrayBuffer_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ArrayBuffer_Impl__obj *__this = (ArrayBuffer_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayBuffer_Impl__obj), false, "lime.utils._ArrayBuffer.ArrayBuffer_Impl_"));
			*(void **)__this = ArrayBuffer_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayBuffer_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayBuffer_Impl_",b9,b4,eb,eb); }

		static int get_byteLength( ::haxe::io::Bytes this1);
		static ::Dynamic get_byteLength_dyn();

		static  ::haxe::io::Bytes _new(int byteLength);
		static ::Dynamic _new_dyn();

		static bool isView( ::Dynamic arg);
		static ::Dynamic isView_dyn();

		static  ::haxe::io::Bytes slice( ::haxe::io::Bytes this1,int begin, ::Dynamic end);
		static ::Dynamic slice_dyn();

};

} // end namespace lime
} // end namespace utils
} // end namespace _ArrayBuffer

#endif /* INCLUDED_lime_utils__ArrayBuffer_ArrayBuffer_Impl_ */ 
