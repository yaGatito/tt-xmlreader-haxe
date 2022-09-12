#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_exceptions_NotImplementedException
#include <haxe/exceptions/NotImplementedException.h>
#endif
#ifndef INCLUDED_haxe_exceptions_PosException
#include <haxe/exceptions/PosException.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_078cb7d22862d037_51_readByte,"haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","D:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",51,0x9ccdbcec)
HX_LOCAL_STACK_FRAME(_hx_pos_078cb7d22862d037_64_readBytes,"haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","D:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",64,0x9ccdbcec)
HX_LOCAL_STACK_FRAME(_hx_pos_078cb7d22862d037_92_close,"haxe.io.Input","close",0xfc421af4,"haxe.io.Input.close","D:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",92,0x9ccdbcec)
HX_LOCAL_STACK_FRAME(_hx_pos_078cb7d22862d037_133_readFullBytes,"haxe.io.Input","readFullBytes",0x3db9a162,"haxe.io.Input.readFullBytes","D:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",133,0x9ccdbcec)
HX_LOCAL_STACK_FRAME(_hx_pos_078cb7d22862d037_145_read,"haxe.io.Input","read",0x27b9839a,"haxe.io.Input.read","D:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",145,0x9ccdbcec)
HX_LOCAL_STACK_FRAME(_hx_pos_078cb7d22862d037_176_readLine,"haxe.io.Input","readLine",0x54789cae,"haxe.io.Input.readLine","D:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",176,0x9ccdbcec)
HX_LOCAL_STACK_FRAME(_hx_pos_078cb7d22862d037_229_readInt16,"haxe.io.Input","readInt16",0xde2f2f9a,"haxe.io.Input.readInt16","D:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",229,0x9ccdbcec)
HX_LOCAL_STACK_FRAME(_hx_pos_078cb7d22862d037_243_readUInt16,"haxe.io.Input","readUInt16",0x05cae019,"haxe.io.Input.readUInt16","D:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",243,0x9ccdbcec)
HX_LOCAL_STACK_FRAME(_hx_pos_078cb7d22862d037_281_readInt32,"haxe.io.Input","readInt32",0xde2f3154,"haxe.io.Input.readInt32","D:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",281,0x9ccdbcec)
HX_LOCAL_STACK_FRAME(_hx_pos_078cb7d22862d037_304_readString,"haxe.io.Input","readString",0xfdebd00b,"haxe.io.Input.readString","D:\\HaxeToolkit\\haxe\\std/haxe/io/Input.hx",304,0x9ccdbcec)
namespace haxe{
namespace io{

void Input_obj::__construct() { }

Dynamic Input_obj::__CreateEmpty() { return new Input_obj; }

void *Input_obj::_hx_vtable = 0;

Dynamic Input_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Input_obj > _hx_result = new Input_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Input_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19e22056;
}

int Input_obj::readByte(){
            	HX_GC_STACKFRAME(&_hx_pos_078cb7d22862d037_51_readByte)
HXDLIN(  51)		HX_STACK_DO_THROW( ::haxe::exceptions::NotImplementedException_obj::__alloc( HX_CTX ,null(),null(),::hx::SourceInfo(HX_("haxe/io/Input.hx",f4,10,5a,cd),51,HX_("haxe.io.Input",aa,0e,f5,9f),HX_("readByte",7e,f9,1a,69))));
HXDLIN(  51)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

int Input_obj::readBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_078cb7d22862d037_64_readBytes)
HXLINE(  65)		int k = len;
HXLINE(  66)		::Array< unsigned char > b = s->b;
HXLINE(  67)		bool _hx_tmp;
HXDLIN(  67)		bool _hx_tmp1;
HXDLIN(  67)		if ((pos >= 0)) {
HXLINE(  67)			_hx_tmp1 = (len < 0);
            		}
            		else {
HXLINE(  67)			_hx_tmp1 = true;
            		}
HXDLIN(  67)		if (!(_hx_tmp1)) {
HXLINE(  67)			_hx_tmp = ((pos + len) > s->length);
            		}
            		else {
HXLINE(  67)			_hx_tmp = true;
            		}
HXDLIN(  67)		if (_hx_tmp) {
HXLINE(  68)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            		}
HXLINE(  69)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  70)			while((k > 0)){
HXLINE(  76)				b[pos] = ( (unsigned char)(this->readByte()) );
HXLINE(  80)				pos = (pos + 1);
HXLINE(  81)				k = (k - 1);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  83)				{
HXLINE(  83)					null();
            				}
