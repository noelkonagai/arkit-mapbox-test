﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Xml.Linq.XAttribute
struct XAttribute_t3858477518;
// System.Xml.Linq.XObject
struct XObject_t3550811009;
// System.ArgumentNullException
struct ArgumentNullException_t628810857;
// System.String
struct String_t;
// System.Xml.Linq.XName
struct XName_t785190363;
// System.Xml.Linq.XNamespace
struct XNamespace_t1613015075;
// System.Xml.Linq.XElement
struct XElement_t553821050;
// System.Xml.Linq.XContainer
struct XContainer_t1445911831;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Xml.Linq.XCData
struct XCData_t1306050895;
// System.Xml.Linq.XText
struct XText_t1860529549;
// System.Xml.XmlWriter
struct XmlWriter_t1048088568;
// System.Xml.Linq.XComment
struct XComment_t1618005895;
// System.Xml.Linq.XNode
struct XNode_t2707504214;
// System.Type
struct Type_t;
// System.ArgumentException
struct ArgumentException_t3259014390;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>
struct IEnumerable_1_t2999631259;
// System.Xml.Linq.XContainer/<Nodes>c__Iterator1A
struct U3CNodesU3Ec__Iterator1A_t1473861320;
// System.Xml.XmlReader
struct XmlReader_t3675626668;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>
struct IEnumerator_1_t183028041;
// System.NotSupportedException
struct NotSupportedException_t1793819818;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t3367285402;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Xml.Linq.XDocument
struct XDocument_t2733326047;
// System.Xml.Linq.XDocumentType
struct XDocumentType_t738990919;
// System.InvalidOperationException
struct InvalidOperationException_t721527559;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>
struct IEnumerable_1_t4150604563;
// System.Collections.Generic.List`1<System.Xml.Linq.XElement>
struct List_1_t4217909478;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2058570427;
// System.Xml.Schema.XmlSchema
struct XmlSchema_t880472818;
// System.Xml.Linq.XElement/<Attributes>c__Iterator20
struct U3CAttributesU3Ec__Iterator20_t3474816789;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2321347278;
// System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23
struct U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544;
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>
struct IEnumerator_1_t1334001345;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t3799711356;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Exception
struct Exception_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XNamespace>
struct Dictionary_2_t3527794337;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2281509423;
// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XName>
struct Dictionary_2_t2699969625;
// System.Xml.Linq.XNodeEqualityComparer
struct XNodeEqualityComparer_t3116038621;
// System.Xml.Linq.XNodeDocumentOrderComparer
struct XNodeDocumentOrderComparer_t1208684534;
// System.IO.StringWriter
struct StringWriter_t4139609088;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t924210539;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.Xml.Linq.XProcessingInstruction
struct XProcessingInstruction_t2854903359;
// System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25
struct U3CExpandArrayU3Ec__Iterator25_t507968046;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t164973122;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t1473156697;
// System.Xml.Linq.XElement[]
struct XElementU5BU5D_t3856207199;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t1548133672;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t1578612233;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t62501539;
// System.Xml.Linq.XName[]
struct XNameU5BU5D_t1208840282;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1241853011;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Xml.Linq.XName,System.Collections.DictionaryEntry>
struct Transform_1_t332679926;
// System.Xml.Linq.XNamespace[]
struct XNamespaceU5BU5D_t2012216306;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Xml.Linq.XNamespace,System.Collections.DictionaryEntry>
struct Transform_1_t1136055950;
// System.Xml.Linq.XAttribute[]
struct XAttributeU5BU5D_t805402427;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Void
struct Void_t1841601450;
// System.Byte
struct Byte_t3683104436;
// System.Double
struct Double_t4078015681;
// System.UInt16
struct UInt16_t986882611;
// System.Xml.Serialization.XmlSerializerNamespaces
struct XmlSerializerNamespaces_t3063656491;
// System.Xml.Schema.XmlSchemaObjectTable
struct XmlSchemaObjectTable_t3364835593;
// System.Xml.Schema.XmlSchemaObjectCollection
struct XmlSchemaObjectCollection_t395083109;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t313318308;
// System.Xml.XmlNameTable
struct XmlNameTable_t1345805268;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>
struct IEnumerable_1_t845948095;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.MemberFilter
struct MemberFilter_t3405857066;
// System.Text.Encoding
struct Encoding_t663144255;

extern RuntimeClass* ArgumentNullException_t628810857_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3712335156;
extern const uint32_t XAttribute__ctor_m2559189009_MetadataUsageId;
extern String_t* _stringLiteral2328218955;
extern const uint32_t XAttribute__ctor_m2350776210_MetadataUsageId;
extern RuntimeClass* XAttributeU5BU5D_t805402427_il2cpp_TypeInfo_var;
extern RuntimeClass* XAttribute_t3858477518_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t1328083999_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t1486305143____U24U24fieldU2D0_0_FieldInfo_var;
extern const uint32_t XAttribute__cctor_m2493520020_MetadataUsageId;
extern RuntimeClass* XNamespace_t1613015075_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral351558848;
extern const uint32_t XAttribute_get_IsNamespaceDeclaration_m86030665_MetadataUsageId;
extern String_t* _stringLiteral1803325615;
extern const uint32_t XAttribute_SetValue_m2874773340_MetadataUsageId;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3943473371;
extern String_t* _stringLiteral372029312;
extern String_t* _stringLiteral2206518777;
extern String_t* _stringLiteral352199793;
extern String_t* _stringLiteral1259525396;
extern String_t* _stringLiteral1693198914;
extern String_t* _stringLiteral2212392330;
extern String_t* _stringLiteral1452877443;
extern String_t* _stringLiteral404389339;
extern const uint32_t XAttribute_ToString_m2658312316_MetadataUsageId;
extern String_t* _stringLiteral1064894;
extern const uint32_t XCData_WriteTo_m2964317266_MetadataUsageId;
extern RuntimeClass* XNode_t2707504214_il2cpp_TypeInfo_var;
extern const uint32_t XComment__ctor_m2882971392_MetadataUsageId;
extern const uint32_t XComment__ctor_m1201847697_MetadataUsageId;
extern const uint32_t XContainer__ctor_m3187361404_MetadataUsageId;
extern RuntimeClass* IEnumerable_t2911409499_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1466026749_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t2427283555_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t3259014390_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1743330761;
extern const uint32_t XContainer_CheckChildType_m2935453595_MetadataUsageId;
extern const uint32_t XContainer_Add_m3035239173_MetadataUsageId;
extern const uint32_t XContainer_AddNode_m3593198507_MetadataUsageId;
extern RuntimeClass* U3CNodesU3Ec__Iterator1A_t1473861320_il2cpp_TypeInfo_var;
extern const uint32_t XContainer_Nodes_m1386197549_MetadataUsageId;
extern const uint32_t XContainer_ReadContentFrom_m14040437_MetadataUsageId;
extern const uint32_t U3CNodesU3Ec__Iterator1A_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XNodeU3E_GetEnumerator_m2816027373_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1793819818_il2cpp_TypeInfo_var;
extern const uint32_t U3CNodesU3Ec__Iterator1A_Reset_m555334754_MetadataUsageId;
extern const uint32_t XDeclaration__ctor_m4202021713_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1642385972_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral881864128;
extern String_t* _stringLiteral3469295573;
extern String_t* _stringLiteral3480236172;
extern String_t* _stringLiteral3176926770;
extern String_t* _stringLiteral905413825;
extern const uint32_t XDeclaration_ToString_m2249492008_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t2999631259_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t183028041_il2cpp_TypeInfo_var;
extern RuntimeClass* XDocumentType_t738990919_il2cpp_TypeInfo_var;
extern const uint32_t XDocument_get_DocumentType_m2810920598_MetadataUsageId;
extern RuntimeClass* XElement_t553821050_il2cpp_TypeInfo_var;
extern const uint32_t XDocument_get_Root_m946627048_MetadataUsageId;
extern String_t* _stringLiteral3798235535;
extern const uint32_t XDocument_ValidateWhitespace_m3463530265_MetadataUsageId;
extern String_t* _stringLiteral3021628911;
extern const uint32_t XDocument_WriteTo_m4076631342_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t721527559_il2cpp_TypeInfo_var;
extern RuntimeClass* XText_t1860529549_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3146247017;
extern String_t* _stringLiteral2371993444;
extern String_t* _stringLiteral920709334;
extern String_t* _stringLiteral3127487084;
extern String_t* _stringLiteral2174730038;
extern const uint32_t XDocument_VerifyAddedNode_m3124949756_MetadataUsageId;
extern const uint32_t XDocumentType__ctor_m2779569696_MetadataUsageId;
extern const uint32_t XDocumentType__ctor_m4083239521_MetadataUsageId;
extern RuntimeClass* List_1_t4217909478_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m695132885_RuntimeMethod_var;
extern const uint32_t XElement__cctor_m329558096_MetadataUsageId;
extern const uint32_t XElement_get_IsEmpty_m3492370737_MetadataUsageId;
extern const uint32_t XElement_get_Value_m1500498232_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t4150604563_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t1334001345_il2cpp_TypeInfo_var;
extern const uint32_t XElement_Attribute_m1640408831_MetadataUsageId;
extern RuntimeClass* U3CAttributesU3Ec__Iterator20_t3474816789_il2cpp_TypeInfo_var;
extern const uint32_t XElement_Attributes_m3926517386_MetadataUsageId;
extern String_t* _stringLiteral3334767733;
extern const uint32_t XElement_LoadCore_m677132477_MetadataUsageId;
extern const uint32_t XElement_SetAttributeValue_m4226718375_MetadataUsageId;
extern const uint32_t XElement_SetAttributeObject_m819702138_MetadataUsageId;
extern const uint32_t XElement_WriteTo_m4068736895_MetadataUsageId;
extern const uint32_t XElement_GetNamespaceOfPrefix_m1452302937_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t2321347278_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t3799711356_il2cpp_TypeInfo_var;
extern const uint32_t XElement_GetPrefixOfNamespace_m1139725977_MetadataUsageId;
extern RuntimeClass* U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544_il2cpp_TypeInfo_var;
extern const uint32_t XElement_GetPrefixOfNamespaceCore_m3260263689_MetadataUsageId;
extern RuntimeClass* XDocument_t2733326047_il2cpp_TypeInfo_var;
extern RuntimeClass* XDeclaration_t3367285402_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1881875922;
extern String_t* _stringLiteral2594240547;
extern const uint32_t XElement_OnAddingObject_m3270813610_MetadataUsageId;
extern const uint32_t U3CAttributesU3Ec__Iterator20_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XAttributeU3E_GetEnumerator_m558085440_MetadataUsageId;
extern const uint32_t U3CAttributesU3Ec__Iterator20_Reset_m238223563_MetadataUsageId;
extern const uint32_t U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_System_Collections_Generic_IEnumerableU3CstringU3E_GetEnumerator_m288797912_MetadataUsageId;
extern const uint32_t U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_MoveNext_m3593474755_MetadataUsageId;
extern const uint32_t U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_Dispose_m523461884_MetadataUsageId;
extern const uint32_t U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_Reset_m4198262898_MetadataUsageId;
extern const uint32_t XName__ctor_m3384925849_MetadataUsageId;
extern RuntimeClass* XmlConvert_t1936105738_il2cpp_TypeInfo_var;
extern const uint32_t XName__ctor_m293531099_MetadataUsageId;
extern String_t* _stringLiteral2792112382;
extern const uint32_t XName_System_Runtime_Serialization_ISerializable_GetObjectData_m580019797_MetadataUsageId;
extern String_t* _stringLiteral154018907;
extern const uint32_t XName_ErrorInvalidExpandedName_m1515653754_MetadataUsageId;
extern RuntimeClass* XName_t785190363_il2cpp_TypeInfo_var;
extern const uint32_t XName_Equals_m3014313799_MetadataUsageId;
extern String_t* _stringLiteral3952503856;
extern const uint32_t XName_ExpandName_m3429394577_MetadataUsageId;
extern const uint32_t XName_Get_m2187745362_MetadataUsageId;
extern String_t* _stringLiteral372029399;
extern String_t* _stringLiteral372029393;
extern const uint32_t XName_ToString_m2526618213_MetadataUsageId;
extern const uint32_t XName_op_Equality_m148690364_MetadataUsageId;
extern String_t* _stringLiteral3550677034;
extern const uint32_t XNamespace__ctor_m4013965018_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3527794337_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2852800515_RuntimeMethod_var;
extern String_t* _stringLiteral3939301371;
extern String_t* _stringLiteral3036435824;
extern const uint32_t XNamespace__cctor_m3798812553_MetadataUsageId;
extern const uint32_t XNamespace_get_None_m1138320793_MetadataUsageId;
extern const uint32_t XNamespace_get_Xmlns_m4214259751_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m135719904_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m2041749548_RuntimeMethod_var;
extern const uint32_t XNamespace_Get_m1026612632_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t2699969625_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3965986263_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m171435174_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m867913498_RuntimeMethod_var;
extern const uint32_t XNamespace_GetName_m2299836393_MetadataUsageId;
extern const uint32_t XNamespace_Equals_m777760167_MetadataUsageId;
extern const uint32_t XNamespace_op_Inequality_m1061703997_MetadataUsageId;
extern const uint32_t XNamespace_op_Implicit_m665673955_MetadataUsageId;
extern RuntimeClass* XNodeEqualityComparer_t3116038621_il2cpp_TypeInfo_var;
extern RuntimeClass* XNodeDocumentOrderComparer_t1208684534_il2cpp_TypeInfo_var;
extern const uint32_t XNode__cctor_m1243525384_MetadataUsageId;
extern RuntimeClass* StringWriter_t4139609088_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlWriterSettings_t924210539_il2cpp_TypeInfo_var;
extern const uint32_t XNode_ToString_m3539772875_MetadataUsageId;
extern RuntimeClass* XCData_t1306050895_il2cpp_TypeInfo_var;
extern RuntimeClass* XProcessingInstruction_t2854903359_il2cpp_TypeInfo_var;
extern RuntimeClass* XComment_t1618005895_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNodeType_t739504597_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2074996249;
extern String_t* _stringLiteral1111970457;
extern String_t* _stringLiteral2068626695;
extern const uint32_t XNode_ReadFrom_m1777325942_MetadataUsageId;
extern String_t* _stringLiteral3311509138;
extern const uint32_t XNode_Remove_m3085429851_MetadataUsageId;
extern const uint32_t XNodeDocumentOrderComparer_System_Collections_IComparer_Compare_m2457853580_MetadataUsageId;
extern RuntimeClass* DateTime_t693205669_il2cpp_TypeInfo_var;
extern const uint32_t XNodeDocumentOrderComparer_Compare_m2082190298_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3872491103;
extern const uint32_t XNodeDocumentOrderComparer_CompareCore_m1096164403_MetadataUsageId;
extern const uint32_t XNodeEqualityComparer_System_Collections_IEqualityComparer_Equals_m3901301221_MetadataUsageId;
extern const uint32_t XNodeEqualityComparer_System_Collections_IEqualityComparer_GetHashCode_m1716004019_MetadataUsageId;
extern const uint32_t XNodeEqualityComparer_Equals_m3412641323_MetadataUsageId;
extern const uint32_t XNodeEqualityComparer_Equals_m163327531_MetadataUsageId;
extern const uint32_t XNodeEqualityComparer_Equals_m2405644035_MetadataUsageId;
extern const uint32_t XNodeEqualityComparer_GetHashCode_m2349713071_MetadataUsageId;
extern const uint32_t XObject_get_Document_m418804020_MetadataUsageId;
extern const uint32_t XObject_get_Parent_m714109026_MetadataUsageId;
extern RuntimeClass* IXmlLineInfo_t135184468_il2cpp_TypeInfo_var;
extern const uint32_t XObject_FillLineInfoAndBaseUri_m431604165_MetadataUsageId;
extern String_t* _stringLiteral2619694;
extern const uint32_t XProcessingInstruction__ctor_m3547038108_MetadataUsageId;
extern const uint32_t XProcessingInstruction__ctor_m2560507313_MetadataUsageId;
extern const uint32_t XText__ctor_m2852593626_MetadataUsageId;
extern const uint32_t XText__ctor_m2404229261_MetadataUsageId;
extern const uint32_t XText_set_Value_m1761166796_MetadataUsageId;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t4078015681_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t2076509932_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_t3430258949_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTimeOffset_t1362988906_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3399404932;
extern String_t* _stringLiteral372029392;
extern const uint32_t XUtil_ToString_m2221736954_MetadataUsageId;
extern RuntimeClass* U3CExpandArrayU3Ec__Iterator25_t507968046_il2cpp_TypeInfo_var;
extern const uint32_t XUtil_ExpandArray_m1006964352_MetadataUsageId;
extern String_t* _stringLiteral2078101392;
extern const uint32_t XUtil_ToNode_m2489943695_MetadataUsageId;
extern const uint32_t XUtil_Clone_m964299053_MetadataUsageId;
extern const uint32_t U3CExpandArrayU3Ec__Iterator25_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m634432390_MetadataUsageId;
extern const uint32_t U3CExpandArrayU3Ec__Iterator25_MoveNext_m942794979_MetadataUsageId;
extern const uint32_t U3CExpandArrayU3Ec__Iterator25_Dispose_m648767970_MetadataUsageId;
extern const uint32_t U3CExpandArrayU3Ec__Iterator25_Reset_m2626269592_MetadataUsageId;

struct XAttributeU5BU5D_t805402427;
struct CharU5BU5D_t1328083999;
struct StringU5BU5D_t1642385972;


#ifndef U3CMODULEU3E_T3783534238_H
#define U3CMODULEU3E_T3783534238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534238 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534238_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef SERIALIZATIONINFO_T228987430_H
#define SERIALIZATIONINFO_T228987430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t228987430  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t909839986 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t4252133567 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___serialized_0)); }
	inline Hashtable_t909839986 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t909839986 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t909839986 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___values_1)); }
	inline ArrayList_t4252133567 * get_values_1() const { return ___values_1; }
	inline ArrayList_t4252133567 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t4252133567 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t228987430, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T228987430_H
#ifndef U3CGETPREFIXOFNAMESPACECOREU3EC__ITERATOR23_T3337692544_H
#define U3CGETPREFIXOFNAMESPACECOREU3EC__ITERATOR23_T3337692544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23
struct  U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544  : public RuntimeObject
{
public:
	// System.Xml.Linq.XElement System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<el>__0
	XElement_t553821050 * ___U3CelU3E__0_0;
	// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<$s_68>__1
	RuntimeObject* ___U3CU24s_68U3E__1_1;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<a>__2
	XAttribute_t3858477518 * ___U3CaU3E__2_2;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::ns
	XNamespace_t1613015075 * ___ns_3;
	// System.Int32 System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::$PC
	int32_t ___U24PC_4;
	// System.String System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::$current
	String_t* ___U24current_5;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<$>ns
	XNamespace_t1613015075 * ___U3CU24U3Ens_6;
	// System.Xml.Linq.XElement System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::<>f__this
	XElement_t553821050 * ___U3CU3Ef__this_7;

public:
	inline static int32_t get_offset_of_U3CelU3E__0_0() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544, ___U3CelU3E__0_0)); }
	inline XElement_t553821050 * get_U3CelU3E__0_0() const { return ___U3CelU3E__0_0; }
	inline XElement_t553821050 ** get_address_of_U3CelU3E__0_0() { return &___U3CelU3E__0_0; }
	inline void set_U3CelU3E__0_0(XElement_t553821050 * value)
	{
		___U3CelU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CelU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CU24s_68U3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544, ___U3CU24s_68U3E__1_1)); }
	inline RuntimeObject* get_U3CU24s_68U3E__1_1() const { return ___U3CU24s_68U3E__1_1; }
	inline RuntimeObject** get_address_of_U3CU24s_68U3E__1_1() { return &___U3CU24s_68U3E__1_1; }
	inline void set_U3CU24s_68U3E__1_1(RuntimeObject* value)
	{
		___U3CU24s_68U3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_68U3E__1_1), value);
	}

	inline static int32_t get_offset_of_U3CaU3E__2_2() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544, ___U3CaU3E__2_2)); }
	inline XAttribute_t3858477518 * get_U3CaU3E__2_2() const { return ___U3CaU3E__2_2; }
	inline XAttribute_t3858477518 ** get_address_of_U3CaU3E__2_2() { return &___U3CaU3E__2_2; }
	inline void set_U3CaU3E__2_2(XAttribute_t3858477518 * value)
	{
		___U3CaU3E__2_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaU3E__2_2), value);
	}

	inline static int32_t get_offset_of_ns_3() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544, ___ns_3)); }
	inline XNamespace_t1613015075 * get_ns_3() const { return ___ns_3; }
	inline XNamespace_t1613015075 ** get_address_of_ns_3() { return &___ns_3; }
	inline void set_ns_3(XNamespace_t1613015075 * value)
	{
		___ns_3 = value;
		Il2CppCodeGenWriteBarrier((&___ns_3), value);
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544, ___U24current_5)); }
	inline String_t* get_U24current_5() const { return ___U24current_5; }
	inline String_t** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(String_t* value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Ens_6() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544, ___U3CU24U3Ens_6)); }
	inline XNamespace_t1613015075 * get_U3CU24U3Ens_6() const { return ___U3CU24U3Ens_6; }
	inline XNamespace_t1613015075 ** get_address_of_U3CU24U3Ens_6() { return &___U3CU24U3Ens_6; }
	inline void set_U3CU24U3Ens_6(XNamespace_t1613015075 * value)
	{
		___U3CU24U3Ens_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Ens_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_7() { return static_cast<int32_t>(offsetof(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544, ___U3CU3Ef__this_7)); }
	inline XElement_t553821050 * get_U3CU3Ef__this_7() const { return ___U3CU3Ef__this_7; }
	inline XElement_t553821050 ** get_address_of_U3CU3Ef__this_7() { return &___U3CU3Ef__this_7; }
	inline void set_U3CU3Ef__this_7(XElement_t553821050 * value)
	{
		___U3CU3Ef__this_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETPREFIXOFNAMESPACECOREU3EC__ITERATOR23_T3337692544_H
#ifndef U3CATTRIBUTESU3EC__ITERATOR20_T3474816789_H
#define U3CATTRIBUTESU3EC__ITERATOR20_T3474816789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XElement/<Attributes>c__Iterator20
struct  U3CAttributesU3Ec__Iterator20_t3474816789  : public RuntimeObject
{
public:
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<Attributes>c__Iterator20::<a>__0
	XAttribute_t3858477518 * ___U3CaU3E__0_0;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<Attributes>c__Iterator20::<next>__1
	XAttribute_t3858477518 * ___U3CnextU3E__1_1;
	// System.Int32 System.Xml.Linq.XElement/<Attributes>c__Iterator20::$PC
	int32_t ___U24PC_2;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<Attributes>c__Iterator20::$current
	XAttribute_t3858477518 * ___U24current_3;
	// System.Xml.Linq.XElement System.Xml.Linq.XElement/<Attributes>c__Iterator20::<>f__this
	XElement_t553821050 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CaU3E__0_0() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t3474816789, ___U3CaU3E__0_0)); }
	inline XAttribute_t3858477518 * get_U3CaU3E__0_0() const { return ___U3CaU3E__0_0; }
	inline XAttribute_t3858477518 ** get_address_of_U3CaU3E__0_0() { return &___U3CaU3E__0_0; }
	inline void set_U3CaU3E__0_0(XAttribute_t3858477518 * value)
	{
		___U3CaU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CaU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CnextU3E__1_1() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t3474816789, ___U3CnextU3E__1_1)); }
	inline XAttribute_t3858477518 * get_U3CnextU3E__1_1() const { return ___U3CnextU3E__1_1; }
	inline XAttribute_t3858477518 ** get_address_of_U3CnextU3E__1_1() { return &___U3CnextU3E__1_1; }
	inline void set_U3CnextU3E__1_1(XAttribute_t3858477518 * value)
	{
		___U3CnextU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnextU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t3474816789, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t3474816789, ___U24current_3)); }
	inline XAttribute_t3858477518 * get_U24current_3() const { return ___U24current_3; }
	inline XAttribute_t3858477518 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(XAttribute_t3858477518 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CAttributesU3Ec__Iterator20_t3474816789, ___U3CU3Ef__this_4)); }
	inline XElement_t553821050 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline XElement_t553821050 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(XElement_t553821050 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CATTRIBUTESU3EC__ITERATOR20_T3474816789_H
#ifndef LIST_1_T4217909478_H
#define LIST_1_T4217909478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Xml.Linq.XElement>
struct  List_1_t4217909478  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XElementU5BU5D_t3856207199* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4217909478, ____items_1)); }
	inline XElementU5BU5D_t3856207199* get__items_1() const { return ____items_1; }
	inline XElementU5BU5D_t3856207199** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XElementU5BU5D_t3856207199* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4217909478, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4217909478, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t4217909478_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	XElementU5BU5D_t3856207199* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t4217909478_StaticFields, ___EmptyArray_4)); }
	inline XElementU5BU5D_t3856207199* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline XElementU5BU5D_t3856207199** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(XElementU5BU5D_t3856207199* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4217909478_H
#ifndef XDECLARATION_T3367285402_H
#define XDECLARATION_T3367285402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDeclaration
struct  XDeclaration_t3367285402  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XDeclaration::encoding
	String_t* ___encoding_0;
	// System.String System.Xml.Linq.XDeclaration::standalone
	String_t* ___standalone_1;
	// System.String System.Xml.Linq.XDeclaration::version
	String_t* ___version_2;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(XDeclaration_t3367285402, ___encoding_0)); }
	inline String_t* get_encoding_0() const { return ___encoding_0; }
	inline String_t** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(String_t* value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_0), value);
	}

	inline static int32_t get_offset_of_standalone_1() { return static_cast<int32_t>(offsetof(XDeclaration_t3367285402, ___standalone_1)); }
	inline String_t* get_standalone_1() const { return ___standalone_1; }
	inline String_t** get_address_of_standalone_1() { return &___standalone_1; }
	inline void set_standalone_1(String_t* value)
	{
		___standalone_1 = value;
		Il2CppCodeGenWriteBarrier((&___standalone_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(XDeclaration_t3367285402, ___version_2)); }
	inline String_t* get_version_2() const { return ___version_2; }
	inline String_t** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(String_t* value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDECLARATION_T3367285402_H
#ifndef XMLREADER_T3675626668_H
#define XMLREADER_T3675626668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReader
struct  XmlReader_t3675626668  : public RuntimeObject
{
public:
	// System.Text.StringBuilder System.Xml.XmlReader::readStringBuffer
	StringBuilder_t * ___readStringBuffer_0;
	// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::binary
	XmlReaderBinarySupport_t1548133672 * ___binary_1;
	// System.Xml.XmlReaderSettings System.Xml.XmlReader::settings
	XmlReaderSettings_t1578612233 * ___settings_2;

public:
	inline static int32_t get_offset_of_readStringBuffer_0() { return static_cast<int32_t>(offsetof(XmlReader_t3675626668, ___readStringBuffer_0)); }
	inline StringBuilder_t * get_readStringBuffer_0() const { return ___readStringBuffer_0; }
	inline StringBuilder_t ** get_address_of_readStringBuffer_0() { return &___readStringBuffer_0; }
	inline void set_readStringBuffer_0(StringBuilder_t * value)
	{
		___readStringBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___readStringBuffer_0), value);
	}

	inline static int32_t get_offset_of_binary_1() { return static_cast<int32_t>(offsetof(XmlReader_t3675626668, ___binary_1)); }
	inline XmlReaderBinarySupport_t1548133672 * get_binary_1() const { return ___binary_1; }
	inline XmlReaderBinarySupport_t1548133672 ** get_address_of_binary_1() { return &___binary_1; }
	inline void set_binary_1(XmlReaderBinarySupport_t1548133672 * value)
	{
		___binary_1 = value;
		Il2CppCodeGenWriteBarrier((&___binary_1), value);
	}

	inline static int32_t get_offset_of_settings_2() { return static_cast<int32_t>(offsetof(XmlReader_t3675626668, ___settings_2)); }
	inline XmlReaderSettings_t1578612233 * get_settings_2() const { return ___settings_2; }
	inline XmlReaderSettings_t1578612233 ** get_address_of_settings_2() { return &___settings_2; }
	inline void set_settings_2(XmlReaderSettings_t1578612233 * value)
	{
		___settings_2 = value;
		Il2CppCodeGenWriteBarrier((&___settings_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADER_T3675626668_H
#ifndef U3CNODESU3EC__ITERATOR1A_T1473861320_H
#define U3CNODESU3EC__ITERATOR1A_T1473861320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XContainer/<Nodes>c__Iterator1A
struct  U3CNodesU3Ec__Iterator1A_t1473861320  : public RuntimeObject
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::<n>__0
	XNode_t2707504214 * ___U3CnU3E__0_0;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::<next>__1
	XNode_t2707504214 * ___U3CnextU3E__1_1;
	// System.Int32 System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::$PC
	int32_t ___U24PC_2;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::$current
	XNode_t2707504214 * ___U24current_3;
	// System.Xml.Linq.XContainer System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::<>f__this
	XContainer_t1445911831 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CnU3E__0_0() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t1473861320, ___U3CnU3E__0_0)); }
	inline XNode_t2707504214 * get_U3CnU3E__0_0() const { return ___U3CnU3E__0_0; }
	inline XNode_t2707504214 ** get_address_of_U3CnU3E__0_0() { return &___U3CnU3E__0_0; }
	inline void set_U3CnU3E__0_0(XNode_t2707504214 * value)
	{
		___U3CnU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CnextU3E__1_1() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t1473861320, ___U3CnextU3E__1_1)); }
	inline XNode_t2707504214 * get_U3CnextU3E__1_1() const { return ___U3CnextU3E__1_1; }
	inline XNode_t2707504214 ** get_address_of_U3CnextU3E__1_1() { return &___U3CnextU3E__1_1; }
	inline void set_U3CnextU3E__1_1(XNode_t2707504214 * value)
	{
		___U3CnextU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnextU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t1473861320, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t1473861320, ___U24current_3)); }
	inline XNode_t2707504214 * get_U24current_3() const { return ___U24current_3; }
	inline XNode_t2707504214 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(XNode_t2707504214 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CNodesU3Ec__Iterator1A_t1473861320, ___U3CU3Ef__this_4)); }
	inline XContainer_t1445911831 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline XContainer_t1445911831 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(XContainer_t1445911831 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__this_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CNODESU3EC__ITERATOR1A_T1473861320_H
#ifndef XMLWRITER_T1048088568_H
#define XMLWRITER_T1048088568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriter
struct  XmlWriter_t1048088568  : public RuntimeObject
{
public:
	// System.Xml.XmlWriterSettings System.Xml.XmlWriter::settings
	XmlWriterSettings_t924210539 * ___settings_0;

public:
	inline static int32_t get_offset_of_settings_0() { return static_cast<int32_t>(offsetof(XmlWriter_t1048088568, ___settings_0)); }
	inline XmlWriterSettings_t924210539 * get_settings_0() const { return ___settings_0; }
	inline XmlWriterSettings_t924210539 ** get_address_of_settings_0() { return &___settings_0; }
	inline void set_settings_0(XmlWriterSettings_t924210539 * value)
	{
		___settings_0 = value;
		Il2CppCodeGenWriteBarrier((&___settings_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITER_T1048088568_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t169632028* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t169632028* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t169632028** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t169632028* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef U3CEXPANDARRAYU3EC__ITERATOR25_T507968046_H
#define U3CEXPANDARRAYU3EC__ITERATOR25_T507968046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25
struct  U3CExpandArrayU3Ec__Iterator25_t507968046  : public RuntimeObject
{
public:
	// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::o
	RuntimeObject * ___o_0;
	// System.Xml.Linq.XNode System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<n>__0
	XNode_t2707504214 * ___U3CnU3E__0_1;
	// System.Collections.IEnumerator System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<$s_86>__1
	RuntimeObject* ___U3CU24s_86U3E__1_2;
	// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<obj>__2
	RuntimeObject * ___U3CobjU3E__2_3;
	// System.Collections.IEnumerator System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<$s_87>__3
	RuntimeObject* ___U3CU24s_87U3E__3_4;
	// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<oo>__4
	RuntimeObject * ___U3CooU3E__4_5;
	// System.Int32 System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::$PC
	int32_t ___U24PC_6;
	// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::$current
	RuntimeObject * ___U24current_7;
	// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::<$>o
	RuntimeObject * ___U3CU24U3Eo_8;

public:
	inline static int32_t get_offset_of_o_0() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t507968046, ___o_0)); }
	inline RuntimeObject * get_o_0() const { return ___o_0; }
	inline RuntimeObject ** get_address_of_o_0() { return &___o_0; }
	inline void set_o_0(RuntimeObject * value)
	{
		___o_0 = value;
		Il2CppCodeGenWriteBarrier((&___o_0), value);
	}

	inline static int32_t get_offset_of_U3CnU3E__0_1() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t507968046, ___U3CnU3E__0_1)); }
	inline XNode_t2707504214 * get_U3CnU3E__0_1() const { return ___U3CnU3E__0_1; }
	inline XNode_t2707504214 ** get_address_of_U3CnU3E__0_1() { return &___U3CnU3E__0_1; }
	inline void set_U3CnU3E__0_1(XNode_t2707504214 * value)
	{
		___U3CnU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CnU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CU24s_86U3E__1_2() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t507968046, ___U3CU24s_86U3E__1_2)); }
	inline RuntimeObject* get_U3CU24s_86U3E__1_2() const { return ___U3CU24s_86U3E__1_2; }
	inline RuntimeObject** get_address_of_U3CU24s_86U3E__1_2() { return &___U3CU24s_86U3E__1_2; }
	inline void set_U3CU24s_86U3E__1_2(RuntimeObject* value)
	{
		___U3CU24s_86U3E__1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_86U3E__1_2), value);
	}

	inline static int32_t get_offset_of_U3CobjU3E__2_3() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t507968046, ___U3CobjU3E__2_3)); }
	inline RuntimeObject * get_U3CobjU3E__2_3() const { return ___U3CobjU3E__2_3; }
	inline RuntimeObject ** get_address_of_U3CobjU3E__2_3() { return &___U3CobjU3E__2_3; }
	inline void set_U3CobjU3E__2_3(RuntimeObject * value)
	{
		___U3CobjU3E__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CobjU3E__2_3), value);
	}

	inline static int32_t get_offset_of_U3CU24s_87U3E__3_4() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t507968046, ___U3CU24s_87U3E__3_4)); }
	inline RuntimeObject* get_U3CU24s_87U3E__3_4() const { return ___U3CU24s_87U3E__3_4; }
	inline RuntimeObject** get_address_of_U3CU24s_87U3E__3_4() { return &___U3CU24s_87U3E__3_4; }
	inline void set_U3CU24s_87U3E__3_4(RuntimeObject* value)
	{
		___U3CU24s_87U3E__3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24s_87U3E__3_4), value);
	}

	inline static int32_t get_offset_of_U3CooU3E__4_5() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t507968046, ___U3CooU3E__4_5)); }
	inline RuntimeObject * get_U3CooU3E__4_5() const { return ___U3CooU3E__4_5; }
	inline RuntimeObject ** get_address_of_U3CooU3E__4_5() { return &___U3CooU3E__4_5; }
	inline void set_U3CooU3E__4_5(RuntimeObject * value)
	{
		___U3CooU3E__4_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CooU3E__4_5), value);
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t507968046, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t507968046, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U3CU24U3Eo_8() { return static_cast<int32_t>(offsetof(U3CExpandArrayU3Ec__Iterator25_t507968046, ___U3CU24U3Eo_8)); }
	inline RuntimeObject * get_U3CU24U3Eo_8() const { return ___U3CU24U3Eo_8; }
	inline RuntimeObject ** get_address_of_U3CU24U3Eo_8() { return &___U3CU24U3Eo_8; }
	inline void set_U3CU24U3Eo_8(RuntimeObject * value)
	{
		___U3CU24U3Eo_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU24U3Eo_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CEXPANDARRAYU3EC__ITERATOR25_T507968046_H
#ifndef XUTIL_T3957506230_H
#define XUTIL_T3957506230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XUtil
struct  XUtil_t3957506230  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XUTIL_T3957506230_H
#ifndef TEXTWRITER_T4027217640_H
#define TEXTWRITER_T4027217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t4027217640  : public RuntimeObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t1328083999* ___CoreNewLine_0;
	// System.IFormatProvider System.IO.TextWriter::internalFormatProvider
	RuntimeObject* ___internalFormatProvider_1;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t4027217640, ___CoreNewLine_0)); }
	inline CharU5BU5D_t1328083999* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t1328083999** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t1328083999* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier((&___CoreNewLine_0), value);
	}

	inline static int32_t get_offset_of_internalFormatProvider_1() { return static_cast<int32_t>(offsetof(TextWriter_t4027217640, ___internalFormatProvider_1)); }
	inline RuntimeObject* get_internalFormatProvider_1() const { return ___internalFormatProvider_1; }
	inline RuntimeObject** get_address_of_internalFormatProvider_1() { return &___internalFormatProvider_1; }
	inline void set_internalFormatProvider_1(RuntimeObject* value)
	{
		___internalFormatProvider_1 = value;
		Il2CppCodeGenWriteBarrier((&___internalFormatProvider_1), value);
	}
};

struct TextWriter_t4027217640_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4027217640 * ___Null_2;

public:
	inline static int32_t get_offset_of_Null_2() { return static_cast<int32_t>(offsetof(TextWriter_t4027217640_StaticFields, ___Null_2)); }
	inline TextWriter_t4027217640 * get_Null_2() const { return ___Null_2; }
	inline TextWriter_t4027217640 ** get_address_of_Null_2() { return &___Null_2; }
	inline void set_Null_2(TextWriter_t4027217640 * value)
	{
		___Null_2 = value;
		Il2CppCodeGenWriteBarrier((&___Null_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITER_T4027217640_H
#ifndef XNODEDOCUMENTORDERCOMPARER_T1208684534_H
#define XNODEDOCUMENTORDERCOMPARER_T1208684534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNodeDocumentOrderComparer
struct  XNodeDocumentOrderComparer_t1208684534  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNODEDOCUMENTORDERCOMPARER_T1208684534_H
#ifndef XNODEEQUALITYCOMPARER_T3116038621_H
#define XNODEEQUALITYCOMPARER_T3116038621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNodeEqualityComparer
struct  XNodeEqualityComparer_t3116038621  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNODEEQUALITYCOMPARER_T3116038621_H
#ifndef DICTIONARY_2_T2699969625_H
#define DICTIONARY_2_T2699969625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XName>
struct  Dictionary_2_t2699969625  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t3030399641* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t62501539* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1642385972* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	XNameU5BU5D_t1208840282* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t228987430 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2699969625, ___table_4)); }
	inline Int32U5BU5D_t3030399641* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t3030399641* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2699969625, ___linkSlots_5)); }
	inline LinkU5BU5D_t62501539* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t62501539** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t62501539* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2699969625, ___keySlots_6)); }
	inline StringU5BU5D_t1642385972* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1642385972** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1642385972* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2699969625, ___valueSlots_7)); }
	inline XNameU5BU5D_t1208840282* get_valueSlots_7() const { return ___valueSlots_7; }
	inline XNameU5BU5D_t1208840282** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(XNameU5BU5D_t1208840282* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2699969625, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2699969625, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2699969625, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2699969625, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2699969625, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2699969625, ___serialization_info_13)); }
	inline SerializationInfo_t228987430 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t228987430 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t228987430 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2699969625, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2699969625_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t332679926 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2699969625_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t332679926 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t332679926 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t332679926 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2699969625_H
#ifndef DICTIONARY_2_T3527794337_H
#define DICTIONARY_2_T3527794337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XNamespace>
struct  Dictionary_2_t3527794337  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t3030399641* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t62501539* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1642385972* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	XNamespaceU5BU5D_t2012216306* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t228987430 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3527794337, ___table_4)); }
	inline Int32U5BU5D_t3030399641* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t3030399641** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t3030399641* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3527794337, ___linkSlots_5)); }
	inline LinkU5BU5D_t62501539* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t62501539** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t62501539* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3527794337, ___keySlots_6)); }
	inline StringU5BU5D_t1642385972* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1642385972** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1642385972* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3527794337, ___valueSlots_7)); }
	inline XNamespaceU5BU5D_t2012216306* get_valueSlots_7() const { return ___valueSlots_7; }
	inline XNamespaceU5BU5D_t2012216306** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(XNamespaceU5BU5D_t2012216306* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3527794337, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3527794337, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3527794337, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3527794337, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3527794337, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3527794337, ___serialization_info_13)); }
	inline SerializationInfo_t228987430 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t228987430 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t228987430 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3527794337, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3527794337_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t1136055950 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3527794337_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t1136055950 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t1136055950 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t1136055950 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3527794337_H
#ifndef XOBJECT_T3550811009_H
#define XOBJECT_T3550811009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XObject
struct  XObject_t3550811009  : public RuntimeObject
{
public:
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::owner
	XContainer_t1445911831 * ___owner_0;
	// System.String System.Xml.Linq.XObject::baseuri
	String_t* ___baseuri_1;
	// System.Int32 System.Xml.Linq.XObject::line
	int32_t ___line_2;
	// System.Int32 System.Xml.Linq.XObject::column
	int32_t ___column_3;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(XObject_t3550811009, ___owner_0)); }
	inline XContainer_t1445911831 * get_owner_0() const { return ___owner_0; }
	inline XContainer_t1445911831 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(XContainer_t1445911831 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((&___owner_0), value);
	}

	inline static int32_t get_offset_of_baseuri_1() { return static_cast<int32_t>(offsetof(XObject_t3550811009, ___baseuri_1)); }
	inline String_t* get_baseuri_1() const { return ___baseuri_1; }
	inline String_t** get_address_of_baseuri_1() { return &___baseuri_1; }
	inline void set_baseuri_1(String_t* value)
	{
		___baseuri_1 = value;
		Il2CppCodeGenWriteBarrier((&___baseuri_1), value);
	}

	inline static int32_t get_offset_of_line_2() { return static_cast<int32_t>(offsetof(XObject_t3550811009, ___line_2)); }
	inline int32_t get_line_2() const { return ___line_2; }
	inline int32_t* get_address_of_line_2() { return &___line_2; }
	inline void set_line_2(int32_t value)
	{
		___line_2 = value;
	}

	inline static int32_t get_offset_of_column_3() { return static_cast<int32_t>(offsetof(XObject_t3550811009, ___column_3)); }
	inline int32_t get_column_3() const { return ___column_3; }
	inline int32_t* get_address_of_column_3() { return &___column_3; }
	inline void set_column_3(int32_t value)
	{
		___column_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XOBJECT_T3550811009_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1328083999* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1328083999* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1328083999** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1328083999* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef XNAMESPACE_T1613015075_H
#define XNAMESPACE_T1613015075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNamespace
struct  XNamespace_t1613015075  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XNamespace::uri
	String_t* ___uri_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XName> System.Xml.Linq.XNamespace::table
	Dictionary_2_t2699969625 * ___table_5;

public:
	inline static int32_t get_offset_of_uri_4() { return static_cast<int32_t>(offsetof(XNamespace_t1613015075, ___uri_4)); }
	inline String_t* get_uri_4() const { return ___uri_4; }
	inline String_t** get_address_of_uri_4() { return &___uri_4; }
	inline void set_uri_4(String_t* value)
	{
		___uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___uri_4), value);
	}

	inline static int32_t get_offset_of_table_5() { return static_cast<int32_t>(offsetof(XNamespace_t1613015075, ___table_5)); }
	inline Dictionary_2_t2699969625 * get_table_5() const { return ___table_5; }
	inline Dictionary_2_t2699969625 ** get_address_of_table_5() { return &___table_5; }
	inline void set_table_5(Dictionary_2_t2699969625 * value)
	{
		___table_5 = value;
		Il2CppCodeGenWriteBarrier((&___table_5), value);
	}
};

struct XNamespace_t1613015075_StaticFields
{
public:
	// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::blank
	XNamespace_t1613015075 * ___blank_0;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::xml
	XNamespace_t1613015075 * ___xml_1;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::xmlns
	XNamespace_t1613015075 * ___xmlns_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XNamespace> System.Xml.Linq.XNamespace::nstable
	Dictionary_2_t3527794337 * ___nstable_3;

public:
	inline static int32_t get_offset_of_blank_0() { return static_cast<int32_t>(offsetof(XNamespace_t1613015075_StaticFields, ___blank_0)); }
	inline XNamespace_t1613015075 * get_blank_0() const { return ___blank_0; }
	inline XNamespace_t1613015075 ** get_address_of_blank_0() { return &___blank_0; }
	inline void set_blank_0(XNamespace_t1613015075 * value)
	{
		___blank_0 = value;
		Il2CppCodeGenWriteBarrier((&___blank_0), value);
	}

	inline static int32_t get_offset_of_xml_1() { return static_cast<int32_t>(offsetof(XNamespace_t1613015075_StaticFields, ___xml_1)); }
	inline XNamespace_t1613015075 * get_xml_1() const { return ___xml_1; }
	inline XNamespace_t1613015075 ** get_address_of_xml_1() { return &___xml_1; }
	inline void set_xml_1(XNamespace_t1613015075 * value)
	{
		___xml_1 = value;
		Il2CppCodeGenWriteBarrier((&___xml_1), value);
	}

	inline static int32_t get_offset_of_xmlns_2() { return static_cast<int32_t>(offsetof(XNamespace_t1613015075_StaticFields, ___xmlns_2)); }
	inline XNamespace_t1613015075 * get_xmlns_2() const { return ___xmlns_2; }
	inline XNamespace_t1613015075 ** get_address_of_xmlns_2() { return &___xmlns_2; }
	inline void set_xmlns_2(XNamespace_t1613015075 * value)
	{
		___xmlns_2 = value;
		Il2CppCodeGenWriteBarrier((&___xmlns_2), value);
	}

	inline static int32_t get_offset_of_nstable_3() { return static_cast<int32_t>(offsetof(XNamespace_t1613015075_StaticFields, ___nstable_3)); }
	inline Dictionary_2_t3527794337 * get_nstable_3() const { return ___nstable_3; }
	inline Dictionary_2_t3527794337 ** get_address_of_nstable_3() { return &___nstable_3; }
	inline void set_nstable_3(Dictionary_2_t3527794337 * value)
	{
		___nstable_3 = value;
		Il2CppCodeGenWriteBarrier((&___nstable_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNAMESPACE_T1613015075_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef XNAME_T785190363_H
#define XNAME_T785190363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XName
struct  XName_t785190363  : public RuntimeObject
{
public:
	// System.String System.Xml.Linq.XName::local
	String_t* ___local_0;
	// System.Xml.Linq.XNamespace System.Xml.Linq.XName::ns
	XNamespace_t1613015075 * ___ns_1;

public:
	inline static int32_t get_offset_of_local_0() { return static_cast<int32_t>(offsetof(XName_t785190363, ___local_0)); }
	inline String_t* get_local_0() const { return ___local_0; }
	inline String_t** get_address_of_local_0() { return &___local_0; }
	inline void set_local_0(String_t* value)
	{
		___local_0 = value;
		Il2CppCodeGenWriteBarrier((&___local_0), value);
	}

	inline static int32_t get_offset_of_ns_1() { return static_cast<int32_t>(offsetof(XName_t785190363, ___ns_1)); }
	inline XNamespace_t1613015075 * get_ns_1() const { return ___ns_1; }
	inline XNamespace_t1613015075 ** get_address_of_ns_1() { return &___ns_1; }
	inline void set_ns_1(XNamespace_t1613015075 * value)
	{
		___ns_1 = value;
		Il2CppCodeGenWriteBarrier((&___ns_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNAME_T785190363_H
#ifndef XATTRIBUTE_T3858477518_H
#define XATTRIBUTE_T3858477518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XAttribute
struct  XAttribute_t3858477518  : public XObject_t3550811009
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XAttribute::name
	XName_t785190363 * ___name_5;
	// System.String System.Xml.Linq.XAttribute::value
	String_t* ___value_6;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XAttribute::next
	XAttribute_t3858477518 * ___next_7;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XAttribute::previous
	XAttribute_t3858477518 * ___previous_8;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(XAttribute_t3858477518, ___name_5)); }
	inline XName_t785190363 * get_name_5() const { return ___name_5; }
	inline XName_t785190363 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XName_t785190363 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((&___name_5), value);
	}

	inline static int32_t get_offset_of_value_6() { return static_cast<int32_t>(offsetof(XAttribute_t3858477518, ___value_6)); }
	inline String_t* get_value_6() const { return ___value_6; }
	inline String_t** get_address_of_value_6() { return &___value_6; }
	inline void set_value_6(String_t* value)
	{
		___value_6 = value;
		Il2CppCodeGenWriteBarrier((&___value_6), value);
	}

	inline static int32_t get_offset_of_next_7() { return static_cast<int32_t>(offsetof(XAttribute_t3858477518, ___next_7)); }
	inline XAttribute_t3858477518 * get_next_7() const { return ___next_7; }
	inline XAttribute_t3858477518 ** get_address_of_next_7() { return &___next_7; }
	inline void set_next_7(XAttribute_t3858477518 * value)
	{
		___next_7 = value;
		Il2CppCodeGenWriteBarrier((&___next_7), value);
	}

	inline static int32_t get_offset_of_previous_8() { return static_cast<int32_t>(offsetof(XAttribute_t3858477518, ___previous_8)); }
	inline XAttribute_t3858477518 * get_previous_8() const { return ___previous_8; }
	inline XAttribute_t3858477518 ** get_address_of_previous_8() { return &___previous_8; }
	inline void set_previous_8(XAttribute_t3858477518 * value)
	{
		___previous_8 = value;
		Il2CppCodeGenWriteBarrier((&___previous_8), value);
	}
};

struct XAttribute_t3858477518_StaticFields
{
public:
	// System.Xml.Linq.XAttribute[] System.Xml.Linq.XAttribute::empty_array
	XAttributeU5BU5D_t805402427* ___empty_array_4;
	// System.Char[] System.Xml.Linq.XAttribute::escapeChars
	CharU5BU5D_t1328083999* ___escapeChars_9;

public:
	inline static int32_t get_offset_of_empty_array_4() { return static_cast<int32_t>(offsetof(XAttribute_t3858477518_StaticFields, ___empty_array_4)); }
	inline XAttributeU5BU5D_t805402427* get_empty_array_4() const { return ___empty_array_4; }
	inline XAttributeU5BU5D_t805402427** get_address_of_empty_array_4() { return &___empty_array_4; }
	inline void set_empty_array_4(XAttributeU5BU5D_t805402427* value)
	{
		___empty_array_4 = value;
		Il2CppCodeGenWriteBarrier((&___empty_array_4), value);
	}

	inline static int32_t get_offset_of_escapeChars_9() { return static_cast<int32_t>(offsetof(XAttribute_t3858477518_StaticFields, ___escapeChars_9)); }
	inline CharU5BU5D_t1328083999* get_escapeChars_9() const { return ___escapeChars_9; }
	inline CharU5BU5D_t1328083999** get_address_of_escapeChars_9() { return &___escapeChars_9; }
	inline void set_escapeChars_9(CharU5BU5D_t1328083999* value)
	{
		___escapeChars_9 = value;
		Il2CppCodeGenWriteBarrier((&___escapeChars_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XATTRIBUTE_T3858477518_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2510243513 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2510243513 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2510243513 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2510243513 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2510243513 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2510243513 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2071877448_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
#ifndef STRINGWRITER_T4139609088_H
#define STRINGWRITER_T4139609088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringWriter
struct  StringWriter_t4139609088  : public TextWriter_t4027217640
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::internalString
	StringBuilder_t * ___internalString_3;
	// System.Boolean System.IO.StringWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_internalString_3() { return static_cast<int32_t>(offsetof(StringWriter_t4139609088, ___internalString_3)); }
	inline StringBuilder_t * get_internalString_3() const { return ___internalString_3; }
	inline StringBuilder_t ** get_address_of_internalString_3() { return &___internalString_3; }
	inline void set_internalString_3(StringBuilder_t * value)
	{
		___internalString_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalString_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(StringWriter_t4139609088, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGWRITER_T4139609088_H
#ifndef SYSTEMEXCEPTION_T3877406272_H
#define SYSTEMEXCEPTION_T3877406272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3877406272  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3877406272_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef U24ARRAYTYPEU2416_T1703410337_H
#define U24ARRAYTYPEU2416_T1703410337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t1703410337 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t1703410337__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T1703410337_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2076509932_H
#ifndef DOUBLE_T4078015681_H
#define DOUBLE_T4078015681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t4078015681 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t4078015681, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T4078015681_H
#ifndef TIMESPAN_T3430258949_H
#define TIMESPAN_T3430258949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3430258949 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3430258949_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3430258949  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3430258949  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3430258949  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3430258949  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3430258949 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3430258949  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3430258949  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3430258949 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3430258949  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3430258949  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3430258949 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3430258949  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3430258949_H
#ifndef INT64_T909078037_H
#define INT64_T909078037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t909078037 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t909078037, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T909078037_H
#ifndef CHAR_T3454481338_H
#define CHAR_T3454481338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3454481338 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3454481338, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3454481338_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3454481338_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3454481338_H
#ifndef XNODE_T2707504214_H
#define XNODE_T2707504214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNode
struct  XNode_t2707504214  : public XObject_t3550811009
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::previous
	XNode_t2707504214 * ___previous_6;
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t2707504214 * ___next_7;

public:
	inline static int32_t get_offset_of_previous_6() { return static_cast<int32_t>(offsetof(XNode_t2707504214, ___previous_6)); }
	inline XNode_t2707504214 * get_previous_6() const { return ___previous_6; }
	inline XNode_t2707504214 ** get_address_of_previous_6() { return &___previous_6; }
	inline void set_previous_6(XNode_t2707504214 * value)
	{
		___previous_6 = value;
		Il2CppCodeGenWriteBarrier((&___previous_6), value);
	}

	inline static int32_t get_offset_of_next_7() { return static_cast<int32_t>(offsetof(XNode_t2707504214, ___next_7)); }
	inline XNode_t2707504214 * get_next_7() const { return ___next_7; }
	inline XNode_t2707504214 ** get_address_of_next_7() { return &___next_7; }
	inline void set_next_7(XNode_t2707504214 * value)
	{
		___next_7 = value;
		Il2CppCodeGenWriteBarrier((&___next_7), value);
	}
};

struct XNode_t2707504214_StaticFields
{
public:
	// System.Xml.Linq.XNodeEqualityComparer System.Xml.Linq.XNode::eq_comparer
	XNodeEqualityComparer_t3116038621 * ___eq_comparer_4;
	// System.Xml.Linq.XNodeDocumentOrderComparer System.Xml.Linq.XNode::order_comparer
	XNodeDocumentOrderComparer_t1208684534 * ___order_comparer_5;

public:
	inline static int32_t get_offset_of_eq_comparer_4() { return static_cast<int32_t>(offsetof(XNode_t2707504214_StaticFields, ___eq_comparer_4)); }
	inline XNodeEqualityComparer_t3116038621 * get_eq_comparer_4() const { return ___eq_comparer_4; }
	inline XNodeEqualityComparer_t3116038621 ** get_address_of_eq_comparer_4() { return &___eq_comparer_4; }
	inline void set_eq_comparer_4(XNodeEqualityComparer_t3116038621 * value)
	{
		___eq_comparer_4 = value;
		Il2CppCodeGenWriteBarrier((&___eq_comparer_4), value);
	}

	inline static int32_t get_offset_of_order_comparer_5() { return static_cast<int32_t>(offsetof(XNode_t2707504214_StaticFields, ___order_comparer_5)); }
	inline XNodeDocumentOrderComparer_t1208684534 * get_order_comparer_5() const { return ___order_comparer_5; }
	inline XNodeDocumentOrderComparer_t1208684534 ** get_address_of_order_comparer_5() { return &___order_comparer_5; }
	inline void set_order_comparer_5(XNodeDocumentOrderComparer_t1208684534 * value)
	{
		___order_comparer_5 = value;
		Il2CppCodeGenWriteBarrier((&___order_comparer_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XNODE_T2707504214_H
#ifndef UINT32_T2149682021_H
#define UINT32_T2149682021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2149682021 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2149682021, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2149682021_H
#ifndef RUNTIMEFIELDHANDLE_T2331729674_H
#define RUNTIMEFIELDHANDLE_T2331729674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t2331729674 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2331729674, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T2331729674_H
#ifndef ARGUMENTEXCEPTION_T3259014390_H
#define ARGUMENTEXCEPTION_T3259014390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t3259014390  : public SystemException_t3877406272
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t3259014390, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T3259014390_H
#ifndef XMLSCHEMAFORM_T1143227640_H
#define XMLSCHEMAFORM_T1143227640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaForm
struct  XmlSchemaForm_t1143227640 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaForm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSchemaForm_t1143227640, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAFORM_T1143227640_H
#ifndef XMLSCHEMADERIVATIONMETHOD_T3165007540_H
#define XMLSCHEMADERIVATIONMETHOD_T3165007540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaDerivationMethod
struct  XmlSchemaDerivationMethod_t3165007540 
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaDerivationMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlSchemaDerivationMethod_t3165007540, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMADERIVATIONMETHOD_T3165007540_H
#ifndef XMLDATETIMESERIALIZATIONMODE_T137774893_H
#define XMLDATETIMESERIALIZATIONMODE_T137774893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDateTimeSerializationMode
struct  XmlDateTimeSerializationMode_t137774893 
{
public:
	// System.Int32 System.Xml.XmlDateTimeSerializationMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlDateTimeSerializationMode_t137774893, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDATETIMESERIALIZATIONMODE_T137774893_H
#ifndef TYPECODE_T2536926201_H
#define TYPECODE_T2536926201_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2536926201 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t2536926201, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECODE_T2536926201_H
#ifndef XMLSCHEMAOBJECT_T2050913741_H
#define XMLSCHEMAOBJECT_T2050913741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchemaObject
struct  XmlSchemaObject_t2050913741  : public RuntimeObject
{
public:
	// System.Int32 System.Xml.Schema.XmlSchemaObject::lineNumber
	int32_t ___lineNumber_0;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::linePosition
	int32_t ___linePosition_1;
	// System.String System.Xml.Schema.XmlSchemaObject::sourceUri
	String_t* ___sourceUri_2;
	// System.Xml.Serialization.XmlSerializerNamespaces System.Xml.Schema.XmlSchemaObject::namespaces
	XmlSerializerNamespaces_t3063656491 * ___namespaces_3;
	// System.Collections.ArrayList System.Xml.Schema.XmlSchemaObject::unhandledAttributeList
	ArrayList_t4252133567 * ___unhandledAttributeList_4;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isCompiled
	bool ___isCompiled_5;
	// System.Int32 System.Xml.Schema.XmlSchemaObject::errorCount
	int32_t ___errorCount_6;
	// System.Guid System.Xml.Schema.XmlSchemaObject::CompilationId
	Guid_t  ___CompilationId_7;
	// System.Guid System.Xml.Schema.XmlSchemaObject::ValidationId
	Guid_t  ___ValidationId_8;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isRedefineChild
	bool ___isRedefineChild_9;
	// System.Boolean System.Xml.Schema.XmlSchemaObject::isRedefinedComponent
	bool ___isRedefinedComponent_10;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::redefinedObject
	XmlSchemaObject_t2050913741 * ___redefinedObject_11;
	// System.Xml.Schema.XmlSchemaObject System.Xml.Schema.XmlSchemaObject::parent
	XmlSchemaObject_t2050913741 * ___parent_12;

public:
	inline static int32_t get_offset_of_lineNumber_0() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___lineNumber_0)); }
	inline int32_t get_lineNumber_0() const { return ___lineNumber_0; }
	inline int32_t* get_address_of_lineNumber_0() { return &___lineNumber_0; }
	inline void set_lineNumber_0(int32_t value)
	{
		___lineNumber_0 = value;
	}

	inline static int32_t get_offset_of_linePosition_1() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___linePosition_1)); }
	inline int32_t get_linePosition_1() const { return ___linePosition_1; }
	inline int32_t* get_address_of_linePosition_1() { return &___linePosition_1; }
	inline void set_linePosition_1(int32_t value)
	{
		___linePosition_1 = value;
	}

	inline static int32_t get_offset_of_sourceUri_2() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___sourceUri_2)); }
	inline String_t* get_sourceUri_2() const { return ___sourceUri_2; }
	inline String_t** get_address_of_sourceUri_2() { return &___sourceUri_2; }
	inline void set_sourceUri_2(String_t* value)
	{
		___sourceUri_2 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_2), value);
	}

	inline static int32_t get_offset_of_namespaces_3() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___namespaces_3)); }
	inline XmlSerializerNamespaces_t3063656491 * get_namespaces_3() const { return ___namespaces_3; }
	inline XmlSerializerNamespaces_t3063656491 ** get_address_of_namespaces_3() { return &___namespaces_3; }
	inline void set_namespaces_3(XmlSerializerNamespaces_t3063656491 * value)
	{
		___namespaces_3 = value;
		Il2CppCodeGenWriteBarrier((&___namespaces_3), value);
	}

	inline static int32_t get_offset_of_unhandledAttributeList_4() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___unhandledAttributeList_4)); }
	inline ArrayList_t4252133567 * get_unhandledAttributeList_4() const { return ___unhandledAttributeList_4; }
	inline ArrayList_t4252133567 ** get_address_of_unhandledAttributeList_4() { return &___unhandledAttributeList_4; }
	inline void set_unhandledAttributeList_4(ArrayList_t4252133567 * value)
	{
		___unhandledAttributeList_4 = value;
		Il2CppCodeGenWriteBarrier((&___unhandledAttributeList_4), value);
	}

	inline static int32_t get_offset_of_isCompiled_5() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___isCompiled_5)); }
	inline bool get_isCompiled_5() const { return ___isCompiled_5; }
	inline bool* get_address_of_isCompiled_5() { return &___isCompiled_5; }
	inline void set_isCompiled_5(bool value)
	{
		___isCompiled_5 = value;
	}

	inline static int32_t get_offset_of_errorCount_6() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___errorCount_6)); }
	inline int32_t get_errorCount_6() const { return ___errorCount_6; }
	inline int32_t* get_address_of_errorCount_6() { return &___errorCount_6; }
	inline void set_errorCount_6(int32_t value)
	{
		___errorCount_6 = value;
	}

	inline static int32_t get_offset_of_CompilationId_7() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___CompilationId_7)); }
	inline Guid_t  get_CompilationId_7() const { return ___CompilationId_7; }
	inline Guid_t * get_address_of_CompilationId_7() { return &___CompilationId_7; }
	inline void set_CompilationId_7(Guid_t  value)
	{
		___CompilationId_7 = value;
	}

	inline static int32_t get_offset_of_ValidationId_8() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___ValidationId_8)); }
	inline Guid_t  get_ValidationId_8() const { return ___ValidationId_8; }
	inline Guid_t * get_address_of_ValidationId_8() { return &___ValidationId_8; }
	inline void set_ValidationId_8(Guid_t  value)
	{
		___ValidationId_8 = value;
	}

	inline static int32_t get_offset_of_isRedefineChild_9() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___isRedefineChild_9)); }
	inline bool get_isRedefineChild_9() const { return ___isRedefineChild_9; }
	inline bool* get_address_of_isRedefineChild_9() { return &___isRedefineChild_9; }
	inline void set_isRedefineChild_9(bool value)
	{
		___isRedefineChild_9 = value;
	}

	inline static int32_t get_offset_of_isRedefinedComponent_10() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___isRedefinedComponent_10)); }
	inline bool get_isRedefinedComponent_10() const { return ___isRedefinedComponent_10; }
	inline bool* get_address_of_isRedefinedComponent_10() { return &___isRedefinedComponent_10; }
	inline void set_isRedefinedComponent_10(bool value)
	{
		___isRedefinedComponent_10 = value;
	}

	inline static int32_t get_offset_of_redefinedObject_11() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___redefinedObject_11)); }
	inline XmlSchemaObject_t2050913741 * get_redefinedObject_11() const { return ___redefinedObject_11; }
	inline XmlSchemaObject_t2050913741 ** get_address_of_redefinedObject_11() { return &___redefinedObject_11; }
	inline void set_redefinedObject_11(XmlSchemaObject_t2050913741 * value)
	{
		___redefinedObject_11 = value;
		Il2CppCodeGenWriteBarrier((&___redefinedObject_11), value);
	}

	inline static int32_t get_offset_of_parent_12() { return static_cast<int32_t>(offsetof(XmlSchemaObject_t2050913741, ___parent_12)); }
	inline XmlSchemaObject_t2050913741 * get_parent_12() const { return ___parent_12; }
	inline XmlSchemaObject_t2050913741 ** get_address_of_parent_12() { return &___parent_12; }
	inline void set_parent_12(XmlSchemaObject_t2050913741 * value)
	{
		___parent_12 = value;
		Il2CppCodeGenWriteBarrier((&___parent_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMAOBJECT_T2050913741_H
#ifndef RUNTIMETYPEHANDLE_T2330101084_H
#define RUNTIMETYPEHANDLE_T2330101084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t2330101084 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2330101084, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T2330101084_H
#ifndef BINDINGFLAGS_T1082350898_H
#define BINDINGFLAGS_T1082350898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t1082350898 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t1082350898, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T1082350898_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305143_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1486305143  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1486305143_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2416_t1703410337  ___U24U24fieldU2D0_0;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1486305143_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2416_t1703410337  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2416_t1703410337 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2416_t1703410337  value)
	{
		___U24U24fieldU2D0_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1486305143_H
#ifndef XTEXT_T1860529549_H
#define XTEXT_T1860529549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XText
struct  XText_t1860529549  : public XNode_t2707504214
{
public:
	// System.String System.Xml.Linq.XText::value
	String_t* ___value_8;

public:
	inline static int32_t get_offset_of_value_8() { return static_cast<int32_t>(offsetof(XText_t1860529549, ___value_8)); }
	inline String_t* get_value_8() const { return ___value_8; }
	inline String_t** get_address_of_value_8() { return &___value_8; }
	inline void set_value_8(String_t* value)
	{
		___value_8 = value;
		Il2CppCodeGenWriteBarrier((&___value_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XTEXT_T1860529549_H
#ifndef XCOMMENT_T1618005895_H
#define XCOMMENT_T1618005895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XComment
struct  XComment_t1618005895  : public XNode_t2707504214
{
public:
	// System.String System.Xml.Linq.XComment::value
	String_t* ___value_8;

public:
	inline static int32_t get_offset_of_value_8() { return static_cast<int32_t>(offsetof(XComment_t1618005895, ___value_8)); }
	inline String_t* get_value_8() const { return ___value_8; }
	inline String_t** get_address_of_value_8() { return &___value_8; }
	inline void set_value_8(String_t* value)
	{
		___value_8 = value;
		Il2CppCodeGenWriteBarrier((&___value_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XCOMMENT_T1618005895_H
#ifndef LOADOPTIONS_T53198144_H
#define LOADOPTIONS_T53198144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.LoadOptions
struct  LoadOptions_t53198144 
{
public:
	// System.Int32 System.Xml.Linq.LoadOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadOptions_t53198144, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADOPTIONS_T53198144_H
#ifndef SAVEOPTIONS_T2961005337_H
#define SAVEOPTIONS_T2961005337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.SaveOptions
struct  SaveOptions_t2961005337 
{
public:
	// System.Int32 System.Xml.Linq.SaveOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SaveOptions_t2961005337, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAVEOPTIONS_T2961005337_H
#ifndef NEWLINEHANDLING_T1737195169_H
#define NEWLINEHANDLING_T1737195169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NewLineHandling
struct  NewLineHandling_t1737195169 
{
public:
	// System.Int32 System.Xml.NewLineHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NewLineHandling_t1737195169, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEWLINEHANDLING_T1737195169_H
#ifndef XDOCUMENTTYPE_T738990919_H
#define XDOCUMENTTYPE_T738990919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDocumentType
struct  XDocumentType_t738990919  : public XNode_t2707504214
{
public:
	// System.String System.Xml.Linq.XDocumentType::name
	String_t* ___name_8;
	// System.String System.Xml.Linq.XDocumentType::pubid
	String_t* ___pubid_9;
	// System.String System.Xml.Linq.XDocumentType::sysid
	String_t* ___sysid_10;
	// System.String System.Xml.Linq.XDocumentType::intSubset
	String_t* ___intSubset_11;

public:
	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(XDocumentType_t738990919, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((&___name_8), value);
	}

	inline static int32_t get_offset_of_pubid_9() { return static_cast<int32_t>(offsetof(XDocumentType_t738990919, ___pubid_9)); }
	inline String_t* get_pubid_9() const { return ___pubid_9; }
	inline String_t** get_address_of_pubid_9() { return &___pubid_9; }
	inline void set_pubid_9(String_t* value)
	{
		___pubid_9 = value;
		Il2CppCodeGenWriteBarrier((&___pubid_9), value);
	}

	inline static int32_t get_offset_of_sysid_10() { return static_cast<int32_t>(offsetof(XDocumentType_t738990919, ___sysid_10)); }
	inline String_t* get_sysid_10() const { return ___sysid_10; }
	inline String_t** get_address_of_sysid_10() { return &___sysid_10; }
	inline void set_sysid_10(String_t* value)
	{
		___sysid_10 = value;
		Il2CppCodeGenWriteBarrier((&___sysid_10), value);
	}

	inline static int32_t get_offset_of_intSubset_11() { return static_cast<int32_t>(offsetof(XDocumentType_t738990919, ___intSubset_11)); }
	inline String_t* get_intSubset_11() const { return ___intSubset_11; }
	inline String_t** get_address_of_intSubset_11() { return &___intSubset_11; }
	inline void set_intSubset_11(String_t* value)
	{
		___intSubset_11 = value;
		Il2CppCodeGenWriteBarrier((&___intSubset_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDOCUMENTTYPE_T738990919_H
#ifndef INVALIDOPERATIONEXCEPTION_T721527559_H
#define INVALIDOPERATIONEXCEPTION_T721527559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t721527559  : public SystemException_t3877406272
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T721527559_H
#ifndef XMLOUTPUTMETHOD_T2267235953_H
#define XMLOUTPUTMETHOD_T2267235953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlOutputMethod
struct  XmlOutputMethod_t2267235953 
{
public:
	// System.Int32 System.Xml.XmlOutputMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlOutputMethod_t2267235953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLOUTPUTMETHOD_T2267235953_H
#ifndef NAMESPACEHANDLING_T1452270444_H
#define NAMESPACEHANDLING_T1452270444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.NamespaceHandling
struct  NamespaceHandling_t1452270444 
{
public:
	// System.Int32 System.Xml.NamespaceHandling::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NamespaceHandling_t1452270444, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMESPACEHANDLING_T1452270444_H
#ifndef DATETIMEKIND_T2186819611_H
#define DATETIMEKIND_T2186819611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t2186819611 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t2186819611, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T2186819611_H
#ifndef CONFORMANCELEVEL_T3761201363_H
#define CONFORMANCELEVEL_T3761201363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.ConformanceLevel
struct  ConformanceLevel_t3761201363 
{
public:
	// System.Int32 System.Xml.ConformanceLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConformanceLevel_t3761201363, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFORMANCELEVEL_T3761201363_H
#ifndef XCONTAINER_T1445911831_H
#define XCONTAINER_T1445911831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XContainer
struct  XContainer_t1445911831  : public XNode_t2707504214
{
public:
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer::first
	XNode_t2707504214 * ___first_8;
	// System.Xml.Linq.XNode System.Xml.Linq.XContainer::last
	XNode_t2707504214 * ___last_9;

public:
	inline static int32_t get_offset_of_first_8() { return static_cast<int32_t>(offsetof(XContainer_t1445911831, ___first_8)); }
	inline XNode_t2707504214 * get_first_8() const { return ___first_8; }
	inline XNode_t2707504214 ** get_address_of_first_8() { return &___first_8; }
	inline void set_first_8(XNode_t2707504214 * value)
	{
		___first_8 = value;
		Il2CppCodeGenWriteBarrier((&___first_8), value);
	}

	inline static int32_t get_offset_of_last_9() { return static_cast<int32_t>(offsetof(XContainer_t1445911831, ___last_9)); }
	inline XNode_t2707504214 * get_last_9() const { return ___last_9; }
	inline XNode_t2707504214 ** get_address_of_last_9() { return &___last_9; }
	inline void set_last_9(XNode_t2707504214 * value)
	{
		___last_9 = value;
		Il2CppCodeGenWriteBarrier((&___last_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XCONTAINER_T1445911831_H
#ifndef STREAMINGCONTEXTSTATES_T4264247603_H
#define STREAMINGCONTEXTSTATES_T4264247603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t4264247603 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t4264247603, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T4264247603_H
#ifndef COMPARERESULT_T4155354831_H
#define COMPARERESULT_T4155354831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XNodeDocumentOrderComparer/CompareResult
struct  CompareResult_t4155354831 
{
public:
	// System.Int32 System.Xml.Linq.XNodeDocumentOrderComparer/CompareResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareResult_t4155354831, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPARERESULT_T4155354831_H
#ifndef XPROCESSINGINSTRUCTION_T2854903359_H
#define XPROCESSINGINSTRUCTION_T2854903359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XProcessingInstruction
struct  XProcessingInstruction_t2854903359  : public XNode_t2707504214
{
public:
	// System.String System.Xml.Linq.XProcessingInstruction::name
	String_t* ___name_8;
	// System.String System.Xml.Linq.XProcessingInstruction::data
	String_t* ___data_9;

public:
	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(XProcessingInstruction_t2854903359, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((&___name_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(XProcessingInstruction_t2854903359, ___data_9)); }
	inline String_t* get_data_9() const { return ___data_9; }
	inline String_t** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(String_t* value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XPROCESSINGINSTRUCTION_T2854903359_H
#ifndef NOTSUPPORTEDEXCEPTION_T1793819818_H
#define NOTSUPPORTEDEXCEPTION_T1793819818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1793819818  : public SystemException_t3877406272
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1793819818_H
#ifndef XMLNODETYPE_T739504597_H
#define XMLNODETYPE_T739504597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeType
struct  XmlNodeType_t739504597 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlNodeType_t739504597, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODETYPE_T739504597_H
#ifndef XCDATA_T1306050895_H
#define XCDATA_T1306050895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XCData
struct  XCData_t1306050895  : public XText_t1860529549
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XCDATA_T1306050895_H
#ifndef STREAMINGCONTEXT_T1417235061_H
#define STREAMINGCONTEXT_T1417235061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t1417235061 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t1417235061, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t1417235061, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1417235061_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1417235061_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T1417235061_H
#ifndef XMLSCHEMA_T880472818_H
#define XMLSCHEMA_T880472818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Schema.XmlSchema
struct  XmlSchema_t880472818  : public XmlSchemaObject_t2050913741
{
public:
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::attributeFormDefault
	int32_t ___attributeFormDefault_13;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::attributeGroups
	XmlSchemaObjectTable_t3364835593 * ___attributeGroups_14;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::attributes
	XmlSchemaObjectTable_t3364835593 * ___attributes_15;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::blockDefault
	int32_t ___blockDefault_16;
	// System.Xml.Schema.XmlSchemaForm System.Xml.Schema.XmlSchema::elementFormDefault
	int32_t ___elementFormDefault_17;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::elements
	XmlSchemaObjectTable_t3364835593 * ___elements_18;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchema::finalDefault
	int32_t ___finalDefault_19;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::groups
	XmlSchemaObjectTable_t3364835593 * ___groups_20;
	// System.String System.Xml.Schema.XmlSchema::id
	String_t* ___id_21;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::includes
	XmlSchemaObjectCollection_t395083109 * ___includes_22;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::items
	XmlSchemaObjectCollection_t395083109 * ___items_23;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::notations
	XmlSchemaObjectTable_t3364835593 * ___notations_24;
	// System.Xml.Schema.XmlSchemaObjectTable System.Xml.Schema.XmlSchema::schemaTypes
	XmlSchemaObjectTable_t3364835593 * ___schemaTypes_25;
	// System.String System.Xml.Schema.XmlSchema::targetNamespace
	String_t* ___targetNamespace_26;
	// System.String System.Xml.Schema.XmlSchema::version
	String_t* ___version_27;
	// System.Xml.Schema.XmlSchemaSet System.Xml.Schema.XmlSchema::schemas
	XmlSchemaSet_t313318308 * ___schemas_28;
	// System.Xml.XmlNameTable System.Xml.Schema.XmlSchema::nameTable
	XmlNameTable_t1345805268 * ___nameTable_29;
	// System.Boolean System.Xml.Schema.XmlSchema::missedSubComponents
	bool ___missedSubComponents_30;
	// System.Xml.Schema.XmlSchemaObjectCollection System.Xml.Schema.XmlSchema::compilationItems
	XmlSchemaObjectCollection_t395083109 * ___compilationItems_31;

public:
	inline static int32_t get_offset_of_attributeFormDefault_13() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___attributeFormDefault_13)); }
	inline int32_t get_attributeFormDefault_13() const { return ___attributeFormDefault_13; }
	inline int32_t* get_address_of_attributeFormDefault_13() { return &___attributeFormDefault_13; }
	inline void set_attributeFormDefault_13(int32_t value)
	{
		___attributeFormDefault_13 = value;
	}

	inline static int32_t get_offset_of_attributeGroups_14() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___attributeGroups_14)); }
	inline XmlSchemaObjectTable_t3364835593 * get_attributeGroups_14() const { return ___attributeGroups_14; }
	inline XmlSchemaObjectTable_t3364835593 ** get_address_of_attributeGroups_14() { return &___attributeGroups_14; }
	inline void set_attributeGroups_14(XmlSchemaObjectTable_t3364835593 * value)
	{
		___attributeGroups_14 = value;
		Il2CppCodeGenWriteBarrier((&___attributeGroups_14), value);
	}

	inline static int32_t get_offset_of_attributes_15() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___attributes_15)); }
	inline XmlSchemaObjectTable_t3364835593 * get_attributes_15() const { return ___attributes_15; }
	inline XmlSchemaObjectTable_t3364835593 ** get_address_of_attributes_15() { return &___attributes_15; }
	inline void set_attributes_15(XmlSchemaObjectTable_t3364835593 * value)
	{
		___attributes_15 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_15), value);
	}

	inline static int32_t get_offset_of_blockDefault_16() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___blockDefault_16)); }
	inline int32_t get_blockDefault_16() const { return ___blockDefault_16; }
	inline int32_t* get_address_of_blockDefault_16() { return &___blockDefault_16; }
	inline void set_blockDefault_16(int32_t value)
	{
		___blockDefault_16 = value;
	}

	inline static int32_t get_offset_of_elementFormDefault_17() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___elementFormDefault_17)); }
	inline int32_t get_elementFormDefault_17() const { return ___elementFormDefault_17; }
	inline int32_t* get_address_of_elementFormDefault_17() { return &___elementFormDefault_17; }
	inline void set_elementFormDefault_17(int32_t value)
	{
		___elementFormDefault_17 = value;
	}

	inline static int32_t get_offset_of_elements_18() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___elements_18)); }
	inline XmlSchemaObjectTable_t3364835593 * get_elements_18() const { return ___elements_18; }
	inline XmlSchemaObjectTable_t3364835593 ** get_address_of_elements_18() { return &___elements_18; }
	inline void set_elements_18(XmlSchemaObjectTable_t3364835593 * value)
	{
		___elements_18 = value;
		Il2CppCodeGenWriteBarrier((&___elements_18), value);
	}

	inline static int32_t get_offset_of_finalDefault_19() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___finalDefault_19)); }
	inline int32_t get_finalDefault_19() const { return ___finalDefault_19; }
	inline int32_t* get_address_of_finalDefault_19() { return &___finalDefault_19; }
	inline void set_finalDefault_19(int32_t value)
	{
		___finalDefault_19 = value;
	}

	inline static int32_t get_offset_of_groups_20() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___groups_20)); }
	inline XmlSchemaObjectTable_t3364835593 * get_groups_20() const { return ___groups_20; }
	inline XmlSchemaObjectTable_t3364835593 ** get_address_of_groups_20() { return &___groups_20; }
	inline void set_groups_20(XmlSchemaObjectTable_t3364835593 * value)
	{
		___groups_20 = value;
		Il2CppCodeGenWriteBarrier((&___groups_20), value);
	}

	inline static int32_t get_offset_of_id_21() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___id_21)); }
	inline String_t* get_id_21() const { return ___id_21; }
	inline String_t** get_address_of_id_21() { return &___id_21; }
	inline void set_id_21(String_t* value)
	{
		___id_21 = value;
		Il2CppCodeGenWriteBarrier((&___id_21), value);
	}

	inline static int32_t get_offset_of_includes_22() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___includes_22)); }
	inline XmlSchemaObjectCollection_t395083109 * get_includes_22() const { return ___includes_22; }
	inline XmlSchemaObjectCollection_t395083109 ** get_address_of_includes_22() { return &___includes_22; }
	inline void set_includes_22(XmlSchemaObjectCollection_t395083109 * value)
	{
		___includes_22 = value;
		Il2CppCodeGenWriteBarrier((&___includes_22), value);
	}

	inline static int32_t get_offset_of_items_23() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___items_23)); }
	inline XmlSchemaObjectCollection_t395083109 * get_items_23() const { return ___items_23; }
	inline XmlSchemaObjectCollection_t395083109 ** get_address_of_items_23() { return &___items_23; }
	inline void set_items_23(XmlSchemaObjectCollection_t395083109 * value)
	{
		___items_23 = value;
		Il2CppCodeGenWriteBarrier((&___items_23), value);
	}

	inline static int32_t get_offset_of_notations_24() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___notations_24)); }
	inline XmlSchemaObjectTable_t3364835593 * get_notations_24() const { return ___notations_24; }
	inline XmlSchemaObjectTable_t3364835593 ** get_address_of_notations_24() { return &___notations_24; }
	inline void set_notations_24(XmlSchemaObjectTable_t3364835593 * value)
	{
		___notations_24 = value;
		Il2CppCodeGenWriteBarrier((&___notations_24), value);
	}

	inline static int32_t get_offset_of_schemaTypes_25() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___schemaTypes_25)); }
	inline XmlSchemaObjectTable_t3364835593 * get_schemaTypes_25() const { return ___schemaTypes_25; }
	inline XmlSchemaObjectTable_t3364835593 ** get_address_of_schemaTypes_25() { return &___schemaTypes_25; }
	inline void set_schemaTypes_25(XmlSchemaObjectTable_t3364835593 * value)
	{
		___schemaTypes_25 = value;
		Il2CppCodeGenWriteBarrier((&___schemaTypes_25), value);
	}

	inline static int32_t get_offset_of_targetNamespace_26() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___targetNamespace_26)); }
	inline String_t* get_targetNamespace_26() const { return ___targetNamespace_26; }
	inline String_t** get_address_of_targetNamespace_26() { return &___targetNamespace_26; }
	inline void set_targetNamespace_26(String_t* value)
	{
		___targetNamespace_26 = value;
		Il2CppCodeGenWriteBarrier((&___targetNamespace_26), value);
	}

	inline static int32_t get_offset_of_version_27() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___version_27)); }
	inline String_t* get_version_27() const { return ___version_27; }
	inline String_t** get_address_of_version_27() { return &___version_27; }
	inline void set_version_27(String_t* value)
	{
		___version_27 = value;
		Il2CppCodeGenWriteBarrier((&___version_27), value);
	}

	inline static int32_t get_offset_of_schemas_28() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___schemas_28)); }
	inline XmlSchemaSet_t313318308 * get_schemas_28() const { return ___schemas_28; }
	inline XmlSchemaSet_t313318308 ** get_address_of_schemas_28() { return &___schemas_28; }
	inline void set_schemas_28(XmlSchemaSet_t313318308 * value)
	{
		___schemas_28 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_28), value);
	}

	inline static int32_t get_offset_of_nameTable_29() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___nameTable_29)); }
	inline XmlNameTable_t1345805268 * get_nameTable_29() const { return ___nameTable_29; }
	inline XmlNameTable_t1345805268 ** get_address_of_nameTable_29() { return &___nameTable_29; }
	inline void set_nameTable_29(XmlNameTable_t1345805268 * value)
	{
		___nameTable_29 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_29), value);
	}

	inline static int32_t get_offset_of_missedSubComponents_30() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___missedSubComponents_30)); }
	inline bool get_missedSubComponents_30() const { return ___missedSubComponents_30; }
	inline bool* get_address_of_missedSubComponents_30() { return &___missedSubComponents_30; }
	inline void set_missedSubComponents_30(bool value)
	{
		___missedSubComponents_30 = value;
	}

	inline static int32_t get_offset_of_compilationItems_31() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818, ___compilationItems_31)); }
	inline XmlSchemaObjectCollection_t395083109 * get_compilationItems_31() const { return ___compilationItems_31; }
	inline XmlSchemaObjectCollection_t395083109 ** get_address_of_compilationItems_31() { return &___compilationItems_31; }
	inline void set_compilationItems_31(XmlSchemaObjectCollection_t395083109 * value)
	{
		___compilationItems_31 = value;
		Il2CppCodeGenWriteBarrier((&___compilationItems_31), value);
	}
};

struct XmlSchema_t880472818_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.Schema.XmlSchema::<>f__switch$map2D
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map2D_32;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2D_32() { return static_cast<int32_t>(offsetof(XmlSchema_t880472818_StaticFields, ___U3CU3Ef__switchU24map2D_32)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map2D_32() const { return ___U3CU3Ef__switchU24map2D_32; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map2D_32() { return &___U3CU3Ef__switchU24map2D_32; }
	inline void set_U3CU3Ef__switchU24map2D_32(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map2D_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2D_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSCHEMA_T880472818_H
#ifndef ARGUMENTNULLEXCEPTION_T628810857_H
#define ARGUMENTNULLEXCEPTION_T628810857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t628810857  : public ArgumentException_t3259014390
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T628810857_H
#ifndef XDOCUMENT_T2733326047_H
#define XDOCUMENT_T2733326047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XDocument
struct  XDocument_t2733326047  : public XContainer_t1445911831
{
public:
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::xmldecl
	XDeclaration_t3367285402 * ___xmldecl_10;

public:
	inline static int32_t get_offset_of_xmldecl_10() { return static_cast<int32_t>(offsetof(XDocument_t2733326047, ___xmldecl_10)); }
	inline XDeclaration_t3367285402 * get_xmldecl_10() const { return ___xmldecl_10; }
	inline XDeclaration_t3367285402 ** get_address_of_xmldecl_10() { return &___xmldecl_10; }
	inline void set_xmldecl_10(XDeclaration_t3367285402 * value)
	{
		___xmldecl_10 = value;
		Il2CppCodeGenWriteBarrier((&___xmldecl_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XDOCUMENT_T2733326047_H
#ifndef DATETIME_T693205669_H
#define DATETIME_T693205669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t693205669 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t3430258949  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t693205669, ___ticks_0)); }
	inline TimeSpan_t3430258949  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t3430258949 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t3430258949  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t693205669, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t693205669_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t693205669  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t693205669  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1642385972* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1642385972* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1642385972* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1642385972* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1642385972* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1642385972* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1642385972* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t3030399641* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t3030399641* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MaxValue_2)); }
	inline DateTime_t693205669  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t693205669 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t693205669  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MinValue_3)); }
	inline DateTime_t693205669  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t693205669 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t693205669  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1642385972* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1642385972* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1642385972* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1642385972* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1642385972* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1642385972* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1642385972* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1642385972* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1642385972* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1642385972* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1642385972* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1642385972** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1642385972* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1642385972* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1642385972** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1642385972* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t3030399641* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t3030399641** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t3030399641* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t3030399641* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t3030399641** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t3030399641* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T693205669_H
#ifndef XELEMENT_T553821050_H
#define XELEMENT_T553821050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.Linq.XElement
struct  XElement_t553821050  : public XContainer_t1445911831
{
public:
	// System.Xml.Linq.XName System.Xml.Linq.XElement::name
	XName_t785190363 * ___name_11;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::attr_first
	XAttribute_t3858477518 * ___attr_first_12;
	// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::attr_last
	XAttribute_t3858477518 * ___attr_last_13;
	// System.Boolean System.Xml.Linq.XElement::explicit_is_empty
	bool ___explicit_is_empty_14;

public:
	inline static int32_t get_offset_of_name_11() { return static_cast<int32_t>(offsetof(XElement_t553821050, ___name_11)); }
	inline XName_t785190363 * get_name_11() const { return ___name_11; }
	inline XName_t785190363 ** get_address_of_name_11() { return &___name_11; }
	inline void set_name_11(XName_t785190363 * value)
	{
		___name_11 = value;
		Il2CppCodeGenWriteBarrier((&___name_11), value);
	}

	inline static int32_t get_offset_of_attr_first_12() { return static_cast<int32_t>(offsetof(XElement_t553821050, ___attr_first_12)); }
	inline XAttribute_t3858477518 * get_attr_first_12() const { return ___attr_first_12; }
	inline XAttribute_t3858477518 ** get_address_of_attr_first_12() { return &___attr_first_12; }
	inline void set_attr_first_12(XAttribute_t3858477518 * value)
	{
		___attr_first_12 = value;
		Il2CppCodeGenWriteBarrier((&___attr_first_12), value);
	}

	inline static int32_t get_offset_of_attr_last_13() { return static_cast<int32_t>(offsetof(XElement_t553821050, ___attr_last_13)); }
	inline XAttribute_t3858477518 * get_attr_last_13() const { return ___attr_last_13; }
	inline XAttribute_t3858477518 ** get_address_of_attr_last_13() { return &___attr_last_13; }
	inline void set_attr_last_13(XAttribute_t3858477518 * value)
	{
		___attr_last_13 = value;
		Il2CppCodeGenWriteBarrier((&___attr_last_13), value);
	}

	inline static int32_t get_offset_of_explicit_is_empty_14() { return static_cast<int32_t>(offsetof(XElement_t553821050, ___explicit_is_empty_14)); }
	inline bool get_explicit_is_empty_14() const { return ___explicit_is_empty_14; }
	inline bool* get_address_of_explicit_is_empty_14() { return &___explicit_is_empty_14; }
	inline void set_explicit_is_empty_14(bool value)
	{
		___explicit_is_empty_14 = value;
	}
};

struct XElement_t553821050_StaticFields
{
public:
	// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement> System.Xml.Linq.XElement::emptySequence
	RuntimeObject* ___emptySequence_10;

public:
	inline static int32_t get_offset_of_emptySequence_10() { return static_cast<int32_t>(offsetof(XElement_t553821050_StaticFields, ___emptySequence_10)); }
	inline RuntimeObject* get_emptySequence_10() const { return ___emptySequence_10; }
	inline RuntimeObject** get_address_of_emptySequence_10() { return &___emptySequence_10; }
	inline void set_emptySequence_10(RuntimeObject* value)
	{
		___emptySequence_10 = value;
		Il2CppCodeGenWriteBarrier((&___emptySequence_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XELEMENT_T553821050_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t2330101084  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t2330101084  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t2330101084 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t2330101084  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t1664964607* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t3405857066 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t3405857066 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t3405857066 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t1664964607* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t1664964607** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t1664964607* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t3405857066 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t3405857066 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t3405857066 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t3405857066 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t3405857066 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t3405857066 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef XMLWRITERSETTINGS_T924210539_H
#define XMLWRITERSETTINGS_T924210539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWriterSettings
struct  XmlWriterSettings_t924210539  : public RuntimeObject
{
public:
	// System.Boolean System.Xml.XmlWriterSettings::checkCharacters
	bool ___checkCharacters_0;
	// System.Boolean System.Xml.XmlWriterSettings::closeOutput
	bool ___closeOutput_1;
	// System.Xml.ConformanceLevel System.Xml.XmlWriterSettings::conformance
	int32_t ___conformance_2;
	// System.Text.Encoding System.Xml.XmlWriterSettings::encoding
	Encoding_t663144255 * ___encoding_3;
	// System.Boolean System.Xml.XmlWriterSettings::indent
	bool ___indent_4;
	// System.String System.Xml.XmlWriterSettings::indentChars
	String_t* ___indentChars_5;
	// System.String System.Xml.XmlWriterSettings::newLineChars
	String_t* ___newLineChars_6;
	// System.Boolean System.Xml.XmlWriterSettings::newLineOnAttributes
	bool ___newLineOnAttributes_7;
	// System.Xml.NewLineHandling System.Xml.XmlWriterSettings::newLineHandling
	int32_t ___newLineHandling_8;
	// System.Boolean System.Xml.XmlWriterSettings::omitXmlDeclaration
	bool ___omitXmlDeclaration_9;
	// System.Xml.XmlOutputMethod System.Xml.XmlWriterSettings::outputMethod
	int32_t ___outputMethod_10;
	// System.Xml.NamespaceHandling System.Xml.XmlWriterSettings::<NamespaceHandling>k__BackingField
	int32_t ___U3CNamespaceHandlingU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_checkCharacters_0() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___checkCharacters_0)); }
	inline bool get_checkCharacters_0() const { return ___checkCharacters_0; }
	inline bool* get_address_of_checkCharacters_0() { return &___checkCharacters_0; }
	inline void set_checkCharacters_0(bool value)
	{
		___checkCharacters_0 = value;
	}

	inline static int32_t get_offset_of_closeOutput_1() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___closeOutput_1)); }
	inline bool get_closeOutput_1() const { return ___closeOutput_1; }
	inline bool* get_address_of_closeOutput_1() { return &___closeOutput_1; }
	inline void set_closeOutput_1(bool value)
	{
		___closeOutput_1 = value;
	}

	inline static int32_t get_offset_of_conformance_2() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___conformance_2)); }
	inline int32_t get_conformance_2() const { return ___conformance_2; }
	inline int32_t* get_address_of_conformance_2() { return &___conformance_2; }
	inline void set_conformance_2(int32_t value)
	{
		___conformance_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___encoding_3)); }
	inline Encoding_t663144255 * get_encoding_3() const { return ___encoding_3; }
	inline Encoding_t663144255 ** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(Encoding_t663144255 * value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_3), value);
	}

	inline static int32_t get_offset_of_indent_4() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___indent_4)); }
	inline bool get_indent_4() const { return ___indent_4; }
	inline bool* get_address_of_indent_4() { return &___indent_4; }
	inline void set_indent_4(bool value)
	{
		___indent_4 = value;
	}

	inline static int32_t get_offset_of_indentChars_5() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___indentChars_5)); }
	inline String_t* get_indentChars_5() const { return ___indentChars_5; }
	inline String_t** get_address_of_indentChars_5() { return &___indentChars_5; }
	inline void set_indentChars_5(String_t* value)
	{
		___indentChars_5 = value;
		Il2CppCodeGenWriteBarrier((&___indentChars_5), value);
	}

	inline static int32_t get_offset_of_newLineChars_6() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___newLineChars_6)); }
	inline String_t* get_newLineChars_6() const { return ___newLineChars_6; }
	inline String_t** get_address_of_newLineChars_6() { return &___newLineChars_6; }
	inline void set_newLineChars_6(String_t* value)
	{
		___newLineChars_6 = value;
		Il2CppCodeGenWriteBarrier((&___newLineChars_6), value);
	}

	inline static int32_t get_offset_of_newLineOnAttributes_7() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___newLineOnAttributes_7)); }
	inline bool get_newLineOnAttributes_7() const { return ___newLineOnAttributes_7; }
	inline bool* get_address_of_newLineOnAttributes_7() { return &___newLineOnAttributes_7; }
	inline void set_newLineOnAttributes_7(bool value)
	{
		___newLineOnAttributes_7 = value;
	}

	inline static int32_t get_offset_of_newLineHandling_8() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___newLineHandling_8)); }
	inline int32_t get_newLineHandling_8() const { return ___newLineHandling_8; }
	inline int32_t* get_address_of_newLineHandling_8() { return &___newLineHandling_8; }
	inline void set_newLineHandling_8(int32_t value)
	{
		___newLineHandling_8 = value;
	}

	inline static int32_t get_offset_of_omitXmlDeclaration_9() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___omitXmlDeclaration_9)); }
	inline bool get_omitXmlDeclaration_9() const { return ___omitXmlDeclaration_9; }
	inline bool* get_address_of_omitXmlDeclaration_9() { return &___omitXmlDeclaration_9; }
	inline void set_omitXmlDeclaration_9(bool value)
	{
		___omitXmlDeclaration_9 = value;
	}

	inline static int32_t get_offset_of_outputMethod_10() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___outputMethod_10)); }
	inline int32_t get_outputMethod_10() const { return ___outputMethod_10; }
	inline int32_t* get_address_of_outputMethod_10() { return &___outputMethod_10; }
	inline void set_outputMethod_10(int32_t value)
	{
		___outputMethod_10 = value;
	}

	inline static int32_t get_offset_of_U3CNamespaceHandlingU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(XmlWriterSettings_t924210539, ___U3CNamespaceHandlingU3Ek__BackingField_11)); }
	inline int32_t get_U3CNamespaceHandlingU3Ek__BackingField_11() const { return ___U3CNamespaceHandlingU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CNamespaceHandlingU3Ek__BackingField_11() { return &___U3CNamespaceHandlingU3Ek__BackingField_11; }
	inline void set_U3CNamespaceHandlingU3Ek__BackingField_11(int32_t value)
	{
		___U3CNamespaceHandlingU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITERSETTINGS_T924210539_H
#ifndef DATETIMEOFFSET_T1362988906_H
#define DATETIMEOFFSET_T1362988906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t1362988906 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t693205669  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t3430258949  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906, ___dt_2)); }
	inline DateTime_t693205669  get_dt_2() const { return ___dt_2; }
	inline DateTime_t693205669 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t693205669  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906, ___utc_offset_3)); }
	inline TimeSpan_t3430258949  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t3430258949 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t3430258949  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t1362988906_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t1362988906  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t1362988906  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t1362988906  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t1362988906 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t1362988906  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t1362988906_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t1362988906  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t1362988906 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t1362988906  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T1362988906_H
// System.Xml.Linq.XAttribute[]
struct XAttributeU5BU5D_t805402427  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XAttribute_t3858477518 * m_Items[1];

public:
	inline XAttribute_t3858477518 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XAttribute_t3858477518 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XAttribute_t3858477518 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline XAttribute_t3858477518 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XAttribute_t3858477518 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XAttribute_t3858477518 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t1328083999  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1642385972  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m310736118_gshared (List_1_t2058570427 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m584589095_gshared (Dictionary_2_t2281509423 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3975825838_gshared (Dictionary_2_t2281509423 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m1004257024_gshared (Dictionary_2_t2281509423 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void System.Xml.Linq.XObject::.ctor()
extern "C"  void XObject__ctor_m3797862556 (XObject_t3550811009 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m3380712306 (ArgumentNullException_t628810857 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Linq.XName::op_Equality(System.Xml.Linq.XName,System.Xml.Linq.XName)
extern "C"  bool XName_op_Equality_m148690364 (RuntimeObject * __this /* static, unused */, XName_t785190363 * ___n10, XName_t785190363 * ___n21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XAttribute::SetValue(System.Object)
extern "C"  void XAttribute_SetValue_m2874773340 (XAttribute_t3858477518 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3920580167 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t2331729674  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XNamespace System.Xml.Linq.XName::get_Namespace()
extern "C"  XNamespace_t1613015075 * XName_get_Namespace_m3835650466 (XName_t785190363 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xmlns()
extern "C"  XNamespace_t1613015075 * XNamespace_get_Xmlns_m4214259751 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Linq.XNamespace::op_Equality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
extern "C"  bool XNamespace_op_Equality_m73486322 (RuntimeObject * __this /* static, unused */, XNamespace_t1613015075 * ___o10, XNamespace_t1613015075 * ___o21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XName::get_LocalName()
extern "C"  String_t* XName_get_LocalName_m995190518 (XName_t785190363 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_None()
extern "C"  XNamespace_t1613015075 * XNamespace_get_None_m1138320793 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XUtil::ToString(System.Object)
extern "C"  String_t* XUtil_ToString_m2221736954 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XElement System.Xml.Linq.XObject::get_Parent()
extern "C"  XElement_t553821050 * XObject_get_Parent_m714109026 (XObject_t3550811009 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::get_FirstAttribute()
extern "C"  XAttribute_t3858477518 * XElement_get_FirstAttribute_m3661704431 (XElement_t553821050 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XElement::set_FirstAttribute(System.Xml.Linq.XAttribute)
extern "C"  void XElement_set_FirstAttribute_m3741633158 (XElement_t553821050 * __this, XAttribute_t3858477518 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::get_LastAttribute()
extern "C"  XAttribute_t3858477518 * XElement_get_LastAttribute_m85173095 (XElement_t553821050 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XElement::set_LastAttribute(System.Xml.Linq.XAttribute)
extern "C"  void XElement_set_LastAttribute_m3614769194 (XElement_t553821050 * __this, XAttribute_t3858477518 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XObject::SetOwner(System.Xml.Linq.XContainer)
extern "C"  void XObject_SetOwner_m582264412 (XObject_t3550811009 * __this, XContainer_t1445911831 * ___node0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3946851802 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XName::ToString()
extern "C"  String_t* XName_ToString_m2526618213 (XName_t785190363 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C"  StringBuilder_t * StringBuilder_Append_m3636508479 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
extern "C"  int32_t String_IndexOfAny_m2027595557 (String_t* __this, CharU5BU5D_t1328083999* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m1606060069 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
extern "C"  StringBuilder_t * StringBuilder_Append_m1462406979 (StringBuilder_t * __this, String_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.StringBuilder::ToString()
extern "C"  String_t* StringBuilder_ToString_m1507807375 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m4230566705 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XText::.ctor(System.String)
extern "C"  void XText__ctor_m2852593626 (XText_t1860529549 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XText::.ctor(System.Xml.Linq.XText)
extern "C"  void XText__ctor_m2404229261 (XText_t1860529549 * __this, XText_t1860529549 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XText::get_Value()
extern "C"  String_t* XText_get_Value_m334359707 (XText_t1860529549 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XNode::.ctor()
extern "C"  void XNode__ctor_m3635466201 (XNode_t2707504214 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XContainer::CheckChildType(System.Object,System.Boolean)
extern "C"  void XContainer_CheckChildType_m2935453595 (XContainer_t1445911831 * __this, RuntimeObject * ___o0, bool ___addFirst1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m191970594 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m56707527 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m3739475201 (ArgumentException_t3259014390 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable System.Xml.Linq.XUtil::ExpandArray(System.Object)
extern "C"  RuntimeObject* XUtil_ExpandArray_m1006964352 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XNode System.Xml.Linq.XUtil::ToNode(System.Object)
extern "C"  XNode_t2707504214 * XUtil_ToNode_m2489943695 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XContainer::AddNode(System.Xml.Linq.XNode)
extern "C"  void XContainer_AddNode_m3593198507 (XContainer_t1445911831 * __this, XNode_t2707504214 * ___n0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Linq.XUtil::GetDetachedObject(System.Xml.Linq.XObject)
extern "C"  RuntimeObject * XUtil_GetDetachedObject_m293754142 (RuntimeObject * __this /* static, unused */, XObject_t3550811009 * ___child0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XNode::set_NextNode(System.Xml.Linq.XNode)
extern "C"  void XNode_set_NextNode_m2612555387 (XNode_t2707504214 * __this, XNode_t2707504214 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XNode::set_PreviousNode(System.Xml.Linq.XNode)
extern "C"  void XNode_set_PreviousNode_m1918335957 (XNode_t2707504214 * __this, XNode_t2707504214 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::.ctor()
extern "C"  void U3CNodesU3Ec__Iterator1A__ctor_m4168269813 (U3CNodesU3Ec__Iterator1A_t1473861320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XNode System.Xml.Linq.XNode::ReadFrom(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
extern "C"  XNode_t2707504214 * XNode_ReadFrom_m1777325942 (RuntimeObject * __this /* static, unused */, XmlReader_t3675626668 * ___r0, int32_t ___options1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XContainer::Add(System.Object)
extern "C"  void XContainer_Add_m3035239173 (XContainer_t1445911831 * __this, RuntimeObject * ___content0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m2551263788 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode> System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::System.Collections.Generic.IEnumerable<System.Xml.Linq.XNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CNodesU3Ec__Iterator1A_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XNodeU3E_GetEnumerator_m2816027373 (U3CNodesU3Ec__Iterator1A_t1473861320 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
extern "C"  int32_t Interlocked_CompareExchange_m3339239614 (RuntimeObject * __this /* static, unused */, int32_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XNode System.Xml.Linq.XContainer::get_FirstNode()
extern "C"  XNode_t2707504214 * XContainer_get_FirstNode_m3344509478 (XContainer_t1445911831 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XNode System.Xml.Linq.XNode::get_NextNode()
extern "C"  XNode_t2707504214 * XNode_get_NextNode_m1164634702 (XNode_t2707504214 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m3232764727 (NotSupportedException_t1793819818 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m626692867 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1642385972* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XContainer::.ctor()
extern "C"  void XContainer__ctor_m3187361404 (XContainer_t1445911831 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode> System.Xml.Linq.XContainer::Nodes()
extern "C"  RuntimeObject* XContainer_Nodes_m1386197549 (XContainer_t1445911831 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XDeclaration::get_Standalone()
extern "C"  String_t* XDeclaration_get_Standalone_m1945036438 (XDeclaration_t3367285402 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XDocument::VerifyAddedNode(System.Object,System.Boolean)
extern "C"  void XDocument_VerifyAddedNode_m3124949756 (XDocument_t2733326047 * __this, RuntimeObject * ___node0, bool ___addFirst1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m2801133788 (InvalidOperationException_t721527559 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XDocument::ValidateWhitespace(System.String)
extern "C"  void XDocument_ValidateWhitespace_m3463530265 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XDocumentType System.Xml.Linq.XDocument::get_DocumentType()
extern "C"  XDocumentType_t738990919 * XDocument_get_DocumentType_m2810920598 (XDocument_t2733326047 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XElement System.Xml.Linq.XDocument::get_Root()
extern "C"  XElement_t553821050 * XDocument_get_Root_m946627048 (XDocument_t2733326047 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XDocument System.Xml.Linq.XObject::get_Document()
extern "C"  XDocument_t2733326047 * XObject_get_Document_m418804020 (XObject_t3550811009 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XName System.Xml.Linq.XElement::get_Name()
extern "C"  XName_t785190363 * XElement_get_Name_m1622427113 (XElement_t553821050 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement::Attributes()
extern "C"  RuntimeObject* XElement_Attributes_m3926517386 (XElement_t553821050 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<System.Xml.Linq.XElement>::.ctor()
#define List_1__ctor_m695132885(__this, method) ((  void (*) (List_1_t4217909478 *, const RuntimeMethod*))List_1__ctor_m310736118_gshared)(__this, method)
// System.Void System.Xml.Linq.XElement::Save(System.Xml.XmlWriter)
extern "C"  void XElement_Save_m692239662 (XElement_t553821050 * __this, XmlWriter_t1048088568 * ___w0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XContainer::ReadContentFrom(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
extern "C"  void XContainer_ReadContentFrom_m14040437 (XContainer_t1445911831 * __this, XmlReader_t3675626668 * ___reader0, int32_t ___options1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XElement::get_Value()
extern "C"  String_t* XElement_get_Value_m1500498232 (XElement_t553821050 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XName System.Xml.Linq.XAttribute::get_Name()
extern "C"  XName_t785190363 * XAttribute_get_Name_m2127497767 (XAttribute_t3858477518 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XElement/<Attributes>c__Iterator20::.ctor()
extern "C"  void U3CAttributesU3Ec__Iterator20__ctor_m1308961820 (U3CAttributesU3Ec__Iterator20_t3474816789 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String,System.String)
extern "C"  XName_t785190363 * XName_Get_m2187745362 (RuntimeObject * __this /* static, unused */, String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XName)
extern "C"  void XElement__ctor_m143752744 (XElement_t553821050 * __this, XName_t785190363 * ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XObject::FillLineInfoAndBaseUri(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
extern "C"  void XObject_FillLineInfoAndBaseUri_m431604165 (XObject_t3550811009 * __this, XmlReader_t3675626668 * ___r0, int32_t ___options1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XNamespace::get_NamespaceName()
extern "C"  String_t* XNamespace_get_NamespaceName_m3174414200 (XNamespace_t1613015075 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String)
extern "C"  XName_t785190363 * XNamespace_GetName_m2299836393 (XNamespace_t1613015075 * __this, String_t* ___localName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XElement::SetAttributeValue(System.Xml.Linq.XName,System.Object)
extern "C"  void XElement_SetAttributeValue_m4226718375 (XElement_t553821050 * __this, XName_t785190363 * ___name0, RuntimeObject * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::Attribute(System.Xml.Linq.XName)
extern "C"  XAttribute_t3858477518 * XElement_Attribute_m1640408831 (XElement_t553821050 * __this, XName_t785190363 * ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XAttribute::Remove()
extern "C"  void XAttribute_Remove_m4091960603 (XAttribute_t3858477518 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XName,System.Object)
extern "C"  void XAttribute__ctor_m2350776210 (XAttribute_t3858477518 * __this, XName_t785190363 * ___name0, RuntimeObject * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XElement::SetAttributeObject(System.Xml.Linq.XAttribute)
extern "C"  void XElement_SetAttributeObject_m819702138 (XElement_t553821050 * __this, XAttribute_t3858477518 * ___a0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XAttribute::set_Value(System.String)
extern "C"  void XAttribute_set_Value_m4018836401 (XAttribute_t3858477518 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XAttribute::set_NextAttribute(System.Xml.Linq.XAttribute)
extern "C"  void XAttribute_set_NextAttribute_m2644290891 (XAttribute_t3858477518 * __this, XAttribute_t3858477518 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XAttribute::set_PreviousAttribute(System.Xml.Linq.XAttribute)
extern "C"  void XAttribute_set_PreviousAttribute_m2159252545 (XAttribute_t3858477518 * __this, XAttribute_t3858477518 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XName::get_NamespaceName()
extern "C"  String_t* XName_get_NamespaceName_m4269716270 (XName_t785190363 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Linq.XAttribute::get_IsNamespaceDeclaration()
extern "C"  bool XAttribute_get_IsNamespaceDeclaration_m86030665 (XAttribute_t3858477518 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XAttribute::get_Value()
extern "C"  String_t* XAttribute_get_Value_m3732914648 (XAttribute_t3858477518 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m2741345027 (XmlWriter_t1048088568 * __this, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m3169493699 (XmlWriter_t1048088568 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String)
extern "C"  void XmlWriter_WriteAttributeString_m3837777409 (XmlWriter_t1048088568 * __this, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::Get(System.String)
extern "C"  XNamespace_t1613015075 * XNamespace_Get_m1026612632 (RuntimeObject * __this /* static, unused */, String_t* ___uri0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> System.Xml.Linq.XElement::GetPrefixOfNamespaceCore(System.Xml.Linq.XNamespace)
extern "C"  RuntimeObject* XElement_GetPrefixOfNamespaceCore_m3260263689 (XElement_t553821050 * __this, XNamespace_t1613015075 * ___ns0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XNamespace System.Xml.Linq.XElement::GetNamespaceOfPrefix(System.String)
extern "C"  XNamespace_t1613015075 * XElement_GetNamespaceOfPrefix_m1452302937 (XElement_t553821050 * __this, String_t* ___prefix0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::.ctor()
extern "C"  void U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23__ctor_m1584120561 (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2024975688 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2596409543 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XText::set_Value(System.String)
extern "C"  void XText_set_Value_m1761166796 (XText_t1860529549 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement/<Attributes>c__Iterator20::System.Collections.Generic.IEnumerable<System.Xml.Linq.XAttribute>.GetEnumerator()
extern "C"  RuntimeObject* U3CAttributesU3Ec__Iterator20_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XAttributeU3E_GetEnumerator_m558085440 (U3CAttributesU3Ec__Iterator20_t3474816789 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XAttribute System.Xml.Linq.XAttribute::get_NextAttribute()
extern "C"  XAttribute_t3858477518 * XAttribute_get_NextAttribute_m2269700464 (XAttribute_t3858477518 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.String> System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::System.Collections.Generic.IEnumerable<string>.GetEnumerator()
extern "C"  RuntimeObject* U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_System_Collections_Generic_IEnumerableU3CstringU3E_GetEnumerator_m288797912 (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C"  String_t* SerializationInfo_GetString_m547109409 (SerializationInfo_t228987430 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XName::ExpandName(System.String,System.String&,System.String&)
extern "C"  void XName_ExpandName_m3429394577 (RuntimeObject * __this /* static, unused */, String_t* ___expandedName0, String_t** ___local1, String_t** ___ns2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyNCName(System.String)
extern "C"  String_t* XmlConvert_VerifyNCName_m2145737417 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C"  void SerializationInfo_AddValue_m1740888931 (SerializationInfo_t228987430 * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Linq.XName::op_Inequality(System.Xml.Linq.XName,System.Xml.Linq.XName)
extern "C"  bool XName_op_Inequality_m4197580533 (RuntimeObject * __this /* static, unused */, XName_t785190363 * ___n10, XName_t785190363 * ___n21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.Linq.XName::ErrorInvalidExpandedName()
extern "C"  Exception_t * XName_ErrorInvalidExpandedName_m1515653754 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m12482732 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2802126737 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2032624251 (String_t* __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetHashCode()
extern "C"  int32_t String_GetHashCode_m931956593 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Linq.XNamespace::GetHashCode()
extern "C"  int32_t XNamespace_GetHashCode_m1183686781 (XNamespace_t1613015075 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m1561703559 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::ReferenceEquals(System.Object,System.Object)
extern "C"  bool Object_ReferenceEquals_m3900584722 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String)
extern "C"  XName_t785190363 * XName_Get_m477503418 (RuntimeObject * __this /* static, unused */, String_t* ___expandedName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XNamespace>::.ctor()
#define Dictionary_2__ctor_m2852800515(__this, method) ((  void (*) (Dictionary_2_t3527794337 *, const RuntimeMethod*))Dictionary_2__ctor_m584589095_gshared)(__this, method)
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2136705809 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XNamespace>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m135719904(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3527794337 *, String_t*, XNamespace_t1613015075 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3975825838_gshared)(__this, p0, p1, method)
// System.Void System.Xml.Linq.XNamespace::.ctor(System.String)
extern "C"  void XNamespace__ctor_m4013965018 (XNamespace_t1613015075 * __this, String_t* ___namespaceName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XNamespace>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m2041749548(__this, p0, p1, method) ((  void (*) (Dictionary_2_t3527794337 *, String_t*, XNamespace_t1613015075 *, const RuntimeMethod*))Dictionary_2_set_Item_m1004257024_gshared)(__this, p0, p1, method)
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m2677760297 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XName>::.ctor()
#define Dictionary_2__ctor_m3965986263(__this, method) ((  void (*) (Dictionary_2_t2699969625 *, const RuntimeMethod*))Dictionary_2__ctor_m584589095_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XName>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m171435174(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t2699969625 *, String_t*, XName_t785190363 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3975825838_gshared)(__this, p0, p1, method)
// System.Void System.Xml.Linq.XName::.ctor(System.String,System.Xml.Linq.XNamespace)
extern "C"  void XName__ctor_m293531099 (XName_t785190363 * __this, String_t* ___local0, XNamespace_t1613015075 * ___ns1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Xml.Linq.XName>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m867913498(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2699969625 *, String_t*, XName_t785190363 *, const RuntimeMethod*))Dictionary_2_set_Item_m1004257024_gshared)(__this, p0, p1, method)
// System.Boolean System.Xml.Linq.XNamespace::op_Inequality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
extern "C"  bool XNamespace_op_Inequality_m1061703997 (RuntimeObject * __this /* static, unused */, XNamespace_t1613015075 * ___o10, XNamespace_t1613015075 * ___o21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Linq.XNamespace::Equals(System.Object)
extern "C"  bool XNamespace_Equals_m777760167 (XNamespace_t1613015075 * __this, RuntimeObject * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XNodeEqualityComparer::.ctor()
extern "C"  void XNodeEqualityComparer__ctor_m2149745472 (XNodeEqualityComparer_t3116038621 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XNodeDocumentOrderComparer::.ctor()
extern "C"  void XNodeDocumentOrderComparer__ctor_m2785062413 (XNodeDocumentOrderComparer_t1208684534 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringWriter::.ctor()
extern "C"  void StringWriter__ctor_m59456937 (StringWriter_t4139609088 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriterSettings::.ctor()
extern "C"  void XmlWriterSettings__ctor_m589782448 (XmlWriterSettings_t924210539 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriterSettings::set_ConformanceLevel(System.Xml.ConformanceLevel)
extern "C"  void XmlWriterSettings_set_ConformanceLevel_m528648687 (XmlWriterSettings_t924210539 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriterSettings::set_Indent(System.Boolean)
extern "C"  void XmlWriterSettings_set_Indent_m1832140252 (XmlWriterSettings_t924210539 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWriter System.Xml.XmlWriter::Create(System.IO.TextWriter,System.Xml.XmlWriterSettings)
extern "C"  XmlWriter_t1048088568 * XmlWriter_Create_m3077457120 (RuntimeObject * __this /* static, unused */, TextWriter_t4027217640 * p0, XmlWriterSettings_t924210539 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XElement System.Xml.Linq.XElement::LoadCore(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
extern "C"  XElement_t553821050 * XElement_LoadCore_m677132477 (RuntimeObject * __this /* static, unused */, XmlReader_t3675626668 * ___r0, int32_t ___options1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XCData::.ctor(System.String)
extern "C"  void XCData__ctor_m482046048 (XCData_t1306050895 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.String,System.String)
extern "C"  void XProcessingInstruction__ctor_m3547038108 (XProcessingInstruction_t2854903359 * __this, String_t* ___name0, String_t* ___data1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XComment::.ctor(System.String)
extern "C"  void XComment__ctor_m2882971392 (XComment_t1618005895 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.String,System.String,System.String,System.String)
extern "C"  void XDocumentType__ctor_m2779569696 (XDocumentType_t738990919 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XContainer::set_FirstNode(System.Xml.Linq.XNode)
extern "C"  void XContainer_set_FirstNode_m766455929 (XContainer_t1445911831 * __this, XNode_t2707504214 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XNode System.Xml.Linq.XContainer::get_LastNode()
extern "C"  XNode_t2707504214 * XContainer_get_LastNode_m375821822 (XContainer_t1445911831 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XContainer::set_LastNode(System.Xml.Linq.XNode)
extern "C"  void XContainer_set_LastNode_m2825450477 (XContainer_t1445911831 * __this, XNode_t2707504214 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XNode::ToString(System.Xml.Linq.SaveOptions)
extern "C"  String_t* XNode_ToString_m3539772875 (XNode_t2707504214 * __this, int32_t ___options0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Linq.XNodeDocumentOrderComparer::Compare(System.Xml.Linq.XNode,System.Xml.Linq.XNode)
extern "C"  int32_t XNodeDocumentOrderComparer_Compare_m2082190298 (XNodeDocumentOrderComparer_t1208684534 * __this, XNode_t2707504214 * ___n10, XNode_t2707504214 * ___n21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XNodeDocumentOrderComparer/CompareResult System.Xml.Linq.XNodeDocumentOrderComparer::CompareCore(System.Xml.Linq.XNode,System.Xml.Linq.XNode)
extern "C"  int32_t XNodeDocumentOrderComparer_CompareCore_m1096164403 (XNodeDocumentOrderComparer_t1208684534 * __this, XNode_t2707504214 * ___n10, XNode_t2707504214 * ___n21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::get_Now()
extern "C"  DateTime_t693205669  DateTime_get_Now_m24136300 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
extern "C"  int64_t DateTime_get_Ticks_m310281298 (DateTime_t693205669 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XContainer System.Xml.Linq.XObject::get_Owner()
extern "C"  XContainer_t1445911831 * XObject_get_Owner_m3004402994 (XObject_t3550811009 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m485833136 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XNodeDocumentOrderComparer/CompareResult System.Xml.Linq.XNodeDocumentOrderComparer::CompareSibling(System.Xml.Linq.XNode,System.Xml.Linq.XNode,System.Xml.Linq.XNodeDocumentOrderComparer/CompareResult)
extern "C"  int32_t XNodeDocumentOrderComparer_CompareSibling_m1852759449 (XNodeDocumentOrderComparer_t1208684534 * __this, XNode_t2707504214 * ___n10, XNode_t2707504214 * ___n21, int32_t ___forSameValue2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Linq.XNodeEqualityComparer::Equals(System.Xml.Linq.XNode,System.Xml.Linq.XNode)
extern "C"  bool XNodeEqualityComparer_Equals_m3412641323 (XNodeEqualityComparer_t3116038621 * __this, XNode_t2707504214 * ___n10, XNode_t2707504214 * ___n21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Linq.XNodeEqualityComparer::GetHashCode(System.Xml.Linq.XNode)
extern "C"  int32_t XNodeEqualityComparer_GetHashCode_m2349713071 (XNodeEqualityComparer_t3116038621 * __this, XNode_t2707504214 * ___node0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::get_Declaration()
extern "C"  XDeclaration_t3367285402 * XDocument_get_Declaration_m2764232986 (XDocument_t2733326047 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Linq.XNodeEqualityComparer::Equals(System.Xml.Linq.XDeclaration,System.Xml.Linq.XDeclaration)
extern "C"  bool XNodeEqualityComparer_Equals_m2405644035 (XNodeEqualityComparer_t3116038621 * __this, XDeclaration_t3367285402 * ___d10, XDeclaration_t3367285402 * ___d21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Linq.XNodeEqualityComparer::Equals(System.Xml.Linq.XAttribute,System.Xml.Linq.XAttribute)
extern "C"  bool XNodeEqualityComparer_Equals_m163327531 (XNodeEqualityComparer_t3116038621 * __this, XAttribute_t3858477518 * ___a10, XAttribute_t3858477518 * ___a21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XComment::get_Value()
extern "C"  String_t* XComment_get_Value_m962028537 (XComment_t1618005895 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XProcessingInstruction::get_Target()
extern "C"  String_t* XProcessingInstruction_get_Target_m627615819 (XProcessingInstruction_t2854903359 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XProcessingInstruction::get_Data()
extern "C"  String_t* XProcessingInstruction_get_Data_m705442580 (XProcessingInstruction_t2854903359 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XDocumentType::get_Name()
extern "C"  String_t* XDocumentType_get_Name_m364384709 (XDocumentType_t738990919 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XDocumentType::get_PublicId()
extern "C"  String_t* XDocumentType_get_PublicId_m877542134 (XDocumentType_t738990919 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XDocumentType::get_SystemId()
extern "C"  String_t* XDocumentType_get_SystemId_m594286306 (XDocumentType_t738990919 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XDocumentType::get_InternalSubset()
extern "C"  String_t* XDocumentType_get_InternalSubset_m1487579211 (XDocumentType_t738990919 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XDeclaration::get_Version()
extern "C"  String_t* XDeclaration_get_Version_m2743306735 (XDeclaration_t3367285402 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Linq.XDeclaration::get_Encoding()
extern "C"  String_t* XDeclaration_get_Encoding_m2963864996 (XDeclaration_t3367285402 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Linq.XNodeEqualityComparer::GetHashCode(System.Xml.Linq.XDeclaration)
extern "C"  int32_t XNodeEqualityComparer_GetHashCode_m1024769467 (XNodeEqualityComparer_t3116038621 * __this, XDeclaration_t3367285402 * ___d0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Linq.XName::GetHashCode()
extern "C"  int32_t XName_GetHashCode_m518193777 (XName_t785190363 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Linq.XObject::get_LineNumber()
extern "C"  int32_t XObject_get_LineNumber_m677481714 (XObject_t3550811009 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Linq.XObject::get_LinePosition()
extern "C"  int32_t XObject_get_LinePosition_m3752081380 (XObject_t3550811009 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XObject::set_LineNumber(System.Int32)
extern "C"  void XObject_set_LineNumber_m3407035941 (XObject_t3550811009 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XObject::set_LinePosition(System.Int32)
extern "C"  void XObject_set_LinePosition_m4032863679 (XObject_t3550811009 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XObject::set_BaseUri(System.String)
extern "C"  void XObject_set_BaseUri_m3120446180 (XObject_t3550811009 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C"  int32_t Type_GetTypeCode_m1044483454 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.Xml.XmlDateTimeSerializationMode)
extern "C"  String_t* XmlConvert_ToString_m4109013699 (RuntimeObject * __this /* static, unused */, DateTime_t693205669  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Double::ToString(System.String)
extern "C"  String_t* Double_ToString_m2210043919 (double* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String)
extern "C"  String_t* Single_ToString_m2359963436 (float* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
extern "C"  String_t* String_ToLower_m2994460523 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.TimeSpan)
extern "C"  String_t* XmlConvert_ToString_m1759857076 (RuntimeObject * __this /* static, unused */, TimeSpan_t3430258949  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.DateTimeOffset)
extern "C"  String_t* XmlConvert_ToString_m3592787051 (RuntimeObject * __this /* static, unused */, DateTimeOffset_t1362988906  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::.ctor()
extern "C"  void U3CExpandArrayU3Ec__Iterator25__ctor_m1792951425 (U3CExpandArrayU3Ec__Iterator25_t507968046 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Linq.XUtil::Clone(System.Object)
extern "C"  RuntimeObject * XUtil_Clone_m964299053 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XAttribute)
extern "C"  void XAttribute__ctor_m2559189009 (XAttribute_t3858477518 * __this, XAttribute_t3858477518 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XElement)
extern "C"  void XElement__ctor_m2448521297 (XElement_t553821050 * __this, XElement_t553821050 * ___source0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XCData::.ctor(System.Xml.Linq.XCData)
extern "C"  void XCData__ctor_m1754149489 (XCData_t1306050895 * __this, XCData_t1306050895 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XComment::.ctor(System.Xml.Linq.XComment)
extern "C"  void XComment__ctor_m1201847697 (XComment_t1618005895 * __this, XComment_t1618005895 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.Xml.Linq.XProcessingInstruction)
extern "C"  void XProcessingInstruction__ctor_m2560507313 (XProcessingInstruction_t2854903359 * __this, XProcessingInstruction_t2854903359 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XDeclaration::.ctor(System.Xml.Linq.XDeclaration)
extern "C"  void XDeclaration__ctor_m4202021713 (XDeclaration_t3367285402 * __this, XDeclaration_t3367285402 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.Xml.Linq.XDocumentType)
extern "C"  void XDocumentType__ctor_m4083239521 (XDocumentType_t738990919 * __this, XDocumentType_t738990919 * ___other0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor()
extern "C"  void ArgumentException__ctor_m2105824819 (ArgumentException_t3259014390 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Object> System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::System.Collections.Generic.IEnumerable<object>.GetEnumerator()
extern "C"  RuntimeObject* U3CExpandArrayU3Ec__Iterator25_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m634432390 (U3CExpandArrayU3Ec__Iterator25_t507968046 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XAttribute)
extern "C"  void XAttribute__ctor_m2559189009 (XAttribute_t3858477518 * __this, XAttribute_t3858477518 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute__ctor_m2559189009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XObject__ctor_m3797862556(__this, /*hidden argument*/NULL);
		XAttribute_t3858477518 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, _stringLiteral3712335156, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		XAttribute_t3858477518 * L_2 = ___other0;
		NullCheck(L_2);
		XName_t785190363 * L_3 = L_2->get_name_5();
		__this->set_name_5(L_3);
		XAttribute_t3858477518 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_value_6();
		__this->set_value_6(L_5);
		return;
	}
}
// System.Void System.Xml.Linq.XAttribute::.ctor(System.Xml.Linq.XName,System.Object)
extern "C"  void XAttribute__ctor_m2350776210 (XAttribute_t3858477518 * __this, XName_t785190363 * ___name0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute__ctor_m2350776210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XObject__ctor_m3797862556(__this, /*hidden argument*/NULL);
		XName_t785190363 * L_0 = ___name0;
		bool L_1 = XName_op_Equality_m148690364(NULL /*static, unused*/, L_0, (XName_t785190363 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentNullException_t628810857 * L_2 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_2, _stringLiteral2328218955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_001d:
	{
		XName_t785190363 * L_3 = ___name0;
		__this->set_name_5(L_3);
		RuntimeObject * L_4 = ___value1;
		XAttribute_SetValue_m2874773340(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XAttribute::.cctor()
extern "C"  void XAttribute__cctor_m2493520020 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute__cctor_m2493520020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((XAttribute_t3858477518_StaticFields*)il2cpp_codegen_static_fields_for(XAttribute_t3858477518_il2cpp_TypeInfo_var))->set_empty_array_4(((XAttributeU5BU5D_t805402427*)SZArrayNew(XAttributeU5BU5D_t805402427_il2cpp_TypeInfo_var, (uint32_t)0)));
		CharU5BU5D_t1328083999* L_0 = ((CharU5BU5D_t1328083999*)SZArrayNew(CharU5BU5D_t1328083999_il2cpp_TypeInfo_var, (uint32_t)7));
		RuntimeFieldHandle_t2331729674  L_1 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t1486305143____U24U24fieldU2D0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3920580167(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, L_1, /*hidden argument*/NULL);
		((XAttribute_t3858477518_StaticFields*)il2cpp_codegen_static_fields_for(XAttribute_t3858477518_il2cpp_TypeInfo_var))->set_escapeChars_9(L_0);
		return;
	}
}
// System.Boolean System.Xml.Linq.XAttribute::get_IsNamespaceDeclaration()
extern "C"  bool XAttribute_get_IsNamespaceDeclaration_m86030665 (XAttribute_t3858477518 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute_get_IsNamespaceDeclaration_m86030665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		XName_t785190363 * L_0 = __this->get_name_5();
		NullCheck(L_0);
		XNamespace_t1613015075 * L_1 = XName_get_Namespace_m3835650466(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		XNamespace_t1613015075 * L_2 = XNamespace_get_Xmlns_m4214259751(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_3 = XNamespace_op_Equality_m73486322(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_004e;
		}
	}
	{
		XName_t785190363 * L_4 = __this->get_name_5();
		NullCheck(L_4);
		String_t* L_5 = XName_get_LocalName_m995190518(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_5, _stringLiteral351558848, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004b;
		}
	}
	{
		XName_t785190363 * L_7 = __this->get_name_5();
		NullCheck(L_7);
		XNamespace_t1613015075 * L_8 = XName_get_Namespace_m3835650466(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		XNamespace_t1613015075 * L_9 = XNamespace_get_None_m1138320793(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_10 = XNamespace_op_Equality_m73486322(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_10));
		goto IL_004c;
	}

IL_004b:
	{
		G_B4_0 = 0;
	}

IL_004c:
	{
		G_B6_0 = G_B4_0;
		goto IL_004f;
	}

IL_004e:
	{
		G_B6_0 = 1;
	}

IL_004f:
	{
		return (bool)G_B6_0;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XAttribute::get_Name()
extern "C"  XName_t785190363 * XAttribute_get_Name_m2127497767 (XAttribute_t3858477518 * __this, const RuntimeMethod* method)
{
	{
		XName_t785190363 * L_0 = __this->get_name_5();
		return L_0;
	}
}
// System.Xml.Linq.XAttribute System.Xml.Linq.XAttribute::get_NextAttribute()
extern "C"  XAttribute_t3858477518 * XAttribute_get_NextAttribute_m2269700464 (XAttribute_t3858477518 * __this, const RuntimeMethod* method)
{
	{
		XAttribute_t3858477518 * L_0 = __this->get_next_7();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XAttribute::set_NextAttribute(System.Xml.Linq.XAttribute)
extern "C"  void XAttribute_set_NextAttribute_m2644290891 (XAttribute_t3858477518 * __this, XAttribute_t3858477518 * ___value0, const RuntimeMethod* method)
{
	{
		XAttribute_t3858477518 * L_0 = ___value0;
		__this->set_next_7(L_0);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XAttribute::get_NodeType()
extern "C"  int32_t XAttribute_get_NodeType_m1732519816 (XAttribute_t3858477518 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(2);
	}
}
// System.Void System.Xml.Linq.XAttribute::set_PreviousAttribute(System.Xml.Linq.XAttribute)
extern "C"  void XAttribute_set_PreviousAttribute_m2159252545 (XAttribute_t3858477518 * __this, XAttribute_t3858477518 * ___value0, const RuntimeMethod* method)
{
	{
		XAttribute_t3858477518 * L_0 = ___value0;
		__this->set_previous_8(L_0);
		return;
	}
}
// System.String System.Xml.Linq.XAttribute::get_Value()
extern "C"  String_t* XAttribute_get_Value_m3732914648 (XAttribute_t3858477518 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_6();
		String_t* L_1 = XUtil_ToString_m2221736954(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.Linq.XAttribute::set_Value(System.String)
extern "C"  void XAttribute_set_Value_m4018836401 (XAttribute_t3858477518 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_value_6(L_0);
		return;
	}
}
// System.Void System.Xml.Linq.XAttribute::Remove()
extern "C"  void XAttribute_Remove_m4091960603 (XAttribute_t3858477518 * __this, const RuntimeMethod* method)
{
	{
		XElement_t553821050 * L_0 = XObject_get_Parent_m714109026(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_008e;
		}
	}
	{
		XAttribute_t3858477518 * L_1 = __this->get_next_7();
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		XAttribute_t3858477518 * L_2 = __this->get_next_7();
		XAttribute_t3858477518 * L_3 = __this->get_previous_8();
		NullCheck(L_2);
		L_2->set_previous_8(L_3);
	}

IL_0027:
	{
		XAttribute_t3858477518 * L_4 = __this->get_previous_8();
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		XAttribute_t3858477518 * L_5 = __this->get_previous_8();
		XAttribute_t3858477518 * L_6 = __this->get_next_7();
		NullCheck(L_5);
		L_5->set_next_7(L_6);
	}

IL_0043:
	{
		XElement_t553821050 * L_7 = XObject_get_Parent_m714109026(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		XAttribute_t3858477518 * L_8 = XElement_get_FirstAttribute_m3661704431(L_7, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(XAttribute_t3858477518 *)L_8) == ((RuntimeObject*)(XAttribute_t3858477518 *)__this))))
		{
			goto IL_0065;
		}
	}
	{
		XElement_t553821050 * L_9 = XObject_get_Parent_m714109026(__this, /*hidden argument*/NULL);
		XAttribute_t3858477518 * L_10 = __this->get_next_7();
		NullCheck(L_9);
		XElement_set_FirstAttribute_m3741633158(L_9, L_10, /*hidden argument*/NULL);
	}

IL_0065:
	{
		XElement_t553821050 * L_11 = XObject_get_Parent_m714109026(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		XAttribute_t3858477518 * L_12 = XElement_get_LastAttribute_m85173095(L_11, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(XAttribute_t3858477518 *)L_12) == ((RuntimeObject*)(XAttribute_t3858477518 *)__this))))
		{
			goto IL_0087;
		}
	}
	{
		XElement_t553821050 * L_13 = XObject_get_Parent_m714109026(__this, /*hidden argument*/NULL);
		XAttribute_t3858477518 * L_14 = __this->get_previous_8();
		NullCheck(L_13);
		XElement_set_LastAttribute_m3614769194(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0087:
	{
		XObject_SetOwner_m582264412(__this, (XContainer_t1445911831 *)NULL, /*hidden argument*/NULL);
	}

IL_008e:
	{
		__this->set_next_7((XAttribute_t3858477518 *)NULL);
		__this->set_previous_8((XAttribute_t3858477518 *)NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XAttribute::SetValue(System.Object)
extern "C"  void XAttribute_SetValue_m2874773340 (XAttribute_t3858477518 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute_SetValue_m2874773340_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, _stringLiteral1803325615, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___value0;
		String_t* L_3 = XUtil_ToString_m2221736954(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_value_6(L_3);
		return;
	}
}
// System.String System.Xml.Linq.XAttribute::ToString()
extern "C"  String_t* XAttribute_ToString_m2658312316 (XAttribute_t3858477518 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XAttribute_ToString_m2658312316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3946851802(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		XName_t785190363 * L_2 = __this->get_name_5();
		NullCheck(L_2);
		String_t* L_3 = XName_ToString_m2526618213(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m3636508479(L_1, L_3, /*hidden argument*/NULL);
		StringBuilder_t * L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_Append_m3636508479(L_4, _stringLiteral3943473371, /*hidden argument*/NULL);
		V_1 = 0;
	}

IL_0026:
	{
		String_t* L_5 = __this->get_value_6();
		IL2CPP_RUNTIME_CLASS_INIT(XAttribute_t3858477518_il2cpp_TypeInfo_var);
		CharU5BU5D_t1328083999* L_6 = ((XAttribute_t3858477518_StaticFields*)il2cpp_codegen_static_fields_for(XAttribute_t3858477518_il2cpp_TypeInfo_var))->get_escapeChars_9();
		int32_t L_7 = V_1;
		NullCheck(L_5);
		int32_t L_8 = String_IndexOfAny_m2027595557(L_5, L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		StringBuilder_t * L_11 = V_0;
		String_t* L_12 = __this->get_value_6();
		int32_t L_13 = V_1;
		String_t* L_14 = __this->get_value_6();
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m1606060069(L_14, /*hidden argument*/NULL);
		int32_t L_16 = V_1;
		NullCheck(L_11);
		StringBuilder_Append_m1462406979(L_11, L_12, L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16)), /*hidden argument*/NULL);
		goto IL_0073;
	}

IL_0066:
	{
		StringBuilder_t * L_17 = V_0;
		String_t* L_18 = __this->get_value_6();
		NullCheck(L_17);
		StringBuilder_Append_m3636508479(L_17, L_18, /*hidden argument*/NULL);
	}

IL_0073:
	{
		StringBuilder_t * L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_Append_m3636508479(L_19, _stringLiteral372029312, /*hidden argument*/NULL);
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = StringBuilder_ToString_m1507807375(L_20, /*hidden argument*/NULL);
		return L_21;
	}

IL_0086:
	{
		StringBuilder_t * L_22 = V_0;
		String_t* L_23 = __this->get_value_6();
		int32_t L_24 = V_1;
		int32_t L_25 = V_2;
		int32_t L_26 = V_1;
		NullCheck(L_22);
		StringBuilder_Append_m1462406979(L_22, L_23, L_24, ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26)), /*hidden argument*/NULL);
		String_t* L_27 = __this->get_value_6();
		int32_t L_28 = V_2;
		NullCheck(L_27);
		Il2CppChar L_29 = String_get_Chars_m4230566705(L_27, L_28, /*hidden argument*/NULL);
		V_3 = L_29;
		Il2CppChar L_30 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_0151;
			}
			case 1:
			{
				goto IL_0140;
			}
			case 2:
			{
				goto IL_00c1;
			}
			case 3:
			{
				goto IL_00c1;
			}
			case 4:
			{
				goto IL_012f;
			}
		}
	}

IL_00c1:
	{
		Il2CppChar L_31 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)((int32_t)60))))
		{
			case 0:
			{
				goto IL_00fc;
			}
			case 1:
			{
				goto IL_00d6;
			}
			case 2:
			{
				goto IL_010d;
			}
		}
	}

IL_00d6:
	{
		Il2CppChar L_32 = V_3;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)34))))
		{
			goto IL_011e;
		}
	}
	{
		Il2CppChar L_33 = V_3;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)38))))
		{
			goto IL_00eb;
		}
	}
	{
		goto IL_0162;
	}

IL_00eb:
	{
		StringBuilder_t * L_34 = V_0;
		NullCheck(L_34);
		StringBuilder_Append_m3636508479(L_34, _stringLiteral2206518777, /*hidden argument*/NULL);
		goto IL_0162;
	}

IL_00fc:
	{
		StringBuilder_t * L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_Append_m3636508479(L_35, _stringLiteral352199793, /*hidden argument*/NULL);
		goto IL_0162;
	}

IL_010d:
	{
		StringBuilder_t * L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_Append_m3636508479(L_36, _stringLiteral1259525396, /*hidden argument*/NULL);
		goto IL_0162;
	}

IL_011e:
	{
		StringBuilder_t * L_37 = V_0;
		NullCheck(L_37);
		StringBuilder_Append_m3636508479(L_37, _stringLiteral1693198914, /*hidden argument*/NULL);
		goto IL_0162;
	}

IL_012f:
	{
		StringBuilder_t * L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_Append_m3636508479(L_38, _stringLiteral2212392330, /*hidden argument*/NULL);
		goto IL_0162;
	}

IL_0140:
	{
		StringBuilder_t * L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_Append_m3636508479(L_39, _stringLiteral1452877443, /*hidden argument*/NULL);
		goto IL_0162;
	}

IL_0151:
	{
		StringBuilder_t * L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_Append_m3636508479(L_40, _stringLiteral404389339, /*hidden argument*/NULL);
		goto IL_0162;
	}

IL_0162:
	{
		int32_t L_41 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		goto IL_0026;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XCData::.ctor(System.String)
extern "C"  void XCData__ctor_m482046048 (XCData_t1306050895 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		XText__ctor_m2852593626(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XCData::.ctor(System.Xml.Linq.XCData)
extern "C"  void XCData__ctor_m1754149489 (XCData_t1306050895 * __this, XCData_t1306050895 * ___other0, const RuntimeMethod* method)
{
	{
		XCData_t1306050895 * L_0 = ___other0;
		XText__ctor_m2404229261(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XCData::get_NodeType()
extern "C"  int32_t XCData_get_NodeType_m3940428509 (XCData_t1306050895 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(4);
	}
}
// System.Void System.Xml.Linq.XCData::WriteTo(System.Xml.XmlWriter)
extern "C"  void XCData_WriteTo_m2964317266 (XCData_t1306050895 * __this, XmlWriter_t1048088568 * ___w0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XCData_WriteTo_m2964317266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t * V_1 = NULL;
	int32_t V_2 = 0;
	XmlWriter_t1048088568 * G_B14_0 = NULL;
	XmlWriter_t1048088568 * G_B13_0 = NULL;
	String_t* G_B15_0 = NULL;
	XmlWriter_t1048088568 * G_B15_1 = NULL;
	{
		V_0 = 0;
		V_1 = (StringBuilder_t *)NULL;
		V_2 = 0;
		goto IL_0079;
	}

IL_000b:
	{
		String_t* L_0 = XText_get_Value_m334359707(__this, /*hidden argument*/NULL);
		int32_t L_1 = V_2;
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m4230566705(L_0, L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_3 = XText_get_Value_m334359707(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_2;
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m4230566705(L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0075;
		}
	}
	{
		String_t* L_6 = XText_get_Value_m334359707(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Il2CppChar L_8 = String_get_Chars_m4230566705(L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)2)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0075;
		}
	}
	{
		StringBuilder_t * L_9 = V_1;
		if (L_9)
		{
			goto IL_0054;
		}
	}
	{
		StringBuilder_t * L_10 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3946851802(L_10, /*hidden argument*/NULL);
		V_1 = L_10;
	}

IL_0054:
	{
		StringBuilder_t * L_11 = V_1;
		String_t* L_12 = XText_get_Value_m334359707(__this, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		NullCheck(L_11);
		StringBuilder_Append_m1462406979(L_11, L_12, L_13, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15)), /*hidden argument*/NULL);
		StringBuilder_t * L_16 = V_1;
		NullCheck(L_16);
		StringBuilder_Append_m3636508479(L_16, _stringLiteral1064894, /*hidden argument*/NULL);
		int32_t L_17 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)3));
	}

IL_0075:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0079:
	{
		int32_t L_19 = V_2;
		String_t* L_20 = XText_get_Value_m334359707(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1606060069(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)2)))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_22 = V_0;
		if (!L_22)
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_23 = V_0;
		String_t* L_24 = XText_get_Value_m334359707(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = String_get_Length_m1606060069(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_23) == ((int32_t)L_25)))
		{
			goto IL_00be;
		}
	}
	{
		StringBuilder_t * L_26 = V_1;
		String_t* L_27 = XText_get_Value_m334359707(__this, /*hidden argument*/NULL);
		int32_t L_28 = V_0;
		String_t* L_29 = XText_get_Value_m334359707(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_m1606060069(L_29, /*hidden argument*/NULL);
		int32_t L_31 = V_0;
		NullCheck(L_26);
		StringBuilder_Append_m1462406979(L_26, L_27, L_28, ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31)), /*hidden argument*/NULL);
	}

IL_00be:
	{
		XmlWriter_t1048088568 * L_32 = ___w0;
		StringBuilder_t * L_33 = V_1;
		G_B13_0 = L_32;
		if (L_33)
		{
			G_B14_0 = L_32;
			goto IL_00d0;
		}
	}
	{
		String_t* L_34 = XText_get_Value_m334359707(__this, /*hidden argument*/NULL);
		G_B15_0 = L_34;
		G_B15_1 = G_B13_0;
		goto IL_00d6;
	}

IL_00d0:
	{
		StringBuilder_t * L_35 = V_1;
		NullCheck(L_35);
		String_t* L_36 = StringBuilder_ToString_m1507807375(L_35, /*hidden argument*/NULL);
		G_B15_0 = L_36;
		G_B15_1 = G_B14_0;
	}

IL_00d6:
	{
		NullCheck(G_B15_1);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlWriter::WriteCData(System.String) */, G_B15_1, G_B15_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XComment::.ctor(System.String)
extern "C"  void XComment__ctor_m2882971392 (XComment_t1618005895 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XComment__ctor_m2882971392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNode_t2707504214_il2cpp_TypeInfo_var);
		XNode__ctor_m3635466201(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		__this->set_value_8(L_0);
		return;
	}
}
// System.Void System.Xml.Linq.XComment::.ctor(System.Xml.Linq.XComment)
extern "C"  void XComment__ctor_m1201847697 (XComment_t1618005895 * __this, XComment_t1618005895 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XComment__ctor_m1201847697_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNode_t2707504214_il2cpp_TypeInfo_var);
		XNode__ctor_m3635466201(__this, /*hidden argument*/NULL);
		XComment_t1618005895 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_value_8();
		__this->set_value_8(L_1);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XComment::get_NodeType()
extern "C"  int32_t XComment_get_NodeType_m201800269 (XComment_t1618005895 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(8);
	}
}
// System.String System.Xml.Linq.XComment::get_Value()
extern "C"  String_t* XComment_get_Value_m962028537 (XComment_t1618005895 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_8();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XComment::WriteTo(System.Xml.XmlWriter)
extern "C"  void XComment_WriteTo_m1580837578 (XComment_t1618005895 * __this, XmlWriter_t1048088568 * ___w0, const RuntimeMethod* method)
{
	{
		XmlWriter_t1048088568 * L_0 = ___w0;
		String_t* L_1 = __this->get_value_8();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Xml.XmlWriter::WriteComment(System.String) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XContainer::.ctor()
extern "C"  void XContainer__ctor_m3187361404 (XContainer_t1445911831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer__ctor_m3187361404_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNode_t2707504214_il2cpp_TypeInfo_var);
		XNode__ctor_m3635466201(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XContainer::get_FirstNode()
extern "C"  XNode_t2707504214 * XContainer_get_FirstNode_m3344509478 (XContainer_t1445911831 * __this, const RuntimeMethod* method)
{
	{
		XNode_t2707504214 * L_0 = __this->get_first_8();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XContainer::set_FirstNode(System.Xml.Linq.XNode)
extern "C"  void XContainer_set_FirstNode_m766455929 (XContainer_t1445911831 * __this, XNode_t2707504214 * ___value0, const RuntimeMethod* method)
{
	{
		XNode_t2707504214 * L_0 = ___value0;
		__this->set_first_8(L_0);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XContainer::get_LastNode()
extern "C"  XNode_t2707504214 * XContainer_get_LastNode_m375821822 (XContainer_t1445911831 * __this, const RuntimeMethod* method)
{
	{
		XNode_t2707504214 * L_0 = __this->get_last_9();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XContainer::set_LastNode(System.Xml.Linq.XNode)
extern "C"  void XContainer_set_LastNode_m2825450477 (XContainer_t1445911831 * __this, XNode_t2707504214 * ___value0, const RuntimeMethod* method)
{
	{
		XNode_t2707504214 * L_0 = ___value0;
		__this->set_last_9(L_0);
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::CheckChildType(System.Object,System.Boolean)
extern "C"  void XContainer_CheckChildType_m2935453595 (XContainer_t1445911831 * __this, RuntimeObject * ___o0, bool ___addFirst1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_CheckChildType_m2935453595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___o0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject * L_1 = ___o0;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject * L_2 = ___o0;
		if (!((XNode_t2707504214 *)IsInstClass((RuntimeObject*)L_2, XNode_t2707504214_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}

IL_001c:
	{
		return;
	}

IL_001d:
	{
		RuntimeObject * L_3 = ___o0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_3, IEnumerable_t2911409499_il2cpp_TypeInfo_var)))
		{
			goto IL_006b;
		}
	}
	{
		RuntimeObject * L_4 = ___o0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_4, IEnumerable_t2911409499_il2cpp_TypeInfo_var)));
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t2911409499_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_4, IEnumerable_t2911409499_il2cpp_TypeInfo_var)));
		V_1 = L_5;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0039:
		{
			RuntimeObject* L_6 = V_1;
			NullCheck(L_6);
			RuntimeObject * L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_6);
			V_0 = L_7;
			RuntimeObject * L_8 = V_0;
			bool L_9 = ___addFirst1;
			XContainer_CheckChildType_m2935453595(__this, L_8, L_9, /*hidden argument*/NULL);
		}

IL_0048:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0039;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_0058);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			RuntimeObject* L_13 = V_2;
			if (L_13)
			{
				goto IL_0063;
			}
		}

IL_0062:
		{
			IL2CPP_END_FINALLY(88)
		}

IL_0063:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(88)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006a:
	{
		return;
	}

IL_006b:
	{
		RuntimeObject * L_15 = ___o0;
		NullCheck(L_15);
		Type_t * L_16 = Object_GetType_m191970594(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m56707527(NULL /*static, unused*/, _stringLiteral1743330761, L_16, /*hidden argument*/NULL);
		ArgumentException_t3259014390 * L_18 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18);
	}
}
// System.Void System.Xml.Linq.XContainer::Add(System.Object)
extern "C"  void XContainer_Add_m3035239173 (XContainer_t1445911831 * __this, RuntimeObject * ___content0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_Add_m3035239173_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___content0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		RuntimeObject * L_1 = ___content0;
		RuntimeObject* L_2 = XUtil_ExpandArray_m1006964352(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t2911409499_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_0018:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_4);
			V_0 = L_5;
			RuntimeObject * L_6 = V_0;
			XNode_t2707504214 * L_7 = __this->get_last_9();
			bool L_8 = VirtFuncInvoker4< bool, RuntimeObject *, bool, XNode_t2707504214 *, bool >::Invoke(9 /* System.Boolean System.Xml.Linq.XContainer::OnAddingObject(System.Object,System.Boolean,System.Xml.Linq.XNode,System.Boolean) */, __this, L_6, (bool)0, L_7, (bool)0);
			if (L_8)
			{
				goto IL_003f;
			}
		}

IL_0033:
		{
			RuntimeObject * L_9 = V_0;
			XNode_t2707504214 * L_10 = XUtil_ToNode_m2489943695(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
			XContainer_AddNode_m3593198507(__this, L_10, /*hidden argument*/NULL);
		}

IL_003f:
		{
			RuntimeObject* L_11 = V_1;
			NullCheck(L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_0018;
			}
		}

IL_004a:
		{
			IL2CPP_LEAVE(0x61, FINALLY_004f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004f;
	}

FINALLY_004f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_1;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			RuntimeObject* L_14 = V_2;
			if (L_14)
			{
				goto IL_005a;
			}
		}

IL_0059:
		{
			IL2CPP_END_FINALLY(79)
		}

IL_005a:
		{
			RuntimeObject* L_15 = V_2;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_15);
			IL2CPP_END_FINALLY(79)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(79)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0061:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XContainer::AddNode(System.Xml.Linq.XNode)
extern "C"  void XContainer_AddNode_m3593198507 (XContainer_t1445911831 * __this, XNode_t2707504214 * ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_AddNode_m3593198507_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XNode_t2707504214 * V_0 = NULL;
	{
		XNode_t2707504214 * L_0 = ___n0;
		XContainer_CheckChildType_m2935453595(__this, L_0, (bool)0, /*hidden argument*/NULL);
		XNode_t2707504214 * L_1 = ___n0;
		RuntimeObject * L_2 = XUtil_GetDetachedObject_m293754142(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		___n0 = ((XNode_t2707504214 *)CastclassClass((RuntimeObject*)L_2, XNode_t2707504214_il2cpp_TypeInfo_var));
		XNode_t2707504214 * L_3 = ___n0;
		NullCheck(L_3);
		XObject_SetOwner_m582264412(L_3, __this, /*hidden argument*/NULL);
		XNode_t2707504214 * L_4 = __this->get_first_8();
		if (L_4)
		{
			goto IL_003c;
		}
	}
	{
		XNode_t2707504214 * L_5 = ___n0;
		XNode_t2707504214 * L_6 = L_5;
		V_0 = L_6;
		__this->set_first_8(L_6);
		XNode_t2707504214 * L_7 = V_0;
		__this->set_last_9(L_7);
		goto IL_005b;
	}

IL_003c:
	{
		XNode_t2707504214 * L_8 = __this->get_last_9();
		XNode_t2707504214 * L_9 = ___n0;
		NullCheck(L_8);
		XNode_set_NextNode_m2612555387(L_8, L_9, /*hidden argument*/NULL);
		XNode_t2707504214 * L_10 = ___n0;
		XNode_t2707504214 * L_11 = __this->get_last_9();
		NullCheck(L_10);
		XNode_set_PreviousNode_m1918335957(L_10, L_11, /*hidden argument*/NULL);
		XNode_t2707504214 * L_12 = ___n0;
		__this->set_last_9(L_12);
	}

IL_005b:
	{
		return;
	}
}
// System.Boolean System.Xml.Linq.XContainer::OnAddingObject(System.Object,System.Boolean,System.Xml.Linq.XNode,System.Boolean)
extern "C"  bool XContainer_OnAddingObject_m4085827393 (XContainer_t1445911831 * __this, RuntimeObject * ___o0, bool ___rejectAttribute1, XNode_t2707504214 * ___refNode2, bool ___addFirst3, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode> System.Xml.Linq.XContainer::Nodes()
extern "C"  RuntimeObject* XContainer_Nodes_m1386197549 (XContainer_t1445911831 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_Nodes_m1386197549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CNodesU3Ec__Iterator1A_t1473861320 * V_0 = NULL;
	{
		U3CNodesU3Ec__Iterator1A_t1473861320 * L_0 = (U3CNodesU3Ec__Iterator1A_t1473861320 *)il2cpp_codegen_object_new(U3CNodesU3Ec__Iterator1A_t1473861320_il2cpp_TypeInfo_var);
		U3CNodesU3Ec__Iterator1A__ctor_m4168269813(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CNodesU3Ec__Iterator1A_t1473861320 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__this_4(__this);
		U3CNodesU3Ec__Iterator1A_t1473861320 * L_2 = V_0;
		U3CNodesU3Ec__Iterator1A_t1473861320 * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_U24PC_2(((int32_t)-2));
		return L_3;
	}
}
// System.Void System.Xml.Linq.XContainer::ReadContentFrom(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
extern "C"  void XContainer_ReadContentFrom_m14040437 (XContainer_t1445911831 * __this, XmlReader_t3675626668 * ___reader0, int32_t ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XContainer_ReadContentFrom_m14040437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0024;
	}

IL_0005:
	{
		XmlReader_t3675626668 * L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0017;
		}
	}
	{
		goto IL_002f;
	}

IL_0017:
	{
		XmlReader_t3675626668 * L_2 = ___reader0;
		int32_t L_3 = ___options1;
		IL2CPP_RUNTIME_CLASS_INIT(XNode_t2707504214_il2cpp_TypeInfo_var);
		XNode_t2707504214 * L_4 = XNode_ReadFrom_m1777325942(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		XContainer_Add_m3035239173(__this, L_4, /*hidden argument*/NULL);
	}

IL_0024:
	{
		XmlReader_t3675626668 * L_5 = ___reader0;
		NullCheck(L_5);
		bool L_6 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Xml.XmlReader::get_EOF() */, L_5);
		if (!L_6)
		{
			goto IL_0005;
		}
	}

IL_002f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::.ctor()
extern "C"  void U3CNodesU3Ec__Iterator1A__ctor_m4168269813 (U3CNodesU3Ec__Iterator1A_t1473861320 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::System.Collections.Generic.IEnumerator<System.Xml.Linq.XNode>.get_Current()
extern "C"  XNode_t2707504214 * U3CNodesU3Ec__Iterator1A_System_Collections_Generic_IEnumeratorU3CSystem_Xml_Linq_XNodeU3E_get_Current_m554163480 (U3CNodesU3Ec__Iterator1A_t1473861320 * __this, const RuntimeMethod* method)
{
	{
		XNode_t2707504214 * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CNodesU3Ec__Iterator1A_System_Collections_IEnumerator_get_Current_m2663567463 (U3CNodesU3Ec__Iterator1A_t1473861320 * __this, const RuntimeMethod* method)
{
	{
		XNode_t2707504214 * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Collections.IEnumerator System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CNodesU3Ec__Iterator1A_System_Collections_IEnumerable_GetEnumerator_m2065522060 (U3CNodesU3Ec__Iterator1A_t1473861320 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CNodesU3Ec__Iterator1A_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XNodeU3E_GetEnumerator_m2816027373(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode> System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::System.Collections.Generic.IEnumerable<System.Xml.Linq.XNode>.GetEnumerator()
extern "C"  RuntimeObject* U3CNodesU3Ec__Iterator1A_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XNodeU3E_GetEnumerator_m2816027373 (U3CNodesU3Ec__Iterator1A_t1473861320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNodesU3Ec__Iterator1A_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XNodeU3E_GetEnumerator_m2816027373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CNodesU3Ec__Iterator1A_t1473861320 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_2();
		int32_t L_1 = Interlocked_CompareExchange_m3339239614(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CNodesU3Ec__Iterator1A_t1473861320 * L_2 = (U3CNodesU3Ec__Iterator1A_t1473861320 *)il2cpp_codegen_object_new(U3CNodesU3Ec__Iterator1A_t1473861320_il2cpp_TypeInfo_var);
		U3CNodesU3Ec__Iterator1A__ctor_m4168269813(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CNodesU3Ec__Iterator1A_t1473861320 * L_3 = V_0;
		XContainer_t1445911831 * L_4 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_3);
		L_3->set_U3CU3Ef__this_4(L_4);
		U3CNodesU3Ec__Iterator1A_t1473861320 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::MoveNext()
extern "C"  bool U3CNodesU3Ec__Iterator1A_MoveNext_m102305355 (U3CNodesU3Ec__Iterator1A_t1473861320 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_2();
		V_0 = L_0;
		__this->set_U24PC_2((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_007e;
	}

IL_0021:
	{
		XContainer_t1445911831 * L_2 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_2);
		XNode_t2707504214 * L_3 = XContainer_get_FirstNode_m3344509478(L_2, /*hidden argument*/NULL);
		__this->set_U3CnU3E__0_0(L_3);
		goto IL_006c;
	}

IL_0037:
	{
		XNode_t2707504214 * L_4 = __this->get_U3CnU3E__0_0();
		NullCheck(L_4);
		XNode_t2707504214 * L_5 = XNode_get_NextNode_m1164634702(L_4, /*hidden argument*/NULL);
		__this->set_U3CnextU3E__1_1(L_5);
		XNode_t2707504214 * L_6 = __this->get_U3CnU3E__0_0();
		__this->set_U24current_3(L_6);
		__this->set_U24PC_2(1);
		goto IL_0080;
	}

IL_0060:
	{
		XNode_t2707504214 * L_7 = __this->get_U3CnextU3E__1_1();
		__this->set_U3CnU3E__0_0(L_7);
	}

IL_006c:
	{
		XNode_t2707504214 * L_8 = __this->get_U3CnU3E__0_0();
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		__this->set_U24PC_2((-1));
	}

IL_007e:
	{
		return (bool)0;
	}

IL_0080:
	{
		return (bool)1;
	}
	// Dead block : IL_0082: ldloc.1
}
// System.Void System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::Dispose()
extern "C"  void U3CNodesU3Ec__Iterator1A_Dispose_m98927568 (U3CNodesU3Ec__Iterator1A_t1473861320 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24PC_2((-1));
		return;
	}
}
// System.Void System.Xml.Linq.XContainer/<Nodes>c__Iterator1A::Reset()
extern "C"  void U3CNodesU3Ec__Iterator1A_Reset_m555334754 (U3CNodesU3Ec__Iterator1A_t1473861320 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CNodesU3Ec__Iterator1A_Reset_m555334754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XDeclaration::.ctor(System.String,System.String,System.String)
extern "C"  void XDeclaration__ctor_m617866219 (XDeclaration_t3367285402 * __this, String_t* ___version0, String_t* ___encoding1, String_t* ___standalone2, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___version0;
		__this->set_version_2(L_0);
		String_t* L_1 = ___encoding1;
		__this->set_encoding_0(L_1);
		String_t* L_2 = ___standalone2;
		__this->set_standalone_1(L_2);
		return;
	}
}
// System.Void System.Xml.Linq.XDeclaration::.ctor(System.Xml.Linq.XDeclaration)
extern "C"  void XDeclaration__ctor_m4202021713 (XDeclaration_t3367285402 * __this, XDeclaration_t3367285402 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDeclaration__ctor_m4202021713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		XDeclaration_t3367285402 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, _stringLiteral3712335156, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		XDeclaration_t3367285402 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_version_2();
		__this->set_version_2(L_3);
		XDeclaration_t3367285402 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_encoding_0();
		__this->set_encoding_0(L_5);
		XDeclaration_t3367285402 * L_6 = ___other0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_standalone_1();
		__this->set_standalone_1(L_7);
		return;
	}
}
// System.String System.Xml.Linq.XDeclaration::get_Encoding()
extern "C"  String_t* XDeclaration_get_Encoding_m2963864996 (XDeclaration_t3367285402 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_encoding_0();
		return L_0;
	}
}
// System.String System.Xml.Linq.XDeclaration::get_Standalone()
extern "C"  String_t* XDeclaration_get_Standalone_m1945036438 (XDeclaration_t3367285402 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_standalone_1();
		return L_0;
	}
}
// System.String System.Xml.Linq.XDeclaration::get_Version()
extern "C"  String_t* XDeclaration_get_Version_m2743306735 (XDeclaration_t3367285402 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_version_2();
		return L_0;
	}
}
// System.String System.Xml.Linq.XDeclaration::ToString()
extern "C"  String_t* XDeclaration_ToString_m2249492008 (XDeclaration_t3367285402 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDeclaration_ToString_m2249492008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1642385972* G_B2_1 = NULL;
	StringU5BU5D_t1642385972* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1642385972* G_B1_1 = NULL;
	StringU5BU5D_t1642385972* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1642385972* G_B3_2 = NULL;
	StringU5BU5D_t1642385972* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1642385972* G_B5_1 = NULL;
	StringU5BU5D_t1642385972* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1642385972* G_B4_1 = NULL;
	StringU5BU5D_t1642385972* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1642385972* G_B6_2 = NULL;
	StringU5BU5D_t1642385972* G_B6_3 = NULL;
	int32_t G_B8_0 = 0;
	StringU5BU5D_t1642385972* G_B8_1 = NULL;
	StringU5BU5D_t1642385972* G_B8_2 = NULL;
	int32_t G_B7_0 = 0;
	StringU5BU5D_t1642385972* G_B7_1 = NULL;
	StringU5BU5D_t1642385972* G_B7_2 = NULL;
	String_t* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t1642385972* G_B9_2 = NULL;
	StringU5BU5D_t1642385972* G_B9_3 = NULL;
	int32_t G_B11_0 = 0;
	StringU5BU5D_t1642385972* G_B11_1 = NULL;
	StringU5BU5D_t1642385972* G_B11_2 = NULL;
	int32_t G_B10_0 = 0;
	StringU5BU5D_t1642385972* G_B10_1 = NULL;
	StringU5BU5D_t1642385972* G_B10_2 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t1642385972* G_B12_2 = NULL;
	StringU5BU5D_t1642385972* G_B12_3 = NULL;
	int32_t G_B14_0 = 0;
	StringU5BU5D_t1642385972* G_B14_1 = NULL;
	StringU5BU5D_t1642385972* G_B14_2 = NULL;
	int32_t G_B13_0 = 0;
	StringU5BU5D_t1642385972* G_B13_1 = NULL;
	StringU5BU5D_t1642385972* G_B13_2 = NULL;
	String_t* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t1642385972* G_B15_2 = NULL;
	StringU5BU5D_t1642385972* G_B15_3 = NULL;
	int32_t G_B17_0 = 0;
	StringU5BU5D_t1642385972* G_B17_1 = NULL;
	StringU5BU5D_t1642385972* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	StringU5BU5D_t1642385972* G_B16_1 = NULL;
	StringU5BU5D_t1642385972* G_B16_2 = NULL;
	String_t* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_t1642385972* G_B18_2 = NULL;
	StringU5BU5D_t1642385972* G_B18_3 = NULL;
	int32_t G_B20_0 = 0;
	StringU5BU5D_t1642385972* G_B20_1 = NULL;
	StringU5BU5D_t1642385972* G_B20_2 = NULL;
	int32_t G_B19_0 = 0;
	StringU5BU5D_t1642385972* G_B19_1 = NULL;
	StringU5BU5D_t1642385972* G_B19_2 = NULL;
	String_t* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_t1642385972* G_B21_2 = NULL;
	StringU5BU5D_t1642385972* G_B21_3 = NULL;
	int32_t G_B23_0 = 0;
	StringU5BU5D_t1642385972* G_B23_1 = NULL;
	StringU5BU5D_t1642385972* G_B23_2 = NULL;
	int32_t G_B22_0 = 0;
	StringU5BU5D_t1642385972* G_B22_1 = NULL;
	StringU5BU5D_t1642385972* G_B22_2 = NULL;
	String_t* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	StringU5BU5D_t1642385972* G_B24_2 = NULL;
	StringU5BU5D_t1642385972* G_B24_3 = NULL;
	int32_t G_B26_0 = 0;
	StringU5BU5D_t1642385972* G_B26_1 = NULL;
	StringU5BU5D_t1642385972* G_B26_2 = NULL;
	int32_t G_B25_0 = 0;
	StringU5BU5D_t1642385972* G_B25_1 = NULL;
	StringU5BU5D_t1642385972* G_B25_2 = NULL;
	String_t* G_B27_0 = NULL;
	int32_t G_B27_1 = 0;
	StringU5BU5D_t1642385972* G_B27_2 = NULL;
	StringU5BU5D_t1642385972* G_B27_3 = NULL;
	{
		StringU5BU5D_t1642385972* L_0 = ((StringU5BU5D_t1642385972*)SZArrayNew(StringU5BU5D_t1642385972_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11)));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral881864128);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral881864128);
		StringU5BU5D_t1642385972* L_1 = L_0;
		String_t* L_2 = __this->get_version_2();
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0026;
		}
	}
	{
		G_B3_0 = _stringLiteral3469295573;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0027;
	}

IL_0026:
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0027:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1642385972* L_3 = G_B3_3;
		String_t* L_4 = __this->get_version_2();
		G_B4_0 = 2;
		G_B4_1 = L_3;
		G_B4_2 = L_3;
		if (!L_4)
		{
			G_B5_0 = 2;
			G_B5_1 = L_3;
			G_B5_2 = L_3;
			goto IL_0040;
		}
	}
	{
		String_t* L_5 = __this->get_version_2();
		G_B6_0 = L_5;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0041;
	}

IL_0040:
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1642385972* L_6 = G_B6_3;
		String_t* L_7 = __this->get_version_2();
		G_B7_0 = 3;
		G_B7_1 = L_6;
		G_B7_2 = L_6;
		if (!L_7)
		{
			G_B8_0 = 3;
			G_B8_1 = L_6;
			G_B8_2 = L_6;
			goto IL_0059;
		}
	}
	{
		G_B9_0 = _stringLiteral372029312;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_005a;
	}

IL_0059:
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_005a:
	{
		NullCheck(G_B9_2);
		ArrayElementTypeCheck (G_B9_2, G_B9_0);
		(G_B9_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B9_1), (String_t*)G_B9_0);
		StringU5BU5D_t1642385972* L_8 = G_B9_3;
		String_t* L_9 = __this->get_encoding_0();
		G_B10_0 = 4;
		G_B10_1 = L_8;
		G_B10_2 = L_8;
		if (!L_9)
		{
			G_B11_0 = 4;
			G_B11_1 = L_8;
			G_B11_2 = L_8;
			goto IL_0072;
		}
	}
	{
		G_B12_0 = _stringLiteral3480236172;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_0073;
	}

IL_0072:
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_0073:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t1642385972* L_10 = G_B12_3;
		String_t* L_11 = __this->get_encoding_0();
		G_B13_0 = 5;
		G_B13_1 = L_10;
		G_B13_2 = L_10;
		if (!L_11)
		{
			G_B14_0 = 5;
			G_B14_1 = L_10;
			G_B14_2 = L_10;
			goto IL_008c;
		}
	}
	{
		String_t* L_12 = __this->get_encoding_0();
		G_B15_0 = L_12;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		G_B15_3 = G_B13_2;
		goto IL_008d;
	}

IL_008c:
	{
		G_B15_0 = ((String_t*)(NULL));
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
	}

IL_008d:
	{
		NullCheck(G_B15_2);
		ArrayElementTypeCheck (G_B15_2, G_B15_0);
		(G_B15_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B15_1), (String_t*)G_B15_0);
		StringU5BU5D_t1642385972* L_13 = G_B15_3;
		String_t* L_14 = __this->get_encoding_0();
		G_B16_0 = 6;
		G_B16_1 = L_13;
		G_B16_2 = L_13;
		if (!L_14)
		{
			G_B17_0 = 6;
			G_B17_1 = L_13;
			G_B17_2 = L_13;
			goto IL_00a5;
		}
	}
	{
		G_B18_0 = _stringLiteral372029312;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_00a6;
	}

IL_00a5:
	{
		G_B18_0 = ((String_t*)(NULL));
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_00a6:
	{
		NullCheck(G_B18_2);
		ArrayElementTypeCheck (G_B18_2, G_B18_0);
		(G_B18_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B18_1), (String_t*)G_B18_0);
		StringU5BU5D_t1642385972* L_15 = G_B18_3;
		String_t* L_16 = __this->get_standalone_1();
		G_B19_0 = 7;
		G_B19_1 = L_15;
		G_B19_2 = L_15;
		if (!L_16)
		{
			G_B20_0 = 7;
			G_B20_1 = L_15;
			G_B20_2 = L_15;
			goto IL_00be;
		}
	}
	{
		G_B21_0 = _stringLiteral3176926770;
		G_B21_1 = G_B19_0;
		G_B21_2 = G_B19_1;
		G_B21_3 = G_B19_2;
		goto IL_00bf;
	}

IL_00be:
	{
		G_B21_0 = ((String_t*)(NULL));
		G_B21_1 = G_B20_0;
		G_B21_2 = G_B20_1;
		G_B21_3 = G_B20_2;
	}

IL_00bf:
	{
		NullCheck(G_B21_2);
		ArrayElementTypeCheck (G_B21_2, G_B21_0);
		(G_B21_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B21_1), (String_t*)G_B21_0);
		StringU5BU5D_t1642385972* L_17 = G_B21_3;
		String_t* L_18 = __this->get_standalone_1();
		G_B22_0 = 8;
		G_B22_1 = L_17;
		G_B22_2 = L_17;
		if (!L_18)
		{
			G_B23_0 = 8;
			G_B23_1 = L_17;
			G_B23_2 = L_17;
			goto IL_00d8;
		}
	}
	{
		String_t* L_19 = __this->get_standalone_1();
		G_B24_0 = L_19;
		G_B24_1 = G_B22_0;
		G_B24_2 = G_B22_1;
		G_B24_3 = G_B22_2;
		goto IL_00d9;
	}

IL_00d8:
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = G_B23_0;
		G_B24_2 = G_B23_1;
		G_B24_3 = G_B23_2;
	}

IL_00d9:
	{
		NullCheck(G_B24_2);
		ArrayElementTypeCheck (G_B24_2, G_B24_0);
		(G_B24_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B24_1), (String_t*)G_B24_0);
		StringU5BU5D_t1642385972* L_20 = G_B24_3;
		String_t* L_21 = __this->get_standalone_1();
		G_B25_0 = ((int32_t)9);
		G_B25_1 = L_20;
		G_B25_2 = L_20;
		if (!L_21)
		{
			G_B26_0 = ((int32_t)9);
			G_B26_1 = L_20;
			G_B26_2 = L_20;
			goto IL_00f2;
		}
	}
	{
		G_B27_0 = _stringLiteral372029312;
		G_B27_1 = G_B25_0;
		G_B27_2 = G_B25_1;
		G_B27_3 = G_B25_2;
		goto IL_00f3;
	}

IL_00f2:
	{
		G_B27_0 = ((String_t*)(NULL));
		G_B27_1 = G_B26_0;
		G_B27_2 = G_B26_1;
		G_B27_3 = G_B26_2;
	}

IL_00f3:
	{
		NullCheck(G_B27_2);
		ArrayElementTypeCheck (G_B27_2, G_B27_0);
		(G_B27_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B27_1), (String_t*)G_B27_0);
		StringU5BU5D_t1642385972* L_22 = G_B27_3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral905413825);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral905413825);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_23 = String_Concat_m626692867(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XDocument::.ctor()
extern "C"  void XDocument__ctor_m151629198 (XDocument_t2733326047 * __this, const RuntimeMethod* method)
{
	{
		XContainer__ctor_m3187361404(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::get_Declaration()
extern "C"  XDeclaration_t3367285402 * XDocument_get_Declaration_m2764232986 (XDocument_t2733326047 * __this, const RuntimeMethod* method)
{
	{
		XDeclaration_t3367285402 * L_0 = __this->get_xmldecl_10();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XDocument::set_Declaration(System.Xml.Linq.XDeclaration)
extern "C"  void XDocument_set_Declaration_m575128867 (XDocument_t2733326047 * __this, XDeclaration_t3367285402 * ___value0, const RuntimeMethod* method)
{
	{
		XDeclaration_t3367285402 * L_0 = ___value0;
		__this->set_xmldecl_10(L_0);
		return;
	}
}
// System.Xml.Linq.XDocumentType System.Xml.Linq.XDocument::get_DocumentType()
extern "C"  XDocumentType_t738990919 * XDocument_get_DocumentType_m2810920598 (XDocument_t2733326047 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_get_DocumentType_m2810920598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XDocumentType_t738990919 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = XContainer_Nodes_m1386197549(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t2999631259_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			XNode_t2707504214 * L_3 = InterfaceFuncInvoker0< XNode_t2707504214 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t183028041_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			RuntimeObject * L_4 = V_0;
			if (!((XDocumentType_t738990919 *)IsInstClass((RuntimeObject*)L_4, XDocumentType_t738990919_il2cpp_TypeInfo_var)))
			{
				goto IL_002f;
			}
		}

IL_0023:
		{
			RuntimeObject * L_5 = V_0;
			V_2 = ((XDocumentType_t738990919 *)CastclassClass((RuntimeObject*)L_5, XDocumentType_t738990919_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x4C, FINALLY_003f);
		}

IL_002f:
		{
			RuntimeObject* L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_1;
			if (L_8)
			{
				goto IL_0043;
			}
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(63)
		}

IL_0043:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_9);
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		return (XDocumentType_t738990919 *)NULL;
	}

IL_004c:
	{
		XDocumentType_t738990919 * L_10 = V_2;
		return L_10;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XDocument::get_NodeType()
extern "C"  int32_t XDocument_get_NodeType_m3730006457 (XDocument_t2733326047 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)9));
	}
}
// System.Xml.Linq.XElement System.Xml.Linq.XDocument::get_Root()
extern "C"  XElement_t553821050 * XDocument_get_Root_m946627048 (XDocument_t2733326047 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_get_Root_m946627048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XElement_t553821050 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = XContainer_Nodes_m1386197549(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t2999631259_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			XNode_t2707504214 * L_3 = InterfaceFuncInvoker0< XNode_t2707504214 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t183028041_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			RuntimeObject * L_4 = V_0;
			if (!((XElement_t553821050 *)IsInstClass((RuntimeObject*)L_4, XElement_t553821050_il2cpp_TypeInfo_var)))
			{
				goto IL_002f;
			}
		}

IL_0023:
		{
			RuntimeObject * L_5 = V_0;
			V_2 = ((XElement_t553821050 *)CastclassClass((RuntimeObject*)L_5, XElement_t553821050_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x4C, FINALLY_003f);
		}

IL_002f:
		{
			RuntimeObject* L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4A, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_1;
			if (L_8)
			{
				goto IL_0043;
			}
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(63)
		}

IL_0043:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_9);
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		return (XElement_t553821050 *)NULL;
	}

IL_004c:
	{
		XElement_t553821050 * L_10 = V_2;
		return L_10;
	}
}
// System.Void System.Xml.Linq.XDocument::ValidateWhitespace(System.String)
extern "C"  void XDocument_ValidateWhitespace_m3463530265 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_ValidateWhitespace_m3463530265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		V_0 = 0;
		goto IL_004d;
	}

IL_0007:
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Il2CppChar L_2 = String_get_Chars_m4230566705(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		Il2CppChar L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_0039;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_002c;
			}
			case 4:
			{
				goto IL_0039;
			}
		}
	}

IL_002c:
	{
		Il2CppChar L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_0039;
		}
	}
	{
		goto IL_003e;
	}

IL_0039:
	{
		goto IL_0049;
	}

IL_003e:
	{
		ArgumentException_t3259014390 * L_5 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_5, _stringLiteral3798235535, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0049:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_004d:
	{
		int32_t L_7 = V_0;
		String_t* L_8 = ___s0;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1606060069(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void System.Xml.Linq.XDocument::WriteTo(System.Xml.XmlWriter)
extern "C"  void XDocument_WriteTo_m4076631342 (XDocument_t2733326047 * __this, XmlWriter_t1048088568 * ___w0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_WriteTo_m4076631342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XNode_t2707504214 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XDeclaration_t3367285402 * L_0 = __this->get_xmldecl_10();
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		XDeclaration_t3367285402 * L_1 = __this->get_xmldecl_10();
		NullCheck(L_1);
		String_t* L_2 = XDeclaration_get_Standalone_m1945036438(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		XmlWriter_t1048088568 * L_3 = ___w0;
		XDeclaration_t3367285402 * L_4 = __this->get_xmldecl_10();
		NullCheck(L_4);
		String_t* L_5 = XDeclaration_get_Standalone_m1945036438(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_5, _stringLiteral3021628911, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< bool >::Invoke(25 /* System.Void System.Xml.XmlWriter::WriteStartDocument(System.Boolean) */, L_3, L_6);
		goto IL_0041;
	}

IL_003b:
	{
		XmlWriter_t1048088568 * L_7 = ___w0;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(24 /* System.Void System.Xml.XmlWriter::WriteStartDocument() */, L_7);
	}

IL_0041:
	{
		RuntimeObject* L_8 = XContainer_Nodes_m1386197549(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t2999631259_il2cpp_TypeInfo_var, L_8);
		V_1 = L_9;
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0060;
		}

IL_0052:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			XNode_t2707504214 * L_11 = InterfaceFuncInvoker0< XNode_t2707504214 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t183028041_il2cpp_TypeInfo_var, L_10);
			V_0 = L_11;
			XNode_t2707504214 * L_12 = V_0;
			XmlWriter_t1048088568 * L_13 = ___w0;
			NullCheck(L_12);
			VirtActionInvoker1< XmlWriter_t1048088568 * >::Invoke(8 /* System.Void System.Xml.Linq.XNode::WriteTo(System.Xml.XmlWriter) */, L_12, L_13);
		}

IL_0060:
		{
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0052;
			}
		}

IL_006b:
		{
			IL2CPP_LEAVE(0x7B, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_1;
			if (L_16)
			{
				goto IL_0074;
			}
		}

IL_0073:
		{
			IL2CPP_END_FINALLY(112)
		}

IL_0074:
		{
			RuntimeObject* L_17 = V_1;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_17);
			IL2CPP_END_FINALLY(112)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007b:
	{
		return;
	}
}
// System.Boolean System.Xml.Linq.XDocument::OnAddingObject(System.Object,System.Boolean,System.Xml.Linq.XNode,System.Boolean)
extern "C"  bool XDocument_OnAddingObject_m2423584837 (XDocument_t2733326047 * __this, RuntimeObject * ___obj0, bool ___rejectAttribute1, XNode_t2707504214 * ___refNode2, bool ___addFirst3, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = ___addFirst3;
		XDocument_VerifyAddedNode_m3124949756(__this, L_0, L_1, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Void System.Xml.Linq.XDocument::VerifyAddedNode(System.Object,System.Boolean)
extern "C"  void XDocument_VerifyAddedNode_m3124949756 (XDocument_t2733326047 * __this, RuntimeObject * ___node0, bool ___addFirst1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocument_VerifyAddedNode_m3124949756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___node0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t721527559 * L_1 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_1, _stringLiteral3146247017, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___node0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0027;
		}
	}
	{
		RuntimeObject * L_3 = ___node0;
		XDocument_ValidateWhitespace_m3463530265(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_0027:
	{
		RuntimeObject * L_4 = ___node0;
		if (!((XText_t1860529549 *)IsInstClass((RuntimeObject*)L_4, XText_t1860529549_il2cpp_TypeInfo_var)))
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject * L_5 = ___node0;
		NullCheck(((XText_t1860529549 *)CastclassClass((RuntimeObject*)L_5, XText_t1860529549_il2cpp_TypeInfo_var)));
		String_t* L_6 = XText_get_Value_m334359707(((XText_t1860529549 *)CastclassClass((RuntimeObject*)L_5, XText_t1860529549_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		XDocument_ValidateWhitespace_m3463530265(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		goto IL_00c6;
	}

IL_0047:
	{
		RuntimeObject * L_7 = ___node0;
		if (!((XDocumentType_t738990919 *)IsInstClass((RuntimeObject*)L_7, XDocumentType_t738990919_il2cpp_TypeInfo_var)))
		{
			goto IL_0089;
		}
	}
	{
		XDocumentType_t738990919 * L_8 = XDocument_get_DocumentType_m2810920598(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		InvalidOperationException_t721527559 * L_9 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_9, _stringLiteral2371993444, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_0068:
	{
		XElement_t553821050 * L_10 = XDocument_get_Root_m946627048(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		bool L_11 = ___addFirst1;
		if (L_11)
		{
			goto IL_0084;
		}
	}
	{
		InvalidOperationException_t721527559 * L_12 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_12, _stringLiteral920709334, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12);
	}

IL_0084:
	{
		goto IL_00c6;
	}

IL_0089:
	{
		RuntimeObject * L_13 = ___node0;
		if (!((XElement_t553821050 *)IsInstClass((RuntimeObject*)L_13, XElement_t553821050_il2cpp_TypeInfo_var)))
		{
			goto IL_00c6;
		}
	}
	{
		XElement_t553821050 * L_14 = XDocument_get_Root_m946627048(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00aa;
		}
	}
	{
		InvalidOperationException_t721527559 * L_15 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_15, _stringLiteral3127487084, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15);
	}

IL_00aa:
	{
		XDocumentType_t738990919 * L_16 = XDocument_get_DocumentType_m2810920598(__this, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00c6;
		}
	}
	{
		bool L_17 = ___addFirst1;
		if (!L_17)
		{
			goto IL_00c6;
		}
	}
	{
		InvalidOperationException_t721527559 * L_18 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_18, _stringLiteral2174730038, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18);
	}

IL_00c6:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.String,System.String,System.String,System.String)
extern "C"  void XDocumentType__ctor_m2779569696 (XDocumentType_t738990919 * __this, String_t* ___name0, String_t* ___publicId1, String_t* ___systemId2, String_t* ___internalSubset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocumentType__ctor_m2779569696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNode_t2707504214_il2cpp_TypeInfo_var);
		XNode__ctor_m3635466201(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_name_8(L_0);
		String_t* L_1 = ___publicId1;
		__this->set_pubid_9(L_1);
		String_t* L_2 = ___systemId2;
		__this->set_sysid_10(L_2);
		String_t* L_3 = ___internalSubset3;
		__this->set_intSubset_11(L_3);
		return;
	}
}
// System.Void System.Xml.Linq.XDocumentType::.ctor(System.Xml.Linq.XDocumentType)
extern "C"  void XDocumentType__ctor_m4083239521 (XDocumentType_t738990919 * __this, XDocumentType_t738990919 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XDocumentType__ctor_m4083239521_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNode_t2707504214_il2cpp_TypeInfo_var);
		XNode__ctor_m3635466201(__this, /*hidden argument*/NULL);
		XDocumentType_t738990919 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, _stringLiteral3712335156, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		XDocumentType_t738990919 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_8();
		__this->set_name_8(L_3);
		XDocumentType_t738990919 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_pubid_9();
		__this->set_pubid_9(L_5);
		XDocumentType_t738990919 * L_6 = ___other0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_sysid_10();
		__this->set_sysid_10(L_7);
		XDocumentType_t738990919 * L_8 = ___other0;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_intSubset_11();
		__this->set_intSubset_11(L_9);
		return;
	}
}
// System.String System.Xml.Linq.XDocumentType::get_Name()
extern "C"  String_t* XDocumentType_get_Name_m364384709 (XDocumentType_t738990919 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_8();
		return L_0;
	}
}
// System.String System.Xml.Linq.XDocumentType::get_PublicId()
extern "C"  String_t* XDocumentType_get_PublicId_m877542134 (XDocumentType_t738990919 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_pubid_9();
		return L_0;
	}
}
// System.String System.Xml.Linq.XDocumentType::get_SystemId()
extern "C"  String_t* XDocumentType_get_SystemId_m594286306 (XDocumentType_t738990919 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_sysid_10();
		return L_0;
	}
}
// System.String System.Xml.Linq.XDocumentType::get_InternalSubset()
extern "C"  String_t* XDocumentType_get_InternalSubset_m1487579211 (XDocumentType_t738990919 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_intSubset_11();
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XDocumentType::get_NodeType()
extern "C"  int32_t XDocumentType_get_NodeType_m2000115737 (XDocumentType_t738990919 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)10));
	}
}
// System.Void System.Xml.Linq.XDocumentType::WriteTo(System.Xml.XmlWriter)
extern "C"  void XDocumentType_WriteTo_m2391677798 (XDocumentType_t738990919 * __this, XmlWriter_t1048088568 * ___w0, const RuntimeMethod* method)
{
	XDocument_t2733326047 * V_0 = NULL;
	XElement_t553821050 * V_1 = NULL;
	{
		XDocument_t2733326047 * L_0 = XObject_get_Document_m418804020(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		XDocument_t2733326047 * L_1 = V_0;
		NullCheck(L_1);
		XElement_t553821050 * L_2 = XDocument_get_Root_m946627048(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		XElement_t553821050 * L_3 = V_1;
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		XmlWriter_t1048088568 * L_4 = ___w0;
		XElement_t553821050 * L_5 = V_1;
		NullCheck(L_5);
		XName_t785190363 * L_6 = XElement_get_Name_m1622427113(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = XName_get_LocalName_m995190518(L_6, /*hidden argument*/NULL);
		String_t* L_8 = __this->get_pubid_9();
		String_t* L_9 = __this->get_sysid_10();
		String_t* L_10 = __this->get_intSubset_11();
		NullCheck(L_4);
		VirtActionInvoker4< String_t*, String_t*, String_t*, String_t* >::Invoke(15 /* System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String) */, L_4, L_7, L_8, L_9, L_10);
	}

IL_0037:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XElement)
extern "C"  void XElement__ctor_m2448521297 (XElement_t553821050 * __this, XElement_t553821050 * ___source0, const RuntimeMethod* method)
{
	{
		__this->set_explicit_is_empty_14((bool)1);
		XContainer__ctor_m3187361404(__this, /*hidden argument*/NULL);
		XElement_t553821050 * L_0 = ___source0;
		NullCheck(L_0);
		XName_t785190363 * L_1 = L_0->get_name_11();
		__this->set_name_11(L_1);
		XElement_t553821050 * L_2 = ___source0;
		NullCheck(L_2);
		RuntimeObject* L_3 = XElement_Attributes_m3926517386(L_2, /*hidden argument*/NULL);
		XContainer_Add_m3035239173(__this, L_3, /*hidden argument*/NULL);
		XElement_t553821050 * L_4 = ___source0;
		NullCheck(L_4);
		RuntimeObject* L_5 = XContainer_Nodes_m1386197549(L_4, /*hidden argument*/NULL);
		XContainer_Add_m3035239173(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::.ctor(System.Xml.Linq.XName)
extern "C"  void XElement__ctor_m143752744 (XElement_t553821050 * __this, XName_t785190363 * ___name0, const RuntimeMethod* method)
{
	{
		__this->set_explicit_is_empty_14((bool)1);
		XContainer__ctor_m3187361404(__this, /*hidden argument*/NULL);
		XName_t785190363 * L_0 = ___name0;
		__this->set_name_11(L_0);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::.cctor()
extern "C"  void XElement__cctor_m329558096 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement__cctor_m329558096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t4217909478 * L_0 = (List_1_t4217909478 *)il2cpp_codegen_object_new(List_1_t4217909478_il2cpp_TypeInfo_var);
		List_1__ctor_m695132885(L_0, /*hidden argument*/List_1__ctor_m695132885_RuntimeMethod_var);
		((XElement_t553821050_StaticFields*)il2cpp_codegen_static_fields_for(XElement_t553821050_il2cpp_TypeInfo_var))->set_emptySequence_10(L_0);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::System.Xml.Serialization.IXmlSerializable.WriteXml(System.Xml.XmlWriter)
extern "C"  void XElement_System_Xml_Serialization_IXmlSerializable_WriteXml_m1858825662 (XElement_t553821050 * __this, XmlWriter_t1048088568 * ___writer0, const RuntimeMethod* method)
{
	{
		XmlWriter_t1048088568 * L_0 = ___writer0;
		XElement_Save_m692239662(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::System.Xml.Serialization.IXmlSerializable.ReadXml(System.Xml.XmlReader)
extern "C"  void XElement_System_Xml_Serialization_IXmlSerializable_ReadXml_m3210138867 (XElement_t553821050 * __this, XmlReader_t3675626668 * ___reader0, const RuntimeMethod* method)
{
	{
		XmlReader_t3675626668 * L_0 = ___reader0;
		XContainer_ReadContentFrom_m14040437(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Schema.XmlSchema System.Xml.Linq.XElement::System.Xml.Serialization.IXmlSerializable.GetSchema()
extern "C"  XmlSchema_t880472818 * XElement_System_Xml_Serialization_IXmlSerializable_GetSchema_m2420078467 (XElement_t553821050 * __this, const RuntimeMethod* method)
{
	{
		return (XmlSchema_t880472818 *)NULL;
	}
}
// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::get_FirstAttribute()
extern "C"  XAttribute_t3858477518 * XElement_get_FirstAttribute_m3661704431 (XElement_t553821050 * __this, const RuntimeMethod* method)
{
	{
		XAttribute_t3858477518 * L_0 = __this->get_attr_first_12();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XElement::set_FirstAttribute(System.Xml.Linq.XAttribute)
extern "C"  void XElement_set_FirstAttribute_m3741633158 (XElement_t553821050 * __this, XAttribute_t3858477518 * ___value0, const RuntimeMethod* method)
{
	{
		XAttribute_t3858477518 * L_0 = ___value0;
		__this->set_attr_first_12(L_0);
		return;
	}
}
// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::get_LastAttribute()
extern "C"  XAttribute_t3858477518 * XElement_get_LastAttribute_m85173095 (XElement_t553821050 * __this, const RuntimeMethod* method)
{
	{
		XAttribute_t3858477518 * L_0 = __this->get_attr_last_13();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XElement::set_LastAttribute(System.Xml.Linq.XAttribute)
extern "C"  void XElement_set_LastAttribute_m3614769194 (XElement_t553821050 * __this, XAttribute_t3858477518 * ___value0, const RuntimeMethod* method)
{
	{
		XAttribute_t3858477518 * L_0 = ___value0;
		__this->set_attr_last_13(L_0);
		return;
	}
}
// System.Boolean System.Xml.Linq.XElement::get_HasAttributes()
extern "C"  bool XElement_get_HasAttributes_m2063351755 (XElement_t553821050 * __this, const RuntimeMethod* method)
{
	{
		XAttribute_t3858477518 * L_0 = __this->get_attr_first_12();
		return (bool)((((int32_t)((((RuntimeObject*)(XAttribute_t3858477518 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Xml.Linq.XElement::get_IsEmpty()
extern "C"  bool XElement_get_IsEmpty_m3492370737 (XElement_t553821050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_get_IsEmpty_m3492370737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject* L_0 = XContainer_Nodes_m1386197549(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t2999631259_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		bool L_2 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		bool L_3 = __this->get_explicit_is_empty_14();
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		return (bool)G_B3_0;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XElement::get_Name()
extern "C"  XName_t785190363 * XElement_get_Name_m1622427113 (XElement_t553821050 * __this, const RuntimeMethod* method)
{
	{
		XName_t785190363 * L_0 = __this->get_name_11();
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XElement::get_NodeType()
extern "C"  int32_t XElement_get_NodeType_m2052604688 (XElement_t553821050 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(1);
	}
}
// System.String System.Xml.Linq.XElement::get_Value()
extern "C"  String_t* XElement_get_Value_m1500498232 (XElement_t553821050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_get_Value_m1500498232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	XNode_t2707504214 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B16_0 = NULL;
	{
		V_0 = (StringBuilder_t *)NULL;
		RuntimeObject* L_0 = XContainer_Nodes_m1386197549(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t2999631259_il2cpp_TypeInfo_var, L_0);
		V_2 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0065;
		}

IL_0013:
		{
			RuntimeObject* L_2 = V_2;
			NullCheck(L_2);
			XNode_t2707504214 * L_3 = InterfaceFuncInvoker0< XNode_t2707504214 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t183028041_il2cpp_TypeInfo_var, L_2);
			V_1 = L_3;
			StringBuilder_t * L_4 = V_0;
			if (L_4)
			{
				goto IL_0026;
			}
		}

IL_0020:
		{
			StringBuilder_t * L_5 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			StringBuilder__ctor_m3946851802(L_5, /*hidden argument*/NULL);
			V_0 = L_5;
		}

IL_0026:
		{
			XNode_t2707504214 * L_6 = V_1;
			if (!((XText_t1860529549 *)IsInstClass((RuntimeObject*)L_6, XText_t1860529549_il2cpp_TypeInfo_var)))
			{
				goto IL_0048;
			}
		}

IL_0031:
		{
			StringBuilder_t * L_7 = V_0;
			XNode_t2707504214 * L_8 = V_1;
			NullCheck(((XText_t1860529549 *)CastclassClass((RuntimeObject*)L_8, XText_t1860529549_il2cpp_TypeInfo_var)));
			String_t* L_9 = XText_get_Value_m334359707(((XText_t1860529549 *)CastclassClass((RuntimeObject*)L_8, XText_t1860529549_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(L_7);
			StringBuilder_Append_m3636508479(L_7, L_9, /*hidden argument*/NULL);
			goto IL_0065;
		}

IL_0048:
		{
			XNode_t2707504214 * L_10 = V_1;
			if (!((XElement_t553821050 *)IsInstClass((RuntimeObject*)L_10, XElement_t553821050_il2cpp_TypeInfo_var)))
			{
				goto IL_0065;
			}
		}

IL_0053:
		{
			StringBuilder_t * L_11 = V_0;
			XNode_t2707504214 * L_12 = V_1;
			NullCheck(((XElement_t553821050 *)CastclassClass((RuntimeObject*)L_12, XElement_t553821050_il2cpp_TypeInfo_var)));
			String_t* L_13 = XElement_get_Value_m1500498232(((XElement_t553821050 *)CastclassClass((RuntimeObject*)L_12, XElement_t553821050_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(L_11);
			StringBuilder_Append_m3636508479(L_11, L_13, /*hidden argument*/NULL);
		}

IL_0065:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0013;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x80, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_2;
			if (L_16)
			{
				goto IL_0079;
			}
		}

IL_0078:
		{
			IL2CPP_END_FINALLY(117)
		}

IL_0079:
		{
			RuntimeObject* L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_17);
			IL2CPP_END_FINALLY(117)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_JUMP_TBL(0x80, IL_0080)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0080:
	{
		StringBuilder_t * L_18 = V_0;
		if (L_18)
		{
			goto IL_0090;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B16_0 = L_19;
		goto IL_0096;
	}

IL_0090:
	{
		StringBuilder_t * L_20 = V_0;
		NullCheck(L_20);
		String_t* L_21 = StringBuilder_ToString_m1507807375(L_20, /*hidden argument*/NULL);
		G_B16_0 = L_21;
	}

IL_0096:
	{
		return G_B16_0;
	}
}
// System.Xml.Linq.XAttribute System.Xml.Linq.XElement::Attribute(System.Xml.Linq.XName)
extern "C"  XAttribute_t3858477518 * XElement_Attribute_m1640408831 (XElement_t553821050 * __this, XName_t785190363 * ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_Attribute_m1640408831_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XAttribute_t3858477518 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XAttribute_t3858477518 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = XElement_Attributes_m3926517386(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t4150604563_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			NullCheck(L_2);
			XAttribute_t3858477518 * L_3 = InterfaceFuncInvoker0< XAttribute_t3858477518 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t1334001345_il2cpp_TypeInfo_var, L_2);
			V_0 = L_3;
			XAttribute_t3858477518 * L_4 = V_0;
			NullCheck(L_4);
			XName_t785190363 * L_5 = XAttribute_get_Name_m2127497767(L_4, /*hidden argument*/NULL);
			XName_t785190363 * L_6 = ___name0;
			bool L_7 = XName_op_Equality_m148690364(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
			if (!L_7)
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			XAttribute_t3858477518 * L_8 = V_0;
			V_2 = L_8;
			IL2CPP_LEAVE(0x4D, FINALLY_0040);
		}

IL_0030:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_0011;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x4B, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_1;
			if (L_11)
			{
				goto IL_0044;
			}
		}

IL_0043:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_0044:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_12);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_JUMP_TBL(0x4B, IL_004b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004b:
	{
		return (XAttribute_t3858477518 *)NULL;
	}

IL_004d:
	{
		XAttribute_t3858477518 * L_13 = V_2;
		return L_13;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement::Attributes()
extern "C"  RuntimeObject* XElement_Attributes_m3926517386 (XElement_t553821050 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_Attributes_m3926517386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAttributesU3Ec__Iterator20_t3474816789 * V_0 = NULL;
	{
		U3CAttributesU3Ec__Iterator20_t3474816789 * L_0 = (U3CAttributesU3Ec__Iterator20_t3474816789 *)il2cpp_codegen_object_new(U3CAttributesU3Ec__Iterator20_t3474816789_il2cpp_TypeInfo_var);
		U3CAttributesU3Ec__Iterator20__ctor_m1308961820(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CAttributesU3Ec__Iterator20_t3474816789 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__this_4(__this);
		U3CAttributesU3Ec__Iterator20_t3474816789 * L_2 = V_0;
		U3CAttributesU3Ec__Iterator20_t3474816789 * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_U24PC_2(((int32_t)-2));
		return L_3;
	}
}
// System.Xml.Linq.XElement System.Xml.Linq.XElement::LoadCore(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
extern "C"  XElement_t553821050 * XElement_LoadCore_m677132477 (RuntimeObject * __this /* static, unused */, XmlReader_t3675626668 * ___r0, int32_t ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_LoadCore_m677132477_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XName_t785190363 * V_0 = NULL;
	XElement_t553821050 * V_1 = NULL;
	{
		XmlReader_t3675626668 * L_0 = ___r0;
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(35 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_0);
		XmlReader_t3675626668 * L_1 = ___r0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t721527559 * L_3 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_3, _stringLiteral3334767733, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_001e:
	{
		XmlReader_t3675626668 * L_4 = ___r0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, L_4);
		XmlReader_t3675626668 * L_6 = ___r0;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_6);
		XName_t785190363 * L_8 = XName_Get_m2187745362(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		XName_t785190363 * L_9 = V_0;
		XElement_t553821050 * L_10 = (XElement_t553821050 *)il2cpp_codegen_object_new(XElement_t553821050_il2cpp_TypeInfo_var);
		XElement__ctor_m143752744(L_10, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		XElement_t553821050 * L_11 = V_1;
		XmlReader_t3675626668 * L_12 = ___r0;
		int32_t L_13 = ___options1;
		NullCheck(L_11);
		XObject_FillLineInfoAndBaseUri_m431604165(L_11, L_12, L_13, /*hidden argument*/NULL);
		XmlReader_t3675626668 * L_14 = ___r0;
		NullCheck(L_14);
		bool L_15 = VirtFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Xml.XmlReader::MoveToFirstAttribute() */, L_14);
		if (!L_15)
		{
			goto IL_00d5;
		}
	}

IL_004a:
	{
		XmlReader_t3675626668 * L_16 = ___r0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_18 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_17, _stringLiteral351558848, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0099;
		}
	}
	{
		XmlReader_t3675626668 * L_19 = ___r0;
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		XNamespace_t1613015075 * L_21 = XNamespace_get_Xmlns_m4214259751(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22 = XNamespace_get_NamespaceName_m3174414200(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_23 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0099;
		}
	}
	{
		XElement_t553821050 * L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		XNamespace_t1613015075 * L_25 = XNamespace_get_None_m1138320793(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_25);
		XName_t785190363 * L_26 = XNamespace_GetName_m2299836393(L_25, _stringLiteral351558848, /*hidden argument*/NULL);
		XmlReader_t3675626668 * L_27 = ___r0;
		NullCheck(L_27);
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_27);
		NullCheck(L_24);
		XElement_SetAttributeValue_m4226718375(L_24, L_26, L_28, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_0099:
	{
		XElement_t553821050 * L_29 = V_1;
		XmlReader_t3675626668 * L_30 = ___r0;
		NullCheck(L_30);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Xml.XmlReader::get_LocalName() */, L_30);
		XmlReader_t3675626668 * L_32 = ___r0;
		NullCheck(L_32);
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(17 /* System.String System.Xml.XmlReader::get_NamespaceURI() */, L_32);
		XName_t785190363 * L_34 = XName_Get_m2187745362(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
		XmlReader_t3675626668 * L_35 = ___r0;
		NullCheck(L_35);
		String_t* L_36 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_35);
		NullCheck(L_29);
		XElement_SetAttributeValue_m4226718375(L_29, L_34, L_36, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		XElement_t553821050 * L_37 = V_1;
		NullCheck(L_37);
		XAttribute_t3858477518 * L_38 = XElement_get_LastAttribute_m85173095(L_37, /*hidden argument*/NULL);
		XmlReader_t3675626668 * L_39 = ___r0;
		int32_t L_40 = ___options1;
		NullCheck(L_38);
		XObject_FillLineInfoAndBaseUri_m431604165(L_38, L_39, L_40, /*hidden argument*/NULL);
		XmlReader_t3675626668 * L_41 = ___r0;
		NullCheck(L_41);
		bool L_42 = VirtFuncInvoker0< bool >::Invoke(38 /* System.Boolean System.Xml.XmlReader::MoveToNextAttribute() */, L_41);
		if (L_42)
		{
			goto IL_004a;
		}
	}
	{
		XmlReader_t3675626668 * L_43 = ___r0;
		NullCheck(L_43);
		VirtFuncInvoker0< bool >::Invoke(36 /* System.Boolean System.Xml.XmlReader::MoveToElement() */, L_43);
	}

IL_00d5:
	{
		XmlReader_t3675626668 * L_44 = ___r0;
		NullCheck(L_44);
		bool L_45 = VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean System.Xml.XmlReader::get_IsEmptyElement() */, L_44);
		if (L_45)
		{
			goto IL_0101;
		}
	}
	{
		XmlReader_t3675626668 * L_46 = ___r0;
		NullCheck(L_46);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_46);
		XElement_t553821050 * L_47 = V_1;
		XmlReader_t3675626668 * L_48 = ___r0;
		int32_t L_49 = ___options1;
		NullCheck(L_47);
		XContainer_ReadContentFrom_m14040437(L_47, L_48, L_49, /*hidden argument*/NULL);
		XmlReader_t3675626668 * L_50 = ___r0;
		NullCheck(L_50);
		VirtActionInvoker0::Invoke(42 /* System.Void System.Xml.XmlReader::ReadEndElement() */, L_50);
		XElement_t553821050 * L_51 = V_1;
		NullCheck(L_51);
		L_51->set_explicit_is_empty_14((bool)0);
		goto IL_010f;
	}

IL_0101:
	{
		XElement_t553821050 * L_52 = V_1;
		NullCheck(L_52);
		L_52->set_explicit_is_empty_14((bool)1);
		XmlReader_t3675626668 * L_53 = ___r0;
		NullCheck(L_53);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_53);
	}

IL_010f:
	{
		XElement_t553821050 * L_54 = V_1;
		return L_54;
	}
}
// System.Void System.Xml.Linq.XElement::Save(System.Xml.XmlWriter)
extern "C"  void XElement_Save_m692239662 (XElement_t553821050 * __this, XmlWriter_t1048088568 * ___w0, const RuntimeMethod* method)
{
	{
		XmlWriter_t1048088568 * L_0 = ___w0;
		VirtActionInvoker1< XmlWriter_t1048088568 * >::Invoke(8 /* System.Void System.Xml.Linq.XElement::WriteTo(System.Xml.XmlWriter) */, __this, L_0);
		return;
	}
}
// System.Void System.Xml.Linq.XElement::SetAttributeValue(System.Xml.Linq.XName,System.Object)
extern "C"  void XElement_SetAttributeValue_m4226718375 (XElement_t553821050 * __this, XName_t785190363 * ___name0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_SetAttributeValue_m4226718375_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XAttribute_t3858477518 * V_0 = NULL;
	{
		XName_t785190363 * L_0 = ___name0;
		XAttribute_t3858477518 * L_1 = XElement_Attribute_m1640408831(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = ___value1;
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		XAttribute_t3858477518 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		XAttribute_t3858477518 * L_4 = V_0;
		NullCheck(L_4);
		XAttribute_Remove_m4091960603(L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		goto IL_0043;
	}

IL_001f:
	{
		XAttribute_t3858477518 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		XName_t785190363 * L_6 = ___name0;
		RuntimeObject * L_7 = ___value1;
		XAttribute_t3858477518 * L_8 = (XAttribute_t3858477518 *)il2cpp_codegen_object_new(XAttribute_t3858477518_il2cpp_TypeInfo_var);
		XAttribute__ctor_m2350776210(L_8, L_6, L_7, /*hidden argument*/NULL);
		XElement_SetAttributeObject_m819702138(__this, L_8, /*hidden argument*/NULL);
		goto IL_0043;
	}

IL_0037:
	{
		XAttribute_t3858477518 * L_9 = V_0;
		RuntimeObject * L_10 = ___value1;
		String_t* L_11 = XUtil_ToString_m2221736954(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		XAttribute_set_Value_m4018836401(L_9, L_11, /*hidden argument*/NULL);
	}

IL_0043:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XElement::SetAttributeObject(System.Xml.Linq.XAttribute)
extern "C"  void XElement_SetAttributeObject_m819702138 (XElement_t553821050 * __this, XAttribute_t3858477518 * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_SetAttributeObject_m819702138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XAttribute_t3858477518 * L_0 = ___a0;
		RuntimeObject * L_1 = XUtil_GetDetachedObject_m293754142(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		___a0 = ((XAttribute_t3858477518 *)CastclassClass((RuntimeObject*)L_1, XAttribute_t3858477518_il2cpp_TypeInfo_var));
		XAttribute_t3858477518 * L_2 = ___a0;
		NullCheck(L_2);
		XObject_SetOwner_m582264412(L_2, __this, /*hidden argument*/NULL);
		XAttribute_t3858477518 * L_3 = __this->get_attr_first_12();
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		XAttribute_t3858477518 * L_4 = ___a0;
		__this->set_attr_first_12(L_4);
		XAttribute_t3858477518 * L_5 = ___a0;
		__this->set_attr_last_13(L_5);
		goto IL_0051;
	}

IL_0032:
	{
		XAttribute_t3858477518 * L_6 = __this->get_attr_last_13();
		XAttribute_t3858477518 * L_7 = ___a0;
		NullCheck(L_6);
		XAttribute_set_NextAttribute_m2644290891(L_6, L_7, /*hidden argument*/NULL);
		XAttribute_t3858477518 * L_8 = ___a0;
		XAttribute_t3858477518 * L_9 = __this->get_attr_last_13();
		NullCheck(L_8);
		XAttribute_set_PreviousAttribute_m2159252545(L_8, L_9, /*hidden argument*/NULL);
		XAttribute_t3858477518 * L_10 = ___a0;
		__this->set_attr_last_13(L_10);
	}

IL_0051:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XElement::WriteTo(System.Xml.XmlWriter)
extern "C"  void XElement_WriteTo_m4068736895 (XElement_t553821050 * __this, XmlWriter_t1048088568 * ___w0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_WriteTo_m4068736895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	XAttribute_t3858477518 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	XAttribute_t3858477518 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	XNode_t2707504214 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B3_0 = NULL;
	{
		XName_t785190363 * L_0 = __this->get_name_11();
		NullCheck(L_0);
		String_t* L_1 = XName_get_NamespaceName_m4269716270(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m1606060069(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		XmlWriter_t1048088568 * L_3 = ___w0;
		XName_t785190363 * L_4 = __this->get_name_11();
		NullCheck(L_4);
		XNamespace_t1613015075 * L_5 = XName_get_Namespace_m3835650466(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = XNamespace_get_NamespaceName_m3174414200(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_7 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(12 /* System.String System.Xml.XmlWriter::LookupPrefix(System.String) */, L_3, L_6);
		G_B3_0 = L_7;
		goto IL_0036;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_8;
	}

IL_0036:
	{
		V_0 = G_B3_0;
		RuntimeObject* L_9 = XElement_Attributes_m3926517386(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		RuntimeObject* L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t4150604563_il2cpp_TypeInfo_var, L_9);
		V_2 = L_10;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a5;
		}

IL_0048:
		{
			RuntimeObject* L_11 = V_2;
			NullCheck(L_11);
			XAttribute_t3858477518 * L_12 = InterfaceFuncInvoker0< XAttribute_t3858477518 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t1334001345_il2cpp_TypeInfo_var, L_11);
			V_1 = L_12;
			XAttribute_t3858477518 * L_13 = V_1;
			NullCheck(L_13);
			bool L_14 = XAttribute_get_IsNamespaceDeclaration_m86030665(L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_00a5;
			}
		}

IL_005a:
		{
			XAttribute_t3858477518 * L_15 = V_1;
			NullCheck(L_15);
			String_t* L_16 = XAttribute_get_Value_m3732914648(L_15, /*hidden argument*/NULL);
			XName_t785190363 * L_17 = __this->get_name_11();
			NullCheck(L_17);
			XNamespace_t1613015075 * L_18 = XName_get_Namespace_m3835650466(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			String_t* L_19 = XNamespace_get_NamespaceName_m3174414200(L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_20 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_16, L_19, /*hidden argument*/NULL);
			if (!L_20)
			{
				goto IL_00a5;
			}
		}

IL_007a:
		{
			XAttribute_t3858477518 * L_21 = V_1;
			NullCheck(L_21);
			XName_t785190363 * L_22 = XAttribute_get_Name_m2127497767(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			XNamespace_t1613015075 * L_23 = XName_get_Namespace_m3835650466(L_22, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
			XNamespace_t1613015075 * L_24 = XNamespace_get_Xmlns_m4214259751(NULL /*static, unused*/, /*hidden argument*/NULL);
			bool L_25 = XNamespace_op_Equality_m73486322(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_00a0;
			}
		}

IL_0094:
		{
			XAttribute_t3858477518 * L_26 = V_1;
			NullCheck(L_26);
			XName_t785190363 * L_27 = XAttribute_get_Name_m2127497767(L_26, /*hidden argument*/NULL);
			NullCheck(L_27);
			String_t* L_28 = XName_get_LocalName_m995190518(L_27, /*hidden argument*/NULL);
			V_0 = L_28;
		}

IL_00a0:
		{
			goto IL_00b0;
		}

IL_00a5:
		{
			RuntimeObject* L_29 = V_2;
			NullCheck(L_29);
			bool L_30 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_0048;
			}
		}

IL_00b0:
		{
			IL2CPP_LEAVE(0xC0, FINALLY_00b5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b5;
	}

FINALLY_00b5:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_31 = V_2;
			if (L_31)
			{
				goto IL_00b9;
			}
		}

IL_00b8:
		{
			IL2CPP_END_FINALLY(181)
		}

IL_00b9:
		{
			RuntimeObject* L_32 = V_2;
			NullCheck(L_32);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_32);
			IL2CPP_END_FINALLY(181)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(181)
	{
		IL2CPP_JUMP_TBL(0xC0, IL_00c0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c0:
	{
		XmlWriter_t1048088568 * L_33 = ___w0;
		String_t* L_34 = V_0;
		XName_t785190363 * L_35 = __this->get_name_11();
		NullCheck(L_35);
		String_t* L_36 = XName_get_LocalName_m995190518(L_35, /*hidden argument*/NULL);
		XName_t785190363 * L_37 = __this->get_name_11();
		NullCheck(L_37);
		XNamespace_t1613015075 * L_38 = XName_get_Namespace_m3835650466(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		String_t* L_39 = XNamespace_get_NamespaceName_m3174414200(L_38, /*hidden argument*/NULL);
		NullCheck(L_33);
		VirtActionInvoker3< String_t*, String_t*, String_t* >::Invoke(26 /* System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String) */, L_33, L_34, L_36, L_39);
		RuntimeObject* L_40 = XElement_Attributes_m3926517386(__this, /*hidden argument*/NULL);
		NullCheck(L_40);
		RuntimeObject* L_41 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t4150604563_il2cpp_TypeInfo_var, L_40);
		V_4 = L_41;
	}

IL_00ef:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0189;
		}

IL_00f4:
		{
			RuntimeObject* L_42 = V_4;
			NullCheck(L_42);
			XAttribute_t3858477518 * L_43 = InterfaceFuncInvoker0< XAttribute_t3858477518 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t1334001345_il2cpp_TypeInfo_var, L_42);
			V_3 = L_43;
			XAttribute_t3858477518 * L_44 = V_3;
			NullCheck(L_44);
			bool L_45 = XAttribute_get_IsNamespaceDeclaration_m86030665(L_44, /*hidden argument*/NULL);
			if (!L_45)
			{
				goto IL_0162;
			}
		}

IL_0107:
		{
			XAttribute_t3858477518 * L_46 = V_3;
			NullCheck(L_46);
			XName_t785190363 * L_47 = XAttribute_get_Name_m2127497767(L_46, /*hidden argument*/NULL);
			NullCheck(L_47);
			XNamespace_t1613015075 * L_48 = XName_get_Namespace_m3835650466(L_47, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
			XNamespace_t1613015075 * L_49 = XNamespace_get_Xmlns_m4214259751(NULL /*static, unused*/, /*hidden argument*/NULL);
			bool L_50 = XNamespace_op_Equality_m73486322(NULL /*static, unused*/, L_48, L_49, /*hidden argument*/NULL);
			if (!L_50)
			{
				goto IL_014c;
			}
		}

IL_0121:
		{
			XmlWriter_t1048088568 * L_51 = ___w0;
			XAttribute_t3858477518 * L_52 = V_3;
			NullCheck(L_52);
			XName_t785190363 * L_53 = XAttribute_get_Name_m2127497767(L_52, /*hidden argument*/NULL);
			NullCheck(L_53);
			String_t* L_54 = XName_get_LocalName_m995190518(L_53, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
			XNamespace_t1613015075 * L_55 = XNamespace_get_Xmlns_m4214259751(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_55);
			String_t* L_56 = XNamespace_get_NamespaceName_m3174414200(L_55, /*hidden argument*/NULL);
			XAttribute_t3858477518 * L_57 = V_3;
			NullCheck(L_57);
			String_t* L_58 = XAttribute_get_Value_m3732914648(L_57, /*hidden argument*/NULL);
			NullCheck(L_51);
			XmlWriter_WriteAttributeString_m2741345027(L_51, _stringLiteral351558848, L_54, L_56, L_58, /*hidden argument*/NULL);
			goto IL_015d;
		}

IL_014c:
		{
			XmlWriter_t1048088568 * L_59 = ___w0;
			XAttribute_t3858477518 * L_60 = V_3;
			NullCheck(L_60);
			String_t* L_61 = XAttribute_get_Value_m3732914648(L_60, /*hidden argument*/NULL);
			NullCheck(L_59);
			XmlWriter_WriteAttributeString_m3169493699(L_59, _stringLiteral351558848, L_61, /*hidden argument*/NULL);
		}

IL_015d:
		{
			goto IL_0189;
		}

IL_0162:
		{
			XmlWriter_t1048088568 * L_62 = ___w0;
			XAttribute_t3858477518 * L_63 = V_3;
			NullCheck(L_63);
			XName_t785190363 * L_64 = XAttribute_get_Name_m2127497767(L_63, /*hidden argument*/NULL);
			NullCheck(L_64);
			String_t* L_65 = XName_get_LocalName_m995190518(L_64, /*hidden argument*/NULL);
			XAttribute_t3858477518 * L_66 = V_3;
			NullCheck(L_66);
			XName_t785190363 * L_67 = XAttribute_get_Name_m2127497767(L_66, /*hidden argument*/NULL);
			NullCheck(L_67);
			XNamespace_t1613015075 * L_68 = XName_get_Namespace_m3835650466(L_67, /*hidden argument*/NULL);
			NullCheck(L_68);
			String_t* L_69 = XNamespace_get_NamespaceName_m3174414200(L_68, /*hidden argument*/NULL);
			XAttribute_t3858477518 * L_70 = V_3;
			NullCheck(L_70);
			String_t* L_71 = XAttribute_get_Value_m3732914648(L_70, /*hidden argument*/NULL);
			NullCheck(L_62);
			XmlWriter_WriteAttributeString_m3837777409(L_62, L_65, L_69, L_71, /*hidden argument*/NULL);
		}

IL_0189:
		{
			RuntimeObject* L_72 = V_4;
			NullCheck(L_72);
			bool L_73 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_72);
			if (L_73)
			{
				goto IL_00f4;
			}
		}

IL_0195:
		{
			IL2CPP_LEAVE(0x1A7, FINALLY_019a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_019a;
	}

FINALLY_019a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_74 = V_4;
			if (L_74)
			{
				goto IL_019f;
			}
		}

IL_019e:
		{
			IL2CPP_END_FINALLY(410)
		}

IL_019f:
		{
			RuntimeObject* L_75 = V_4;
			NullCheck(L_75);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_75);
			IL2CPP_END_FINALLY(410)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(410)
	{
		IL2CPP_JUMP_TBL(0x1A7, IL_01a7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01a7:
	{
		RuntimeObject* L_76 = XContainer_Nodes_m1386197549(__this, /*hidden argument*/NULL);
		NullCheck(L_76);
		RuntimeObject* L_77 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t2999631259_il2cpp_TypeInfo_var, L_76);
		V_6 = L_77;
	}

IL_01b4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01ca;
		}

IL_01b9:
		{
			RuntimeObject* L_78 = V_6;
			NullCheck(L_78);
			XNode_t2707504214 * L_79 = InterfaceFuncInvoker0< XNode_t2707504214 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t183028041_il2cpp_TypeInfo_var, L_78);
			V_5 = L_79;
			XNode_t2707504214 * L_80 = V_5;
			XmlWriter_t1048088568 * L_81 = ___w0;
			NullCheck(L_80);
			VirtActionInvoker1< XmlWriter_t1048088568 * >::Invoke(8 /* System.Void System.Xml.Linq.XNode::WriteTo(System.Xml.XmlWriter) */, L_80, L_81);
		}

IL_01ca:
		{
			RuntimeObject* L_82 = V_6;
			NullCheck(L_82);
			bool L_83 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_82);
			if (L_83)
			{
				goto IL_01b9;
			}
		}

IL_01d6:
		{
			IL2CPP_LEAVE(0x1E8, FINALLY_01db);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01db;
	}

FINALLY_01db:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_84 = V_6;
			if (L_84)
			{
				goto IL_01e0;
			}
		}

IL_01df:
		{
			IL2CPP_END_FINALLY(475)
		}

IL_01e0:
		{
			RuntimeObject* L_85 = V_6;
			NullCheck(L_85);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_85);
			IL2CPP_END_FINALLY(475)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(475)
	{
		IL2CPP_JUMP_TBL(0x1E8, IL_01e8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01e8:
	{
		bool L_86 = __this->get_explicit_is_empty_14();
		if (!L_86)
		{
			goto IL_01fe;
		}
	}
	{
		XmlWriter_t1048088568 * L_87 = ___w0;
		NullCheck(L_87);
		VirtActionInvoker0::Invoke(17 /* System.Void System.Xml.XmlWriter::WriteEndElement() */, L_87);
		goto IL_0204;
	}

IL_01fe:
	{
		XmlWriter_t1048088568 * L_88 = ___w0;
		NullCheck(L_88);
		VirtActionInvoker0::Invoke(19 /* System.Void System.Xml.XmlWriter::WriteFullEndElement() */, L_88);
	}

IL_0204:
	{
		return;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XElement::GetNamespaceOfPrefix(System.String)
extern "C"  XNamespace_t1613015075 * XElement_GetNamespaceOfPrefix_m1452302937 (XElement_t553821050 * __this, String_t* ___prefix0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_GetNamespaceOfPrefix_m1452302937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XElement_t553821050 * V_0 = NULL;
	XAttribute_t3858477518 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	XNamespace_t1613015075 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		goto IL_0098;
	}

IL_0007:
	{
		XElement_t553821050 * L_0 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = XElement_Attributes_m3926517386(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t4150604563_il2cpp_TypeInfo_var, L_1);
		V_2 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_0018:
		{
			RuntimeObject* L_3 = V_2;
			NullCheck(L_3);
			XAttribute_t3858477518 * L_4 = InterfaceFuncInvoker0< XAttribute_t3858477518 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t1334001345_il2cpp_TypeInfo_var, L_3);
			V_1 = L_4;
			XAttribute_t3858477518 * L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = XAttribute_get_IsNamespaceDeclaration_m86030665(L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0076;
			}
		}

IL_002a:
		{
			String_t* L_7 = ___prefix0;
			NullCheck(L_7);
			int32_t L_8 = String_get_Length_m1606060069(L_7, /*hidden argument*/NULL);
			if (L_8)
			{
				goto IL_004f;
			}
		}

IL_0035:
		{
			XAttribute_t3858477518 * L_9 = V_1;
			NullCheck(L_9);
			XName_t785190363 * L_10 = XAttribute_get_Name_m2127497767(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			String_t* L_11 = XName_get_LocalName_m995190518(L_10, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_12 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_11, _stringLiteral351558848, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0065;
			}
		}

IL_004f:
		{
			XAttribute_t3858477518 * L_13 = V_1;
			NullCheck(L_13);
			XName_t785190363 * L_14 = XAttribute_get_Name_m2127497767(L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			String_t* L_15 = XName_get_LocalName_m995190518(L_14, /*hidden argument*/NULL);
			String_t* L_16 = ___prefix0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_17 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_0076;
			}
		}

IL_0065:
		{
			XAttribute_t3858477518 * L_18 = V_1;
			NullCheck(L_18);
			String_t* L_19 = XAttribute_get_Value_m3732914648(L_18, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
			XNamespace_t1613015075 * L_20 = XNamespace_Get_m1026612632(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
			V_3 = L_20;
			IL2CPP_LEAVE(0xA4, FINALLY_0086);
		}

IL_0076:
		{
			RuntimeObject* L_21 = V_2;
			NullCheck(L_21);
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0018;
			}
		}

IL_0081:
		{
			IL2CPP_LEAVE(0x91, FINALLY_0086);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0086;
	}

FINALLY_0086:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_2;
			if (L_23)
			{
				goto IL_008a;
			}
		}

IL_0089:
		{
			IL2CPP_END_FINALLY(134)
		}

IL_008a:
		{
			RuntimeObject* L_24 = V_2;
			NullCheck(L_24);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_24);
			IL2CPP_END_FINALLY(134)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(134)
	{
		IL2CPP_JUMP_TBL(0xA4, IL_00a4)
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0091:
	{
		XElement_t553821050 * L_25 = V_0;
		NullCheck(L_25);
		XElement_t553821050 * L_26 = XObject_get_Parent_m714109026(L_25, /*hidden argument*/NULL);
		V_0 = L_26;
	}

IL_0098:
	{
		XElement_t553821050 * L_27 = V_0;
		if (L_27)
		{
			goto IL_0007;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		XNamespace_t1613015075 * L_28 = XNamespace_get_None_m1138320793(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_28;
	}

IL_00a4:
	{
		XNamespace_t1613015075 * L_29 = V_3;
		return L_29;
	}
}
// System.String System.Xml.Linq.XElement::GetPrefixOfNamespace(System.Xml.Linq.XNamespace)
extern "C"  String_t* XElement_GetPrefixOfNamespace_m1139725977 (XElement_t553821050 * __this, XNamespace_t1613015075 * ___ns0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_GetPrefixOfNamespace_m1139725977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XNamespace_t1613015075 * L_0 = ___ns0;
		RuntimeObject* L_1 = XElement_GetPrefixOfNamespaceCore_m3260263689(__this, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t2321347278_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_0012:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			String_t* L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t3799711356_il2cpp_TypeInfo_var, L_3);
			V_0 = L_4;
			String_t* L_5 = V_0;
			XNamespace_t1613015075 * L_6 = XElement_GetNamespaceOfPrefix_m1452302937(__this, L_5, /*hidden argument*/NULL);
			XNamespace_t1613015075 * L_7 = ___ns0;
			IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
			bool L_8 = XNamespace_op_Equality_m73486322(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0032;
			}
		}

IL_002b:
		{
			String_t* L_9 = V_0;
			V_2 = L_9;
			IL2CPP_LEAVE(0x4F, FINALLY_0042);
		}

IL_0032:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0012;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			if (L_12)
			{
				goto IL_0046;
			}
		}

IL_0045:
		{
			IL2CPP_END_FINALLY(66)
		}

IL_0046:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_13);
			IL2CPP_END_FINALLY(66)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		return (String_t*)NULL;
	}

IL_004f:
	{
		String_t* L_14 = V_2;
		return L_14;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> System.Xml.Linq.XElement::GetPrefixOfNamespaceCore(System.Xml.Linq.XNamespace)
extern "C"  RuntimeObject* XElement_GetPrefixOfNamespaceCore_m3260263689 (XElement_t553821050 * __this, XNamespace_t1613015075 * ___ns0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_GetPrefixOfNamespaceCore_m3260263689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * V_0 = NULL;
	{
		U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * L_0 = (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 *)il2cpp_codegen_object_new(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544_il2cpp_TypeInfo_var);
		U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23__ctor_m1584120561(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * L_1 = V_0;
		XNamespace_t1613015075 * L_2 = ___ns0;
		NullCheck(L_1);
		L_1->set_ns_3(L_2);
		U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * L_3 = V_0;
		XNamespace_t1613015075 * L_4 = ___ns0;
		NullCheck(L_3);
		L_3->set_U3CU24U3Ens_6(L_4);
		U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U3CU3Ef__this_7(__this);
		U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * L_6 = V_0;
		U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * L_7 = L_6;
		NullCheck(L_7);
		L_7->set_U24PC_4(((int32_t)-2));
		return L_7;
	}
}
// System.Boolean System.Xml.Linq.XElement::OnAddingObject(System.Object,System.Boolean,System.Xml.Linq.XNode,System.Boolean)
extern "C"  bool XElement_OnAddingObject_m3270813610 (XElement_t553821050 * __this, RuntimeObject * ___o0, bool ___rejectAttribute1, XNode_t2707504214 * ___refNode2, bool ___addFirst3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XElement_OnAddingObject_m3270813610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XAttribute_t3858477518 * V_0 = NULL;
	XAttribute_t3858477518 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = ___o0;
		if (((XDocument_t2733326047 *)IsInstClass((RuntimeObject*)L_0, XDocument_t2733326047_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject * L_1 = ___o0;
		if (((XDocumentType_t738990919 *)IsInstClass((RuntimeObject*)L_1, XDocumentType_t738990919_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject * L_2 = ___o0;
		if (((XDeclaration_t3367285402 *)IsInstClass((RuntimeObject*)L_2, XDeclaration_t3367285402_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		bool L_3 = ___rejectAttribute1;
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject * L_4 = ___o0;
		if (!((XAttribute_t3858477518 *)IsInstClass((RuntimeObject*)L_4, XAttribute_t3858477518_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}

IL_0032:
	{
		RuntimeObject * L_5 = ___o0;
		NullCheck(L_5);
		Type_t * L_6 = Object_GetType_m191970594(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m2024975688(NULL /*static, unused*/, _stringLiteral1881875922, L_6, /*hidden argument*/NULL);
		ArgumentException_t3259014390 * L_8 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
	}

IL_0048:
	{
		RuntimeObject * L_9 = ___o0;
		V_0 = ((XAttribute_t3858477518 *)IsInstClass((RuntimeObject*)L_9, XAttribute_t3858477518_il2cpp_TypeInfo_var));
		XAttribute_t3858477518 * L_10 = V_0;
		if (!L_10)
		{
			goto IL_00bd;
		}
	}
	{
		RuntimeObject* L_11 = XElement_Attributes_m3926517386(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		RuntimeObject* L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t4150604563_il2cpp_TypeInfo_var, L_11);
		V_2 = L_12;
	}

IL_0061:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0099;
		}

IL_0066:
		{
			RuntimeObject* L_13 = V_2;
			NullCheck(L_13);
			XAttribute_t3858477518 * L_14 = InterfaceFuncInvoker0< XAttribute_t3858477518 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t1334001345_il2cpp_TypeInfo_var, L_13);
			V_1 = L_14;
			XAttribute_t3858477518 * L_15 = V_0;
			NullCheck(L_15);
			XName_t785190363 * L_16 = XAttribute_get_Name_m2127497767(L_15, /*hidden argument*/NULL);
			XAttribute_t3858477518 * L_17 = V_1;
			NullCheck(L_17);
			XName_t785190363 * L_18 = XAttribute_get_Name_m2127497767(L_17, /*hidden argument*/NULL);
			bool L_19 = XName_op_Equality_m148690364(NULL /*static, unused*/, L_16, L_18, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0099;
			}
		}

IL_0083:
		{
			XAttribute_t3858477518 * L_20 = V_0;
			NullCheck(L_20);
			XName_t785190363 * L_21 = XAttribute_get_Name_m2127497767(L_20, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_22 = String_Format_m2024975688(NULL /*static, unused*/, _stringLiteral2594240547, L_21, /*hidden argument*/NULL);
			InvalidOperationException_t721527559 * L_23 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m2801133788(L_23, L_22, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_23);
		}

IL_0099:
		{
			RuntimeObject* L_24 = V_2;
			NullCheck(L_24);
			bool L_25 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_24);
			if (L_25)
			{
				goto IL_0066;
			}
		}

IL_00a4:
		{
			IL2CPP_LEAVE(0xB4, FINALLY_00a9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a9;
	}

FINALLY_00a9:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_26 = V_2;
			if (L_26)
			{
				goto IL_00ad;
			}
		}

IL_00ac:
		{
			IL2CPP_END_FINALLY(169)
		}

IL_00ad:
		{
			RuntimeObject* L_27 = V_2;
			NullCheck(L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_27);
			IL2CPP_END_FINALLY(169)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(169)
	{
		IL2CPP_JUMP_TBL(0xB4, IL_00b4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b4:
	{
		XAttribute_t3858477518 * L_28 = V_0;
		XElement_SetAttributeObject_m819702138(__this, L_28, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_00bd:
	{
		RuntimeObject * L_29 = ___o0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_29, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00f1;
		}
	}
	{
		XNode_t2707504214 * L_30 = ___refNode2;
		if (!((XText_t1860529549 *)IsInstClass((RuntimeObject*)L_30, XText_t1860529549_il2cpp_TypeInfo_var)))
		{
			goto IL_00f1;
		}
	}
	{
		XNode_t2707504214 * L_31 = ___refNode2;
		XText_t1860529549 * L_32 = ((XText_t1860529549 *)CastclassClass((RuntimeObject*)L_31, XText_t1860529549_il2cpp_TypeInfo_var));
		NullCheck(L_32);
		String_t* L_33 = XText_get_Value_m334359707(L_32, /*hidden argument*/NULL);
		RuntimeObject * L_34 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m2596409543(NULL /*static, unused*/, L_33, ((String_t*)IsInstSealed((RuntimeObject*)L_34, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_32);
		XText_set_Value_m1761166796(L_32, L_35, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_00f1:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XElement/<Attributes>c__Iterator20::.ctor()
extern "C"  void U3CAttributesU3Ec__Iterator20__ctor_m1308961820 (U3CAttributesU3Ec__Iterator20_t3474816789 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.Linq.XAttribute System.Xml.Linq.XElement/<Attributes>c__Iterator20::System.Collections.Generic.IEnumerator<System.Xml.Linq.XAttribute>.get_Current()
extern "C"  XAttribute_t3858477518 * U3CAttributesU3Ec__Iterator20_System_Collections_Generic_IEnumeratorU3CSystem_Xml_Linq_XAttributeU3E_get_Current_m340769163 (U3CAttributesU3Ec__Iterator20_t3474816789 * __this, const RuntimeMethod* method)
{
	{
		XAttribute_t3858477518 * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object System.Xml.Linq.XElement/<Attributes>c__Iterator20::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CAttributesU3Ec__Iterator20_System_Collections_IEnumerator_get_Current_m3003661324 (U3CAttributesU3Ec__Iterator20_t3474816789 * __this, const RuntimeMethod* method)
{
	{
		XAttribute_t3858477518 * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Collections.IEnumerator System.Xml.Linq.XElement/<Attributes>c__Iterator20::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CAttributesU3Ec__Iterator20_System_Collections_IEnumerable_GetEnumerator_m255454415 (U3CAttributesU3Ec__Iterator20_t3474816789 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CAttributesU3Ec__Iterator20_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XAttributeU3E_GetEnumerator_m558085440(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute> System.Xml.Linq.XElement/<Attributes>c__Iterator20::System.Collections.Generic.IEnumerable<System.Xml.Linq.XAttribute>.GetEnumerator()
extern "C"  RuntimeObject* U3CAttributesU3Ec__Iterator20_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XAttributeU3E_GetEnumerator_m558085440 (U3CAttributesU3Ec__Iterator20_t3474816789 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAttributesU3Ec__Iterator20_System_Collections_Generic_IEnumerableU3CSystem_Xml_Linq_XAttributeU3E_GetEnumerator_m558085440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CAttributesU3Ec__Iterator20_t3474816789 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_2();
		int32_t L_1 = Interlocked_CompareExchange_m3339239614(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CAttributesU3Ec__Iterator20_t3474816789 * L_2 = (U3CAttributesU3Ec__Iterator20_t3474816789 *)il2cpp_codegen_object_new(U3CAttributesU3Ec__Iterator20_t3474816789_il2cpp_TypeInfo_var);
		U3CAttributesU3Ec__Iterator20__ctor_m1308961820(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CAttributesU3Ec__Iterator20_t3474816789 * L_3 = V_0;
		XElement_t553821050 * L_4 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_3);
		L_3->set_U3CU3Ef__this_4(L_4);
		U3CAttributesU3Ec__Iterator20_t3474816789 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Xml.Linq.XElement/<Attributes>c__Iterator20::MoveNext()
extern "C"  bool U3CAttributesU3Ec__Iterator20_MoveNext_m1568743152 (U3CAttributesU3Ec__Iterator20_t3474816789 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U24PC_2();
		V_0 = L_0;
		__this->set_U24PC_2((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_007e;
	}

IL_0021:
	{
		XElement_t553821050 * L_2 = __this->get_U3CU3Ef__this_4();
		NullCheck(L_2);
		XAttribute_t3858477518 * L_3 = L_2->get_attr_first_12();
		__this->set_U3CaU3E__0_0(L_3);
		goto IL_006c;
	}

IL_0037:
	{
		XAttribute_t3858477518 * L_4 = __this->get_U3CaU3E__0_0();
		NullCheck(L_4);
		XAttribute_t3858477518 * L_5 = XAttribute_get_NextAttribute_m2269700464(L_4, /*hidden argument*/NULL);
		__this->set_U3CnextU3E__1_1(L_5);
		XAttribute_t3858477518 * L_6 = __this->get_U3CaU3E__0_0();
		__this->set_U24current_3(L_6);
		__this->set_U24PC_2(1);
		goto IL_0080;
	}

IL_0060:
	{
		XAttribute_t3858477518 * L_7 = __this->get_U3CnextU3E__1_1();
		__this->set_U3CaU3E__0_0(L_7);
	}

IL_006c:
	{
		XAttribute_t3858477518 * L_8 = __this->get_U3CaU3E__0_0();
		if (L_8)
		{
			goto IL_0037;
		}
	}
	{
		__this->set_U24PC_2((-1));
	}

IL_007e:
	{
		return (bool)0;
	}

IL_0080:
	{
		return (bool)1;
	}
	// Dead block : IL_0082: ldloc.1
}
// System.Void System.Xml.Linq.XElement/<Attributes>c__Iterator20::Dispose()
extern "C"  void U3CAttributesU3Ec__Iterator20_Dispose_m2040226533 (U3CAttributesU3Ec__Iterator20_t3474816789 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24PC_2((-1));
		return;
	}
}
// System.Void System.Xml.Linq.XElement/<Attributes>c__Iterator20::Reset()
extern "C"  void U3CAttributesU3Ec__Iterator20_Reset_m238223563 (U3CAttributesU3Ec__Iterator20_t3474816789 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAttributesU3Ec__Iterator20_Reset_m238223563_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::.ctor()
extern "C"  void U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23__ctor_m1584120561 (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::System.Collections.Generic.IEnumerator<string>.get_Current()
extern "C"  String_t* U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_System_Collections_Generic_IEnumeratorU3CstringU3E_get_Current_m3590831707 (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_System_Collections_IEnumerator_get_Current_m1060308819 (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Collections.IEnumerator System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_System_Collections_IEnumerable_GetEnumerator_m1091376440 (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_System_Collections_Generic_IEnumerableU3CstringU3E_GetEnumerator_m288797912(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::System.Collections.Generic.IEnumerable<string>.GetEnumerator()
extern "C"  RuntimeObject* U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_System_Collections_Generic_IEnumerableU3CstringU3E_GetEnumerator_m288797912 (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_System_Collections_Generic_IEnumerableU3CstringU3E_GetEnumerator_m288797912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_4();
		int32_t L_1 = Interlocked_CompareExchange_m3339239614(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * L_2 = (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 *)il2cpp_codegen_object_new(U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544_il2cpp_TypeInfo_var);
		U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23__ctor_m1584120561(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * L_3 = V_0;
		XElement_t553821050 * L_4 = __this->get_U3CU3Ef__this_7();
		NullCheck(L_3);
		L_3->set_U3CU3Ef__this_7(L_4);
		U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * L_5 = V_0;
		XNamespace_t1613015075 * L_6 = __this->get_U3CU24U3Ens_6();
		NullCheck(L_5);
		L_5->set_ns_3(L_6);
		U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * L_7 = V_0;
		return L_7;
	}
}
// System.Boolean System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::MoveNext()
extern "C"  bool U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_MoveNext_m3593474755 (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_MoveNext_m3593474755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * G_B10_0 = NULL;
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * G_B9_0 = NULL;
	String_t* G_B11_0 = NULL;
	U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * G_B11_1 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_004d;
			}
		}
	}
	{
		goto IL_013d;
	}

IL_0023:
	{
		XElement_t553821050 * L_2 = __this->get_U3CU3Ef__this_7();
		__this->set_U3CelU3E__0_0(L_2);
		goto IL_012b;
	}

IL_0034:
	{
		XElement_t553821050 * L_3 = __this->get_U3CelU3E__0_0();
		NullCheck(L_3);
		RuntimeObject* L_4 = XElement_Attributes_m3926517386(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t4150604563_il2cpp_TypeInfo_var, L_4);
		__this->set_U3CU24s_68U3E__1_1(L_5);
		V_0 = ((int32_t)-3);
	}

IL_004d:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_6 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
			{
				case 0:
				{
					goto IL_00ec;
				}
			}
		}

IL_0059:
		{
			goto IL_00ec;
		}

IL_005e:
		{
			RuntimeObject* L_7 = __this->get_U3CU24s_68U3E__1_1();
			NullCheck(L_7);
			XAttribute_t3858477518 * L_8 = InterfaceFuncInvoker0< XAttribute_t3858477518 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t1334001345_il2cpp_TypeInfo_var, L_7);
			__this->set_U3CaU3E__2_2(L_8);
			XAttribute_t3858477518 * L_9 = __this->get_U3CaU3E__2_2();
			NullCheck(L_9);
			bool L_10 = XAttribute_get_IsNamespaceDeclaration_m86030665(L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_00ec;
			}
		}

IL_007f:
		{
			XAttribute_t3858477518 * L_11 = __this->get_U3CaU3E__2_2();
			NullCheck(L_11);
			String_t* L_12 = XAttribute_get_Value_m3732914648(L_11, /*hidden argument*/NULL);
			XNamespace_t1613015075 * L_13 = __this->get_ns_3();
			NullCheck(L_13);
			String_t* L_14 = XNamespace_get_NamespaceName_m3174414200(L_13, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_15 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_00ec;
			}
		}

IL_009f:
		{
			XAttribute_t3858477518 * L_16 = __this->get_U3CaU3E__2_2();
			NullCheck(L_16);
			XName_t785190363 * L_17 = XAttribute_get_Name_m2127497767(L_16, /*hidden argument*/NULL);
			NullCheck(L_17);
			XNamespace_t1613015075 * L_18 = XName_get_Namespace_m3835650466(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
			XNamespace_t1613015075 * L_19 = XNamespace_get_None_m1138320793(NULL /*static, unused*/, /*hidden argument*/NULL);
			bool L_20 = XNamespace_op_Equality_m73486322(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
			G_B9_0 = __this;
			if (!L_20)
			{
				G_B10_0 = __this;
				goto IL_00c9;
			}
		}

IL_00bf:
		{
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
			G_B11_0 = L_21;
			G_B11_1 = G_B9_0;
			goto IL_00d9;
		}

IL_00c9:
		{
			XAttribute_t3858477518 * L_22 = __this->get_U3CaU3E__2_2();
			NullCheck(L_22);
			XName_t785190363 * L_23 = XAttribute_get_Name_m2127497767(L_22, /*hidden argument*/NULL);
			NullCheck(L_23);
			String_t* L_24 = XName_get_LocalName_m995190518(L_23, /*hidden argument*/NULL);
			G_B11_0 = L_24;
			G_B11_1 = G_B10_0;
		}

IL_00d9:
		{
			NullCheck(G_B11_1);
			G_B11_1->set_U24current_5(G_B11_0);
			__this->set_U24PC_4(1);
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x13F, FINALLY_0101);
		}

IL_00ec:
		{
			RuntimeObject* L_25 = __this->get_U3CU24s_68U3E__1_1();
			NullCheck(L_25);
			bool L_26 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_005e;
			}
		}

IL_00fc:
		{
			IL2CPP_LEAVE(0x11A, FINALLY_0101);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0101;
	}

FINALLY_0101:
	{ // begin finally (depth: 1)
		{
			bool L_27 = V_1;
			if (!L_27)
			{
				goto IL_0105;
			}
		}

IL_0104:
		{
			IL2CPP_END_FINALLY(257)
		}

IL_0105:
		{
			RuntimeObject* L_28 = __this->get_U3CU24s_68U3E__1_1();
			if (L_28)
			{
				goto IL_010e;
			}
		}

IL_010d:
		{
			IL2CPP_END_FINALLY(257)
		}

IL_010e:
		{
			RuntimeObject* L_29 = __this->get_U3CU24s_68U3E__1_1();
			NullCheck(L_29);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_29);
			IL2CPP_END_FINALLY(257)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(257)
	{
		IL2CPP_JUMP_TBL(0x13F, IL_013f)
		IL2CPP_JUMP_TBL(0x11A, IL_011a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_011a:
	{
		XElement_t553821050 * L_30 = __this->get_U3CelU3E__0_0();
		NullCheck(L_30);
		XElement_t553821050 * L_31 = XObject_get_Parent_m714109026(L_30, /*hidden argument*/NULL);
		__this->set_U3CelU3E__0_0(L_31);
	}

IL_012b:
	{
		XElement_t553821050 * L_32 = __this->get_U3CelU3E__0_0();
		if (L_32)
		{
			goto IL_0034;
		}
	}
	{
		__this->set_U24PC_4((-1));
	}

IL_013d:
	{
		return (bool)0;
	}

IL_013f:
	{
		return (bool)1;
	}
	// Dead block : IL_0141: ldloc.2
}
// System.Void System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::Dispose()
extern "C"  void U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_Dispose_m523461884 (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_Dispose_m523461884_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003b;
			}
			case 1:
			{
				goto IL_0021;
			}
		}
	}
	{
		goto IL_003b;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x3B, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_2 = __this->get_U3CU24s_68U3E__1_1();
			if (L_2)
			{
				goto IL_002f;
			}
		}

IL_002e:
		{
			IL2CPP_END_FINALLY(38)
		}

IL_002f:
		{
			RuntimeObject* L_3 = __this->get_U3CU24s_68U3E__1_1();
			NullCheck(L_3);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_3);
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XElement/<GetPrefixOfNamespaceCore>c__Iterator23::Reset()
extern "C"  void U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_Reset_m4198262898 (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_t3337692544 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetPrefixOfNamespaceCoreU3Ec__Iterator23_Reset_m4198262898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XName::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XName__ctor_m3384925849 (XName_t785190363 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName__ctor_m3384925849_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		SerializationInfo_t228987430 * L_0 = ___info0;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m547109409(L_0, _stringLiteral2328218955, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		XName_ExpandName_m3429394577(NULL /*static, unused*/, L_2, (&V_1), (&V_2), /*hidden argument*/NULL);
		String_t* L_3 = V_1;
		__this->set_local_0(L_3);
		String_t* L_4 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		XNamespace_t1613015075 * L_5 = XNamespace_Get_m1026612632(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_ns_1(L_5);
		return;
	}
}
// System.Void System.Xml.Linq.XName::.ctor(System.String,System.Xml.Linq.XNamespace)
extern "C"  void XName__ctor_m293531099 (XName_t785190363 * __this, String_t* ___local0, XNamespace_t1613015075 * ___ns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName__ctor_m293531099_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___local0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1936105738_il2cpp_TypeInfo_var);
		String_t* L_1 = XmlConvert_VerifyNCName_m2145737417(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		__this->set_local_0(L_1);
		XNamespace_t1613015075 * L_2 = ___ns1;
		__this->set_ns_1(L_2);
		return;
	}
}
// System.Boolean System.Xml.Linq.XName::System.IEquatable<System.Xml.Linq.XName>.Equals(System.Xml.Linq.XName)
extern "C"  bool XName_System_IEquatableU3CSystem_Xml_Linq_XNameU3E_Equals_m1026119289 (XName_t785190363 * __this, XName_t785190363 * ___other0, const RuntimeMethod* method)
{
	{
		XName_t785190363 * L_0 = ___other0;
		bool L_1 = XName_op_Equality_m148690364(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Xml.Linq.XName::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void XName_System_Runtime_Serialization_ISerializable_GetObjectData_m580019797 (XName_t785190363 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_System_Runtime_Serialization_ISerializable_GetObjectData_m580019797_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t228987430 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, _stringLiteral2792112382, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		SerializationInfo_t228987430 * L_2 = ___info0;
		String_t* L_3 = XName_ToString_m2526618213(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		SerializationInfo_AddValue_m1740888931(L_2, _stringLiteral2328218955, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Exception System.Xml.Linq.XName::ErrorInvalidExpandedName()
extern "C"  Exception_t * XName_ErrorInvalidExpandedName_m1515653754 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_ErrorInvalidExpandedName_m1515653754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArgumentException_t3259014390 * L_0 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_0, _stringLiteral154018907, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String System.Xml.Linq.XName::get_LocalName()
extern "C"  String_t* XName_get_LocalName_m995190518 (XName_t785190363 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_local_0();
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XName::get_Namespace()
extern "C"  XNamespace_t1613015075 * XName_get_Namespace_m3835650466 (XName_t785190363 * __this, const RuntimeMethod* method)
{
	{
		XNamespace_t1613015075 * L_0 = __this->get_ns_1();
		return L_0;
	}
}
// System.String System.Xml.Linq.XName::get_NamespaceName()
extern "C"  String_t* XName_get_NamespaceName_m4269716270 (XName_t785190363 * __this, const RuntimeMethod* method)
{
	{
		XNamespace_t1613015075 * L_0 = __this->get_ns_1();
		NullCheck(L_0);
		String_t* L_1 = XNamespace_get_NamespaceName_m3174414200(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.Linq.XName::Equals(System.Object)
extern "C"  bool XName_Equals_m3014313799 (XName_t785190363 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_Equals_m3014313799_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XName_t785190363 * V_0 = NULL;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		V_0 = ((XName_t785190363 *)IsInstSealed((RuntimeObject*)L_0, XName_t785190363_il2cpp_TypeInfo_var));
		XName_t785190363 * L_1 = V_0;
		bool L_2 = XName_op_Inequality_m4197580533(NULL /*static, unused*/, L_1, (XName_t785190363 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		XName_t785190363 * L_3 = V_0;
		bool L_4 = XName_op_Equality_m148690364(NULL /*static, unused*/, __this, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		return (bool)G_B3_0;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String)
extern "C"  XName_t785190363 * XName_Get_m477503418 (RuntimeObject * __this /* static, unused */, String_t* ___expandedName0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		String_t* L_0 = ___expandedName0;
		XName_ExpandName_m3429394577(NULL /*static, unused*/, L_0, (&V_0), (&V_1), /*hidden argument*/NULL);
		String_t* L_1 = V_0;
		String_t* L_2 = V_1;
		XName_t785190363 * L_3 = XName_Get_m2187745362(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void System.Xml.Linq.XName::ExpandName(System.String,System.String&,System.String&)
extern "C"  void XName_ExpandName_m3429394577 (RuntimeObject * __this /* static, unused */, String_t* ___expandedName0, String_t** ___local1, String_t** ___ns2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_ExpandName_m3429394577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___expandedName0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, _stringLiteral3952503856, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		String_t** L_2 = ___ns2;
		*((RuntimeObject **)(L_2)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_2), (RuntimeObject *)NULL);
		String_t** L_3 = ___local1;
		*((RuntimeObject **)(L_3)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_3), (RuntimeObject *)NULL);
		String_t* L_4 = ___expandedName0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m1606060069(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		Exception_t * L_6 = XName_ErrorInvalidExpandedName_m1515653754(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0028:
	{
		String_t* L_7 = ___expandedName0;
		NullCheck(L_7);
		Il2CppChar L_8 = String_get_Chars_m4230566705(L_7, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_00a9;
		}
	}
	{
		V_0 = 1;
		goto IL_005b;
	}

IL_003d:
	{
		String_t* L_9 = ___expandedName0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Il2CppChar L_11 = String_get_Chars_m4230566705(L_9, L_10, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0057;
		}
	}
	{
		String_t** L_12 = ___ns2;
		String_t* L_13 = ___expandedName0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		String_t* L_15 = String_Substring_m12482732(L_13, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)), /*hidden argument*/NULL);
		*((RuntimeObject **)(L_12)) = (RuntimeObject *)L_15;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_12), (RuntimeObject *)L_15);
	}

IL_0057:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005b:
	{
		int32_t L_17 = V_0;
		String_t* L_18 = ___expandedName0;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m1606060069(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_003d;
		}
	}
	{
		String_t** L_20 = ___ns2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_21 = String_IsNullOrEmpty_m2802126737(NULL /*static, unused*/, (*((String_t**)L_20)), /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0079;
		}
	}
	{
		Exception_t * L_22 = XName_ErrorInvalidExpandedName_m1515653754(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22);
	}

IL_0079:
	{
		String_t* L_23 = ___expandedName0;
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_m1606060069(L_23, /*hidden argument*/NULL);
		String_t** L_25 = ___ns2;
		NullCheck((*((String_t**)L_25)));
		int32_t L_26 = String_get_Length_m1606060069((*((String_t**)L_25)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)2))))))
		{
			goto IL_0093;
		}
	}
	{
		Exception_t * L_27 = XName_ErrorInvalidExpandedName_m1515653754(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27);
	}

IL_0093:
	{
		String_t** L_28 = ___local1;
		String_t* L_29 = ___expandedName0;
		String_t** L_30 = ___ns2;
		NullCheck((*((String_t**)L_30)));
		int32_t L_31 = String_get_Length_m1606060069((*((String_t**)L_30)), /*hidden argument*/NULL);
		NullCheck(L_29);
		String_t* L_32 = String_Substring_m2032624251(L_29, ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)2)), /*hidden argument*/NULL);
		*((RuntimeObject **)(L_28)) = (RuntimeObject *)L_32;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_28), (RuntimeObject *)L_32);
		goto IL_00b3;
	}

IL_00a9:
	{
		String_t** L_33 = ___local1;
		String_t* L_34 = ___expandedName0;
		*((RuntimeObject **)(L_33)) = (RuntimeObject *)L_34;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_33), (RuntimeObject *)L_34);
		String_t** L_35 = ___ns2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		*((RuntimeObject **)(L_35)) = (RuntimeObject *)L_36;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_35), (RuntimeObject *)L_36);
	}

IL_00b3:
	{
		return;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XName::Get(System.String,System.String)
extern "C"  XName_t785190363 * XName_Get_m2187745362 (RuntimeObject * __this /* static, unused */, String_t* ___localName0, String_t* ___namespaceName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_Get_m2187745362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___namespaceName1;
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		XNamespace_t1613015075 * L_1 = XNamespace_Get_m1026612632(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___localName0;
		NullCheck(L_1);
		XName_t785190363 * L_3 = XNamespace_GetName_m2299836393(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 System.Xml.Linq.XName::GetHashCode()
extern "C"  int32_t XName_GetHashCode_m518193777 (XName_t785190363 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_local_0();
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m931956593(L_0, /*hidden argument*/NULL);
		XNamespace_t1613015075 * L_2 = __this->get_ns_1();
		NullCheck(L_2);
		int32_t L_3 = XNamespace_GetHashCode_m1183686781(L_2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
// System.String System.Xml.Linq.XName::ToString()
extern "C"  String_t* XName_ToString_m2526618213 (XName_t785190363 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_ToString_m2526618213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XNamespace_t1613015075 * L_0 = __this->get_ns_1();
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		XNamespace_t1613015075 * L_1 = XNamespace_get_None_m1138320793(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = XNamespace_op_Equality_m73486322(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_3 = __this->get_local_0();
		return L_3;
	}

IL_001c:
	{
		XNamespace_t1613015075 * L_4 = __this->get_ns_1();
		NullCheck(L_4);
		String_t* L_5 = XNamespace_get_NamespaceName_m3174414200(L_4, /*hidden argument*/NULL);
		String_t* L_6 = __this->get_local_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m1561703559(NULL /*static, unused*/, _stringLiteral372029399, L_5, _stringLiteral372029393, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Boolean System.Xml.Linq.XName::op_Equality(System.Xml.Linq.XName,System.Xml.Linq.XName)
extern "C"  bool XName_op_Equality_m148690364 (RuntimeObject * __this /* static, unused */, XName_t785190363 * ___n10, XName_t785190363 * ___n21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XName_op_Equality_m148690364_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		XName_t785190363 * L_0 = ___n10;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		XName_t785190363 * L_1 = ___n21;
		return (bool)((((RuntimeObject*)(XName_t785190363 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_000b:
	{
		XName_t785190363 * L_2 = ___n21;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		XName_t785190363 * L_3 = ___n10;
		XName_t785190363 * L_4 = ___n21;
		bool L_5 = Object_ReferenceEquals_m3900584722(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		XName_t785190363 * L_6 = ___n10;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_local_0();
		XName_t785190363 * L_8 = ___n21;
		NullCheck(L_8);
		String_t* L_9 = L_8->get_local_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		XName_t785190363 * L_11 = ___n10;
		NullCheck(L_11);
		XNamespace_t1613015075 * L_12 = L_11->get_ns_1();
		XName_t785190363 * L_13 = ___n21;
		NullCheck(L_13);
		XNamespace_t1613015075 * L_14 = L_13->get_ns_1();
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		bool L_15 = XNamespace_op_Equality_m73486322(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_15));
		goto IL_0049;
	}

IL_0048:
	{
		G_B8_0 = 0;
	}

IL_0049:
	{
		G_B10_0 = G_B8_0;
		goto IL_004c;
	}

IL_004b:
	{
		G_B10_0 = 1;
	}

IL_004c:
	{
		return (bool)G_B10_0;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XName::op_Implicit(System.String)
extern "C"  XName_t785190363 * XName_op_Implicit_m3820697839 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	XName_t785190363 * G_B3_0 = NULL;
	{
		String_t* L_0 = ___s0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((XName_t785190363 *)(NULL));
		goto IL_0012;
	}

IL_000c:
	{
		String_t* L_1 = ___s0;
		XName_t785190363 * L_2 = XName_Get_m477503418(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// System.Boolean System.Xml.Linq.XName::op_Inequality(System.Xml.Linq.XName,System.Xml.Linq.XName)
extern "C"  bool XName_op_Inequality_m4197580533 (RuntimeObject * __this /* static, unused */, XName_t785190363 * ___n10, XName_t785190363 * ___n21, const RuntimeMethod* method)
{
	{
		XName_t785190363 * L_0 = ___n10;
		XName_t785190363 * L_1 = ___n21;
		bool L_2 = XName_op_Equality_m148690364(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XNamespace::.ctor(System.String)
extern "C"  void XNamespace__ctor_m4013965018 (XNamespace_t1613015075 * __this, String_t* ___namespaceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace__ctor_m4013965018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___namespaceName0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, _stringLiteral3550677034, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		String_t* L_2 = ___namespaceName0;
		__this->set_uri_4(L_2);
		return;
	}
}
// System.Void System.Xml.Linq.XNamespace::.cctor()
extern "C"  void XNamespace__cctor_m3798812553 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace__cctor_m3798812553_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t3527794337 * L_0 = (Dictionary_2_t3527794337 *)il2cpp_codegen_object_new(Dictionary_2_t3527794337_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2852800515(L_0, /*hidden argument*/Dictionary_2__ctor_m2852800515_RuntimeMethod_var);
		((XNamespace_t1613015075_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1613015075_il2cpp_TypeInfo_var))->set_nstable_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		XNamespace_t1613015075 * L_2 = XNamespace_Get_m1026612632(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		((XNamespace_t1613015075_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1613015075_il2cpp_TypeInfo_var))->set_blank_0(L_2);
		XNamespace_t1613015075 * L_3 = XNamespace_Get_m1026612632(NULL /*static, unused*/, _stringLiteral3939301371, /*hidden argument*/NULL);
		((XNamespace_t1613015075_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1613015075_il2cpp_TypeInfo_var))->set_xml_1(L_3);
		XNamespace_t1613015075 * L_4 = XNamespace_Get_m1026612632(NULL /*static, unused*/, _stringLiteral3036435824, /*hidden argument*/NULL);
		((XNamespace_t1613015075_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1613015075_il2cpp_TypeInfo_var))->set_xmlns_2(L_4);
		return;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_None()
extern "C"  XNamespace_t1613015075 * XNamespace_get_None_m1138320793 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_get_None_m1138320793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		XNamespace_t1613015075 * L_0 = ((XNamespace_t1613015075_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1613015075_il2cpp_TypeInfo_var))->get_blank_0();
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::get_Xmlns()
extern "C"  XNamespace_t1613015075 * XNamespace_get_Xmlns_m4214259751 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_get_Xmlns_m4214259751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		XNamespace_t1613015075 * L_0 = ((XNamespace_t1613015075_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1613015075_il2cpp_TypeInfo_var))->get_xmlns_2();
		return L_0;
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::Get(System.String)
extern "C"  XNamespace_t1613015075 * XNamespace_Get_m1026612632 (RuntimeObject * __this /* static, unused */, String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_Get_m1026612632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t3527794337 * V_0 = NULL;
	XNamespace_t1613015075 * V_1 = NULL;
	XNamespace_t1613015075 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		Dictionary_2_t3527794337 * L_0 = ((XNamespace_t1613015075_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1613015075_il2cpp_TypeInfo_var))->get_nstable_3();
		V_0 = L_0;
		Dictionary_2_t3527794337 * L_1 = V_0;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
			Dictionary_2_t3527794337 * L_2 = ((XNamespace_t1613015075_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1613015075_il2cpp_TypeInfo_var))->get_nstable_3();
			String_t* L_3 = ___uri0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_m135719904(L_2, L_3, (&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m135719904_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0031;
			}
		}

IL_001e:
		{
			String_t* L_5 = ___uri0;
			XNamespace_t1613015075 * L_6 = (XNamespace_t1613015075 *)il2cpp_codegen_object_new(XNamespace_t1613015075_il2cpp_TypeInfo_var);
			XNamespace__ctor_m4013965018(L_6, L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
			Dictionary_2_t3527794337 * L_7 = ((XNamespace_t1613015075_StaticFields*)il2cpp_codegen_static_fields_for(XNamespace_t1613015075_il2cpp_TypeInfo_var))->get_nstable_3();
			String_t* L_8 = ___uri0;
			XNamespace_t1613015075 * L_9 = V_1;
			NullCheck(L_7);
			Dictionary_2_set_Item_m2041749548(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_set_Item_m2041749548_RuntimeMethod_var);
		}

IL_0031:
		{
			XNamespace_t1613015075 * L_10 = V_1;
			V_2 = L_10;
			IL2CPP_LEAVE(0x44, FINALLY_003d);
		}

IL_0038:
		{
			; // IL_0038: leave IL_0044
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		Dictionary_2_t3527794337 * L_11 = V_0;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_JUMP_TBL(0x44, IL_0044)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0044:
	{
		XNamespace_t1613015075 * L_12 = V_2;
		return L_12;
	}
}
// System.Xml.Linq.XName System.Xml.Linq.XNamespace::GetName(System.String)
extern "C"  XName_t785190363 * XNamespace_GetName_m2299836393 (XNamespace_t1613015075 * __this, String_t* ___localName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_GetName_m2299836393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t2699969625 * V_0 = NULL;
	XName_t785190363 * V_1 = NULL;
	XName_t785190363 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_t2699969625 * L_0 = __this->get_table_5();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Dictionary_2_t2699969625 * L_1 = (Dictionary_2_t2699969625 *)il2cpp_codegen_object_new(Dictionary_2_t2699969625_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3965986263(L_1, /*hidden argument*/Dictionary_2__ctor_m3965986263_RuntimeMethod_var);
		__this->set_table_5(L_1);
	}

IL_0016:
	{
		Dictionary_2_t2699969625 * L_2 = __this->get_table_5();
		V_0 = L_2;
		Dictionary_2_t2699969625 * L_3 = V_0;
		Monitor_Enter_m2136705809(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t2699969625 * L_4 = __this->get_table_5();
			String_t* L_5 = ___localName0;
			NullCheck(L_4);
			bool L_6 = Dictionary_2_TryGetValue_m171435174(L_4, L_5, (&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m171435174_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_004b;
			}
		}

IL_0036:
		{
			String_t* L_7 = ___localName0;
			XName_t785190363 * L_8 = (XName_t785190363 *)il2cpp_codegen_object_new(XName_t785190363_il2cpp_TypeInfo_var);
			XName__ctor_m293531099(L_8, L_7, __this, /*hidden argument*/NULL);
			V_1 = L_8;
			Dictionary_2_t2699969625 * L_9 = __this->get_table_5();
			String_t* L_10 = ___localName0;
			XName_t785190363 * L_11 = V_1;
			NullCheck(L_9);
			Dictionary_2_set_Item_m867913498(L_9, L_10, L_11, /*hidden argument*/Dictionary_2_set_Item_m867913498_RuntimeMethod_var);
		}

IL_004b:
		{
			XName_t785190363 * L_12 = V_1;
			V_2 = L_12;
			IL2CPP_LEAVE(0x5E, FINALLY_0057);
		}

IL_0052:
		{
			; // IL_0052: leave IL_005e
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		Dictionary_2_t2699969625 * L_13 = V_0;
		Monitor_Exit_m2677760297(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(87)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_005e:
	{
		XName_t785190363 * L_14 = V_2;
		return L_14;
	}
}
// System.String System.Xml.Linq.XNamespace::get_NamespaceName()
extern "C"  String_t* XNamespace_get_NamespaceName_m3174414200 (XNamespace_t1613015075 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_uri_4();
		return L_0;
	}
}
// System.Boolean System.Xml.Linq.XNamespace::Equals(System.Object)
extern "C"  bool XNamespace_Equals_m777760167 (XNamespace_t1613015075 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_Equals_m777760167_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XNamespace_t1613015075 * V_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		bool L_1 = Object_ReferenceEquals_m3900584722(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = ((XNamespace_t1613015075 *)IsInstSealed((RuntimeObject*)L_2, XNamespace_t1613015075_il2cpp_TypeInfo_var));
		XNamespace_t1613015075 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		bool L_4 = XNamespace_op_Inequality_m1061703997(NULL /*static, unused*/, L_3, (XNamespace_t1613015075 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_5 = __this->get_uri_4();
		XNamespace_t1613015075 * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_uri_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_5, L_7, /*hidden argument*/NULL);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = 0;
	}

IL_0035:
	{
		return (bool)G_B5_0;
	}
}
// System.Int32 System.Xml.Linq.XNamespace::GetHashCode()
extern "C"  int32_t XNamespace_GetHashCode_m1183686781 (XNamespace_t1613015075 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_uri_4();
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m931956593(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String System.Xml.Linq.XNamespace::ToString()
extern "C"  String_t* XNamespace_ToString_m2854292113 (XNamespace_t1613015075 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_uri_4();
		return L_0;
	}
}
// System.Boolean System.Xml.Linq.XNamespace::op_Equality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
extern "C"  bool XNamespace_op_Equality_m73486322 (RuntimeObject * __this /* static, unused */, XNamespace_t1613015075 * ___o10, XNamespace_t1613015075 * ___o21, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		XNamespace_t1613015075 * L_0 = ___o10;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		XNamespace_t1613015075 * L_1 = ___o10;
		XNamespace_t1613015075 * L_2 = ___o21;
		NullCheck(L_1);
		bool L_3 = XNamespace_Equals_m777760167(L_1, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0016;
	}

IL_0012:
	{
		XNamespace_t1613015075 * L_4 = ___o21;
		G_B3_0 = ((((RuntimeObject*)(XNamespace_t1613015075 *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_0016:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean System.Xml.Linq.XNamespace::op_Inequality(System.Xml.Linq.XNamespace,System.Xml.Linq.XNamespace)
extern "C"  bool XNamespace_op_Inequality_m1061703997 (RuntimeObject * __this /* static, unused */, XNamespace_t1613015075 * ___o10, XNamespace_t1613015075 * ___o21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_op_Inequality_m1061703997_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XNamespace_t1613015075 * L_0 = ___o10;
		XNamespace_t1613015075 * L_1 = ___o21;
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		bool L_2 = XNamespace_op_Equality_m73486322(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Xml.Linq.XNamespace System.Xml.Linq.XNamespace::op_Implicit(System.String)
extern "C"  XNamespace_t1613015075 * XNamespace_op_Implicit_m665673955 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNamespace_op_Implicit_m665673955_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XNamespace_t1613015075 * G_B3_0 = NULL;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(XNamespace_t1613015075_il2cpp_TypeInfo_var);
		XNamespace_t1613015075 * L_2 = XNamespace_Get_m1026612632(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = ((XNamespace_t1613015075 *)(NULL));
	}

IL_0012:
	{
		return G_B3_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XNode::.ctor()
extern "C"  void XNode__ctor_m3635466201 (XNode_t2707504214 * __this, const RuntimeMethod* method)
{
	{
		XObject__ctor_m3797862556(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Xml.Linq.XNode::.cctor()
extern "C"  void XNode__cctor_m1243525384 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNode__cctor_m1243525384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XNodeEqualityComparer_t3116038621 * L_0 = (XNodeEqualityComparer_t3116038621 *)il2cpp_codegen_object_new(XNodeEqualityComparer_t3116038621_il2cpp_TypeInfo_var);
		XNodeEqualityComparer__ctor_m2149745472(L_0, /*hidden argument*/NULL);
		((XNode_t2707504214_StaticFields*)il2cpp_codegen_static_fields_for(XNode_t2707504214_il2cpp_TypeInfo_var))->set_eq_comparer_4(L_0);
		XNodeDocumentOrderComparer_t1208684534 * L_1 = (XNodeDocumentOrderComparer_t1208684534 *)il2cpp_codegen_object_new(XNodeDocumentOrderComparer_t1208684534_il2cpp_TypeInfo_var);
		XNodeDocumentOrderComparer__ctor_m2785062413(L_1, /*hidden argument*/NULL);
		((XNode_t2707504214_StaticFields*)il2cpp_codegen_static_fields_for(XNode_t2707504214_il2cpp_TypeInfo_var))->set_order_comparer_5(L_1);
		return;
	}
}
// System.Void System.Xml.Linq.XNode::set_PreviousNode(System.Xml.Linq.XNode)
extern "C"  void XNode_set_PreviousNode_m1918335957 (XNode_t2707504214 * __this, XNode_t2707504214 * ___value0, const RuntimeMethod* method)
{
	{
		XNode_t2707504214 * L_0 = ___value0;
		__this->set_previous_6(L_0);
		return;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XNode::get_NextNode()
extern "C"  XNode_t2707504214 * XNode_get_NextNode_m1164634702 (XNode_t2707504214 * __this, const RuntimeMethod* method)
{
	{
		XNode_t2707504214 * L_0 = __this->get_next_7();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XNode::set_NextNode(System.Xml.Linq.XNode)
extern "C"  void XNode_set_NextNode_m2612555387 (XNode_t2707504214 * __this, XNode_t2707504214 * ___value0, const RuntimeMethod* method)
{
	{
		XNode_t2707504214 * L_0 = ___value0;
		__this->set_next_7(L_0);
		return;
	}
}
// System.String System.Xml.Linq.XNode::ToString(System.Xml.Linq.SaveOptions)
extern "C"  String_t* XNode_ToString_m3539772875 (XNode_t2707504214 * __this, int32_t ___options0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNode_ToString_m3539772875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t4139609088 * V_0 = NULL;
	XmlWriterSettings_t924210539 * V_1 = NULL;
	XmlWriter_t1048088568 * V_2 = NULL;
	{
		StringWriter_t4139609088 * L_0 = (StringWriter_t4139609088 *)il2cpp_codegen_object_new(StringWriter_t4139609088_il2cpp_TypeInfo_var);
		StringWriter__ctor_m59456937(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlWriterSettings_t924210539 * L_1 = (XmlWriterSettings_t924210539 *)il2cpp_codegen_object_new(XmlWriterSettings_t924210539_il2cpp_TypeInfo_var);
		XmlWriterSettings__ctor_m589782448(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		XmlWriterSettings_t924210539 * L_2 = V_1;
		NullCheck(L_2);
		XmlWriterSettings_set_ConformanceLevel_m528648687(L_2, 0, /*hidden argument*/NULL);
		XmlWriterSettings_t924210539 * L_3 = V_1;
		int32_t L_4 = ___options0;
		NullCheck(L_3);
		XmlWriterSettings_set_Indent_m1832140252(L_3, (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		StringWriter_t4139609088 * L_5 = V_0;
		XmlWriterSettings_t924210539 * L_6 = V_1;
		XmlWriter_t1048088568 * L_7 = XmlWriter_Create_m3077457120(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		XmlWriter_t1048088568 * L_8 = V_2;
		VirtActionInvoker1< XmlWriter_t1048088568 * >::Invoke(8 /* System.Void System.Xml.Linq.XNode::WriteTo(System.Xml.XmlWriter) */, __this, L_8);
		XmlWriter_t1048088568 * L_9 = V_2;
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Xml.XmlWriter::Close() */, L_9);
		StringWriter_t4139609088 * L_10 = V_0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.IO.StringWriter::ToString() */, L_10);
		return L_11;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XNode::ReadFrom(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
extern "C"  XNode_t2707504214 * XNode_ReadFrom_m1777325942 (RuntimeObject * __this /* static, unused */, XmlReader_t3675626668 * ___r0, int32_t ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNode_ReadFrom_m1777325942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XText_t1860529549 * V_0 = NULL;
	XCData_t1306050895 * V_1 = NULL;
	XProcessingInstruction_t2854903359 * V_2 = NULL;
	XComment_t1618005895 * V_3 = NULL;
	XDocumentType_t738990919 * V_4 = NULL;
	int32_t V_5 = 0;
	{
		XmlReader_t3675626668 * L_0 = ___r0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_0);
		V_5 = L_1;
		int32_t L_2 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_010c;
			}
			case 2:
			{
				goto IL_0056;
			}
			case 3:
			{
				goto IL_0073;
			}
			case 4:
			{
				goto IL_010c;
			}
			case 5:
			{
				goto IL_010c;
			}
			case 6:
			{
				goto IL_0090;
			}
			case 7:
			{
				goto IL_00b3;
			}
			case 8:
			{
				goto IL_010c;
			}
			case 9:
			{
				goto IL_00d0;
			}
			case 10:
			{
				goto IL_010c;
			}
			case 11:
			{
				goto IL_010c;
			}
			case 12:
			{
				goto IL_0056;
			}
			case 13:
			{
				goto IL_0056;
			}
		}
	}
	{
		goto IL_010c;
	}

IL_004e:
	{
		XmlReader_t3675626668 * L_3 = ___r0;
		int32_t L_4 = ___options1;
		IL2CPP_RUNTIME_CLASS_INIT(XElement_t553821050_il2cpp_TypeInfo_var);
		XElement_t553821050 * L_5 = XElement_LoadCore_m677132477(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0056:
	{
		XmlReader_t3675626668 * L_6 = ___r0;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_6);
		XText_t1860529549 * L_8 = (XText_t1860529549 *)il2cpp_codegen_object_new(XText_t1860529549_il2cpp_TypeInfo_var);
		XText__ctor_m2852593626(L_8, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		XText_t1860529549 * L_9 = V_0;
		XmlReader_t3675626668 * L_10 = ___r0;
		int32_t L_11 = ___options1;
		NullCheck(L_9);
		XObject_FillLineInfoAndBaseUri_m431604165(L_9, L_10, L_11, /*hidden argument*/NULL);
		XmlReader_t3675626668 * L_12 = ___r0;
		NullCheck(L_12);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_12);
		XText_t1860529549 * L_13 = V_0;
		return L_13;
	}

IL_0073:
	{
		XmlReader_t3675626668 * L_14 = ___r0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_14);
		XCData_t1306050895 * L_16 = (XCData_t1306050895 *)il2cpp_codegen_object_new(XCData_t1306050895_il2cpp_TypeInfo_var);
		XCData__ctor_m482046048(L_16, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		XCData_t1306050895 * L_17 = V_1;
		XmlReader_t3675626668 * L_18 = ___r0;
		int32_t L_19 = ___options1;
		NullCheck(L_17);
		XObject_FillLineInfoAndBaseUri_m431604165(L_17, L_18, L_19, /*hidden argument*/NULL);
		XmlReader_t3675626668 * L_20 = ___r0;
		NullCheck(L_20);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_20);
		XCData_t1306050895 * L_21 = V_1;
		return L_21;
	}

IL_0090:
	{
		XmlReader_t3675626668 * L_22 = ___r0;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_22);
		XmlReader_t3675626668 * L_24 = ___r0;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_24);
		XProcessingInstruction_t2854903359 * L_26 = (XProcessingInstruction_t2854903359 *)il2cpp_codegen_object_new(XProcessingInstruction_t2854903359_il2cpp_TypeInfo_var);
		XProcessingInstruction__ctor_m3547038108(L_26, L_23, L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		XProcessingInstruction_t2854903359 * L_27 = V_2;
		XmlReader_t3675626668 * L_28 = ___r0;
		int32_t L_29 = ___options1;
		NullCheck(L_27);
		XObject_FillLineInfoAndBaseUri_m431604165(L_27, L_28, L_29, /*hidden argument*/NULL);
		XmlReader_t3675626668 * L_30 = ___r0;
		NullCheck(L_30);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_30);
		XProcessingInstruction_t2854903359 * L_31 = V_2;
		return L_31;
	}

IL_00b3:
	{
		XmlReader_t3675626668 * L_32 = ___r0;
		NullCheck(L_32);
		String_t* L_33 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_32);
		XComment_t1618005895 * L_34 = (XComment_t1618005895 *)il2cpp_codegen_object_new(XComment_t1618005895_il2cpp_TypeInfo_var);
		XComment__ctor_m2882971392(L_34, L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		XComment_t1618005895 * L_35 = V_3;
		XmlReader_t3675626668 * L_36 = ___r0;
		int32_t L_37 = ___options1;
		NullCheck(L_35);
		XObject_FillLineInfoAndBaseUri_m431604165(L_35, L_36, L_37, /*hidden argument*/NULL);
		XmlReader_t3675626668 * L_38 = ___r0;
		NullCheck(L_38);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_38);
		XComment_t1618005895 * L_39 = V_3;
		return L_39;
	}

IL_00d0:
	{
		XmlReader_t3675626668 * L_40 = ___r0;
		NullCheck(L_40);
		String_t* L_41 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Xml.XmlReader::get_Name() */, L_40);
		XmlReader_t3675626668 * L_42 = ___r0;
		NullCheck(L_42);
		String_t* L_43 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(30 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_42, _stringLiteral2074996249);
		XmlReader_t3675626668 * L_44 = ___r0;
		NullCheck(L_44);
		String_t* L_45 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(30 /* System.String System.Xml.XmlReader::GetAttribute(System.String) */, L_44, _stringLiteral1111970457);
		XmlReader_t3675626668 * L_46 = ___r0;
		NullCheck(L_46);
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Xml.XmlReader::get_Value() */, L_46);
		XDocumentType_t738990919 * L_48 = (XDocumentType_t738990919 *)il2cpp_codegen_object_new(XDocumentType_t738990919_il2cpp_TypeInfo_var);
		XDocumentType__ctor_m2779569696(L_48, L_41, L_43, L_45, L_47, /*hidden argument*/NULL);
		V_4 = L_48;
		XDocumentType_t738990919 * L_49 = V_4;
		XmlReader_t3675626668 * L_50 = ___r0;
		int32_t L_51 = ___options1;
		NullCheck(L_49);
		XObject_FillLineInfoAndBaseUri_m431604165(L_49, L_50, L_51, /*hidden argument*/NULL);
		XmlReader_t3675626668 * L_52 = ___r0;
		NullCheck(L_52);
		VirtFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Xml.XmlReader::Read() */, L_52);
		XDocumentType_t738990919 * L_53 = V_4;
		return L_53;
	}

IL_010c:
	{
		XmlReader_t3675626668 * L_54 = ___r0;
		NullCheck(L_54);
		int32_t L_55 = VirtFuncInvoker0< int32_t >::Invoke(19 /* System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType() */, L_54);
		int32_t L_56 = L_55;
		RuntimeObject * L_57 = Box(XmlNodeType_t739504597_il2cpp_TypeInfo_var, &L_56);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_58 = String_Format_m2024975688(NULL /*static, unused*/, _stringLiteral2068626695, L_57, /*hidden argument*/NULL);
		InvalidOperationException_t721527559 * L_59 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_59, L_58, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59);
	}
}
// System.Void System.Xml.Linq.XNode::Remove()
extern "C"  void XNode_Remove_m3085429851 (XNode_t2707504214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNode_Remove_m3085429851_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XElement_t553821050 * L_0 = XObject_get_Parent_m714109026(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t721527559 * L_1 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_1, _stringLiteral3311509138, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		XElement_t553821050 * L_2 = XObject_get_Parent_m714109026(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		XNode_t2707504214 * L_3 = XContainer_get_FirstNode_m3344509478(L_2, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(XNode_t2707504214 *)L_3) == ((RuntimeObject*)(XNode_t2707504214 *)__this))))
		{
			goto IL_0038;
		}
	}
	{
		XElement_t553821050 * L_4 = XObject_get_Parent_m714109026(__this, /*hidden argument*/NULL);
		XNode_t2707504214 * L_5 = __this->get_next_7();
		NullCheck(L_4);
		XContainer_set_FirstNode_m766455929(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0038:
	{
		XElement_t553821050 * L_6 = XObject_get_Parent_m714109026(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		XNode_t2707504214 * L_7 = XContainer_get_LastNode_m375821822(L_6, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(XNode_t2707504214 *)L_7) == ((RuntimeObject*)(XNode_t2707504214 *)__this))))
		{
			goto IL_005a;
		}
	}
	{
		XElement_t553821050 * L_8 = XObject_get_Parent_m714109026(__this, /*hidden argument*/NULL);
		XNode_t2707504214 * L_9 = __this->get_previous_6();
		NullCheck(L_8);
		XContainer_set_LastNode_m2825450477(L_8, L_9, /*hidden argument*/NULL);
	}

IL_005a:
	{
		XNode_t2707504214 * L_10 = __this->get_previous_6();
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		XNode_t2707504214 * L_11 = __this->get_previous_6();
		XNode_t2707504214 * L_12 = __this->get_next_7();
		NullCheck(L_11);
		L_11->set_next_7(L_12);
	}

IL_0076:
	{
		XNode_t2707504214 * L_13 = __this->get_next_7();
		if (!L_13)
		{
			goto IL_0092;
		}
	}
	{
		XNode_t2707504214 * L_14 = __this->get_next_7();
		XNode_t2707504214 * L_15 = __this->get_previous_6();
		NullCheck(L_14);
		L_14->set_previous_6(L_15);
	}

IL_0092:
	{
		__this->set_previous_6((XNode_t2707504214 *)NULL);
		__this->set_next_7((XNode_t2707504214 *)NULL);
		XObject_SetOwner_m582264412(__this, (XContainer_t1445911831 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Xml.Linq.XNode::ToString()
extern "C"  String_t* XNode_ToString_m418147946 (XNode_t2707504214 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = XNode_ToString_m3539772875(__this, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XNodeDocumentOrderComparer::.ctor()
extern "C"  void XNodeDocumentOrderComparer__ctor_m2785062413 (XNodeDocumentOrderComparer_t1208684534 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.Linq.XNodeDocumentOrderComparer::System.Collections.IComparer.Compare(System.Object,System.Object)
extern "C"  int32_t XNodeDocumentOrderComparer_System_Collections_IComparer_Compare_m2457853580 (XNodeDocumentOrderComparer_t1208684534 * __this, RuntimeObject * ___n10, RuntimeObject * ___n21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNodeDocumentOrderComparer_System_Collections_IComparer_Compare_m2457853580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___n10;
		RuntimeObject * L_1 = ___n21;
		int32_t L_2 = XNodeDocumentOrderComparer_Compare_m2082190298(__this, ((XNode_t2707504214 *)CastclassClass((RuntimeObject*)L_0, XNode_t2707504214_il2cpp_TypeInfo_var)), ((XNode_t2707504214 *)CastclassClass((RuntimeObject*)L_1, XNode_t2707504214_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Xml.Linq.XNodeDocumentOrderComparer::Compare(System.Xml.Linq.XNode,System.Xml.Linq.XNode)
extern "C"  int32_t XNodeDocumentOrderComparer_Compare_m2082190298 (XNodeDocumentOrderComparer_t1208684534 * __this, XNode_t2707504214 * ___n10, XNode_t2707504214 * ___n21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNodeDocumentOrderComparer_Compare_m2082190298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DateTime_t693205669  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B6_0 = 0;
	{
		XNode_t2707504214 * L_0 = ___n10;
		XNode_t2707504214 * L_1 = ___n21;
		int32_t L_2 = XNodeDocumentOrderComparer_CompareCore_m1096164403(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0053;
			}
			case 4:
			{
				goto IL_0051;
			}
			case 5:
			{
				goto IL_0053;
			}
			case 6:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_0053;
	}

IL_0030:
	{
		return 0;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t693205669_il2cpp_TypeInfo_var);
		DateTime_t693205669  L_4 = DateTime_get_Now_m24136300(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		int64_t L_5 = DateTime_get_Ticks_m310281298((&V_1), /*hidden argument*/NULL);
		if ((!(((uint64_t)((int64_t)((int64_t)L_5%(int64_t)(((int64_t)((int64_t)2)))))) == ((uint64_t)(((int64_t)((int64_t)1)))))))
		{
			goto IL_004f;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_0050;
	}

IL_004f:
	{
		G_B6_0 = (-1);
	}

IL_0050:
	{
		return G_B6_0;
	}

IL_0051:
	{
		return 1;
	}

IL_0053:
	{
		return (-1);
	}
}
// System.Xml.Linq.XNodeDocumentOrderComparer/CompareResult System.Xml.Linq.XNodeDocumentOrderComparer::CompareCore(System.Xml.Linq.XNode,System.Xml.Linq.XNode)
extern "C"  int32_t XNodeDocumentOrderComparer_CompareCore_m1096164403 (XNodeDocumentOrderComparer_t1208684534 * __this, XNode_t2707504214 * ___n10, XNode_t2707504214 * ___n21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNodeDocumentOrderComparer_CompareCore_m1096164403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	XNode_t2707504214 * V_3 = NULL;
	XNode_t2707504214 * V_4 = NULL;
	int32_t V_5 = 0;
	{
		XNode_t2707504214 * L_0 = ___n10;
		XNode_t2707504214 * L_1 = ___n21;
		if ((!(((RuntimeObject*)(XNode_t2707504214 *)L_0) == ((RuntimeObject*)(XNode_t2707504214 *)L_1))))
		{
			goto IL_0009;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0009:
	{
		XNode_t2707504214 * L_2 = ___n10;
		NullCheck(L_2);
		XContainer_t1445911831 * L_3 = XObject_get_Owner_m3004402994(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0067;
		}
	}
	{
		XNode_t2707504214 * L_4 = ___n21;
		NullCheck(L_4);
		XContainer_t1445911831 * L_5 = XObject_get_Owner_m3004402994(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0021;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0021:
	{
		XNode_t2707504214 * L_6 = ___n10;
		XNode_t2707504214 * L_7 = ___n21;
		NullCheck(L_7);
		XContainer_t1445911831 * L_8 = XObject_get_Owner_m3004402994(L_7, /*hidden argument*/NULL);
		int32_t L_9 = XNodeDocumentOrderComparer_CompareCore_m1096164403(__this, L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		V_5 = L_10;
		int32_t L_11 = V_5;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_005a;
			}
			case 3:
			{
				goto IL_0058;
			}
			case 4:
			{
				goto IL_005a;
			}
			case 5:
			{
				goto IL_0058;
			}
		}
	}
	{
		goto IL_0065;
	}

IL_0056:
	{
		return (int32_t)(3);
	}

IL_0058:
	{
		return (int32_t)(5);
	}

IL_005a:
	{
		Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m485833136(L_12, _stringLiteral3872491103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12);
	}

IL_0065:
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0067:
	{
		XNode_t2707504214 * L_14 = ___n21;
		NullCheck(L_14);
		XContainer_t1445911831 * L_15 = XObject_get_Owner_m3004402994(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00b8;
		}
	}
	{
		XNode_t2707504214 * L_16 = ___n21;
		XNode_t2707504214 * L_17 = ___n10;
		int32_t L_18 = XNodeDocumentOrderComparer_CompareCore_m1096164403(__this, L_16, L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		int32_t L_19 = V_1;
		V_5 = L_19;
		int32_t L_20 = V_5;
		switch (L_20)
		{
			case 0:
			{
				goto IL_00b6;
			}
			case 1:
			{
				goto IL_00b6;
			}
			case 2:
			{
				goto IL_00aa;
			}
			case 3:
			{
				goto IL_00ac;
			}
			case 4:
			{
				goto IL_00ae;
			}
			case 5:
			{
				goto IL_00b0;
			}
			case 6:
			{
				goto IL_00b4;
			}
			case 7:
			{
				goto IL_00b2;
			}
		}
	}
	{
		goto IL_00b8;
	}

IL_00aa:
	{
		return (int32_t)(3);
	}

IL_00ac:
	{
		return (int32_t)(2);
	}

IL_00ae:
	{
		return (int32_t)(5);
	}

IL_00b0:
	{
		return (int32_t)(4);
	}

IL_00b2:
	{
		return (int32_t)(6);
	}

IL_00b4:
	{
		return (int32_t)(7);
	}

IL_00b6:
	{
		int32_t L_21 = V_1;
		return L_21;
	}

IL_00b8:
	{
		XNode_t2707504214 * L_22 = ___n10;
		NullCheck(L_22);
		XContainer_t1445911831 * L_23 = XObject_get_Owner_m3004402994(L_22, /*hidden argument*/NULL);
		XNode_t2707504214 * L_24 = ___n21;
		NullCheck(L_24);
		XContainer_t1445911831 * L_25 = XObject_get_Owner_m3004402994(L_24, /*hidden argument*/NULL);
		int32_t L_26 = XNodeDocumentOrderComparer_CompareCore_m1096164403(__this, L_23, L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		int32_t L_27 = V_2;
		V_5 = L_27;
		int32_t L_28 = V_5;
		switch (L_28)
		{
			case 0:
			{
				goto IL_00f2;
			}
			case 1:
			{
				goto IL_017b;
			}
			case 2:
			{
				goto IL_010b;
			}
			case 3:
			{
				goto IL_00fc;
			}
			case 4:
			{
				goto IL_0148;
			}
			case 5:
			{
				goto IL_011a;
			}
		}
	}
	{
		goto IL_017b;
	}

IL_00f2:
	{
		XNode_t2707504214 * L_29 = ___n10;
		XNode_t2707504214 * L_30 = ___n21;
		int32_t L_31 = XNodeDocumentOrderComparer_CompareSibling_m1852759449(__this, L_29, L_30, 0, /*hidden argument*/NULL);
		return L_31;
	}

IL_00fc:
	{
		XNode_t2707504214 * L_32 = ___n10;
		XNode_t2707504214 * L_33 = ___n21;
		NullCheck(L_33);
		XContainer_t1445911831 * L_34 = XObject_get_Owner_m3004402994(L_33, /*hidden argument*/NULL);
		int32_t L_35 = XNodeDocumentOrderComparer_CompareSibling_m1852759449(__this, L_32, L_34, 3, /*hidden argument*/NULL);
		return L_35;
	}

IL_010b:
	{
		XNode_t2707504214 * L_36 = ___n10;
		NullCheck(L_36);
		XContainer_t1445911831 * L_37 = XObject_get_Owner_m3004402994(L_36, /*hidden argument*/NULL);
		XNode_t2707504214 * L_38 = ___n21;
		int32_t L_39 = XNodeDocumentOrderComparer_CompareSibling_m1852759449(__this, L_37, L_38, 2, /*hidden argument*/NULL);
		return L_39;
	}

IL_011a:
	{
		XNode_t2707504214 * L_40 = ___n21;
		V_3 = L_40;
		goto IL_0143;
	}

IL_0121:
	{
		XNode_t2707504214 * L_41 = V_3;
		NullCheck(L_41);
		XContainer_t1445911831 * L_42 = XObject_get_Owner_m3004402994(L_41, /*hidden argument*/NULL);
		XNode_t2707504214 * L_43 = ___n10;
		NullCheck(L_43);
		XContainer_t1445911831 * L_44 = XObject_get_Owner_m3004402994(L_43, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(XContainer_t1445911831 *)L_42) == ((RuntimeObject*)(XContainer_t1445911831 *)L_44))))
		{
			goto IL_013c;
		}
	}
	{
		XNode_t2707504214 * L_45 = ___n10;
		XNode_t2707504214 * L_46 = V_3;
		int32_t L_47 = XNodeDocumentOrderComparer_CompareSibling_m1852759449(__this, L_45, L_46, 5, /*hidden argument*/NULL);
		return L_47;
	}

IL_013c:
	{
		XNode_t2707504214 * L_48 = V_3;
		NullCheck(L_48);
		XContainer_t1445911831 * L_49 = XObject_get_Owner_m3004402994(L_48, /*hidden argument*/NULL);
		V_3 = L_49;
	}

IL_0143:
	{
		goto IL_0121;
	}

IL_0148:
	{
		XNode_t2707504214 * L_50 = ___n10;
		V_4 = L_50;
		goto IL_0176;
	}

IL_0150:
	{
		XNode_t2707504214 * L_51 = V_4;
		NullCheck(L_51);
		XContainer_t1445911831 * L_52 = XObject_get_Owner_m3004402994(L_51, /*hidden argument*/NULL);
		XNode_t2707504214 * L_53 = ___n21;
		NullCheck(L_53);
		XContainer_t1445911831 * L_54 = XObject_get_Owner_m3004402994(L_53, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(XContainer_t1445911831 *)L_52) == ((RuntimeObject*)(XContainer_t1445911831 *)L_54))))
		{
			goto IL_016d;
		}
	}
	{
		XNode_t2707504214 * L_55 = V_4;
		XNode_t2707504214 * L_56 = ___n21;
		int32_t L_57 = XNodeDocumentOrderComparer_CompareSibling_m1852759449(__this, L_55, L_56, 4, /*hidden argument*/NULL);
		return L_57;
	}

IL_016d:
	{
		XNode_t2707504214 * L_58 = V_4;
		NullCheck(L_58);
		XContainer_t1445911831 * L_59 = XObject_get_Owner_m3004402994(L_58, /*hidden argument*/NULL);
		V_4 = L_59;
	}

IL_0176:
	{
		goto IL_0150;
	}

IL_017b:
	{
		int32_t L_60 = V_2;
		return L_60;
	}
}
// System.Xml.Linq.XNodeDocumentOrderComparer/CompareResult System.Xml.Linq.XNodeDocumentOrderComparer::CompareSibling(System.Xml.Linq.XNode,System.Xml.Linq.XNode,System.Xml.Linq.XNodeDocumentOrderComparer/CompareResult)
extern "C"  int32_t XNodeDocumentOrderComparer_CompareSibling_m1852759449 (XNodeDocumentOrderComparer_t1208684534 * __this, XNode_t2707504214 * ___n10, XNode_t2707504214 * ___n21, int32_t ___forSameValue2, const RuntimeMethod* method)
{
	XNode_t2707504214 * V_0 = NULL;
	{
		XNode_t2707504214 * L_0 = ___n10;
		XNode_t2707504214 * L_1 = ___n21;
		if ((!(((RuntimeObject*)(XNode_t2707504214 *)L_0) == ((RuntimeObject*)(XNode_t2707504214 *)L_1))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___forSameValue2;
		return L_2;
	}

IL_0009:
	{
		XNode_t2707504214 * L_3 = ___n10;
		NullCheck(L_3);
		XNode_t2707504214 * L_4 = XNode_get_NextNode_m1164634702(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0025;
	}

IL_0015:
	{
		XNode_t2707504214 * L_5 = V_0;
		XNode_t2707504214 * L_6 = ___n21;
		if ((!(((RuntimeObject*)(XNode_t2707504214 *)L_5) == ((RuntimeObject*)(XNode_t2707504214 *)L_6))))
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(7);
	}

IL_001e:
	{
		XNode_t2707504214 * L_7 = V_0;
		NullCheck(L_7);
		XNode_t2707504214 * L_8 = XNode_get_NextNode_m1164634702(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0025:
	{
		XNode_t2707504214 * L_9 = V_0;
		if (L_9)
		{
			goto IL_0015;
		}
	}
	{
		return (int32_t)(6);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XNodeEqualityComparer::.ctor()
extern "C"  void XNodeEqualityComparer__ctor_m2149745472 (XNodeEqualityComparer_t3116038621 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Xml.Linq.XNodeEqualityComparer::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern "C"  bool XNodeEqualityComparer_System_Collections_IEqualityComparer_Equals_m3901301221 (XNodeEqualityComparer_t3116038621 * __this, RuntimeObject * ___n10, RuntimeObject * ___n21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNodeEqualityComparer_System_Collections_IEqualityComparer_Equals_m3901301221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___n10;
		RuntimeObject * L_1 = ___n21;
		bool L_2 = XNodeEqualityComparer_Equals_m3412641323(__this, ((XNode_t2707504214 *)CastclassClass((RuntimeObject*)L_0, XNode_t2707504214_il2cpp_TypeInfo_var)), ((XNode_t2707504214 *)CastclassClass((RuntimeObject*)L_1, XNode_t2707504214_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 System.Xml.Linq.XNodeEqualityComparer::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern "C"  int32_t XNodeEqualityComparer_System_Collections_IEqualityComparer_GetHashCode_m1716004019 (XNodeEqualityComparer_t3116038621 * __this, RuntimeObject * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNodeEqualityComparer_System_Collections_IEqualityComparer_GetHashCode_m1716004019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___node0;
		int32_t L_1 = XNodeEqualityComparer_GetHashCode_m2349713071(__this, ((XNode_t2707504214 *)CastclassClass((RuntimeObject*)L_0, XNode_t2707504214_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Xml.Linq.XNodeEqualityComparer::Equals(System.Xml.Linq.XNode,System.Xml.Linq.XNode)
extern "C"  bool XNodeEqualityComparer_Equals_m3412641323 (XNodeEqualityComparer_t3116038621 * __this, XNode_t2707504214 * ___n10, XNode_t2707504214 * ___n21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNodeEqualityComparer_Equals_m3412641323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XDocument_t2733326047 * V_0 = NULL;
	XDocument_t2733326047 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	XNode_t2707504214 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	XElement_t553821050 * V_5 = NULL;
	XElement_t553821050 * V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	XAttribute_t3858477518 * V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	XNode_t2707504214 * V_11 = NULL;
	RuntimeObject* V_12 = NULL;
	XComment_t1618005895 * V_13 = NULL;
	XComment_t1618005895 * V_14 = NULL;
	XProcessingInstruction_t2854903359 * V_15 = NULL;
	XProcessingInstruction_t2854903359 * V_16 = NULL;
	XDocumentType_t738990919 * V_17 = NULL;
	XDocumentType_t738990919 * V_18 = NULL;
	int32_t V_19 = 0;
	bool V_20 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B53_0 = 0;
	int32_t G_B59_0 = 0;
	{
		XNode_t2707504214 * L_0 = ___n10;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		XNode_t2707504214 * L_1 = ___n21;
		return (bool)((((RuntimeObject*)(XNode_t2707504214 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_000b:
	{
		XNode_t2707504214 * L_2 = ___n21;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		XNode_t2707504214 * L_3 = ___n10;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, L_3);
		XNode_t2707504214 * L_5 = ___n21;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, L_5);
		if ((((int32_t)L_4) == ((int32_t)L_6)))
		{
			goto IL_0026;
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		XNode_t2707504214 * L_7 = ___n10;
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, L_7);
		V_19 = L_8;
		int32_t L_9 = V_19;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0106;
			}
			case 1:
			{
				goto IL_0327;
			}
			case 2:
			{
				goto IL_030b;
			}
			case 3:
			{
				goto IL_0327;
			}
			case 4:
			{
				goto IL_0327;
			}
			case 5:
			{
				goto IL_0327;
			}
			case 6:
			{
				goto IL_025d;
			}
			case 7:
			{
				goto IL_0239;
			}
			case 8:
			{
				goto IL_0064;
			}
			case 9:
			{
				goto IL_029c;
			}
		}
	}
	{
		goto IL_0327;
	}

IL_0064:
	{
		XNode_t2707504214 * L_10 = ___n10;
		V_0 = ((XDocument_t2733326047 *)CastclassClass((RuntimeObject*)L_10, XDocument_t2733326047_il2cpp_TypeInfo_var));
		XNode_t2707504214 * L_11 = ___n21;
		V_1 = ((XDocument_t2733326047 *)CastclassClass((RuntimeObject*)L_11, XDocument_t2733326047_il2cpp_TypeInfo_var));
		XDocument_t2733326047 * L_12 = V_0;
		NullCheck(L_12);
		XDeclaration_t3367285402 * L_13 = XDocument_get_Declaration_m2764232986(L_12, /*hidden argument*/NULL);
		XDocument_t2733326047 * L_14 = V_1;
		NullCheck(L_14);
		XDeclaration_t3367285402 * L_15 = XDocument_get_Declaration_m2764232986(L_14, /*hidden argument*/NULL);
		bool L_16 = XNodeEqualityComparer_Equals_m2405644035(__this, L_13, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_008b;
		}
	}
	{
		return (bool)0;
	}

IL_008b:
	{
		XDocument_t2733326047 * L_17 = V_1;
		NullCheck(L_17);
		RuntimeObject* L_18 = XContainer_Nodes_m1386197549(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject* L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t2999631259_il2cpp_TypeInfo_var, L_18);
		V_2 = L_19;
		XDocument_t2733326047 * L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_21 = XContainer_Nodes_m1386197549(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		RuntimeObject* L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t2999631259_il2cpp_TypeInfo_var, L_21);
		V_4 = L_22;
	}

IL_00a4:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00de;
		}

IL_00a9:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck(L_23);
			XNode_t2707504214 * L_24 = InterfaceFuncInvoker0< XNode_t2707504214 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t183028041_il2cpp_TypeInfo_var, L_23);
			V_3 = L_24;
			RuntimeObject* L_25 = V_2;
			NullCheck(L_25);
			bool L_26 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_25);
			if (L_26)
			{
				goto IL_00c4;
			}
		}

IL_00bc:
		{
			V_20 = (bool)0;
			IL2CPP_LEAVE(0x332, FINALLY_00ef);
		}

IL_00c4:
		{
			XNode_t2707504214 * L_27 = V_3;
			RuntimeObject* L_28 = V_2;
			NullCheck(L_28);
			XNode_t2707504214 * L_29 = InterfaceFuncInvoker0< XNode_t2707504214 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t183028041_il2cpp_TypeInfo_var, L_28);
			bool L_30 = XNodeEqualityComparer_Equals_m3412641323(__this, L_27, L_29, /*hidden argument*/NULL);
			if (L_30)
			{
				goto IL_00de;
			}
		}

IL_00d6:
		{
			V_20 = (bool)0;
			IL2CPP_LEAVE(0x332, FINALLY_00ef);
		}

IL_00de:
		{
			RuntimeObject* L_31 = V_4;
			NullCheck(L_31);
			bool L_32 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_31);
			if (L_32)
			{
				goto IL_00a9;
			}
		}

IL_00ea:
		{
			IL2CPP_LEAVE(0xFC, FINALLY_00ef);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ef;
	}

FINALLY_00ef:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_33 = V_4;
			if (L_33)
			{
				goto IL_00f4;
			}
		}

IL_00f3:
		{
			IL2CPP_END_FINALLY(239)
		}

IL_00f4:
		{
			RuntimeObject* L_34 = V_4;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_34);
			IL2CPP_END_FINALLY(239)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(239)
	{
		IL2CPP_JUMP_TBL(0x332, IL_0332)
		IL2CPP_JUMP_TBL(0xFC, IL_00fc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00fc:
	{
		RuntimeObject* L_35 = V_2;
		NullCheck(L_35);
		bool L_36 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_35);
		return (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
	}

IL_0106:
	{
		XNode_t2707504214 * L_37 = ___n10;
		V_5 = ((XElement_t553821050 *)CastclassClass((RuntimeObject*)L_37, XElement_t553821050_il2cpp_TypeInfo_var));
		XNode_t2707504214 * L_38 = ___n21;
		V_6 = ((XElement_t553821050 *)CastclassClass((RuntimeObject*)L_38, XElement_t553821050_il2cpp_TypeInfo_var));
		XElement_t553821050 * L_39 = V_5;
		NullCheck(L_39);
		XName_t785190363 * L_40 = XElement_get_Name_m1622427113(L_39, /*hidden argument*/NULL);
		XElement_t553821050 * L_41 = V_6;
		NullCheck(L_41);
		XName_t785190363 * L_42 = XElement_get_Name_m1622427113(L_41, /*hidden argument*/NULL);
		bool L_43 = XName_op_Inequality_m4197580533(NULL /*static, unused*/, L_40, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0130;
		}
	}
	{
		return (bool)0;
	}

IL_0130:
	{
		XElement_t553821050 * L_44 = V_6;
		NullCheck(L_44);
		RuntimeObject* L_45 = XElement_Attributes_m3926517386(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		RuntimeObject* L_46 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t4150604563_il2cpp_TypeInfo_var, L_45);
		V_7 = L_46;
		XElement_t553821050 * L_47 = V_5;
		NullCheck(L_47);
		RuntimeObject* L_48 = XElement_Attributes_m3926517386(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		RuntimeObject* L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t4150604563_il2cpp_TypeInfo_var, L_48);
		V_9 = L_49;
	}

IL_014c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_018a;
		}

IL_0151:
		{
			RuntimeObject* L_50 = V_9;
			NullCheck(L_50);
			XAttribute_t3858477518 * L_51 = InterfaceFuncInvoker0< XAttribute_t3858477518 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t1334001345_il2cpp_TypeInfo_var, L_50);
			V_8 = L_51;
			RuntimeObject* L_52 = V_7;
			NullCheck(L_52);
			bool L_53 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_52);
			if (L_53)
			{
				goto IL_016e;
			}
		}

IL_0166:
		{
			V_20 = (bool)0;
			IL2CPP_LEAVE(0x332, FINALLY_019b);
		}

IL_016e:
		{
			XAttribute_t3858477518 * L_54 = V_8;
			RuntimeObject* L_55 = V_7;
			NullCheck(L_55);
			XAttribute_t3858477518 * L_56 = InterfaceFuncInvoker0< XAttribute_t3858477518 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t1334001345_il2cpp_TypeInfo_var, L_55);
			bool L_57 = XNodeEqualityComparer_Equals_m163327531(__this, L_54, L_56, /*hidden argument*/NULL);
			if (L_57)
			{
				goto IL_018a;
			}
		}

IL_0182:
		{
			V_20 = (bool)0;
			IL2CPP_LEAVE(0x332, FINALLY_019b);
		}

IL_018a:
		{
			RuntimeObject* L_58 = V_9;
			NullCheck(L_58);
			bool L_59 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_58);
			if (L_59)
			{
				goto IL_0151;
			}
		}

IL_0196:
		{
			IL2CPP_LEAVE(0x1A8, FINALLY_019b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_019b;
	}

FINALLY_019b:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_60 = V_9;
			if (L_60)
			{
				goto IL_01a0;
			}
		}

IL_019f:
		{
			IL2CPP_END_FINALLY(411)
		}

IL_01a0:
		{
			RuntimeObject* L_61 = V_9;
			NullCheck(L_61);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_61);
			IL2CPP_END_FINALLY(411)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(411)
	{
		IL2CPP_JUMP_TBL(0x332, IL_0332)
		IL2CPP_JUMP_TBL(0x1A8, IL_01a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_01a8:
	{
		RuntimeObject* L_62 = V_7;
		NullCheck(L_62);
		bool L_63 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_62);
		if (!L_63)
		{
			goto IL_01b6;
		}
	}
	{
		return (bool)0;
	}

IL_01b6:
	{
		XElement_t553821050 * L_64 = V_6;
		NullCheck(L_64);
		RuntimeObject* L_65 = XContainer_Nodes_m1386197549(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		RuntimeObject* L_66 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t2999631259_il2cpp_TypeInfo_var, L_65);
		V_10 = L_66;
		XElement_t553821050 * L_67 = V_5;
		NullCheck(L_67);
		RuntimeObject* L_68 = XContainer_Nodes_m1386197549(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		RuntimeObject* L_69 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t2999631259_il2cpp_TypeInfo_var, L_68);
		V_12 = L_69;
	}

IL_01d2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0210;
		}

IL_01d7:
		{
			RuntimeObject* L_70 = V_12;
			NullCheck(L_70);
			XNode_t2707504214 * L_71 = InterfaceFuncInvoker0< XNode_t2707504214 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t183028041_il2cpp_TypeInfo_var, L_70);
			V_11 = L_71;
			RuntimeObject* L_72 = V_10;
			NullCheck(L_72);
			bool L_73 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_72);
			if (L_73)
			{
				goto IL_01f4;
			}
		}

IL_01ec:
		{
			V_20 = (bool)0;
			IL2CPP_LEAVE(0x332, FINALLY_0221);
		}

IL_01f4:
		{
			XNode_t2707504214 * L_74 = V_11;
			RuntimeObject* L_75 = V_10;
			NullCheck(L_75);
			XNode_t2707504214 * L_76 = InterfaceFuncInvoker0< XNode_t2707504214 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t183028041_il2cpp_TypeInfo_var, L_75);
			bool L_77 = XNodeEqualityComparer_Equals_m3412641323(__this, L_74, L_76, /*hidden argument*/NULL);
			if (L_77)
			{
				goto IL_0210;
			}
		}

IL_0208:
		{
			V_20 = (bool)0;
			IL2CPP_LEAVE(0x332, FINALLY_0221);
		}

IL_0210:
		{
			RuntimeObject* L_78 = V_12;
			NullCheck(L_78);
			bool L_79 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_78);
			if (L_79)
			{
				goto IL_01d7;
			}
		}

IL_021c:
		{
			IL2CPP_LEAVE(0x22E, FINALLY_0221);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0221;
	}

FINALLY_0221:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_80 = V_12;
			if (L_80)
			{
				goto IL_0226;
			}
		}

IL_0225:
		{
			IL2CPP_END_FINALLY(545)
		}

IL_0226:
		{
			RuntimeObject* L_81 = V_12;
			NullCheck(L_81);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_81);
			IL2CPP_END_FINALLY(545)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(545)
	{
		IL2CPP_JUMP_TBL(0x332, IL_0332)
		IL2CPP_JUMP_TBL(0x22E, IL_022e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_022e:
	{
		RuntimeObject* L_82 = V_10;
		NullCheck(L_82);
		bool L_83 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_82);
		return (bool)((((int32_t)L_83) == ((int32_t)0))? 1 : 0);
	}

IL_0239:
	{
		XNode_t2707504214 * L_84 = ___n10;
		V_13 = ((XComment_t1618005895 *)CastclassClass((RuntimeObject*)L_84, XComment_t1618005895_il2cpp_TypeInfo_var));
		XNode_t2707504214 * L_85 = ___n21;
		V_14 = ((XComment_t1618005895 *)CastclassClass((RuntimeObject*)L_85, XComment_t1618005895_il2cpp_TypeInfo_var));
		XComment_t1618005895 * L_86 = V_13;
		NullCheck(L_86);
		String_t* L_87 = XComment_get_Value_m962028537(L_86, /*hidden argument*/NULL);
		XComment_t1618005895 * L_88 = V_14;
		NullCheck(L_88);
		String_t* L_89 = XComment_get_Value_m962028537(L_88, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_90 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_87, L_89, /*hidden argument*/NULL);
		return L_90;
	}

IL_025d:
	{
		XNode_t2707504214 * L_91 = ___n10;
		V_15 = ((XProcessingInstruction_t2854903359 *)CastclassClass((RuntimeObject*)L_91, XProcessingInstruction_t2854903359_il2cpp_TypeInfo_var));
		XNode_t2707504214 * L_92 = ___n21;
		V_16 = ((XProcessingInstruction_t2854903359 *)CastclassClass((RuntimeObject*)L_92, XProcessingInstruction_t2854903359_il2cpp_TypeInfo_var));
		XProcessingInstruction_t2854903359 * L_93 = V_15;
		NullCheck(L_93);
		String_t* L_94 = XProcessingInstruction_get_Target_m627615819(L_93, /*hidden argument*/NULL);
		XProcessingInstruction_t2854903359 * L_95 = V_16;
		NullCheck(L_95);
		String_t* L_96 = XProcessingInstruction_get_Target_m627615819(L_95, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_97 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_94, L_96, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_029a;
		}
	}
	{
		XProcessingInstruction_t2854903359 * L_98 = V_15;
		NullCheck(L_98);
		String_t* L_99 = XProcessingInstruction_get_Data_m705442580(L_98, /*hidden argument*/NULL);
		XProcessingInstruction_t2854903359 * L_100 = V_16;
		NullCheck(L_100);
		String_t* L_101 = XProcessingInstruction_get_Data_m705442580(L_100, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_102 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_99, L_101, /*hidden argument*/NULL);
		G_B53_0 = ((int32_t)(L_102));
		goto IL_029b;
	}

IL_029a:
	{
		G_B53_0 = 0;
	}

IL_029b:
	{
		return (bool)G_B53_0;
	}

IL_029c:
	{
		XNode_t2707504214 * L_103 = ___n10;
		V_17 = ((XDocumentType_t738990919 *)CastclassClass((RuntimeObject*)L_103, XDocumentType_t738990919_il2cpp_TypeInfo_var));
		XNode_t2707504214 * L_104 = ___n21;
		V_18 = ((XDocumentType_t738990919 *)CastclassClass((RuntimeObject*)L_104, XDocumentType_t738990919_il2cpp_TypeInfo_var));
		XDocumentType_t738990919 * L_105 = V_17;
		NullCheck(L_105);
		String_t* L_106 = XDocumentType_get_Name_m364384709(L_105, /*hidden argument*/NULL);
		XDocumentType_t738990919 * L_107 = V_18;
		NullCheck(L_107);
		String_t* L_108 = XDocumentType_get_Name_m364384709(L_107, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_109 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_106, L_108, /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_0309;
		}
	}
	{
		XDocumentType_t738990919 * L_110 = V_17;
		NullCheck(L_110);
		String_t* L_111 = XDocumentType_get_PublicId_m877542134(L_110, /*hidden argument*/NULL);
		XDocumentType_t738990919 * L_112 = V_18;
		NullCheck(L_112);
		String_t* L_113 = XDocumentType_get_PublicId_m877542134(L_112, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_114 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_111, L_113, /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_0309;
		}
	}
	{
		XDocumentType_t738990919 * L_115 = V_17;
		NullCheck(L_115);
		String_t* L_116 = XDocumentType_get_SystemId_m594286306(L_115, /*hidden argument*/NULL);
		XDocumentType_t738990919 * L_117 = V_18;
		NullCheck(L_117);
		String_t* L_118 = XDocumentType_get_SystemId_m594286306(L_117, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_119 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_116, L_118, /*hidden argument*/NULL);
		if (!L_119)
		{
			goto IL_0309;
		}
	}
	{
		XDocumentType_t738990919 * L_120 = V_17;
		NullCheck(L_120);
		String_t* L_121 = XDocumentType_get_InternalSubset_m1487579211(L_120, /*hidden argument*/NULL);
		XDocumentType_t738990919 * L_122 = V_18;
		NullCheck(L_122);
		String_t* L_123 = XDocumentType_get_InternalSubset_m1487579211(L_122, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_124 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_121, L_123, /*hidden argument*/NULL);
		G_B59_0 = ((int32_t)(L_124));
		goto IL_030a;
	}

IL_0309:
	{
		G_B59_0 = 0;
	}

IL_030a:
	{
		return (bool)G_B59_0;
	}

IL_030b:
	{
		XNode_t2707504214 * L_125 = ___n10;
		NullCheck(((XText_t1860529549 *)CastclassClass((RuntimeObject*)L_125, XText_t1860529549_il2cpp_TypeInfo_var)));
		String_t* L_126 = XText_get_Value_m334359707(((XText_t1860529549 *)CastclassClass((RuntimeObject*)L_125, XText_t1860529549_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		XNode_t2707504214 * L_127 = ___n21;
		NullCheck(((XText_t1860529549 *)CastclassClass((RuntimeObject*)L_127, XText_t1860529549_il2cpp_TypeInfo_var)));
		String_t* L_128 = XText_get_Value_m334359707(((XText_t1860529549 *)CastclassClass((RuntimeObject*)L_127, XText_t1860529549_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_129 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_126, L_128, /*hidden argument*/NULL);
		return L_129;
	}

IL_0327:
	{
		Exception_t * L_130 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m485833136(L_130, _stringLiteral3872491103, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_130);
	}

IL_0332:
	{
		bool L_131 = V_20;
		return L_131;
	}
}
// System.Boolean System.Xml.Linq.XNodeEqualityComparer::Equals(System.Xml.Linq.XAttribute,System.Xml.Linq.XAttribute)
extern "C"  bool XNodeEqualityComparer_Equals_m163327531 (XNodeEqualityComparer_t3116038621 * __this, XAttribute_t3858477518 * ___a10, XAttribute_t3858477518 * ___a21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNodeEqualityComparer_Equals_m163327531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B7_0 = 0;
	{
		XAttribute_t3858477518 * L_0 = ___a10;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		XAttribute_t3858477518 * L_1 = ___a21;
		return (bool)((((RuntimeObject*)(XAttribute_t3858477518 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_000b:
	{
		XAttribute_t3858477518 * L_2 = ___a21;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		XAttribute_t3858477518 * L_3 = ___a10;
		NullCheck(L_3);
		XName_t785190363 * L_4 = XAttribute_get_Name_m2127497767(L_3, /*hidden argument*/NULL);
		XAttribute_t3858477518 * L_5 = ___a21;
		NullCheck(L_5);
		XName_t785190363 * L_6 = XAttribute_get_Name_m2127497767(L_5, /*hidden argument*/NULL);
		bool L_7 = XName_op_Equality_m148690364(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		XAttribute_t3858477518 * L_8 = ___a10;
		NullCheck(L_8);
		String_t* L_9 = XAttribute_get_Value_m3732914648(L_8, /*hidden argument*/NULL);
		XAttribute_t3858477518 * L_10 = ___a21;
		NullCheck(L_10);
		String_t* L_11 = XAttribute_get_Value_m3732914648(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_12));
		goto IL_003d;
	}

IL_003c:
	{
		G_B7_0 = 0;
	}

IL_003d:
	{
		return (bool)G_B7_0;
	}
}
// System.Boolean System.Xml.Linq.XNodeEqualityComparer::Equals(System.Xml.Linq.XDeclaration,System.Xml.Linq.XDeclaration)
extern "C"  bool XNodeEqualityComparer_Equals_m2405644035 (XNodeEqualityComparer_t3116038621 * __this, XDeclaration_t3367285402 * ___d10, XDeclaration_t3367285402 * ___d21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNodeEqualityComparer_Equals_m2405644035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B8_0 = 0;
	{
		XDeclaration_t3367285402 * L_0 = ___d10;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		XDeclaration_t3367285402 * L_1 = ___d21;
		return (bool)((((RuntimeObject*)(XDeclaration_t3367285402 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}

IL_000b:
	{
		XDeclaration_t3367285402 * L_2 = ___d21;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		XDeclaration_t3367285402 * L_3 = ___d10;
		NullCheck(L_3);
		String_t* L_4 = XDeclaration_get_Version_m2743306735(L_3, /*hidden argument*/NULL);
		XDeclaration_t3367285402 * L_5 = ___d21;
		NullCheck(L_5);
		String_t* L_6 = XDeclaration_get_Version_m2743306735(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		XDeclaration_t3367285402 * L_8 = ___d10;
		NullCheck(L_8);
		String_t* L_9 = XDeclaration_get_Encoding_m2963864996(L_8, /*hidden argument*/NULL);
		XDeclaration_t3367285402 * L_10 = ___d21;
		NullCheck(L_10);
		String_t* L_11 = XDeclaration_get_Encoding_m2963864996(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		XDeclaration_t3367285402 * L_13 = ___d10;
		NullCheck(L_13);
		String_t* L_14 = XDeclaration_get_Standalone_m1945036438(L_13, /*hidden argument*/NULL);
		XDeclaration_t3367285402 * L_15 = ___d21;
		NullCheck(L_15);
		String_t* L_16 = XDeclaration_get_Standalone_m1945036438(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_17 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_14, L_16, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_17));
		goto IL_0053;
	}

IL_0052:
	{
		G_B8_0 = 0;
	}

IL_0053:
	{
		return (bool)G_B8_0;
	}
}
// System.Int32 System.Xml.Linq.XNodeEqualityComparer::GetHashCode(System.Xml.Linq.XDeclaration)
extern "C"  int32_t XNodeEqualityComparer_GetHashCode_m1024769467 (XNodeEqualityComparer_t3116038621 * __this, XDeclaration_t3367285402 * ___d0, const RuntimeMethod* method)
{
	{
		XDeclaration_t3367285402 * L_0 = ___d0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		XDeclaration_t3367285402 * L_1 = ___d0;
		NullCheck(L_1);
		String_t* L_2 = XDeclaration_get_Version_m2743306735(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = String_GetHashCode_m931956593(L_2, /*hidden argument*/NULL);
		XDeclaration_t3367285402 * L_4 = ___d0;
		NullCheck(L_4);
		String_t* L_5 = XDeclaration_get_Encoding_m2963864996(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_GetHashCode_m931956593(L_5, /*hidden argument*/NULL);
		XDeclaration_t3367285402 * L_7 = ___d0;
		NullCheck(L_7);
		String_t* L_8 = XDeclaration_get_Standalone_m1945036438(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = String_GetHashCode_m931956593(L_8, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3<<(int32_t)7))^(int32_t)((int32_t)((int32_t)L_6<<(int32_t)6))))^(int32_t)L_9));
	}
}
// System.Int32 System.Xml.Linq.XNodeEqualityComparer::GetHashCode(System.Xml.Linq.XNode)
extern "C"  int32_t XNodeEqualityComparer_GetHashCode_m2349713071 (XNodeEqualityComparer_t3116038621 * __this, XNode_t2707504214 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XNodeEqualityComparer_GetHashCode_m2349713071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XDocument_t2733326047 * V_1 = NULL;
	XNode_t2707504214 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	XElement_t553821050 * V_4 = NULL;
	XAttribute_t3858477518 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	XNode_t2707504214 * V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	XProcessingInstruction_t2854903359 * V_9 = NULL;
	XDocumentType_t738990919 * V_10 = NULL;
	int32_t V_11 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XNode_t2707504214 * L_0 = ___node0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 0;
	}

IL_0008:
	{
		XNode_t2707504214 * L_1 = ___node0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, L_1);
		V_0 = ((int32_t)((int32_t)L_2<<(int32_t)6));
		XNode_t2707504214 * L_3 = ___node0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Xml.XmlNodeType System.Xml.Linq.XObject::get_NodeType() */, L_3);
		V_11 = L_4;
		int32_t L_5 = V_11;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00a8;
			}
			case 1:
			{
				goto IL_01f3;
			}
			case 2:
			{
				goto IL_01e0;
			}
			case 3:
			{
				goto IL_01f3;
			}
			case 4:
			{
				goto IL_01f3;
			}
			case 5:
			{
				goto IL_01f3;
			}
			case 6:
			{
				goto IL_016a;
			}
			case 7:
			{
				goto IL_0152;
			}
			case 8:
			{
				goto IL_004f;
			}
			case 9:
			{
				goto IL_0195;
			}
		}
	}
	{
		goto IL_01f3;
	}

IL_004f:
	{
		XNode_t2707504214 * L_6 = ___node0;
		V_1 = ((XDocument_t2733326047 *)CastclassClass((RuntimeObject*)L_6, XDocument_t2733326047_il2cpp_TypeInfo_var));
		int32_t L_7 = V_0;
		XDocument_t2733326047 * L_8 = V_1;
		NullCheck(L_8);
		XDeclaration_t3367285402 * L_9 = XDocument_get_Declaration_m2764232986(L_8, /*hidden argument*/NULL);
		int32_t L_10 = XNodeEqualityComparer_GetHashCode_m1024769467(__this, L_9, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_7^(int32_t)L_10));
		XDocument_t2733326047 * L_11 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_12 = XContainer_Nodes_m1386197549(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		RuntimeObject* L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t2999631259_il2cpp_TypeInfo_var, L_12);
		V_3 = L_13;
	}

IL_0071:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0088;
		}

IL_0076:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck(L_14);
			XNode_t2707504214 * L_15 = InterfaceFuncInvoker0< XNode_t2707504214 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t183028041_il2cpp_TypeInfo_var, L_14);
			V_2 = L_15;
			int32_t L_16 = V_0;
			XNode_t2707504214 * L_17 = V_2;
			NullCheck(L_17);
			int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_17);
			V_0 = ((int32_t)((int32_t)L_16^(int32_t)((int32_t)((int32_t)L_18<<(int32_t)5))));
		}

IL_0088:
		{
			RuntimeObject* L_19 = V_3;
			NullCheck(L_19);
			bool L_20 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_0076;
			}
		}

IL_0093:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_0098);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0098;
	}

FINALLY_0098:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_21 = V_3;
			if (L_21)
			{
				goto IL_009c;
			}
		}

IL_009b:
		{
			IL2CPP_END_FINALLY(152)
		}

IL_009c:
		{
			RuntimeObject* L_22 = V_3;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(152)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(152)
	{
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a3:
	{
		goto IL_01f3;
	}

IL_00a8:
	{
		XNode_t2707504214 * L_23 = ___node0;
		V_4 = ((XElement_t553821050 *)CastclassClass((RuntimeObject*)L_23, XElement_t553821050_il2cpp_TypeInfo_var));
		int32_t L_24 = V_0;
		XElement_t553821050 * L_25 = V_4;
		NullCheck(L_25);
		XName_t785190363 * L_26 = XElement_get_Name_m1622427113(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		int32_t L_27 = XName_GetHashCode_m518193777(L_26, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_24^(int32_t)((int32_t)((int32_t)L_27<<(int32_t)3))));
		XElement_t553821050 * L_28 = V_4;
		NullCheck(L_28);
		RuntimeObject* L_29 = XElement_Attributes_m3926517386(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		RuntimeObject* L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XAttribute>::GetEnumerator() */, IEnumerable_1_t4150604563_il2cpp_TypeInfo_var, L_29);
		V_6 = L_30;
	}

IL_00cf:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00e9;
		}

IL_00d4:
		{
			RuntimeObject* L_31 = V_6;
			NullCheck(L_31);
			XAttribute_t3858477518 * L_32 = InterfaceFuncInvoker0< XAttribute_t3858477518 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XAttribute>::get_Current() */, IEnumerator_1_t1334001345_il2cpp_TypeInfo_var, L_31);
			V_5 = L_32;
			int32_t L_33 = V_0;
			XAttribute_t3858477518 * L_34 = V_5;
			NullCheck(L_34);
			int32_t L_35 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_34);
			V_0 = ((int32_t)((int32_t)L_33^(int32_t)((int32_t)((int32_t)L_35<<(int32_t)7))));
		}

IL_00e9:
		{
			RuntimeObject* L_36 = V_6;
			NullCheck(L_36);
			bool L_37 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_36);
			if (L_37)
			{
				goto IL_00d4;
			}
		}

IL_00f5:
		{
			IL2CPP_LEAVE(0x107, FINALLY_00fa);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00fa;
	}

FINALLY_00fa:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_38 = V_6;
			if (L_38)
			{
				goto IL_00ff;
			}
		}

IL_00fe:
		{
			IL2CPP_END_FINALLY(250)
		}

IL_00ff:
		{
			RuntimeObject* L_39 = V_6;
			NullCheck(L_39);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_39);
			IL2CPP_END_FINALLY(250)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(250)
	{
		IL2CPP_JUMP_TBL(0x107, IL_0107)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0107:
	{
		XElement_t553821050 * L_40 = V_4;
		NullCheck(L_40);
		RuntimeObject* L_41 = XContainer_Nodes_m1386197549(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		RuntimeObject* L_42 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XNode>::GetEnumerator() */, IEnumerable_1_t2999631259_il2cpp_TypeInfo_var, L_41);
		V_8 = L_42;
	}

IL_0115:
	try
	{ // begin try (depth: 1)
		{
			goto IL_012f;
		}

IL_011a:
		{
			RuntimeObject* L_43 = V_8;
			NullCheck(L_43);
			XNode_t2707504214 * L_44 = InterfaceFuncInvoker0< XNode_t2707504214 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Xml.Linq.XNode>::get_Current() */, IEnumerator_1_t183028041_il2cpp_TypeInfo_var, L_43);
			V_7 = L_44;
			int32_t L_45 = V_0;
			XNode_t2707504214 * L_46 = V_7;
			NullCheck(L_46);
			int32_t L_47 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_46);
			V_0 = ((int32_t)((int32_t)L_45^(int32_t)((int32_t)((int32_t)L_47<<(int32_t)6))));
		}

IL_012f:
		{
			RuntimeObject* L_48 = V_8;
			NullCheck(L_48);
			bool L_49 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_48);
			if (L_49)
			{
				goto IL_011a;
			}
		}

IL_013b:
		{
			IL2CPP_LEAVE(0x14D, FINALLY_0140);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0140;
	}

FINALLY_0140:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_50 = V_8;
			if (L_50)
			{
				goto IL_0145;
			}
		}

IL_0144:
		{
			IL2CPP_END_FINALLY(320)
		}

IL_0145:
		{
			RuntimeObject* L_51 = V_8;
			NullCheck(L_51);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_51);
			IL2CPP_END_FINALLY(320)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(320)
	{
		IL2CPP_JUMP_TBL(0x14D, IL_014d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_014d:
	{
		goto IL_01f3;
	}

IL_0152:
	{
		int32_t L_52 = V_0;
		XNode_t2707504214 * L_53 = ___node0;
		NullCheck(((XComment_t1618005895 *)CastclassClass((RuntimeObject*)L_53, XComment_t1618005895_il2cpp_TypeInfo_var)));
		String_t* L_54 = XComment_get_Value_m962028537(((XComment_t1618005895 *)CastclassClass((RuntimeObject*)L_53, XComment_t1618005895_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		NullCheck(L_54);
		int32_t L_55 = String_GetHashCode_m931956593(L_54, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_52^(int32_t)L_55));
		goto IL_01f3;
	}

IL_016a:
	{
		XNode_t2707504214 * L_56 = ___node0;
		V_9 = ((XProcessingInstruction_t2854903359 *)CastclassClass((RuntimeObject*)L_56, XProcessingInstruction_t2854903359_il2cpp_TypeInfo_var));
		int32_t L_57 = V_0;
		XProcessingInstruction_t2854903359 * L_58 = V_9;
		NullCheck(L_58);
		String_t* L_59 = XProcessingInstruction_get_Target_m627615819(L_58, /*hidden argument*/NULL);
		NullCheck(L_59);
		int32_t L_60 = String_GetHashCode_m931956593(L_59, /*hidden argument*/NULL);
		XProcessingInstruction_t2854903359 * L_61 = V_9;
		NullCheck(L_61);
		String_t* L_62 = XProcessingInstruction_get_Data_m705442580(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		int32_t L_63 = String_GetHashCode_m931956593(L_62, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)L_57^(int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_60<<(int32_t)6)), (int32_t)L_63))));
		goto IL_01f3;
	}

IL_0195:
	{
		XNode_t2707504214 * L_64 = ___node0;
		V_10 = ((XDocumentType_t738990919 *)CastclassClass((RuntimeObject*)L_64, XDocumentType_t738990919_il2cpp_TypeInfo_var));
		int32_t L_65 = V_0;
		XDocumentType_t738990919 * L_66 = V_10;
		NullCheck(L_66);
		String_t* L_67 = XDocumentType_get_Name_m364384709(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		int32_t L_68 = String_GetHashCode_m931956593(L_67, /*hidden argument*/NULL);
		XDocumentType_t738990919 * L_69 = V_10;
		NullCheck(L_69);
		String_t* L_70 = XDocumentType_get_PublicId_m877542134(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		int32_t L_71 = String_GetHashCode_m931956593(L_70, /*hidden argument*/NULL);
		XDocumentType_t738990919 * L_72 = V_10;
		NullCheck(L_72);
		String_t* L_73 = XDocumentType_get_SystemId_m594286306(L_72, /*hidden argument*/NULL);
		NullCheck(L_73);
		int32_t L_74 = String_GetHashCode_m931956593(L_73, /*hidden argument*/NULL);
		XDocumentType_t738990919 * L_75 = V_10;
		NullCheck(L_75);
		String_t* L_76 = XDocumentType_get_InternalSubset_m1487579211(L_75, /*hidden argument*/NULL);
		NullCheck(L_76);
		int32_t L_77 = String_GetHashCode_m931956593(L_76, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_65^(int32_t)((int32_t)((int32_t)L_68<<(int32_t)7))))^(int32_t)((int32_t)((int32_t)L_71<<(int32_t)6))))^(int32_t)((int32_t)((int32_t)L_74<<(int32_t)5))))^(int32_t)((int32_t)((int32_t)L_77<<(int32_t)4))));
		goto IL_01f3;
	}

IL_01e0:
	{
		int32_t L_78 = V_0;
		XNode_t2707504214 * L_79 = ___node0;
		NullCheck(((XText_t1860529549 *)CastclassClass((RuntimeObject*)L_79, XText_t1860529549_il2cpp_TypeInfo_var)));
		int32_t L_80 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, ((XText_t1860529549 *)CastclassClass((RuntimeObject*)L_79, XText_t1860529549_il2cpp_TypeInfo_var)));
		V_0 = ((int32_t)((int32_t)L_78^(int32_t)L_80));
		goto IL_01f3;
	}

IL_01f3:
	{
		int32_t L_81 = V_0;
		return L_81;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XObject::.ctor()
extern "C"  void XObject__ctor_m3797862556 (XObject_t3550811009 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Xml.Linq.XObject::System.Xml.IXmlLineInfo.get_LineNumber()
extern "C"  int32_t XObject_System_Xml_IXmlLineInfo_get_LineNumber_m627565582 (XObject_t3550811009 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = XObject_get_LineNumber_m677481714(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 System.Xml.Linq.XObject::System.Xml.IXmlLineInfo.get_LinePosition()
extern "C"  int32_t XObject_System_Xml_IXmlLineInfo_get_LinePosition_m1973748000 (XObject_t3550811009 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = XObject_get_LinePosition_m3752081380(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Xml.Linq.XObject::System.Xml.IXmlLineInfo.HasLineInfo()
extern "C"  bool XObject_System_Xml_IXmlLineInfo_HasLineInfo_m608625524 (XObject_t3550811009 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_line_2();
		return (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Xml.Linq.XObject::set_BaseUri(System.String)
extern "C"  void XObject_set_BaseUri_m3120446180 (XObject_t3550811009 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_baseuri_1(L_0);
		return;
	}
}
// System.Xml.Linq.XDocument System.Xml.Linq.XObject::get_Document()
extern "C"  XDocument_t2733326047 * XObject_get_Document_m418804020 (XObject_t3550811009 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_get_Document_m418804020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XContainer_t1445911831 * V_0 = NULL;
	{
		if (!((XDocument_t2733326047 *)IsInstClass((RuntimeObject*)__this, XDocument_t2733326047_il2cpp_TypeInfo_var)))
		{
			goto IL_0012;
		}
	}
	{
		return ((XDocument_t2733326047 *)CastclassClass((RuntimeObject*)__this, XDocument_t2733326047_il2cpp_TypeInfo_var));
	}

IL_0012:
	{
		XContainer_t1445911831 * L_0 = __this->get_owner_0();
		V_0 = L_0;
		goto IL_0037;
	}

IL_001e:
	{
		XContainer_t1445911831 * L_1 = V_0;
		if (!((XDocument_t2733326047 *)IsInstClass((RuntimeObject*)L_1, XDocument_t2733326047_il2cpp_TypeInfo_var)))
		{
			goto IL_0030;
		}
	}
	{
		XContainer_t1445911831 * L_2 = V_0;
		return ((XDocument_t2733326047 *)CastclassClass((RuntimeObject*)L_2, XDocument_t2733326047_il2cpp_TypeInfo_var));
	}

IL_0030:
	{
		XContainer_t1445911831 * L_3 = V_0;
		NullCheck(L_3);
		XContainer_t1445911831 * L_4 = ((XObject_t3550811009 *)L_3)->get_owner_0();
		V_0 = L_4;
	}

IL_0037:
	{
		XContainer_t1445911831 * L_5 = V_0;
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (XDocument_t2733326047 *)NULL;
	}
}
// System.Xml.Linq.XElement System.Xml.Linq.XObject::get_Parent()
extern "C"  XElement_t553821050 * XObject_get_Parent_m714109026 (XObject_t3550811009 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_get_Parent_m714109026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XContainer_t1445911831 * L_0 = __this->get_owner_0();
		return ((XElement_t553821050 *)IsInstClass((RuntimeObject*)L_0, XElement_t553821050_il2cpp_TypeInfo_var));
	}
}
// System.Xml.Linq.XContainer System.Xml.Linq.XObject::get_Owner()
extern "C"  XContainer_t1445911831 * XObject_get_Owner_m3004402994 (XObject_t3550811009 * __this, const RuntimeMethod* method)
{
	{
		XContainer_t1445911831 * L_0 = __this->get_owner_0();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XObject::SetOwner(System.Xml.Linq.XContainer)
extern "C"  void XObject_SetOwner_m582264412 (XObject_t3550811009 * __this, XContainer_t1445911831 * ___node0, const RuntimeMethod* method)
{
	{
		XContainer_t1445911831 * L_0 = ___node0;
		__this->set_owner_0(L_0);
		return;
	}
}
// System.Int32 System.Xml.Linq.XObject::get_LineNumber()
extern "C"  int32_t XObject_get_LineNumber_m677481714 (XObject_t3550811009 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_line_2();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XObject::set_LineNumber(System.Int32)
extern "C"  void XObject_set_LineNumber_m3407035941 (XObject_t3550811009 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_line_2(L_0);
		return;
	}
}
// System.Int32 System.Xml.Linq.XObject::get_LinePosition()
extern "C"  int32_t XObject_get_LinePosition_m3752081380 (XObject_t3550811009 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_column_3();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XObject::set_LinePosition(System.Int32)
extern "C"  void XObject_set_LinePosition_m4032863679 (XObject_t3550811009 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_column_3(L_0);
		return;
	}
}
// System.Void System.Xml.Linq.XObject::FillLineInfoAndBaseUri(System.Xml.XmlReader,System.Xml.Linq.LoadOptions)
extern "C"  void XObject_FillLineInfoAndBaseUri_m431604165 (XObject_t3550811009 * __this, XmlReader_t3675626668 * ___r0, int32_t ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XObject_FillLineInfoAndBaseUri_m431604165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ___options1;
		if (!((int32_t)((int32_t)L_0&(int32_t)4)))
		{
			goto IL_0038;
		}
	}
	{
		XmlReader_t3675626668 * L_1 = ___r0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IXmlLineInfo_t135184468_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean System.Xml.IXmlLineInfo::HasLineInfo() */, IXmlLineInfo_t135184468_il2cpp_TypeInfo_var, L_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Xml.IXmlLineInfo::get_LineNumber() */, IXmlLineInfo_t135184468_il2cpp_TypeInfo_var, L_5);
		XObject_set_LineNumber_m3407035941(__this, L_6, /*hidden argument*/NULL);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Xml.IXmlLineInfo::get_LinePosition() */, IXmlLineInfo_t135184468_il2cpp_TypeInfo_var, L_7);
		XObject_set_LinePosition_m4032863679(__this, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		int32_t L_9 = ___options1;
		if (!((int32_t)((int32_t)L_9&(int32_t)2)))
		{
			goto IL_004c;
		}
	}
	{
		XmlReader_t3675626668 * L_10 = ___r0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Xml.XmlReader::get_BaseURI() */, L_10);
		XObject_set_BaseUri_m3120446180(__this, L_11, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.String,System.String)
extern "C"  void XProcessingInstruction__ctor_m3547038108 (XProcessingInstruction_t2854903359 * __this, String_t* ___name0, String_t* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XProcessingInstruction__ctor_m3547038108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNode_t2707504214_il2cpp_TypeInfo_var);
		XNode__ctor_m3635466201(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, _stringLiteral2328218955, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		String_t* L_2 = ___data1;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t628810857 * L_3 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_3, _stringLiteral2619694, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0028:
	{
		String_t* L_4 = ___name0;
		__this->set_name_8(L_4);
		String_t* L_5 = ___data1;
		__this->set_data_9(L_5);
		return;
	}
}
// System.Void System.Xml.Linq.XProcessingInstruction::.ctor(System.Xml.Linq.XProcessingInstruction)
extern "C"  void XProcessingInstruction__ctor_m2560507313 (XProcessingInstruction_t2854903359 * __this, XProcessingInstruction_t2854903359 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XProcessingInstruction__ctor_m2560507313_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNode_t2707504214_il2cpp_TypeInfo_var);
		XNode__ctor_m3635466201(__this, /*hidden argument*/NULL);
		XProcessingInstruction_t2854903359 * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, _stringLiteral3712335156, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		XProcessingInstruction_t2854903359 * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_name_8();
		__this->set_name_8(L_3);
		XProcessingInstruction_t2854903359 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_data_9();
		__this->set_data_9(L_5);
		return;
	}
}
// System.String System.Xml.Linq.XProcessingInstruction::get_Data()
extern "C"  String_t* XProcessingInstruction_get_Data_m705442580 (XProcessingInstruction_t2854903359 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_data_9();
		return L_0;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XProcessingInstruction::get_NodeType()
extern "C"  int32_t XProcessingInstruction_get_NodeType_m1066128541 (XProcessingInstruction_t2854903359 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(7);
	}
}
// System.String System.Xml.Linq.XProcessingInstruction::get_Target()
extern "C"  String_t* XProcessingInstruction_get_Target_m627615819 (XProcessingInstruction_t2854903359 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_8();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XProcessingInstruction::WriteTo(System.Xml.XmlWriter)
extern "C"  void XProcessingInstruction_WriteTo_m4161808002 (XProcessingInstruction_t2854903359 * __this, XmlWriter_t1048088568 * ___w0, const RuntimeMethod* method)
{
	{
		XmlWriter_t1048088568 * L_0 = ___w0;
		String_t* L_1 = __this->get_name_8();
		String_t* L_2 = __this->get_data_9();
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(22 /* System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String) */, L_0, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XText::.ctor(System.String)
extern "C"  void XText__ctor_m2852593626 (XText_t1860529549 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XText__ctor_m2852593626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNode_t2707504214_il2cpp_TypeInfo_var);
		XNode__ctor_m3635466201(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		__this->set_value_8(L_0);
		return;
	}
}
// System.Void System.Xml.Linq.XText::.ctor(System.Xml.Linq.XText)
extern "C"  void XText__ctor_m2404229261 (XText_t1860529549 * __this, XText_t1860529549 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XText__ctor_m2404229261_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XNode_t2707504214_il2cpp_TypeInfo_var);
		XNode__ctor_m3635466201(__this, /*hidden argument*/NULL);
		XText_t1860529549 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_value_8();
		__this->set_value_8(L_1);
		return;
	}
}
// System.Xml.XmlNodeType System.Xml.Linq.XText::get_NodeType()
extern "C"  int32_t XText_get_NodeType_m18198915 (XText_t1860529549 * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(3);
	}
}
// System.String System.Xml.Linq.XText::get_Value()
extern "C"  String_t* XText_get_Value_m334359707 (XText_t1860529549 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_8();
		return L_0;
	}
}
// System.Void System.Xml.Linq.XText::set_Value(System.String)
extern "C"  void XText_set_Value_m1761166796 (XText_t1860529549 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XText_set_Value_m1761166796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t628810857 * L_1 = (ArgumentNullException_t628810857 *)il2cpp_codegen_object_new(ArgumentNullException_t628810857_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3380712306(L_1, _stringLiteral1803325615, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		String_t* L_2 = ___value0;
		__this->set_value_8(L_2);
		return;
	}
}
// System.Void System.Xml.Linq.XText::WriteTo(System.Xml.XmlWriter)
extern "C"  void XText_WriteTo_m2354977436 (XText_t1860529549 * __this, XmlWriter_t1048088568 * ___w0, const RuntimeMethod* method)
{
	{
		XmlWriter_t1048088568 * L_0 = ___w0;
		String_t* L_1 = __this->get_value_8();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(27 /* System.Void System.Xml.XmlWriter::WriteString(System.String) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Xml.Linq.XUtil::ToString(System.Object)
extern "C"  String_t* XUtil_ToString_m2221736954 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XUtil_ToString_m2221736954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	double V_1 = 0.0;
	float V_2 = 0.0f;
	{
		RuntimeObject * L_0 = ___o0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		InvalidOperationException_t721527559 * L_1 = (InvalidOperationException_t721527559 *)il2cpp_codegen_object_new(InvalidOperationException_t721527559_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2801133788(L_1, _stringLiteral3399404932, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		RuntimeObject * L_2 = ___o0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m191970594(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_4 = Type_GetTypeCode_m1044483454(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)13))))
		{
			case 0:
			{
				goto IL_0072;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_003e;
			}
			case 3:
			{
				goto IL_0051;
			}
			case 4:
			{
				goto IL_003e;
			}
			case 5:
			{
				goto IL_004a;
			}
		}
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_0086;
		}
	}
	{
		goto IL_0092;
	}

IL_004a:
	{
		RuntimeObject * L_7 = ___o0;
		return ((String_t*)CastclassSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
	}

IL_0051:
	{
		RuntimeObject * L_8 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1936105738_il2cpp_TypeInfo_var);
		String_t* L_9 = XmlConvert_ToString_m4109013699(NULL /*static, unused*/, ((*(DateTime_t693205669 *)((DateTime_t693205669 *)UnBox(L_8, DateTime_t693205669_il2cpp_TypeInfo_var)))), 3, /*hidden argument*/NULL);
		return L_9;
	}

IL_005e:
	{
		RuntimeObject * L_10 = ___o0;
		V_1 = ((*(double*)((double*)UnBox(L_10, Double_t4078015681_il2cpp_TypeInfo_var))));
		String_t* L_11 = Double_ToString_m2210043919((&V_1), _stringLiteral372029392, /*hidden argument*/NULL);
		return L_11;
	}

IL_0072:
	{
		RuntimeObject * L_12 = ___o0;
		V_2 = ((*(float*)((float*)UnBox(L_12, Single_t2076509932_il2cpp_TypeInfo_var))));
		String_t* L_13 = Single_ToString_m2359963436((&V_2), _stringLiteral372029392, /*hidden argument*/NULL);
		return L_13;
	}

IL_0086:
	{
		RuntimeObject * L_14 = ___o0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		NullCheck(L_15);
		String_t* L_16 = String_ToLower_m2994460523(L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0092:
	{
		RuntimeObject * L_17 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_17, TimeSpan_t3430258949_il2cpp_TypeInfo_var)))
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject * L_18 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1936105738_il2cpp_TypeInfo_var);
		String_t* L_19 = XmlConvert_ToString_m1759857076(NULL /*static, unused*/, ((*(TimeSpan_t3430258949 *)((TimeSpan_t3430258949 *)UnBox(L_18, TimeSpan_t3430258949_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_19;
	}

IL_00a9:
	{
		RuntimeObject * L_20 = ___o0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_20, DateTimeOffset_t1362988906_il2cpp_TypeInfo_var)))
		{
			goto IL_00c0;
		}
	}
	{
		RuntimeObject * L_21 = ___o0;
		IL2CPP_RUNTIME_CLASS_INIT(XmlConvert_t1936105738_il2cpp_TypeInfo_var);
		String_t* L_22 = XmlConvert_ToString_m3592787051(NULL /*static, unused*/, ((*(DateTimeOffset_t1362988906 *)((DateTimeOffset_t1362988906 *)UnBox(L_21, DateTimeOffset_t1362988906_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_22;
	}

IL_00c0:
	{
		RuntimeObject * L_23 = ___o0;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		return L_24;
	}
}
// System.Collections.IEnumerable System.Xml.Linq.XUtil::ExpandArray(System.Object)
extern "C"  RuntimeObject* XUtil_ExpandArray_m1006964352 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XUtil_ExpandArray_m1006964352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CExpandArrayU3Ec__Iterator25_t507968046 * V_0 = NULL;
	{
		U3CExpandArrayU3Ec__Iterator25_t507968046 * L_0 = (U3CExpandArrayU3Ec__Iterator25_t507968046 *)il2cpp_codegen_object_new(U3CExpandArrayU3Ec__Iterator25_t507968046_il2cpp_TypeInfo_var);
		U3CExpandArrayU3Ec__Iterator25__ctor_m1792951425(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CExpandArrayU3Ec__Iterator25_t507968046 * L_1 = V_0;
		RuntimeObject * L_2 = ___o0;
		NullCheck(L_1);
		L_1->set_o_0(L_2);
		U3CExpandArrayU3Ec__Iterator25_t507968046 * L_3 = V_0;
		RuntimeObject * L_4 = ___o0;
		NullCheck(L_3);
		L_3->set_U3CU24U3Eo_8(L_4);
		U3CExpandArrayU3Ec__Iterator25_t507968046 * L_5 = V_0;
		U3CExpandArrayU3Ec__Iterator25_t507968046 * L_6 = L_5;
		NullCheck(L_6);
		L_6->set_U24PC_6(((int32_t)-2));
		return L_6;
	}
}
// System.Xml.Linq.XNode System.Xml.Linq.XUtil::ToNode(System.Object)
extern "C"  XNode_t2707504214 * XUtil_ToNode_m2489943695 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XUtil_ToNode_m2489943695_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XNode_t2707504214 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___o0;
		if (!((XAttribute_t3858477518 *)IsInstClass((RuntimeObject*)L_0, XAttribute_t3858477518_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t3259014390 * L_1 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3739475201(L_1, _stringLiteral2078101392, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		RuntimeObject * L_2 = ___o0;
		V_0 = ((XNode_t2707504214 *)IsInstClass((RuntimeObject*)L_2, XNode_t2707504214_il2cpp_TypeInfo_var));
		XNode_t2707504214 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		XNode_t2707504214 * L_4 = V_0;
		return L_4;
	}

IL_0025:
	{
		RuntimeObject * L_5 = ___o0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject * L_6 = ___o0;
		XText_t1860529549 * L_7 = (XText_t1860529549 *)il2cpp_codegen_object_new(XText_t1860529549_il2cpp_TypeInfo_var);
		XText__ctor_m2852593626(L_7, ((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}

IL_003c:
	{
		RuntimeObject * L_8 = ___o0;
		String_t* L_9 = XUtil_ToString_m2221736954(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		XText_t1860529549 * L_10 = (XText_t1860529549 *)il2cpp_codegen_object_new(XText_t1860529549_il2cpp_TypeInfo_var);
		XText__ctor_m2852593626(L_10, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Object System.Xml.Linq.XUtil::GetDetachedObject(System.Xml.Linq.XObject)
extern "C"  RuntimeObject * XUtil_GetDetachedObject_m293754142 (RuntimeObject * __this /* static, unused */, XObject_t3550811009 * ___child0, const RuntimeMethod* method)
{
	RuntimeObject * G_B3_0 = NULL;
	{
		XObject_t3550811009 * L_0 = ___child0;
		NullCheck(L_0);
		XContainer_t1445911831 * L_1 = XObject_get_Owner_m3004402994(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		XObject_t3550811009 * L_2 = ___child0;
		RuntimeObject * L_3 = XUtil_Clone_m964299053(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		goto IL_0017;
	}

IL_0016:
	{
		XObject_t3550811009 * L_4 = ___child0;
		G_B3_0 = ((RuntimeObject *)(L_4));
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Object System.Xml.Linq.XUtil::Clone(System.Object)
extern "C"  RuntimeObject * XUtil_Clone_m964299053 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XUtil_Clone_m964299053_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_1 = ___o0;
		return ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
	}

IL_0012:
	{
		RuntimeObject * L_2 = ___o0;
		if (!((XAttribute_t3858477518 *)IsInstClass((RuntimeObject*)L_2, XAttribute_t3858477518_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject * L_3 = ___o0;
		XAttribute_t3858477518 * L_4 = (XAttribute_t3858477518 *)il2cpp_codegen_object_new(XAttribute_t3858477518_il2cpp_TypeInfo_var);
		XAttribute__ctor_m2559189009(L_4, ((XAttribute_t3858477518 *)CastclassClass((RuntimeObject*)L_3, XAttribute_t3858477518_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_4;
	}

IL_0029:
	{
		RuntimeObject * L_5 = ___o0;
		if (!((XElement_t553821050 *)IsInstClass((RuntimeObject*)L_5, XElement_t553821050_il2cpp_TypeInfo_var)))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject * L_6 = ___o0;
		XElement_t553821050 * L_7 = (XElement_t553821050 *)il2cpp_codegen_object_new(XElement_t553821050_il2cpp_TypeInfo_var);
		XElement__ctor_m2448521297(L_7, ((XElement_t553821050 *)CastclassClass((RuntimeObject*)L_6, XElement_t553821050_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0040:
	{
		RuntimeObject * L_8 = ___o0;
		if (!((XCData_t1306050895 *)IsInstClass((RuntimeObject*)L_8, XCData_t1306050895_il2cpp_TypeInfo_var)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject * L_9 = ___o0;
		XCData_t1306050895 * L_10 = (XCData_t1306050895 *)il2cpp_codegen_object_new(XCData_t1306050895_il2cpp_TypeInfo_var);
		XCData__ctor_m1754149489(L_10, ((XCData_t1306050895 *)CastclassClass((RuntimeObject*)L_9, XCData_t1306050895_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_10;
	}

IL_0057:
	{
		RuntimeObject * L_11 = ___o0;
		if (!((XComment_t1618005895 *)IsInstClass((RuntimeObject*)L_11, XComment_t1618005895_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		RuntimeObject * L_12 = ___o0;
		XComment_t1618005895 * L_13 = (XComment_t1618005895 *)il2cpp_codegen_object_new(XComment_t1618005895_il2cpp_TypeInfo_var);
		XComment__ctor_m1201847697(L_13, ((XComment_t1618005895 *)CastclassClass((RuntimeObject*)L_12, XComment_t1618005895_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_13;
	}

IL_006e:
	{
		RuntimeObject * L_14 = ___o0;
		if (!((XProcessingInstruction_t2854903359 *)IsInstClass((RuntimeObject*)L_14, XProcessingInstruction_t2854903359_il2cpp_TypeInfo_var)))
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject * L_15 = ___o0;
		XProcessingInstruction_t2854903359 * L_16 = (XProcessingInstruction_t2854903359 *)il2cpp_codegen_object_new(XProcessingInstruction_t2854903359_il2cpp_TypeInfo_var);
		XProcessingInstruction__ctor_m2560507313(L_16, ((XProcessingInstruction_t2854903359 *)CastclassClass((RuntimeObject*)L_15, XProcessingInstruction_t2854903359_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_16;
	}

IL_0085:
	{
		RuntimeObject * L_17 = ___o0;
		if (!((XDeclaration_t3367285402 *)IsInstClass((RuntimeObject*)L_17, XDeclaration_t3367285402_il2cpp_TypeInfo_var)))
		{
			goto IL_009c;
		}
	}
	{
		RuntimeObject * L_18 = ___o0;
		XDeclaration_t3367285402 * L_19 = (XDeclaration_t3367285402 *)il2cpp_codegen_object_new(XDeclaration_t3367285402_il2cpp_TypeInfo_var);
		XDeclaration__ctor_m4202021713(L_19, ((XDeclaration_t3367285402 *)CastclassClass((RuntimeObject*)L_18, XDeclaration_t3367285402_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_19;
	}

IL_009c:
	{
		RuntimeObject * L_20 = ___o0;
		if (!((XDocumentType_t738990919 *)IsInstClass((RuntimeObject*)L_20, XDocumentType_t738990919_il2cpp_TypeInfo_var)))
		{
			goto IL_00b3;
		}
	}
	{
		RuntimeObject * L_21 = ___o0;
		XDocumentType_t738990919 * L_22 = (XDocumentType_t738990919 *)il2cpp_codegen_object_new(XDocumentType_t738990919_il2cpp_TypeInfo_var);
		XDocumentType__ctor_m4083239521(L_22, ((XDocumentType_t738990919 *)CastclassClass((RuntimeObject*)L_21, XDocumentType_t738990919_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_22;
	}

IL_00b3:
	{
		RuntimeObject * L_23 = ___o0;
		if (!((XText_t1860529549 *)IsInstClass((RuntimeObject*)L_23, XText_t1860529549_il2cpp_TypeInfo_var)))
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeObject * L_24 = ___o0;
		XText_t1860529549 * L_25 = (XText_t1860529549 *)il2cpp_codegen_object_new(XText_t1860529549_il2cpp_TypeInfo_var);
		XText__ctor_m2404229261(L_25, ((XText_t1860529549 *)CastclassClass((RuntimeObject*)L_24, XText_t1860529549_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_25;
	}

IL_00ca:
	{
		ArgumentException_t3259014390 * L_26 = (ArgumentException_t3259014390 *)il2cpp_codegen_object_new(ArgumentException_t3259014390_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2105824819(L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::.ctor()
extern "C"  void U3CExpandArrayU3Ec__Iterator25__ctor_m1792951425 (U3CExpandArrayU3Ec__Iterator25_t507968046 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CExpandArrayU3Ec__Iterator25_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1878832491 (U3CExpandArrayU3Ec__Iterator25_t507968046 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Object System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CExpandArrayU3Ec__Iterator25_System_Collections_IEnumerator_get_Current_m1525932195 (U3CExpandArrayU3Ec__Iterator25_t507968046 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Collections.IEnumerator System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* U3CExpandArrayU3Ec__Iterator25_System_Collections_IEnumerable_GetEnumerator_m2252936218 (U3CExpandArrayU3Ec__Iterator25_t507968046 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = U3CExpandArrayU3Ec__Iterator25_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m634432390(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::System.Collections.Generic.IEnumerable<object>.GetEnumerator()
extern "C"  RuntimeObject* U3CExpandArrayU3Ec__Iterator25_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m634432390 (U3CExpandArrayU3Ec__Iterator25_t507968046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CExpandArrayU3Ec__Iterator25_System_Collections_Generic_IEnumerableU3CobjectU3E_GetEnumerator_m634432390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CExpandArrayU3Ec__Iterator25_t507968046 * V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of_U24PC_6();
		int32_t L_1 = Interlocked_CompareExchange_m3339239614(NULL /*static, unused*/, L_0, 0, ((int32_t)-2), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		return __this;
	}

IL_0014:
	{
		U3CExpandArrayU3Ec__Iterator25_t507968046 * L_2 = (U3CExpandArrayU3Ec__Iterator25_t507968046 *)il2cpp_codegen_object_new(U3CExpandArrayU3Ec__Iterator25_t507968046_il2cpp_TypeInfo_var);
		U3CExpandArrayU3Ec__Iterator25__ctor_m1792951425(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		U3CExpandArrayU3Ec__Iterator25_t507968046 * L_3 = V_0;
		RuntimeObject * L_4 = __this->get_U3CU24U3Eo_8();
		NullCheck(L_3);
		L_3->set_o_0(L_4);
		U3CExpandArrayU3Ec__Iterator25_t507968046 * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::MoveNext()
extern "C"  bool U3CExpandArrayU3Ec__Iterator25_MoveNext_m942794979 (U3CExpandArrayU3Ec__Iterator25_t507968046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CExpandArrayU3Ec__Iterator25_MoveNext_m942794979_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		V_1 = (bool)0;
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_0090;
			}
			case 3:
			{
				goto IL_00be;
			}
			case 4:
			{
				goto IL_01b2;
			}
		}
	}
	{
		goto IL_01b9;
	}

IL_002f:
	{
		RuntimeObject * L_2 = __this->get_o_0();
		__this->set_U3CnU3E__0_1(((XNode_t2707504214 *)IsInstClass((RuntimeObject*)L_2, XNode_t2707504214_il2cpp_TypeInfo_var)));
		XNode_t2707504214 * L_3 = __this->get_U3CnU3E__0_1();
		if (!L_3)
		{
			goto IL_0068;
		}
	}
	{
		XNode_t2707504214 * L_4 = __this->get_U3CnU3E__0_1();
		__this->set_U24current_7(L_4);
		__this->set_U24PC_6(1);
		goto IL_01bb;
	}

IL_0063:
	{
		goto IL_01b2;
	}

IL_0068:
	{
		RuntimeObject * L_5 = __this->get_o_0();
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0095;
		}
	}
	{
		RuntimeObject * L_6 = __this->get_o_0();
		__this->set_U24current_7(L_6);
		__this->set_U24PC_6(2);
		goto IL_01bb;
	}

IL_0090:
	{
		goto IL_01b2;
	}

IL_0095:
	{
		RuntimeObject * L_7 = __this->get_o_0();
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_7, IEnumerable_t2911409499_il2cpp_TypeInfo_var)))
		{
			goto IL_019a;
		}
	}
	{
		RuntimeObject * L_8 = __this->get_o_0();
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_8, IEnumerable_t2911409499_il2cpp_TypeInfo_var)));
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t2911409499_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_8, IEnumerable_t2911409499_il2cpp_TypeInfo_var)));
		__this->set_U3CU24s_86U3E__1_2(L_9);
		V_0 = ((int32_t)-3);
	}

IL_00be:
	try
	{ // begin try (depth: 1)
		{
			uint32_t L_10 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)3)))
			{
				case 0:
				{
					goto IL_00f9;
				}
			}
		}

IL_00ca:
		{
			goto IL_0165;
		}

IL_00cf:
		{
			RuntimeObject* L_11 = __this->get_U3CU24s_86U3E__1_2();
			NullCheck(L_11);
			RuntimeObject * L_12 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_11);
			__this->set_U3CobjU3E__2_3(L_12);
			RuntimeObject * L_13 = __this->get_U3CobjU3E__2_3();
			RuntimeObject* L_14 = XUtil_ExpandArray_m1006964352(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			RuntimeObject* L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t2911409499_il2cpp_TypeInfo_var, L_14);
			__this->set_U3CU24s_87U3E__3_4(L_15);
			V_0 = ((int32_t)-3);
		}

IL_00f9:
		try
		{ // begin try (depth: 2)
			{
				uint32_t L_16 = V_0;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)3)))
				{
					case 0:
					{
						goto IL_0135;
					}
				}
			}

IL_0105:
			{
				goto IL_0135;
			}

IL_010a:
			{
				RuntimeObject* L_17 = __this->get_U3CU24s_87U3E__3_4();
				NullCheck(L_17);
				RuntimeObject * L_18 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_17);
				__this->set_U3CooU3E__4_5(L_18);
				RuntimeObject * L_19 = __this->get_U3CooU3E__4_5();
				__this->set_U24current_7(L_19);
				__this->set_U24PC_6(3);
				V_1 = (bool)1;
				IL2CPP_LEAVE(0x1BB, FINALLY_014a);
			}

IL_0135:
			{
				RuntimeObject* L_20 = __this->get_U3CU24s_87U3E__3_4();
				NullCheck(L_20);
				bool L_21 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_010a;
				}
			}

IL_0145:
			{
				IL2CPP_LEAVE(0x165, FINALLY_014a);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_014a;
		}

FINALLY_014a:
		{ // begin finally (depth: 2)
			{
				bool L_22 = V_1;
				if (!L_22)
				{
					goto IL_014e;
				}
			}

IL_014d:
			{
				IL2CPP_END_FINALLY(330)
			}

IL_014e:
			{
				RuntimeObject* L_23 = __this->get_U3CU24s_87U3E__3_4();
				V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t2427283555_il2cpp_TypeInfo_var));
				RuntimeObject* L_24 = V_2;
				if (L_24)
				{
					goto IL_015e;
				}
			}

IL_015d:
			{
				IL2CPP_END_FINALLY(330)
			}

IL_015e:
			{
				RuntimeObject* L_25 = V_2;
				NullCheck(L_25);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_25);
				IL2CPP_END_FINALLY(330)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(330)
		{
			IL2CPP_END_CLEANUP(0x1BB, FINALLY_017a);
			IL2CPP_JUMP_TBL(0x165, IL_0165)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0165:
		{
			RuntimeObject* L_26 = __this->get_U3CU24s_86U3E__1_2();
			NullCheck(L_26);
			bool L_27 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1466026749_il2cpp_TypeInfo_var, L_26);
			if (L_27)
			{
				goto IL_00cf;
			}
		}

IL_0175:
		{
			IL2CPP_LEAVE(0x195, FINALLY_017a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_017a;
	}

FINALLY_017a:
	{ // begin finally (depth: 1)
		{
			bool L_28 = V_1;
			if (!L_28)
			{
				goto IL_017e;
			}
		}

IL_017d:
		{
			IL2CPP_END_FINALLY(378)
		}

IL_017e:
		{
			RuntimeObject* L_29 = __this->get_U3CU24s_86U3E__1_2();
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			RuntimeObject* L_30 = V_3;
			if (L_30)
			{
				goto IL_018e;
			}
		}

IL_018d:
		{
			IL2CPP_END_FINALLY(378)
		}

IL_018e:
		{
			RuntimeObject* L_31 = V_3;
			NullCheck(L_31);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_31);
			IL2CPP_END_FINALLY(378)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(378)
	{
		IL2CPP_JUMP_TBL(0x1BB, IL_01bb)
		IL2CPP_JUMP_TBL(0x195, IL_0195)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0195:
	{
		goto IL_01b2;
	}

IL_019a:
	{
		RuntimeObject * L_32 = __this->get_o_0();
		__this->set_U24current_7(L_32);
		__this->set_U24PC_6(4);
		goto IL_01bb;
	}

IL_01b2:
	{
		__this->set_U24PC_6((-1));
	}

IL_01b9:
	{
		return (bool)0;
	}

IL_01bb:
	{
		return (bool)1;
	}
	// Dead block : IL_01bd: ldloc.s V_4
}
// System.Void System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::Dispose()
extern "C"  void U3CExpandArrayU3Ec__Iterator25_Dispose_m648767970 (U3CExpandArrayU3Ec__Iterator25_t507968046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CExpandArrayU3Ec__Iterator25_Dispose_m648767970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0065;
			}
			case 1:
			{
				goto IL_0065;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_002d;
			}
			case 4:
			{
				goto IL_0065;
			}
		}
	}
	{
		goto IL_0065;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x49, FINALLY_0032);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0032;
		}

FINALLY_0032:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_2 = __this->get_U3CU24s_87U3E__3_4();
				V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t2427283555_il2cpp_TypeInfo_var));
				RuntimeObject* L_3 = V_1;
				if (L_3)
				{
					goto IL_0042;
				}
			}

IL_0041:
			{
				IL2CPP_END_FINALLY(50)
			}

IL_0042:
			{
				RuntimeObject* L_4 = V_1;
				NullCheck(L_4);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_4);
				IL2CPP_END_FINALLY(50)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(50)
		{
			IL2CPP_JUMP_TBL(0x49, IL_0049)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x65, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_5 = __this->get_U3CU24s_86U3E__1_2();
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, IDisposable_t2427283555_il2cpp_TypeInfo_var));
			RuntimeObject* L_6 = V_2;
			if (L_6)
			{
				goto IL_005e;
			}
		}

IL_005d:
		{
			IL2CPP_END_FINALLY(78)
		}

IL_005e:
		{
			RuntimeObject* L_7 = V_2;
			NullCheck(L_7);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t2427283555_il2cpp_TypeInfo_var, L_7);
			IL2CPP_END_FINALLY(78)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0065:
	{
		return;
	}
}
// System.Void System.Xml.Linq.XUtil/<ExpandArray>c__Iterator25::Reset()
extern "C"  void U3CExpandArrayU3Ec__Iterator25_Reset_m2626269592 (U3CExpandArrayU3Ec__Iterator25_t507968046 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CExpandArrayU3Ec__Iterator25_Reset_m2626269592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
