// Generated by Haxe 4.3.4
#ifndef INCLUDED_flixel_graphics_atlas__AseAtlas_AseAtlasColor_Impl_
#define INCLUDED_flixel_graphics_atlas__AseAtlas_AseAtlasColor_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,graphics,atlas,_AseAtlas,AseAtlasColor_Impl_)

namespace flixel{
namespace graphics{
namespace atlas{
namespace _AseAtlas{


class HXCPP_CLASS_ATTRIBUTES AseAtlasColor_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AseAtlasColor_Impl__obj OBJ_;
		AseAtlasColor_Impl__obj();

	public:
		enum { _hx_ClassId = 0x106593b8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.graphics.atlas._AseAtlas.AseAtlasColor_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.graphics.atlas._AseAtlas.AseAtlasColor_Impl_"); }

		inline static ::hx::ObjectPtr< AseAtlasColor_Impl__obj > __new() {
			::hx::ObjectPtr< AseAtlasColor_Impl__obj > __this = new AseAtlasColor_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AseAtlasColor_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			AseAtlasColor_Impl__obj *__this = (AseAtlasColor_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AseAtlasColor_Impl__obj), false, "flixel.graphics.atlas._AseAtlas.AseAtlasColor_Impl_"));
			*(void **)__this = AseAtlasColor_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AseAtlasColor_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AseAtlasColor_Impl_",eb,0b,04,19); }

		static  ::Dynamic toFlxColor(::String this1);
		static ::Dynamic toFlxColor_dyn();

		static ::String toString(::String this1);
		static ::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
} // end namespace _AseAtlas

#endif /* INCLUDED_flixel_graphics_atlas__AseAtlas_AseAtlasColor_Impl_ */ 