HXLINE(  69)				if (!(::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::haxe::io::Eof >()))) {
HXLINE(  69)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE(  84)		return (len - k);
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

void Input_obj::close(){
            	HX_STACKFRAME(&_hx_pos_078cb7d22862d037_92_close)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,close,(void))

void Input_obj::readFullBytes( ::haxe::io::Bytes s,int pos,int len){
            	HX_STACKFRAME(&_hx_pos_078cb7d22862d037_133_readFullBytes)
HXDLIN( 133)		while((len > 0)){
HXLINE( 134)			int k = this->readBytes(s,pos,len);
HXLINE( 135)			if ((k == 0)) {
HXLINE( 136)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Blocked_dyn()));
            			}
HXLINE( 137)			pos = (pos + k);
HXLINE( 138)			len = (len - k);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readFullBytes,(void))

 ::haxe::io::Bytes Input_obj::read(int nbytes){
            	HX_STACKFRAME(&_hx_pos_078cb7d22862d037_145_read)
HXLINE( 146)		 ::haxe::io::Bytes s = ::haxe::io::Bytes_obj::alloc(nbytes);
HXLINE( 147)		int p = 0;
HXLINE( 148)		while((nbytes > 0)){
HXLINE( 149)			int k = this->readBytes(s,p,nbytes);
HXLINE( 150)			if ((k == 0)) {
HXLINE( 151)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Blocked_dyn()));
            			}
HXLINE( 152)			p = (p + k);
HXLINE( 153)			nbytes = (nbytes - k);
            		}
HXLINE( 155)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,read,return )

::String Input_obj::readLine(){
            	HX_GC_STACKFRAME(&_hx_pos_078cb7d22862d037_176_readLine)
HXLINE( 177)		 ::haxe::io::BytesBuffer buf =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 178)		int last;
HXLINE( 179)		::String s;
HXLINE( 180)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 181)			while(true){
HXLINE( 181)				last = this->readByte();
HXDLIN( 181)				if (!((last != 10))) {
HXLINE( 181)					goto _hx_goto_8;
            				}
HXLINE( 182)				buf->b->push(last);
            			}
            			_hx_goto_8:;
HXLINE( 183)			s = buf->getBytes()->toString();
HXLINE( 184)			if (::hx::IsEq( s.charCodeAt((s.length - 1)),13 )) {
HXLINE( 185)				s = s.substr(0,-1);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 186)				{
HXLINE( 186)					null();
            				}
HXDLIN( 186)				 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 180)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::haxe::io::Eof >())) {
HXLINE( 186)					 ::haxe::io::Eof e = ( ( ::haxe::io::Eof)(_g1) );
HXDLIN( 186)					{
HXLINE( 187)						s = buf->getBytes()->toString();
HXLINE( 188)						if ((s.length == 0)) {
HXLINE( 189)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(e));
            						}
            					}
            				}
            				else {
HXLINE( 180)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 191)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readLine,return )

int Input_obj::readInt16(){
            	HX_STACKFRAME(&_hx_pos_078cb7d22862d037_229_readInt16)
HXLINE( 230)		int ch1 = this->readByte();
HXLINE( 231)		int ch2 = this->readByte();
HXLINE( 232)		int n;
HXDLIN( 232)		if (this->bigEndian) {
HXLINE( 232)			n = (ch2 | (ch1 << 8));
            		}
            		else {
HXLINE( 232)			n = (ch1 | (ch2 << 8));
            		}
HXLINE( 233)		if (((n & 32768) != 0)) {
HXLINE( 234)			return (n - 65536);
            		}
HXLINE( 235)		return n;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt16,return )

