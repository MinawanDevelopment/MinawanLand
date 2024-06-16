// Generated by Haxe 4.3.4
#ifndef INCLUDED_openfl_text__internal_ShapeCache
#define INCLUDED_openfl_text__internal_ShapeCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,text,_internal,GlyphPosition)
HX_DECLARE_CLASS3(openfl,text,_internal,ShapeCache)
HX_DECLARE_CLASS3(openfl,text,_internal,TextFormatRange)
HX_DECLARE_CLASS3(openfl,text,_internal,TextLayout)

namespace openfl{
namespace text{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES ShapeCache_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShapeCache_obj OBJ_;
		ShapeCache_obj();

	public:
		enum { _hx_ClassId = 0x21b5ff1c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.text._internal.ShapeCache")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.text._internal.ShapeCache"); }
		static ::hx::ObjectPtr< ShapeCache_obj > __new();
		static ::hx::ObjectPtr< ShapeCache_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShapeCache_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShapeCache",81,33,06,1e); }

		static void __boot();
		static  ::Dynamic __meta__;
		static int hashFunction(::String key);
		static ::Dynamic hashFunction_dyn();

		 ::haxe::ds::StringMap _hx___shortWordMap;
		 ::haxe::ds::StringMap _hx___longWordMap;
		::Array< ::Dynamic> cache( ::openfl::text::_internal::TextFormatRange formatRange, ::openfl::text::_internal::TextLayout getPositions);
		::Dynamic cache_dyn();

		::Array< ::Dynamic> _hx___cacheShortWord(::String wordKey,::String formatKey, ::openfl::text::_internal::TextLayout getPositions);
		::Dynamic _hx___cacheShortWord_dyn();

		::Array< ::Dynamic> _hx___cacheLongWord(::String wordKey,::String formatKey, ::openfl::text::_internal::TextLayout getPositions);
		::Dynamic _hx___cacheLongWord_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _internal

#endif /* INCLUDED_openfl_text__internal_ShapeCache */ 