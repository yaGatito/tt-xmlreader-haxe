#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_net_HTTPRequestHeader
#include <lime/net/HTTPRequestHeader.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif

namespace lime{
namespace net{


static ::String _IHTTPRequest_obj_sMemberFields[] = {
	HX_("contentType",93,3c,7b,2a),
	HX_("data",2a,56,63,42),
	HX_("enableResponseHeaders",82,32,47,05),
	HX_("followRedirects",26,5a,40,75),
	HX_("formData",8e,d5,80,56),
	HX_("headers",46,52,08,63),
	HX_("method",e1,f6,5a,09),
	HX_("responseHeaders",c5,0d,ca,43),
	HX_("responseStatus",93,60,a4,78),
	HX_("timeout",a1,1a,f7,d8),
	HX_("uri",6c,2b,59,00),
	HX_("userAgent",7a,f0,12,c8),
	HX_("withCredentials",56,86,c4,ca),
	HX_("manageCookies",6a,1f,8f,bc),
	HX_("cancel",7a,ed,33,b8),
	::String(null()) };

::hx::Class _IHTTPRequest_obj::__mClass;

void _IHTTPRequest_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.net._IHTTPRequest",73,ba,0c,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(_IHTTPRequest_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x154a91b5 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