int Input_obj::readUInt16(){
            	HX_STACKFRAME(&_hx_pos_078cb7d22862d037_243_readUInt16)
HXLINE( 244)		int ch1 = this->readByte();
HXLINE( 245)		int ch2 = this->readByte();
HXLINE( 246)		if (this->bigEndian) {
HXLINE( 246)			return (ch2 | (ch1 << 8));
            		}
            		else {
HXLINE( 246)			return (ch1 | (ch2 << 8));
            		}
HXDLIN( 246)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readUInt16,return )

int Input_obj::readInt32(){
            	HX_STACKFRAME(&_hx_pos_078cb7d22862d037_281_readInt32)
HXLINE( 282)		int ch1 = this->readByte();
HXLINE( 283)		int ch2 = this->readByte();
HXLINE( 284)		int ch3 = this->readByte();
HXLINE( 285)		int ch4 = this->readByte();
HXLINE( 297)		if (this->bigEndian) {
HXLINE( 297)			return (((ch4 | (ch3 << 8)) | (ch2 << 16)) | (ch1 << 24));
            		}
            		else {
HXLINE( 297)			return (((ch1 | (ch2 << 8)) | (ch3 << 16)) | (ch4 << 24));
            		}
HXDLIN( 297)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readInt32,return )

::String Input_obj::readString(int len, ::haxe::io::Encoding encoding){
            	HX_STACKFRAME(&_hx_pos_078cb7d22862d037_304_readString)
HXLINE( 305)		 ::haxe::io::Bytes b = ::haxe::io::Bytes_obj::alloc(len);
HXLINE( 306)		this->readFullBytes(b,0,len);
HXLINE( 310)		return b->getString(0,len,encoding);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Input_obj,readString,return )


Input_obj::Input_obj()
{
}

::hx::Val Input_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return ::hx::Val( readByte_dyn() ); }
		if (HX_FIELD_EQ(inName,"readLine") ) { return ::hx::Val( readLine_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { return ::hx::Val( bigEndian ); }
		if (HX_FIELD_EQ(inName,"readBytes") ) { return ::hx::Val( readBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt16") ) { return ::hx::Val( readInt16_dyn() ); }
		if (HX_FIELD_EQ(inName,"readInt32") ) { return ::hx::Val( readInt32_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readUInt16") ) { return ::hx::Val( readUInt16_dyn() ); }
		if (HX_FIELD_EQ(inName,"readString") ) { return ::hx::Val( readString_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readFullBytes") ) { return ::hx::Val( readFullBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Input_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"bigEndian") ) { bigEndian=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bigEndian",7b,d5,5a,20));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Input_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Input_obj,bigEndian),HX_("bigEndian",7b,d5,5a,20)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Input_obj_sStaticStorageInfo = 0;
#endif

static ::String Input_obj_sMemberFields[] = {
	HX_("bigEndian",7b,d5,5a,20),
	HX_("readByte",7e,f9,1a,69),
	HX_("readBytes",35,55,7f,8e),
	HX_("close",b8,17,63,48),
	HX_("readFullBytes",26,02,0b,ce),
	HX_("read",56,4b,a7,4b),
	HX_("readLine",6a,f2,aa,6f),
	HX_("readInt16",5e,de,07,8f),
	HX_("readUInt16",d5,1c,8b,12),
	HX_("readInt32",18,e0,07,8f),
	HX_("readString",c7,0c,ac,0a),
	::String(null()) };

::hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	Input_obj _hx_dummy;
	Input_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.io.Input",aa,0e,f5,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Input_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Input_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Input_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Input_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
