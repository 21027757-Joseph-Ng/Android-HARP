#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>>
struct Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>>
struct Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>>
struct Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>>
struct Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>>
struct KeyCollection_t354EC7B5BBE977789E0D38C3145298D47959746C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>>
struct KeyCollection_tC941695CDDBEA2401C5DA8FF6C09E973D2D4BACA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>>
struct KeyCollection_t9485DB06E98B5E89ECF68F702F222C6BB7ABACEE;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>>
struct KeyCollection_t8C09707B2501441E443E66C52544C3777BC02333;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Reflection.MemberInfo>
struct KeyCollection_t97F2177324F7BC40BBA93A3380277CD7B8061C6A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct KeyCollection_tBAB43AE8797408A3A15FEF791CC563CDA48AE405;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>
struct List_1_t09A64D9E437F063360CB595BAD6247536D11B374;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct List_1_t995E93A35BC66C790862167E6D42B370113C7AF7;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>
struct List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>
struct List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF;
// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>
struct List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>
struct List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC;
// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E;
// System.Collections.Generic.Stack`1<System.Reflection.MemberInfo>
struct Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>>
struct ValueCollection_t90238881137D800C267B45797F2998D0CEB66060;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>>
struct ValueCollection_t3E59FDB323FE925D2D081F8806095C1919E72159;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>>
struct ValueCollection_t3E28BDE87FB63A064D4A8291D9190C471A10B2DD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>>
struct ValueCollection_t1C2E7253933C2FC7227EF310D8E17725715A58EF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Reflection.MemberInfo>
struct ValueCollection_t249A253C6896F76AA59A4B0039E3834DD205F9C1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct ValueCollection_tDD2E0C132B29951F3A40C22A99538A8DA70B4AA5;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>>[]
struct EntryU5BU5D_t7ED3CC56C6B93422E5826B6357B9C46E0A1C4D64;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>>[]
struct EntryU5BU5D_t32697E1880809C68DFC378BD3F56E92D6708406A;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>>[]
struct EntryU5BU5D_t6ABEF13B98E18DC588B235A3C823FEA0E90282CB;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>>[]
struct EntryU5BU5D_t5D89E18DC8ED6DDF490D39827A87FE257A3203D6;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Reflection.MemberInfo>[]
struct EntryU5BU5D_tCBBC317F7902F8BA4FF0462B4FB5E432C5FD67FE;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>[]
struct EntryU5BU5D_tAB10C4B656D9F9410CE2F0A070CC09D560E73F45;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>[]
struct KeyValuePair_2U5BU5D_t0B8739B58EEEA9240009F30207D455A68FFD5031;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9;
// System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>[]
struct KeyValuePair_2U5BU5D_tBDD6C1408A6D65B39D0A1C604FCEE5969F0E7E2A;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>[]
struct KeyValuePair_2U5BU5D_tBA435CC9C227792D830E68584F46806832BB53F8;
// System.Collections.Generic.List`1<System.Object>[]
struct List_1U5BU5D_tB82680550CA4E7E0496172B70DF55F195A982E4E;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t3AD132A16A05A15B043BE275A8822F1872770498;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Pathfinding.Serialization.JsonFx.JsonConverter[]
struct JsonConverterU5BU5D_t099E1FC460C0D43D39A32642D7B012637E95F590;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter[]
struct DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerable
struct IEnumerable_t47A618747A1BB2A868710316F7372094849163A2;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE;
// Pathfinding.Serialization.JsonFx.JsonDeserializationException
struct JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B;
// Pathfinding.Serialization.JsonFx.JsonNameAttribute
struct JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E;
// Pathfinding.Serialization.JsonFx.JsonReader
struct JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04;
// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161;
// Pathfinding.Serialization.JsonFx.JsonSerializationException
struct JsonSerializationException_t30AA11A4AC9A59D2E65397E7D4FE7F3B77844329;
// Pathfinding.Serialization.JsonFx.JsonTypeCoercionException
struct JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// Pathfinding.Serialization.JsonFx.ReferenceHandlerReader
struct ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.Type
struct Type_t;
// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324;
// System.ComponentModel.TypeConverter
struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICustomAttributeProvider_tC8BCE1D3E22F82F78095824C7EB2F62A6DAD2492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonSerializable_tB45D66B451ED7DD92DC91910D1FA415DBE52EE16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t09A64D9E437F063360CB595BAD6247536D11B374_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral05FC263DEDBF63BA3F19BD67B2BC8391F38B1733;
IL2CPP_EXTERN_C String_t* _stringLiteral0FD73529E874E82DDA9E7B84AE21412CD73FEFF7;
IL2CPP_EXTERN_C String_t* _stringLiteral107694947DB47644F8036602F63473486E1ED925;
IL2CPP_EXTERN_C String_t* _stringLiteral11D4F4A02AA8E60E8A662F8F750F430A9AE56C04;
IL2CPP_EXTERN_C String_t* _stringLiteral1A3368DAE484FE379E69F430C2A7AAC7B6DBF7C3;
IL2CPP_EXTERN_C String_t* _stringLiteral2326AF1D33072EE380903788C5005A78F51A0803;
IL2CPP_EXTERN_C String_t* _stringLiteral27135BBEDAB516092D9B4F214A2D1876BFFE767F;
IL2CPP_EXTERN_C String_t* _stringLiteral2BA03EA8B04430EA5974F2E64F45D92F46359305;
IL2CPP_EXTERN_C String_t* _stringLiteral33DF2C4AEDE75FD00D11899B29D6151E7E5EC562;
IL2CPP_EXTERN_C String_t* _stringLiteral3C03B27CFC3411D3E0CA217A1982875AA01C309E;
IL2CPP_EXTERN_C String_t* _stringLiteral3E24966AAC8E45227EBD6E8A3E51083DABA17921;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral452BFBBAF70C5EF1721BE12989A379A52F35C137;
IL2CPP_EXTERN_C String_t* _stringLiteral4941F27CECCAED86C206C63E64FEE85A45B8B1ED;
IL2CPP_EXTERN_C String_t* _stringLiteral513431A61E5716B54D536064FFB2DD5BBEF0EBF3;
IL2CPP_EXTERN_C String_t* _stringLiteral5457B4732B48F5352ECD0C9C97B62CCF3703C1C1;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral5B22DE498A248A5D137E9D01CFAA089B3CA784EA;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9D83E35717519F7593553D4AC00C3A46B092BC;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5EEC3D61FB2FAA6A832418D53400A91BBE05D2E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6F45AE1F6DDDD4F0B29149B9126317C62C36E5A5;
IL2CPP_EXTERN_C String_t* _stringLiteral70EEFAA66DA29FAC9E1A81759A5984878FB67ED3;
IL2CPP_EXTERN_C String_t* _stringLiteral767EA09B5EB3270D152C90E593B45D31C8B05123;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral807ECAB7EBAECB7C852A1324352B400DE8C8325F;
IL2CPP_EXTERN_C String_t* _stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C;
IL2CPP_EXTERN_C String_t* _stringLiteral87433BD837DDDF310440C2A80469D1C9EC12D8F1;
IL2CPP_EXTERN_C String_t* _stringLiteral928EE8E3EBAC8D2AEA281A504385C5DDA82CE607;
IL2CPP_EXTERN_C String_t* _stringLiteral97904970B3A68365EC4C5BC81CD8B049D3A81ECD;
IL2CPP_EXTERN_C String_t* _stringLiteral9967393E7AD32CC664FFB02F6AE872530750A387;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA8C44D8001E19877B2F2B86EC61A60048AF615;
IL2CPP_EXTERN_C String_t* _stringLiteralA18EE5A6DFA929F690B080887225A586A880DFEF;
IL2CPP_EXTERN_C String_t* _stringLiteralA4E5B505467C549DAFBE374797F3373943CC8D1E;
IL2CPP_EXTERN_C String_t* _stringLiteralA55D6CD047AAD16FF1DC48785CF5ECEB98120B04;
IL2CPP_EXTERN_C String_t* _stringLiteralAF6332CAF2336F3BE1159385284C46DF80D13915;
IL2CPP_EXTERN_C String_t* _stringLiteralB2D256627D0DEE6975EF4613B6CB13909F7659BF;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB62FEDE14B2DC6477B8036B35157240CE69CA5E8;
IL2CPP_EXTERN_C String_t* _stringLiteralB6EE62DB00262C920020AFD07565C53A04BC896D;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476;
IL2CPP_EXTERN_C String_t* _stringLiteralBEC1B25E3E42C42165FD24BA61715FD024A24168;
IL2CPP_EXTERN_C String_t* _stringLiteralBED8B2301C7E241FD6DA19A158A85848FC98595B;
IL2CPP_EXTERN_C String_t* _stringLiteralC202283F6CD897CCB5AB82E4DA5E003E22655BD9;
IL2CPP_EXTERN_C String_t* _stringLiteralC804843A4C1480DA8507B26098A435EAD9E5EF46;
IL2CPP_EXTERN_C String_t* _stringLiteralCA0514C5253EA13591307D8EBAFC89321634E095;
IL2CPP_EXTERN_C String_t* _stringLiteralCC1F15E1DDEEEBDE2F8AC68910F0679026C5B6BE;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F5AB3DB8A9A36171F6BAE4DC5ED6137E31D30B;
IL2CPP_EXTERN_C String_t* _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0AE246BF739BAF1083CA905EB49206E8FF3C26;
IL2CPP_EXTERN_C String_t* _stringLiteralDE31198D813D1CE557B993E1B1107E6160E81320;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE9A8AA5BB97E61C8797A55EC92C5495F84F95A72;
IL2CPP_EXTERN_C String_t* _stringLiteralEF1A27E97374B8EF8312018EE6DBD2C3890CD2DC;
IL2CPP_EXTERN_C String_t* _stringLiteralF6EA462A42992F82724EAA46C35751CEBA493DB2;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD39D0B0B17CB066C77D8A693B9FAC85260F0B2;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m086D1BD2B707DBA7E068746EEC06E74CBBE989BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m99F0D850FE3B2DECC9C565302955AFE1490A7E44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mB8FB105C664FCA3453BDA036CD907A57CA32DAF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mC112CC3E644509CC16F8D27B5DF4BA019723FC78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m54A8DF575FAFF8B0FA9F714ECFF2F2AC222F1C0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mAC3A792F504A06162458084B639B9FDB5C265499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mF1389027CC6FAF5550C8D326D7F80B309C2E4985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m082C91C62C26D9C258ECD9114D21C6796306492F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3EB3EB3FA9E674D490542CDED5CBE0876CF0A651_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD9198DB32EB268B2B200F0427C9DA107BC1BBFF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m7ACC429A18952CD2D520C6B08E302FCEB9CECA05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m95AF254A5360A04671D7D03CC8CBDF1B171BC4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB5265712D80F95800619202B962EADA049C57773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD38E439615B1E89B4B6401E00B7229DA92B7A1BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1CD9C325D5C5E995B369D0BFA14E286BB884BA48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m5FE08B9838245499C5C1EB40D32157975823D2B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m646BF45C644F9A1B26BB9F7FEFDB73D896A9405E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m73EDAD230A16E1DBC0F593695B8A04DC623D3938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA8DCEF09EF505221924518976EA48369665878EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDEC5DE1ECB3C3AB88643EFC7C24D0231E9A58712_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_ReadJson_m28541EA504D0A2C5B97AAA00CEC094A5ACD947A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonIgnoreAttribute_IsJsonIgnore_m9563F1F06D6239BB9E81A5632364992DBB412E97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonNameAttribute_GetJsonName_m7A8433D3C798FE0D3035A8B835513120228A147C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_GetGenericDictionaryType_m1628FA1B7C8DCE3D64EC19FBFB7AFD7CB13883B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_ReadArray_m4D0E6C1238B37455ABA373B297C7D11E45A4D959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_ReadNumber_mCC5A7C352FCE9BC0BB40030E6E84BDD2392BBE67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_ReadString_mB5869770E30A99CDCA713053CE3AF27AF7BB4609_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_Tokenize_mE7348B33149C9BE5160BEBAD1EFC58280336D55B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m10A9E384657138ADB1327790F29DFF1B28D97B9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m66410DB8E9889210830D237D0C50C0C4283BB5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mAC437FAF19B6F21DD90D59C629BA8F7967971E56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mB1AA9D9A108A0FDC33C3778D599D98E70C97EB85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA0FAD2D4503C56DA9DC3E9139CF096277068D211_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mBB69282F5538285975EB23BCA2595641255930A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mE381E43DD67F3565622F42212A979007B191ECD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mE3B72B1BB3B8DD41788D39A3AF38E6A94B241400_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2B010442FE5020DE938F890056BABD0986ECE976_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m40417D9B18D29FD4A072DABC1449DACEF8009C6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m6583FA6131280A3D9E743AC209EC305DAF9BA380_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m91B6E29B8D89D66FE2ABBA9A44B99078879399DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m253EA52BAAD842AB2283B9DFE7A1751B551568F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m70662DB9F27C0BDD77432538DCCB0438B1E70C42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC5617239D741910561908C246B37986FF4CFEE1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD4717B35B78B9533329DF0029EA737A55EB14A87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE61D67F4C6136B0EED0023581D4F3220F6C58077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m04A04AB486705433C77A3706E9679B3A29AA1A94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD64522C65930DA02AC1A09ADBAB0A4F1641CBAFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE0E89071B73D5694BB7B0DAB08FC0B28731C73AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mE3A7FB05C3733B4170C10054B4FEE9DA00A33D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m392A13AD94153607A4D45B7E4F532E2FE2E12CD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45CF9D7F9A41567CF92F2AF2160E0B139FEB6652_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4A286B11AFB3D77A2092A5A65B2EB66F4DC39294_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5FBE69A9CF54F876B213F267747B60A042A2BF2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6D992560ED4AE5797589B37BEB92C75888B02B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA54F47905B0601AC44193CFC9D59B9B29A317ED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m06B1F50ABA78B2C06CE847731D472A86402FEDCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1E1BF095855D287C02F9C186F384A75D0EBFC436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8994FFC7AE7DA2C1360413DBD15A4172FE89B39A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9C6D75878C3DE735D01021D433F01B792B89807E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAD480D06B9E19C3032AF3EE954FF7D4D869637F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDB2BAD2495D3C5B613157E5390B579F1DCF987CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1192BDBF73CA9A5DE28D8381F20144A3470E7D31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m368139A6A0CC1BDC74DE93631EA7DB3A46290369_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4E714CAEC2C0511112DA7FB82AD2649DEC66AE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4FB4BBD57DC08E95768992566FD7250B785F0470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD6184FABD3EB1F0BCB34079249503944C6A992A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mDC993CCCCBF573DB43919E8E91B927D76C22C99A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReferenceHandlerReader_AddDelayedDictionarySetter_m3E8ECEE2E3D6324503B4C91F9D1A2ADBC698F0BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReferenceHandlerReader_AddDelayedListSetter_mCAEFB2C596DC7C87EA07EA46B3C8FA968C85A4D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReferenceHandlerReader_AddDelayedSetter_m835D5E6B07055902CF1588ACC03227164A57FE42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReferenceHandlerReader_AddDelayedSetter_mDFF6E2C00EED5697BF85229F68BC2E6312CCE335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReferenceHandlerReader_Set_m7BC475373BEF18890E3A8D65BE3013D29E2E09F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mA76A49FA301A7BF0429ACF083F43F4C43834E91A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m6E65E040F0390049F8D40F86AEF88F680C5BBAC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m2895369C19E6CC80590BBB8C9FC2EE29C6F3A8E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mE5F96700E6F60A13D9B66B2EADA122532E26FF08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m01BC3D9F7D0CB112CD8A406E7E21D861F23E9297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m652692CDAC1CA17EE479C4808887D42E49428433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m385A256FF301975CA45DD5B822C84996B2F6B3D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m4AC6C361FCE819A1EAA9030F17813893856939DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m857B3ADC20A6730A3B2057AF3F3BBD813DAB5E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeCoercionUtility_CoerceList_mF2743227B51ED45F2639CFCE278C9A019C4A9C00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeCoercionUtility_ProcessTypeHint_m47B3DED1B0B0DB1C95FAA3E62DE935254E76C85D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypeCoercionUtility_ProcessTypeHint_m6F3980427D2AD974304836ECFD0E74EF64D7BCA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Guid_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IJsonSerializable_tB45D66B451ED7DD92DC91910D1FA415DBE52EE16_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonIgnoreAttribute_tCB43F6CCB88C03EA72A1641D93CDB99AB0657C47_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonMemberAttribute_t65EF12126310D84A48599F748A944AC890DFFAC3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t2F377D93C74B8090B226DCC307AB5BB600181453_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48;
struct KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9;
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C;
struct ConstructorInfoU5BU5D_t3AD132A16A05A15B043BE275A8822F1872770498;
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tD653B8367B7B9C954A7601FA4335C62287A05511 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>>
struct Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7ED3CC56C6B93422E5826B6357B9C46E0A1C4D64* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t354EC7B5BBE977789E0D38C3145298D47959746C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t90238881137D800C267B45797F2998D0CEB66060 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0, ___entries_1)); }
	inline EntryU5BU5D_t7ED3CC56C6B93422E5826B6357B9C46E0A1C4D64* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7ED3CC56C6B93422E5826B6357B9C46E0A1C4D64** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7ED3CC56C6B93422E5826B6357B9C46E0A1C4D64* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0, ___keys_7)); }
	inline KeyCollection_t354EC7B5BBE977789E0D38C3145298D47959746C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t354EC7B5BBE977789E0D38C3145298D47959746C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t354EC7B5BBE977789E0D38C3145298D47959746C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0, ___values_8)); }
	inline ValueCollection_t90238881137D800C267B45797F2998D0CEB66060 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t90238881137D800C267B45797F2998D0CEB66060 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t90238881137D800C267B45797F2998D0CEB66060 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>>
struct Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t32697E1880809C68DFC378BD3F56E92D6708406A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC941695CDDBEA2401C5DA8FF6C09E973D2D4BACA * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3E59FDB323FE925D2D081F8806095C1919E72159 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0, ___entries_1)); }
	inline EntryU5BU5D_t32697E1880809C68DFC378BD3F56E92D6708406A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t32697E1880809C68DFC378BD3F56E92D6708406A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t32697E1880809C68DFC378BD3F56E92D6708406A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0, ___keys_7)); }
	inline KeyCollection_tC941695CDDBEA2401C5DA8FF6C09E973D2D4BACA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC941695CDDBEA2401C5DA8FF6C09E973D2D4BACA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC941695CDDBEA2401C5DA8FF6C09E973D2D4BACA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0, ___values_8)); }
	inline ValueCollection_t3E59FDB323FE925D2D081F8806095C1919E72159 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3E59FDB323FE925D2D081F8806095C1919E72159 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3E59FDB323FE925D2D081F8806095C1919E72159 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>>
struct Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t6ABEF13B98E18DC588B235A3C823FEA0E90282CB* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9485DB06E98B5E89ECF68F702F222C6BB7ABACEE * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3E28BDE87FB63A064D4A8291D9190C471A10B2DD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB, ___entries_1)); }
	inline EntryU5BU5D_t6ABEF13B98E18DC588B235A3C823FEA0E90282CB* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t6ABEF13B98E18DC588B235A3C823FEA0E90282CB** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t6ABEF13B98E18DC588B235A3C823FEA0E90282CB* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB, ___keys_7)); }
	inline KeyCollection_t9485DB06E98B5E89ECF68F702F222C6BB7ABACEE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9485DB06E98B5E89ECF68F702F222C6BB7ABACEE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9485DB06E98B5E89ECF68F702F222C6BB7ABACEE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB, ___values_8)); }
	inline ValueCollection_t3E28BDE87FB63A064D4A8291D9190C471A10B2DD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3E28BDE87FB63A064D4A8291D9190C471A10B2DD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3E28BDE87FB63A064D4A8291D9190C471A10B2DD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>>
struct Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5D89E18DC8ED6DDF490D39827A87FE257A3203D6* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8C09707B2501441E443E66C52544C3777BC02333 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1C2E7253933C2FC7227EF310D8E17725715A58EF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E, ___entries_1)); }
	inline EntryU5BU5D_t5D89E18DC8ED6DDF490D39827A87FE257A3203D6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5D89E18DC8ED6DDF490D39827A87FE257A3203D6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5D89E18DC8ED6DDF490D39827A87FE257A3203D6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E, ___keys_7)); }
	inline KeyCollection_t8C09707B2501441E443E66C52544C3777BC02333 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8C09707B2501441E443E66C52544C3777BC02333 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8C09707B2501441E443E66C52544C3777BC02333 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E, ___values_8)); }
	inline ValueCollection_t1C2E7253933C2FC7227EF310D8E17725715A58EF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1C2E7253933C2FC7227EF310D8E17725715A58EF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1C2E7253933C2FC7227EF310D8E17725715A58EF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___entries_1)); }
	inline EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5373F057B0634C286A365E78C66FE57DBBDAB86E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___keys_7)); }
	inline KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBAE0EBE1B8D4A3690FCB3ADC3EF79DF8654B6A36 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ___values_8)); }
	inline ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>
struct Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCBBC317F7902F8BA4FF0462B4FB5E432C5FD67FE* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t97F2177324F7BC40BBA93A3380277CD7B8061C6A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t249A253C6896F76AA59A4B0039E3834DD205F9C1 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___entries_1)); }
	inline EntryU5BU5D_tCBBC317F7902F8BA4FF0462B4FB5E432C5FD67FE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCBBC317F7902F8BA4FF0462B4FB5E432C5FD67FE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCBBC317F7902F8BA4FF0462B4FB5E432C5FD67FE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___keys_7)); }
	inline KeyCollection_t97F2177324F7BC40BBA93A3380277CD7B8061C6A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t97F2177324F7BC40BBA93A3380277CD7B8061C6A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t97F2177324F7BC40BBA93A3380277CD7B8061C6A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ___values_8)); }
	inline ValueCollection_t249A253C6896F76AA59A4B0039E3834DD205F9C1 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t249A253C6896F76AA59A4B0039E3834DD205F9C1 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t249A253C6896F76AA59A4B0039E3834DD205F9C1 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___entries_1)); }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDCA1A62E50C5B5A40FD6F44107088AF42F5671D2* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___keys_7)); }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0043475CBB02FD67894529F3CAA818080A2F7A17 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ___values_8)); }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB942A1033B750DCF04FE948413982D120FC69A4E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>
struct Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tAB10C4B656D9F9410CE2F0A070CC09D560E73F45* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tBAB43AE8797408A3A15FEF791CC563CDA48AE405 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDD2E0C132B29951F3A40C22A99538A8DA70B4AA5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___entries_1)); }
	inline EntryU5BU5D_tAB10C4B656D9F9410CE2F0A070CC09D560E73F45* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tAB10C4B656D9F9410CE2F0A070CC09D560E73F45** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tAB10C4B656D9F9410CE2F0A070CC09D560E73F45* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___keys_7)); }
	inline KeyCollection_tBAB43AE8797408A3A15FEF791CC563CDA48AE405 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tBAB43AE8797408A3A15FEF791CC563CDA48AE405 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tBAB43AE8797408A3A15FEF791CC563CDA48AE405 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ___values_8)); }
	inline ValueCollection_tDD2E0C132B29951F3A40C22A99538A8DA70B4AA5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDD2E0C132B29951F3A40C22A99538A8DA70B4AA5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDD2E0C132B29951F3A40C22A99538A8DA70B4AA5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>
struct List_1_t09A64D9E437F063360CB595BAD6247536D11B374  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t0B8739B58EEEA9240009F30207D455A68FFD5031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t09A64D9E437F063360CB595BAD6247536D11B374, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t0B8739B58EEEA9240009F30207D455A68FFD5031* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t0B8739B58EEEA9240009F30207D455A68FFD5031** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t0B8739B58EEEA9240009F30207D455A68FFD5031* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t09A64D9E437F063360CB595BAD6247536D11B374, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t09A64D9E437F063360CB595BAD6247536D11B374, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t09A64D9E437F063360CB595BAD6247536D11B374, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t09A64D9E437F063360CB595BAD6247536D11B374_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t0B8739B58EEEA9240009F30207D455A68FFD5031* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t09A64D9E437F063360CB595BAD6247536D11B374_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t0B8739B58EEEA9240009F30207D455A68FFD5031* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t0B8739B58EEEA9240009F30207D455A68FFD5031** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t0B8739B58EEEA9240009F30207D455A68FFD5031* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct List_1_t995E93A35BC66C790862167E6D42B370113C7AF7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t995E93A35BC66C790862167E6D42B370113C7AF7, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t995E93A35BC66C790862167E6D42B370113C7AF7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t995E93A35BC66C790862167E6D42B370113C7AF7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t995E93A35BC66C790862167E6D42B370113C7AF7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t995E93A35BC66C790862167E6D42B370113C7AF7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t995E93A35BC66C790862167E6D42B370113C7AF7_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>
struct List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tBDD6C1408A6D65B39D0A1C604FCEE5969F0E7E2A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tBDD6C1408A6D65B39D0A1C604FCEE5969F0E7E2A* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tBDD6C1408A6D65B39D0A1C604FCEE5969F0E7E2A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tBDD6C1408A6D65B39D0A1C604FCEE5969F0E7E2A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tBDD6C1408A6D65B39D0A1C604FCEE5969F0E7E2A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tBDD6C1408A6D65B39D0A1C604FCEE5969F0E7E2A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tBDD6C1408A6D65B39D0A1C604FCEE5969F0E7E2A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tBDD6C1408A6D65B39D0A1C604FCEE5969F0E7E2A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>
struct List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tBA435CC9C227792D830E68584F46806832BB53F8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tBA435CC9C227792D830E68584F46806832BB53F8* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tBA435CC9C227792D830E68584F46806832BB53F8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tBA435CC9C227792D830E68584F46806832BB53F8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tBA435CC9C227792D830E68584F46806832BB53F8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tBA435CC9C227792D830E68584F46806832BB53F8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tBA435CC9C227792D830E68584F46806832BB53F8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tBA435CC9C227792D830E68584F46806832BB53F8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>
struct List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonConverterU5BU5D_t099E1FC460C0D43D39A32642D7B012637E95F590* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090, ____items_1)); }
	inline JsonConverterU5BU5D_t099E1FC460C0D43D39A32642D7B012637E95F590* get__items_1() const { return ____items_1; }
	inline JsonConverterU5BU5D_t099E1FC460C0D43D39A32642D7B012637E95F590** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonConverterU5BU5D_t099E1FC460C0D43D39A32642D7B012637E95F590* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonConverterU5BU5D_t099E1FC460C0D43D39A32642D7B012637E95F590* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090_StaticFields, ____emptyArray_5)); }
	inline JsonConverterU5BU5D_t099E1FC460C0D43D39A32642D7B012637E95F590* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonConverterU5BU5D_t099E1FC460C0D43D39A32642D7B012637E95F590** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonConverterU5BU5D_t099E1FC460C0D43D39A32642D7B012637E95F590* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>
struct List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC, ____items_1)); }
	inline DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123* get__items_1() const { return ____items_1; }
	inline DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC_StaticFields, ____emptyArray_5)); }
	inline DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>
struct Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	List_1U5BU5D_tB82680550CA4E7E0496172B70DF55F195A982E4E* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E, ____array_0)); }
	inline List_1U5BU5D_tB82680550CA4E7E0496172B70DF55F195A982E4E* get__array_0() const { return ____array_0; }
	inline List_1U5BU5D_tB82680550CA4E7E0496172B70DF55F195A982E4E** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(List_1U5BU5D_tB82680550CA4E7E0496172B70DF55F195A982E4E* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Reflection.MemberInfo>
struct Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E, ____array_0)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get__array_0() const { return ____array_0; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE  : public RuntimeObject
{
public:
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonConverter::convertAtDepthZero
	bool ___convertAtDepthZero_0;

public:
	inline static int32_t get_offset_of_convertAtDepthZero_0() { return static_cast<int32_t>(offsetof(JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE, ___convertAtDepthZero_0)); }
	inline bool get_convertAtDepthZero_0() const { return ___convertAtDepthZero_0; }
	inline bool* get_address_of_convertAtDepthZero_0() { return &___convertAtDepthZero_0; }
	inline void set_convertAtDepthZero_0(bool value)
	{
		___convertAtDepthZero_0 = value;
	}
};


// Pathfinding.Serialization.JsonFx.JsonReader
struct JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04  : public RuntimeObject
{
public:
	// Pathfinding.Serialization.JsonFx.JsonReaderSettings Pathfinding.Serialization.JsonFx.JsonReader::Settings
	JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * ___Settings_8;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::Source
	String_t* ___Source_9;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonReader::SourceLength
	int32_t ___SourceLength_10;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonReader::index
	int32_t ___index_11;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonReader::depth
	int32_t ___depth_12;
	// System.Collections.Generic.List`1<System.Object> Pathfinding.Serialization.JsonFx.JsonReader::previouslyDeserialized
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___previouslyDeserialized_13;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>> Pathfinding.Serialization.JsonFx.JsonReader::jsArrays
	Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E * ___jsArrays_14;
	// Pathfinding.Serialization.JsonFx.ReferenceHandlerReader Pathfinding.Serialization.JsonFx.JsonReader::referenceHandler
	ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * ___referenceHandler_15;
	// System.Collections.Generic.Stack`1<System.Object> Pathfinding.Serialization.JsonFx.JsonReader::parentClass
	Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * ___parentClass_16;
	// System.Collections.Generic.Stack`1<System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.JsonReader::parentMemberInfo
	Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * ___parentMemberInfo_17;

public:
	inline static int32_t get_offset_of_Settings_8() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04, ___Settings_8)); }
	inline JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * get_Settings_8() const { return ___Settings_8; }
	inline JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 ** get_address_of_Settings_8() { return &___Settings_8; }
	inline void set_Settings_8(JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * value)
	{
		___Settings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Settings_8), (void*)value);
	}

	inline static int32_t get_offset_of_Source_9() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04, ___Source_9)); }
	inline String_t* get_Source_9() const { return ___Source_9; }
	inline String_t** get_address_of_Source_9() { return &___Source_9; }
	inline void set_Source_9(String_t* value)
	{
		___Source_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Source_9), (void*)value);
	}

	inline static int32_t get_offset_of_SourceLength_10() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04, ___SourceLength_10)); }
	inline int32_t get_SourceLength_10() const { return ___SourceLength_10; }
	inline int32_t* get_address_of_SourceLength_10() { return &___SourceLength_10; }
	inline void set_SourceLength_10(int32_t value)
	{
		___SourceLength_10 = value;
	}

	inline static int32_t get_offset_of_index_11() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04, ___index_11)); }
	inline int32_t get_index_11() const { return ___index_11; }
	inline int32_t* get_address_of_index_11() { return &___index_11; }
	inline void set_index_11(int32_t value)
	{
		___index_11 = value;
	}

	inline static int32_t get_offset_of_depth_12() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04, ___depth_12)); }
	inline int32_t get_depth_12() const { return ___depth_12; }
	inline int32_t* get_address_of_depth_12() { return &___depth_12; }
	inline void set_depth_12(int32_t value)
	{
		___depth_12 = value;
	}

	inline static int32_t get_offset_of_previouslyDeserialized_13() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04, ___previouslyDeserialized_13)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_previouslyDeserialized_13() const { return ___previouslyDeserialized_13; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_previouslyDeserialized_13() { return &___previouslyDeserialized_13; }
	inline void set_previouslyDeserialized_13(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___previouslyDeserialized_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previouslyDeserialized_13), (void*)value);
	}

	inline static int32_t get_offset_of_jsArrays_14() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04, ___jsArrays_14)); }
	inline Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E * get_jsArrays_14() const { return ___jsArrays_14; }
	inline Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E ** get_address_of_jsArrays_14() { return &___jsArrays_14; }
	inline void set_jsArrays_14(Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E * value)
	{
		___jsArrays_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jsArrays_14), (void*)value);
	}

	inline static int32_t get_offset_of_referenceHandler_15() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04, ___referenceHandler_15)); }
	inline ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * get_referenceHandler_15() const { return ___referenceHandler_15; }
	inline ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 ** get_address_of_referenceHandler_15() { return &___referenceHandler_15; }
	inline void set_referenceHandler_15(ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * value)
	{
		___referenceHandler_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___referenceHandler_15), (void*)value);
	}

	inline static int32_t get_offset_of_parentClass_16() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04, ___parentClass_16)); }
	inline Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * get_parentClass_16() const { return ___parentClass_16; }
	inline Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 ** get_address_of_parentClass_16() { return &___parentClass_16; }
	inline void set_parentClass_16(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * value)
	{
		___parentClass_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentClass_16), (void*)value);
	}

	inline static int32_t get_offset_of_parentMemberInfo_17() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04, ___parentMemberInfo_17)); }
	inline Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * get_parentMemberInfo_17() const { return ___parentMemberInfo_17; }
	inline Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E ** get_address_of_parentMemberInfo_17() { return &___parentMemberInfo_17; }
	inline void set_parentMemberInfo_17(Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * value)
	{
		___parentMemberInfo_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentMemberInfo_17), (void*)value);
	}
};

struct JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields
{
public:
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralFalse
	String_t* ___LiteralFalse_0;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralTrue
	String_t* ___LiteralTrue_1;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralNull
	String_t* ___LiteralNull_2;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralUndefined
	String_t* ___LiteralUndefined_3;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralNotANumber
	String_t* ___LiteralNotANumber_4;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralPositiveInfinity
	String_t* ___LiteralPositiveInfinity_5;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::LiteralNegativeInfinity
	String_t* ___LiteralNegativeInfinity_6;
	// System.String Pathfinding.Serialization.JsonFx.JsonReader::TypeGenericIDictionary
	String_t* ___TypeGenericIDictionary_7;
	// System.Text.StringBuilder Pathfinding.Serialization.JsonFx.JsonReader::builder
	StringBuilder_t * ___builder_18;

public:
	inline static int32_t get_offset_of_LiteralFalse_0() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields, ___LiteralFalse_0)); }
	inline String_t* get_LiteralFalse_0() const { return ___LiteralFalse_0; }
	inline String_t** get_address_of_LiteralFalse_0() { return &___LiteralFalse_0; }
	inline void set_LiteralFalse_0(String_t* value)
	{
		___LiteralFalse_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LiteralFalse_0), (void*)value);
	}

	inline static int32_t get_offset_of_LiteralTrue_1() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields, ___LiteralTrue_1)); }
	inline String_t* get_LiteralTrue_1() const { return ___LiteralTrue_1; }
	inline String_t** get_address_of_LiteralTrue_1() { return &___LiteralTrue_1; }
	inline void set_LiteralTrue_1(String_t* value)
	{
		___LiteralTrue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LiteralTrue_1), (void*)value);
	}

	inline static int32_t get_offset_of_LiteralNull_2() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields, ___LiteralNull_2)); }
	inline String_t* get_LiteralNull_2() const { return ___LiteralNull_2; }
	inline String_t** get_address_of_LiteralNull_2() { return &___LiteralNull_2; }
	inline void set_LiteralNull_2(String_t* value)
	{
		___LiteralNull_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LiteralNull_2), (void*)value);
	}

	inline static int32_t get_offset_of_LiteralUndefined_3() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields, ___LiteralUndefined_3)); }
	inline String_t* get_LiteralUndefined_3() const { return ___LiteralUndefined_3; }
	inline String_t** get_address_of_LiteralUndefined_3() { return &___LiteralUndefined_3; }
	inline void set_LiteralUndefined_3(String_t* value)
	{
		___LiteralUndefined_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LiteralUndefined_3), (void*)value);
	}

	inline static int32_t get_offset_of_LiteralNotANumber_4() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields, ___LiteralNotANumber_4)); }
	inline String_t* get_LiteralNotANumber_4() const { return ___LiteralNotANumber_4; }
	inline String_t** get_address_of_LiteralNotANumber_4() { return &___LiteralNotANumber_4; }
	inline void set_LiteralNotANumber_4(String_t* value)
	{
		___LiteralNotANumber_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LiteralNotANumber_4), (void*)value);
	}

	inline static int32_t get_offset_of_LiteralPositiveInfinity_5() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields, ___LiteralPositiveInfinity_5)); }
	inline String_t* get_LiteralPositiveInfinity_5() const { return ___LiteralPositiveInfinity_5; }
	inline String_t** get_address_of_LiteralPositiveInfinity_5() { return &___LiteralPositiveInfinity_5; }
	inline void set_LiteralPositiveInfinity_5(String_t* value)
	{
		___LiteralPositiveInfinity_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LiteralPositiveInfinity_5), (void*)value);
	}

	inline static int32_t get_offset_of_LiteralNegativeInfinity_6() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields, ___LiteralNegativeInfinity_6)); }
	inline String_t* get_LiteralNegativeInfinity_6() const { return ___LiteralNegativeInfinity_6; }
	inline String_t** get_address_of_LiteralNegativeInfinity_6() { return &___LiteralNegativeInfinity_6; }
	inline void set_LiteralNegativeInfinity_6(String_t* value)
	{
		___LiteralNegativeInfinity_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LiteralNegativeInfinity_6), (void*)value);
	}

	inline static int32_t get_offset_of_TypeGenericIDictionary_7() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields, ___TypeGenericIDictionary_7)); }
	inline String_t* get_TypeGenericIDictionary_7() const { return ___TypeGenericIDictionary_7; }
	inline String_t** get_address_of_TypeGenericIDictionary_7() { return &___TypeGenericIDictionary_7; }
	inline void set_TypeGenericIDictionary_7(String_t* value)
	{
		___TypeGenericIDictionary_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeGenericIDictionary_7), (void*)value);
	}

	inline static int32_t get_offset_of_builder_18() { return static_cast<int32_t>(offsetof(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields, ___builder_18)); }
	inline StringBuilder_t * get_builder_18() const { return ___builder_18; }
	inline StringBuilder_t ** get_address_of_builder_18() { return &___builder_18; }
	inline void set_builder_18(StringBuilder_t * value)
	{
		___builder_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___builder_18), (void*)value);
	}
};


// Pathfinding.Serialization.JsonFx.JsonReaderSettings
struct JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161  : public RuntimeObject
{
public:
	// Pathfinding.Serialization.JsonFx.TypeCoercionUtility Pathfinding.Serialization.JsonFx.JsonReaderSettings::Coercion
	TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * ___Coercion_0;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::allowUnquotedObjectKeys
	bool ___allowUnquotedObjectKeys_1;
	// System.String Pathfinding.Serialization.JsonFx.JsonReaderSettings::typeHintName
	String_t* ___typeHintName_2;
	// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter> Pathfinding.Serialization.JsonFx.JsonReaderSettings::converters
	List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 * ___converters_3;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::<HandleCyclicReferences>k__BackingField
	bool ___U3CHandleCyclicReferencesU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_Coercion_0() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161, ___Coercion_0)); }
	inline TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * get_Coercion_0() const { return ___Coercion_0; }
	inline TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 ** get_address_of_Coercion_0() { return &___Coercion_0; }
	inline void set_Coercion_0(TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * value)
	{
		___Coercion_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Coercion_0), (void*)value);
	}

	inline static int32_t get_offset_of_allowUnquotedObjectKeys_1() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161, ___allowUnquotedObjectKeys_1)); }
	inline bool get_allowUnquotedObjectKeys_1() const { return ___allowUnquotedObjectKeys_1; }
	inline bool* get_address_of_allowUnquotedObjectKeys_1() { return &___allowUnquotedObjectKeys_1; }
	inline void set_allowUnquotedObjectKeys_1(bool value)
	{
		___allowUnquotedObjectKeys_1 = value;
	}

	inline static int32_t get_offset_of_typeHintName_2() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161, ___typeHintName_2)); }
	inline String_t* get_typeHintName_2() const { return ___typeHintName_2; }
	inline String_t** get_address_of_typeHintName_2() { return &___typeHintName_2; }
	inline void set_typeHintName_2(String_t* value)
	{
		___typeHintName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeHintName_2), (void*)value);
	}

	inline static int32_t get_offset_of_converters_3() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161, ___converters_3)); }
	inline List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 * get_converters_3() const { return ___converters_3; }
	inline List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 ** get_address_of_converters_3() { return &___converters_3; }
	inline void set_converters_3(List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 * value)
	{
		___converters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___converters_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandleCyclicReferencesU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161, ___U3CHandleCyclicReferencesU3Ek__BackingField_4)); }
	inline bool get_U3CHandleCyclicReferencesU3Ek__BackingField_4() const { return ___U3CHandleCyclicReferencesU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CHandleCyclicReferencesU3Ek__BackingField_4() { return &___U3CHandleCyclicReferencesU3Ek__BackingField_4; }
	inline void set_U3CHandleCyclicReferencesU3Ek__BackingField_4(bool value)
	{
		___U3CHandleCyclicReferencesU3Ek__BackingField_4 = value;
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Pathfinding.Serialization.JsonFx.ReferenceHandlerReader
struct ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object> Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::mapping
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___mapping_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>> Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::delayedSetters
	Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * ___delayedSetters_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>> Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::delayedDictSetters
	Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * ___delayedDictSetters_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>> Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::delayedListSetters
	Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * ___delayedListSetters_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>> Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::deepDelayedSetters
	Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E * ___deepDelayedSetters_4;

public:
	inline static int32_t get_offset_of_mapping_0() { return static_cast<int32_t>(offsetof(ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3, ___mapping_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_mapping_0() const { return ___mapping_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_mapping_0() { return &___mapping_0; }
	inline void set_mapping_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___mapping_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapping_0), (void*)value);
	}

	inline static int32_t get_offset_of_delayedSetters_1() { return static_cast<int32_t>(offsetof(ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3, ___delayedSetters_1)); }
	inline Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * get_delayedSetters_1() const { return ___delayedSetters_1; }
	inline Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 ** get_address_of_delayedSetters_1() { return &___delayedSetters_1; }
	inline void set_delayedSetters_1(Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * value)
	{
		___delayedSetters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delayedSetters_1), (void*)value);
	}

	inline static int32_t get_offset_of_delayedDictSetters_2() { return static_cast<int32_t>(offsetof(ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3, ___delayedDictSetters_2)); }
	inline Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * get_delayedDictSetters_2() const { return ___delayedDictSetters_2; }
	inline Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB ** get_address_of_delayedDictSetters_2() { return &___delayedDictSetters_2; }
	inline void set_delayedDictSetters_2(Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * value)
	{
		___delayedDictSetters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delayedDictSetters_2), (void*)value);
	}

	inline static int32_t get_offset_of_delayedListSetters_3() { return static_cast<int32_t>(offsetof(ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3, ___delayedListSetters_3)); }
	inline Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * get_delayedListSetters_3() const { return ___delayedListSetters_3; }
	inline Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 ** get_address_of_delayedListSetters_3() { return &___delayedListSetters_3; }
	inline void set_delayedListSetters_3(Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * value)
	{
		___delayedListSetters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delayedListSetters_3), (void*)value);
	}

	inline static int32_t get_offset_of_deepDelayedSetters_4() { return static_cast<int32_t>(offsetof(ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3, ___deepDelayedSetters_4)); }
	inline Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E * get_deepDelayedSetters_4() const { return ___deepDelayedSetters_4; }
	inline Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E ** get_address_of_deepDelayedSetters_4() { return &___deepDelayedSetters_4; }
	inline void set_deepDelayedSetters_4(Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E * value)
	{
		___deepDelayedSetters_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deepDelayedSetters_4), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinal_2)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
	}
};


// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::memberMapCache
	Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * ___memberMapCache_0;
	// System.Boolean Pathfinding.Serialization.JsonFx.TypeCoercionUtility::allowNullValueTypes
	bool ___allowNullValueTypes_1;

public:
	inline static int32_t get_offset_of_memberMapCache_0() { return static_cast<int32_t>(offsetof(TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324, ___memberMapCache_0)); }
	inline Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * get_memberMapCache_0() const { return ___memberMapCache_0; }
	inline Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 ** get_address_of_memberMapCache_0() { return &___memberMapCache_0; }
	inline void set_memberMapCache_0(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * value)
	{
		___memberMapCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberMapCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_allowNullValueTypes_1() { return static_cast<int32_t>(offsetof(TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324, ___allowNullValueTypes_1)); }
	inline bool get_allowNullValueTypes_1() const { return ___allowNullValueTypes_1; }
	inline bool* get_address_of_allowNullValueTypes_1() { return &___allowNullValueTypes_1; }
	inline void set_allowNullValueTypes_1(bool value)
	{
		___allowNullValueTypes_1 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>
struct KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED, ___value_1)); }
	inline RuntimeObject* get_value_1() const { return ___value_1; }
	inline RuntimeObject** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>
struct KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	MemberInfo_t * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023, ___key_0)); }
	inline MemberInfo_t * get_key_0() const { return ___key_0; }
	inline MemberInfo_t ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(MemberInfo_t * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>
struct KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB, ___value_1)); }
	inline RuntimeObject* get_value_1() const { return ___value_1; }
	inline RuntimeObject** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// Pathfinding.Serialization.JsonFx.JsonIgnoreAttribute
struct JsonIgnoreAttribute_tCB43F6CCB88C03EA72A1641D93CDB99AB0657C47  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Pathfinding.Serialization.JsonFx.JsonMemberAttribute
struct JsonMemberAttribute_t65EF12126310D84A48599F748A944AC890DFFAC3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Pathfinding.Serialization.JsonFx.JsonNameAttribute
struct JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::jsonName
	String_t* ___jsonName_0;

public:
	inline static int32_t get_offset_of_jsonName_0() { return static_cast<int32_t>(offsetof(JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E, ___jsonName_0)); }
	inline String_t* get_jsonName_0() const { return ___jsonName_0; }
	inline String_t** get_address_of_jsonName_0() { return &___jsonName_0; }
	inline void set_jsonName_0(String_t* value)
	{
		___jsonName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jsonName_0), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
struct DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262 
{
public:
	// System.Object Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter::parentClass
	RuntimeObject * ___parentClass_0;
	// System.Reflection.MemberInfo Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter::child
	MemberInfo_t * ___child_1;
	// System.Reflection.MemberInfo Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter::member
	MemberInfo_t * ___member_2;

public:
	inline static int32_t get_offset_of_parentClass_0() { return static_cast<int32_t>(offsetof(DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262, ___parentClass_0)); }
	inline RuntimeObject * get_parentClass_0() const { return ___parentClass_0; }
	inline RuntimeObject ** get_address_of_parentClass_0() { return &___parentClass_0; }
	inline void set_parentClass_0(RuntimeObject * value)
	{
		___parentClass_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentClass_0), (void*)value);
	}

	inline static int32_t get_offset_of_child_1() { return static_cast<int32_t>(offsetof(DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262, ___child_1)); }
	inline MemberInfo_t * get_child_1() const { return ___child_1; }
	inline MemberInfo_t ** get_address_of_child_1() { return &___child_1; }
	inline void set_child_1(MemberInfo_t * value)
	{
		___child_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___child_1), (void*)value);
	}

	inline static int32_t get_offset_of_member_2() { return static_cast<int32_t>(offsetof(DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262, ___member_2)); }
	inline MemberInfo_t * get_member_2() const { return ___member_2; }
	inline MemberInfo_t ** get_address_of_member_2() { return &___member_2; }
	inline void set_member_2(MemberInfo_t * value)
	{
		___member_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___member_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
struct DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshaled_pinvoke
{
	Il2CppIUnknown* ___parentClass_0;
	MemberInfo_t * ___child_1;
	MemberInfo_t * ___member_2;
};
// Native definition for COM marshalling of Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
struct DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshaled_com
{
	Il2CppIUnknown* ___parentClass_0;
	MemberInfo_t * ___child_1;
	MemberInfo_t * ___member_2;
};

// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// System.Globalization.DateTimeFormatFlags
struct DateTimeFormatFlags_tDB584B32BB07C708469EE8DEF8A903A105B4B4B7 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_tDB584B32BB07C708469EE8DEF8A903A105B4B4B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.DateTimeStyles
struct DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Pathfinding.Serialization.JsonFx.JsonToken
struct JsonToken_t738AEAED9CC6C7CFC38E3E545D4533B2226E1601 
{
public:
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_t738AEAED9CC6C7CFC38E3E545D4533B2226E1601, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Globalization.NumberStyles
struct NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// System.ComponentModel.TypeConverter
struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};


// System.UriIdnScope
struct UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_tFC16ACC1842283AAE2C7F50C9C70EFBF6550B3FC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Uri/Flags
struct Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_cultureData_1)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_langName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_compareInfo_4)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_compareInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_cultureInfo_5)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___amDesignator_6), (void*)value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pmDesignator_7), (void*)value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalShortTimePattern_9), (void*)value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalLongTimePattern_10), (void*)value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeSeparator_11), (void*)value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthDayPattern_12), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeOffsetPattern_13), (void*)value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___calendar_17)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_17), (void*)value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullDateTimePattern_20), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedDayNames_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_superShortDayNames_22), (void*)value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dayNames_23)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dayNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedMonthNames_24), (void*)value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___monthNames_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___genitiveMonthNames_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_genitiveAbbreviatedMonthNames_27), (void*)value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leapYearMonthNames_28), (void*)value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longDatePattern_29), (void*)value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortDatePattern_30), (void*)value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yearMonthPattern_31), (void*)value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longTimePattern_32), (void*)value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortTimePattern_33), (void*)value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allYearMonthPatterns_34), (void*)value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortDatePatterns_35), (void*)value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongDatePatterns_36), (void*)value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortTimePatterns_37), (void*)value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongTimePatterns_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_eraNames_39)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eraNames_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEraNames_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEnglishEraNames_41), (void*)value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optionalCalendars_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_dateWords_53)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dateWords_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanPositivePattern_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanNegativePattern_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dtfiTokenHash_57), (void*)value);
	}
};

struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_calendarNativeNames_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_jajpDTFI_82), (void*)value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_zhtwDTFI_83), (void*)value);
	}
};


// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_18)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Reflection.TargetInvocationException
struct TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// Pathfinding.Serialization.JsonFx.JsonSerializationException
struct JsonSerializationException_t30AA11A4AC9A59D2E65397E7D4FE7F3B77844329  : public InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB
{
public:

public:
};


// Pathfinding.Serialization.JsonFx.JsonTypeCoercionException
struct JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// Pathfinding.Serialization.JsonFx.JsonDeserializationException
struct JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B  : public JsonSerializationException_t30AA11A4AC9A59D2E65397E7D4FE7F3B77844329
{
public:
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonDeserializationException::index
	int32_t ___index_17;

public:
	inline static int32_t get_offset_of_index_17() { return static_cast<int32_t>(offsetof(JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B, ___index_17)); }
	inline int32_t get_index_17() const { return ___index_17; }
	inline int32_t* get_address_of_index_17() { return &___index_17; }
	inline void set_index_17(int32_t value)
	{
		___index_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t3AD132A16A05A15B043BE275A8822F1872770498  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * m_Items[1];

public:
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  m_Items[1];

public:
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  m_Items[1];

public:
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
		#endif
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  m_Items[1];

public:
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value_1), (void*)NULL);
	}
};
// Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter[]
struct DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  m_Items[1];

public:
	inline DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parentClass_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___child_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___member_2), (void*)NULL);
		#endif
	}
	inline DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___parentClass_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___child_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___member_2), (void*)NULL);
		#endif
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m392A13AD94153607A4D45B7E4F532E2FE2E12CD7_gshared (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_mAC437FAF19B6F21DD90D59C629BA8F7967971E56_gshared (KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m253EA52BAAD842AB2283B9DFE7A1751B551568F3_gshared (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * __this, KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  List_1_get_Item_mDC993CCCCBF573DB43919E8E91B927D76C22C99A_gshared_inline (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * __this, int32_t ___index0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m40417D9B18D29FD4A072DABC1449DACEF8009C6A_gshared_inline (KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mE3B72B1BB3B8DD41788D39A3AF38E6A94B241400_gshared_inline (KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAD480D06B9E19C3032AF3EE954FF7D4D869637F2_gshared_inline (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE9BB02EAE5A3CADC6536087DB663289B508343CC_gshared (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA54F47905B0601AC44193CFC9D59B9B29A317ED6_gshared (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE61D67F4C6136B0EED0023581D4F3220F6C58077_gshared (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * __this, DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m350488BD6C039A0706B87223DFE011F6E4143E03_gshared (List_1_t995E93A35BC66C790862167E6D42B370113C7AF7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m38685BA70A8C37D1ABABB4A73A97A7F5ED0AC270_gshared (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mBEEE8183F1DAC808FC305895189A2CB5770F3A04_gshared (List_1_t995E93A35BC66C790862167E6D42B370113C7AF7 * __this, KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  List_1_get_Item_m16C9B3D5182FA75E03E959F90530F42790212E40_gshared_inline (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8D980F48BD10D1ECDCA5064945183932705711AB_gshared_inline (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m70BE23F7F8D7B5AADEB1FF4C84ABBF38288E11D2_gshared (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  List_1_get_Item_m1156E4299EC1F90BDEEFC39BA8AB9A9E6D2B9476_gshared_inline (List_1_t995E93A35BC66C790862167E6D42B370113C7AF7 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m995933BA842A2C5EA84DE1707BE162770A8148BF_gshared_inline (List_1_t995E93A35BC66C790862167E6D42B370113C7AF7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m3561595B1B2A11123A21FC8C5BCC19A55184CE82_gshared (List_1_t995E93A35BC66C790862167E6D42B370113C7AF7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  List_1_get_Item_m4FB4BBD57DC08E95768992566FD7250B785F0470_gshared_inline (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8994FFC7AE7DA2C1360413DBD15A4172FE89B39A_gshared_inline (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m04A04AB486705433C77A3706E9679B3A29AA1A94_gshared (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Read(System.Type,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_Read_mDE1146E85B57E87E8610C4B5F325744610AC42F9 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, Type_t * ___expectedType0, bool ___typeIsHint1, bool ___skipConverters2, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Pathfinding.Serialization.JsonFx.JsonSerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializationException__ctor_m6F98CEBD3905761D1961DB50F3DBCF51F1422CC0 (JsonSerializationException_t30AA11A4AC9A59D2E65397E7D4FE7F3B77844329 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 Pathfinding.Serialization.JsonFx.JsonDeserializationException::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonDeserializationException_get_Index_m9F78803C4C42AB64C2FF59D6DB34128993BECCE4_inline (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * __this, const RuntimeMethod* method);
// System.String System.Exception::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Exception_ToString_m7401DB4C24A9C4A4951725780B3C1367D67D5A4C (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306 (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Type Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C (Type_t * ___tp0, const RuntimeMethod* method);
// System.String System.Enum::GetName(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_GetName_mA141F96AFDC64AD7020374311750DBA47BFCA8FA (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t * Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m789B4E75608A673F2CF5DDFC2E67DA20AF440A34 (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Object::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053 (RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method);
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * Attribute_GetCustomAttribute_mC3098F23886E5D9E7E8083DE6E80B5D2A136FC25 (MemberInfo_t * ___element0, Type_t * ___attributeType1, const RuntimeMethod* method);
// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonNameAttribute_get_Name_m686C7AFE52EACCC11E2FF91631B56FB49B1B3B4D_inline (JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Serialization.JsonFx.JsonReaderSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReaderSettings__ctor_mE9A0BF84BF1E3A06DE17F12995A37796B8EA4B25 (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * __this, const RuntimeMethod* method);
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.ctor(System.String,Pathfinding.Serialization.JsonFx.JsonReaderSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m08E576E5F1C2AB949519E0B850C93A4ECF5E2EE8 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, String_t* ___input0, JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * ___settings1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>::.ctor()
inline void Stack_1__ctor_m385A256FF301975CA45DD5B822C84996B2F6B3D6 (Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
inline void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Reflection.MemberInfo>::.ctor()
inline void Stack_1__ctor_m4AC6C361FCE819A1EAA9030F17813893856939DD (Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
inline void Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61 (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, const RuntimeMethod*))Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Reflection.MemberInfo>::Clear()
inline void Stack_1_Clear_mA76A49FA301A7BF0429ACF083F43F4C43834E91A (Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E *, const RuntimeMethod*))Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared)(__this, method);
}
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_Tokenize_m9CD94D3D14E49165F866815A309ED73FA5AA0972 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsPrimitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3 (Type_t * __this, const RuntimeMethod* method);
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::InstantiateObject(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeCoercionUtility_InstantiateObject_m8291F976813AFB4FF368A89A1BD71EB65C68D54E (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___objectType0, const RuntimeMethod* method);
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadObject(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_ReadObject_m8758A3709BC9BF0759A12B6F7A286D47585C8295 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, Type_t * ___objectType0, const RuntimeMethod* method);
// System.Collections.IEnumerable Pathfinding.Serialization.JsonFx.JsonReader::ReadArray(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_ReadArray_m4D0E6C1238B37455ABA373B297C7D11E45A4D959 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, Type_t * ___arrayType0, const RuntimeMethod* method);
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadString(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_ReadString_mB5869770E30A99CDCA713053CE3AF27AF7BB4609 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, Type_t * ___expectedType0, const RuntimeMethod* method);
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadNumber(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_ReadNumber_mCC5A7C352FCE9BC0BB40030E6E84BDD2392BBE67 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, Type_t * ___expectedType0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F (Type_t * __this, const RuntimeMethod* method);
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::InstantiateObject(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeCoercionUtility_InstantiateObject_mFD25F6D6D6AE55BBF4AD09828FA9A8A999792B52 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___objectType0, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** ___memberMap1, const RuntimeMethod* method);
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_HandleCyclicReferences()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReaderSettings_get_HandleCyclicReferences_mAC59C18B565E5AE845F3F7969644F1066ADD1A93_inline (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Type Pathfinding.Serialization.JsonFx.JsonReader::GetGenericDictionaryType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonReader_GetGenericDictionaryType_m1628FA1B7C8DCE3D64EC19FBFB7AFD7CB13883B1 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, Type_t * ___objectType0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63 (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::PopulateObject(System.Object&,System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, RuntimeObject ** ___result0, Type_t * ___objectType1, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * ___memberMap2, Type_t * ___genericDictionaryType3, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
inline int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Type System.Type::GetInterface(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetInterface_m1241E49F8C5AD57533E962F9D3B62751DAF7D18A (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void Pathfinding.Serialization.JsonFx.JsonDeserializationException::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980 (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * __this, String_t* ___message0, int32_t ___index1, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_AllowUnquotedObjectKeys()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReaderSettings_get_AllowUnquotedObjectKeys_m95DD95963F70BA049021A14F6E253C7DCEF8284E_inline (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * __this, const RuntimeMethod* method);
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_Tokenize_mE7348B33149C9BE5160BEBAD1EFC58280336D55B (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, bool ___allowUnquotedString0, const RuntimeMethod* method);
// System.String Pathfinding.Serialization.JsonFx.JsonReader::ReadUnquotedKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonReader_ReadUnquotedKey_m4487953AF04567E0751CD1FAF95CF57E1FED7088 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, const RuntimeMethod* method);
// System.Type Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberInfo(System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.String,System.Reflection.MemberInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeCoercionUtility_GetMemberInfo_mC90F5D09D26DD906DE4757AA97FF1E7ABB7686CB (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * ___memberMap0, String_t* ___memberName1, MemberInfo_t ** ___memberInfo2, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
inline RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceHandlerReader_Set_m7BC475373BEF18890E3A8D65BE3013D29E2E09F9 (ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * __this, int32_t ___id0, RuntimeObject * ___val1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
inline void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04 (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, RuntimeObject *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Reflection.MemberInfo>::Push(!0)
inline void Stack_1_Push_m01BC3D9F7D0CB112CD8A406E7E21D861F23E9297 (Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * __this, MemberInfo_t * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E *, MemberInfo_t *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
inline RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12 (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<System.Reflection.MemberInfo>::Pop()
inline MemberInfo_t * Stack_1_Pop_mE5F96700E6F60A13D9B66B2EADA122532E26FF08 (Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * __this, const RuntimeMethod* method)
{
	return ((  MemberInfo_t * (*) (Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method);
// System.Boolean Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::TryGetValueFromID(System.Int32,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceHandlerReader_TryGetValueFromID_mC1AD68F65F5F0ABDAFDAD0C434840AD4B549D3F3 (ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * __this, int32_t ___id0, RuntimeObject ** ___result1, const RuntimeMethod* method);
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedDictionarySetter(System.Int32,System.Collections.IDictionary,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceHandlerReader_AddDelayedDictionarySetter_m3E8ECEE2E3D6324503B4C91F9D1A2ADBC698F0BF (ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * __this, int32_t ___id0, RuntimeObject* ___dict1, String_t* ___key2, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Peek()
inline RuntimeObject * Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *, const RuntimeMethod*))Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_gshared)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<System.Reflection.MemberInfo>::Peek()
inline MemberInfo_t * Stack_1_Peek_m6E65E040F0390049F8D40F86AEF88F680C5BBAC9 (Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * __this, const RuntimeMethod* method)
{
	return ((  MemberInfo_t * (*) (Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E *, const RuntimeMethod*))Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_gshared)(__this, method);
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedSetter(System.Int32,System.Object,System.Reflection.MemberInfo,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceHandlerReader_AddDelayedSetter_m835D5E6B07055902CF1588ACC03227164A57FE42 (ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * __this, int32_t ___id0, RuntimeObject * ___parentClass1, MemberInfo_t * ___child2, MemberInfo_t * ___memberInfo3, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedSetter(System.Int32,System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceHandlerReader_AddDelayedSetter_mDFF6E2C00EED5697BF85229F68BC2E6312CCE335 (ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * __this, int32_t ___id0, MemberInfo_t * ___memberInfo1, RuntimeObject * ___val2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::IsTypeHintName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReaderSettings_IsTypeHintName_mF55B2C2E0ABF9F104F917DC5FCC952CC01AFCD50 (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::ProcessTypeHint(System.Collections.IDictionary,System.String,System.Type&,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeCoercionUtility_ProcessTypeHint_m47B3DED1B0B0DB1C95FAA3E62DE935254E76C85D (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, RuntimeObject* ___result0, String_t* ___typeInfo1, Type_t ** ___objectType2, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** ___memberMap3, const RuntimeMethod* method);
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::ProcessTypeHint(System.Object,System.String,System.Type&,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeCoercionUtility_ProcessTypeHint_m6F3980427D2AD974304836ECFD0E74EF64D7BCA8 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, RuntimeObject * ___result0, String_t* ___typeInfo1, Type_t ** ___objectType2, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** ___memberMap3, const RuntimeMethod* method);
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::SetMemberValue(System.Object,System.Type,System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeCoercionUtility_SetMemberValue_m9B934C08F9EF43F0D03940043D6EEF0A6634D436 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, RuntimeObject * ___result0, Type_t * ___memberType1, MemberInfo_t * ___memberInfo2, RuntimeObject * ___value3, const RuntimeMethod* method);
// System.Boolean System.Type::get_HasElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_HasElementType_m0E9BE136D7122FF3C2C92176B2FB40A39E5597D8 (Type_t * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>::get_Count()
inline int32_t Stack_1_get_Count_m857B3ADC20A6730A3B2057AF3F3BBD813DAB5E08_inline (Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E *, const RuntimeMethod*))Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>::Pop()
inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Stack_1_Pop_m2895369C19E6CC80590BBB8C9FC2EE29C6F3A8E1 (Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E * __this, const RuntimeMethod* method)
{
	return ((  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * (*) (Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
inline void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0 (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::.ctor()
inline void List_1__ctor_m392A13AD94153607A4D45B7E4F532E2FE2E12CD7 (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 *, const RuntimeMethod*))List_1__ctor_m392A13AD94153607A4D45B7E4F532E2FE2E12CD7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mAC437FAF19B6F21DD90D59C629BA8F7967971E56 (KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_mAC437FAF19B6F21DD90D59C629BA8F7967971E56_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Add(!0)
inline void List_1_Add_m253EA52BAAD842AB2283B9DFE7A1751B551568F3 (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * __this, KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 *, KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB , const RuntimeMethod*))List_1_Add_m253EA52BAAD842AB2283B9DFE7A1751B551568F3_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.List`1<System.Object>>::Push(!0)
inline void Stack_1_Push_m652692CDAC1CA17EE479C4808887D42E49428433 (Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1 (Type_t * ___type0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Array System.Array::CreateInstance(System.Type,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Array_CreateInstance_mAC559A46842AAC4E4C08FAA69E60AA6CCFDEDA64 (Type_t * ___elementType0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___lengths1, const RuntimeMethod* method);
// System.Void System.Array::SetValue(System.Object,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_m155453B293707C32AF61EB51F74A2381B91C2847 (RuntimeArray * __this, RuntimeObject * ___value0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___indices1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Item(System.Int32)
inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  List_1_get_Item_mDC993CCCCBF573DB43919E8E91B927D76C22C99A_inline (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  (*) (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mDC993CCCCBF573DB43919E8E91B927D76C22C99A_gshared_inline)(__this, ___index0, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m40417D9B18D29FD4A072DABC1449DACEF8009C6A_inline (KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB *, const RuntimeMethod*))KeyValuePair_2_get_Value_m40417D9B18D29FD4A072DABC1449DACEF8009C6A_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mE3B72B1BB3B8DD41788D39A3AF38E6A94B241400_inline (KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB *, const RuntimeMethod*))KeyValuePair_2_get_Key_mE3B72B1BB3B8DD41788D39A3AF38E6A94B241400_gshared_inline)(__this, method);
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedListSetter(System.Int32,System.Collections.IList,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceHandlerReader_AddDelayedListSetter_mCAEFB2C596DC7C87EA07EA46B3C8FA968C85A4D0 (ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * __this, int32_t ___id0, RuntimeObject* ___list1, int32_t ___index2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Count()
inline int32_t List_1_get_Count_mAD480D06B9E19C3032AF3EE954FF7D4D869637F2_inline (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 *, const RuntimeMethod*))List_1_get_Count_mAD480D06B9E19C3032AF3EE954FF7D4D869637F2_gshared_inline)(__this, method);
}
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17 (StringBuilder_t * __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___count2, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F (const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m006085C3B9AC64929E893942EF7A55328FDAE090 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int32_t* ___result3, const RuntimeMethod* method);
// System.String System.Char::ConvertFromUtf32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ConvertFromUtf32_m61381B403A3A7CF89350DE07F87D91C169C71AD7 (int32_t ___utf320, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceType(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___targetType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Char::IsDigit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsDigit_mC19135099993954C820E030363B943034575F504 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Decimal_Parse_mE9DEB6C845015FC1C2F1829D5CFC97403DCBC74B (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_m3C20B602B540FD08434894065D20BDBA60FF79BC (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Decimal::op_GreaterThanOrEqual(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_GreaterThanOrEqual_m5A41C18955592447AE1A4C61575AF1BB3FB111A4 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d10, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d21, const RuntimeMethod* method);
// System.Boolean System.Decimal::op_LessThanOrEqual(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Decimal_op_LessThanOrEqual_m28805548C35DAB5E7431BD7260367074B929B1A8 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d10, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___d21, const RuntimeMethod* method);
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Decimal_op_Explicit_m2B2A60437392A75F80B56C5C53CA06B50F7F9D3E (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method);
// System.Void System.Decimal::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Decimal__ctor_m145E08923E726750B62B4CB80C5A758ED3A4669C (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Decimal_op_Explicit_m0C0F3F7FB50EE1771393A9C22342734251EB0D74 (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method);
// System.Double System.Double::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mD60850592CF629A16EA1ECC6834385E7DDAD239F (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method);
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m7EEDD0A2CC330921B039E7509AA492632D8E710D (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, String_t* ___input0, const RuntimeMethod* method);
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Deserialize(System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_Deserialize_m0EB128E34154DA0761816AEE6E8714122C46084C (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, int32_t ___start0, Type_t * ___type1, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReader::MatchLiteral(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_MatchLiteral_m76329B85F15E7B34124BDFF441AAB913B8CB9A3C (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, String_t* ___literal0, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>::get_Item(System.Int32)
inline JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE * List_1_get_Item_m4E714CAEC2C0511112DA7FB82AD2649DEC66AE95_inline (List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE * (*) (List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>::get_Count()
inline int32_t List_1_get_Count_mDB2BAD2495D3C5B613157E5390B579F1DCF987CB_inline (List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeCoercionUtility__ctor_mF0DC0E8046282F40CB1AA68D39DF24CD94006D45 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>::.ctor()
inline void List_1__ctor_m6D992560ED4AE5797589B37BEB92C75888B02B5F (List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D82228EC0D314063BFC7BB308A43927D1D76852 (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, int32_t, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mB8FB105C664FCA3453BDA036CD907A57CA32DAF6 (Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>::.ctor()
inline void List_1__ctor_m45CF9D7F9A41567CF92F2AF2160E0B139FEB6652 (List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 *, const RuntimeMethod*))List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m1CD9C325D5C5E995B369D0BFA14E286BB884BA48 (Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * __this, int32_t ___key0, List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 *, int32_t, List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>>::get_Item(!0)
inline List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * Dictionary_2_get_Item_mB5265712D80F95800619202B962EADA049C57773 (Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * (*) (Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m66410DB8E9889210830D237D0C50C0C4283BB5A4 (KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023 * __this, MemberInfo_t * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023 *, MemberInfo_t *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>::Add(!0)
inline void List_1_Add_mC5617239D741910561908C246B37986FF4CFEE1A (List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * __this, KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 *, KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023 , const RuntimeMethod*))List_1_Add_mE9BB02EAE5A3CADC6536087DB663289B508343CC_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m086D1BD2B707DBA7E068746EEC06E74CBBE989BB (Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>::.ctor()
inline void List_1__ctor_mA54F47905B0601AC44193CFC9D59B9B29A317ED6 (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC *, const RuntimeMethod*))List_1__ctor_mA54F47905B0601AC44193CFC9D59B9B29A317ED6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m646BF45C644F9A1B26BB9F7FEFDB73D896A9405E (Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E * __this, int32_t ___key0, List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E *, int32_t, List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>>::get_Item(!0)
inline List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * Dictionary_2_get_Item_m95AF254A5360A04671D7D03CC8CBDF1B171BC4D9 (Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * (*) (Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>::Add(!0)
inline void List_1_Add_mE61D67F4C6136B0EED0023581D4F3220F6C58077 (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * __this, DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC *, DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262 , const RuntimeMethod*))List_1_Add_mE61D67F4C6136B0EED0023581D4F3220F6C58077_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mC112CC3E644509CC16F8D27B5DF4BA019723FC78 (Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>::.ctor()
inline void List_1__ctor_m5FBE69A9CF54F876B213F267747B60A042A2BF2D (List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF *, const RuntimeMethod*))List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m5FE08B9838245499C5C1EB40D32157975823D2B0 (Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * __this, int32_t ___key0, List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB *, int32_t, List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>>::get_Item(!0)
inline List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * Dictionary_2_get_Item_m7ACC429A18952CD2D520C6B08E302FCEB9CECA05 (Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * (*) (Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m10A9E384657138ADB1327790F29DFF1B28D97B9C (KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB * __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB *, String_t*, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>::Add(!0)
inline void List_1_Add_mD4717B35B78B9533329DF0029EA737A55EB14A87 (List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * __this, KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF *, KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB , const RuntimeMethod*))List_1_Add_mE9BB02EAE5A3CADC6536087DB663289B508343CC_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m99F0D850FE3B2DECC9C565302955AFE1490A7E44 (Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>::.ctor()
inline void List_1__ctor_m4A286B11AFB3D77A2092A5A65B2EB66F4DC39294 (List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09A64D9E437F063360CB595BAD6247536D11B374 *, const RuntimeMethod*))List_1__ctor_m350488BD6C039A0706B87223DFE011F6E4143E03_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mDEC5DE1ECB3C3AB88643EFC7C24D0231E9A58712 (Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * __this, int32_t ___key0, List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 *, int32_t, List_1_t09A64D9E437F063360CB595BAD6247536D11B374 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>>::get_Item(!0)
inline List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * Dictionary_2_get_Item_mD38E439615B1E89B4B6401E00B7229DA92B7A1BA (Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * (*) (Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mB1AA9D9A108A0FDC33C3778D599D98E70C97EB85 (KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED * __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED *, int32_t, RuntimeObject*, const RuntimeMethod*))KeyValuePair_2__ctor_m38685BA70A8C37D1ABABB4A73A97A7F5ED0AC270_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>::Add(!0)
inline void List_1_Add_m70662DB9F27C0BDD77432538DCCB0438B1E70C42 (List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * __this, KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09A64D9E437F063360CB595BAD6247536D11B374 *, KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED , const RuntimeMethod*))List_1_Add_mBEEE8183F1DAC808FC305895189A2CB5770F3A04_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682 (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F *, int32_t, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>::get_Item(System.Int32)
inline KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023  List_1_get_Item_m1192BDBF73CA9A5DE28D8381F20144A3470E7D31_inline (List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023  (*) (List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 *, int32_t, const RuntimeMethod*))List_1_get_Item_m16C9B3D5182FA75E03E959F90530F42790212E40_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>::get_Key()
inline MemberInfo_t * KeyValuePair_2_get_Key_mA0FAD2D4503C56DA9DC3E9139CF096277068D211_inline (KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023 * __this, const RuntimeMethod* method)
{
	return ((  MemberInfo_t * (*) (KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m6583FA6131280A3D9E743AC209EC305DAF9BA380_inline (KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>::get_Count()
inline int32_t List_1_get_Count_m1E1BF095855D287C02F9C186F384A75D0EBFC436_inline (List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 *, const RuntimeMethod*))List_1_get_Count_m8D980F48BD10D1ECDCA5064945183932705711AB_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>::Clear()
inline void List_1_Clear_mE0E89071B73D5694BB7B0DAB08FC0B28731C73AE (List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 *, const RuntimeMethod*))List_1_Clear_m70BE23F7F8D7B5AADEB1FF4C84ABBF38288E11D2_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Reflection.MemberInfo,System.Object>>>::Remove(!0)
inline bool Dictionary_2_Remove_mAC3A792F504A06162458084B639B9FDB5C265499 (Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>::get_Item(System.Int32)
inline KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB  List_1_get_Item_m368139A6A0CC1BDC74DE93631EA7DB3A46290369_inline (List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB  (*) (List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF *, int32_t, const RuntimeMethod*))List_1_get_Item_m16C9B3D5182FA75E03E959F90530F42790212E40_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mBB69282F5538285975EB23BCA2595641255930A1_inline (KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2B010442FE5020DE938F890056BABD0986ECE976_inline (KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>::get_Count()
inline int32_t List_1_get_Count_m06B1F50ABA78B2C06CE847731D472A86402FEDCF_inline (List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF *, const RuntimeMethod*))List_1_get_Count_m8D980F48BD10D1ECDCA5064945183932705711AB_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>::Clear()
inline void List_1_Clear_mE3A7FB05C3733B4170C10054B4FEE9DA00A33D98 (List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF *, const RuntimeMethod*))List_1_Clear_m70BE23F7F8D7B5AADEB1FF4C84ABBF38288E11D2_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.IDictionary>>>::Remove(!0)
inline bool Dictionary_2_Remove_mF1389027CC6FAF5550C8D326D7F80B309C2E4985 (Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>::get_Item(System.Int32)
inline KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED  List_1_get_Item_mD6184FABD3EB1F0BCB34079249503944C6A992A6_inline (List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED  (*) (List_1_t09A64D9E437F063360CB595BAD6247536D11B374 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1156E4299EC1F90BDEEFC39BA8AB9A9E6D2B9476_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mE381E43DD67F3565622F42212A979007B191ECD0_inline (KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m91B6E29B8D89D66FE2ABBA9A44B99078879399DF_inline (KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>::get_Count()
inline int32_t List_1_get_Count_m9C6D75878C3DE735D01021D433F01B792B89807E_inline (List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t09A64D9E437F063360CB595BAD6247536D11B374 *, const RuntimeMethod*))List_1_get_Count_m995933BA842A2C5EA84DE1707BE162770A8148BF_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>::Clear()
inline void List_1_Clear_mD64522C65930DA02AC1A09ADBAB0A4F1641CBAFC (List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09A64D9E437F063360CB595BAD6247536D11B374 *, const RuntimeMethod*))List_1_Clear_m3561595B1B2A11123A21FC8C5BCC19A55184CE82_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.IList>>>::Remove(!0)
inline bool Dictionary_2_Remove_m54A8DF575FAFF8B0FA9F714ECFF2F2AC222F1C0D (Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// !0 System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>::get_Item(System.Int32)
inline DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  List_1_get_Item_m4FB4BBD57DC08E95768992566FD7250B785F0470_inline (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  (*) (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC *, int32_t, const RuntimeMethod*))List_1_get_Item_m4FB4BBD57DC08E95768992566FD7250B785F0470_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>::get_Count()
inline int32_t List_1_get_Count_m8994FFC7AE7DA2C1360413DBD15A4172FE89B39A_inline (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC *, const RuntimeMethod*))List_1_get_Count_m8994FFC7AE7DA2C1360413DBD15A4172FE89B39A_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter>::Clear()
inline void List_1_Clear_m04A04AB486705433C77A3706E9679B3A29AA1A94 (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC *, const RuntimeMethod*))List_1_Clear_m04A04AB486705433C77A3706E9679B3A29AA1A94_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::.ctor()
inline void Dictionary_2__ctor_m3EB3EB3FA9E674D490542CDED5CBE0876CF0A651 (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberMap(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * TypeCoercionUtility_GetMemberMap_m5F1A7BD221AB822C8FC3D382944EA06414AAC4CB (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___objectType0, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CreateMemberMap(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * TypeCoercionUtility_CreateMemberMap_m9F5B5B199AA87C902203689F7C17AE3B2409FF04 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___objectType0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::get_MemberMapCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * TypeCoercionUtility_get_MemberMapCache_mDC272092FAA11928AD7FDFB2D4C00FBF32963630 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972 (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * __this, Type_t * ___key0, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 *, Type_t *, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>::.ctor()
inline void Dictionary_2__ctor_mD9198DB32EB268B2B200F0427C9DA107BC1BBFF9 (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonIgnoreAttribute::IsJsonIgnore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonIgnoreAttribute_IsJsonIgnore_m9563F1F06D6239BB9E81A5632364992DBB412E97 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::GetJsonName(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonNameAttribute_GetJsonName_m7A8433D3C798FE0D3035A8B835513120228A147C (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mA8DCEF09EF505221924518976EA48369665878EE (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * __this, String_t* ___key0, MemberInfo_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD *, String_t*, MemberInfo_t *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPublic_mA7FB5E40024835CA07195F3E1BFCBD41E9E013BD (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m73EDAD230A16E1DBC0F593695B8A04DC623D3938 (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * __this, Type_t * ___key0, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 *, Type_t *, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m082C91C62C26D9C258ECD9114D21C6796306492F (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * __this, String_t* ___key0, MemberInfo_t ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD *, String_t*, MemberInfo_t **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Pathfinding.Serialization.JsonFx.TypeCoercionUtility::IsNullable(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeCoercionUtility_IsNullable_m8B902510D0DB53140D619B3162A159F56CA220BC (Type_t * ___type0, const RuntimeMethod* method);
// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTypeCoercionException__ctor_mB072274458278B3220CFDC25E3FB842E324ACBF3 (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Reflection.FieldInfo[] System.Type::GetFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* Type_GetFields_m4E3B89F0F088B46F0C2E77CA537179C30AC5B372 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68 (Type_t * ___enumType0, String_t* ___value1, const RuntimeMethod* method);
// System.Type System.Enum::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Enum_GetUnderlyingType_m8BD5EDDA4C9A15C2988B27DD48314AC3C16F7A53 (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Object System.Enum::ToObject(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enum_ToObject_m2A05590A0D581206AAEB48B89187FD175D5F0967 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceList(System.Type,System.Type,System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeCoercionUtility_CoerceList_mF2743227B51ED45F2639CFCE278C9A019C4A9C00 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___targetType0, Type_t * ___arrayType1, RuntimeObject* ___value2, const RuntimeMethod* method);
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * DateTimeFormatInfo_get_InvariantInfo_mF82BD33E66FDFBF82C9E9F58CDA7DDE568401F4B (const RuntimeMethod* method);
// System.Boolean System.DateTime::TryParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTime&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTime_TryParse_m355F24554F4721CBB8055BCD638DFFBCF2CE7641 (String_t* ___s0, RuntimeObject* ___provider1, int32_t ___styles2, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * ___result3, const RuntimeMethod* method);
// System.Void System.Guid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Guid__ctor_mF80313305B9CD2AD39B621E1CEC5C7DFDFFBDE66 (Guid_t * __this, String_t* ___g0, const RuntimeMethod* method);
// System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_TryCreate_m44277635BB8291BC0AADD85B9C9A015C1C21EF92 (String_t* ___uriString0, int32_t ___uriKind1, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** ___result2, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_mB484853E49F58F771DF106B7BDC92E49ACE3DAAE (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * __this, String_t* ___version0, const RuntimeMethod* method);
// System.Void System.TimeSpan::.ctor(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_mC80FA729ECA3A7AF31D9F517A95E60FC23EB86B0_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, int64_t ___ticks0, const RuntimeMethod* method);
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * TypeDescriptor_GetConverter_m4A087A264082284312079152F6E572EB7B92BDC3 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConverter_CanConvertFrom_m47A801693EFD2D471DE7E5A76FD5D1FCDE604020 (TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * __this, Type_t * ___sourceType0, const RuntimeMethod* method);
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeConverter_ConvertFrom_m1B97C37C09BAE614BF4468E84CF236EF99911CB9 (TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConverter_CanConvertTo_m470B67B6EB76AFEF535E113FD300F4A03C525E98 (TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * __this, Type_t * ___destinationType0, const RuntimeMethod* method);
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeConverter_ConvertTo_m95C735EB3EA1A83FCAB12B5B1C457D4A92DE9931 (TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * __this, RuntimeObject * ___value0, Type_t * ___destinationType1, const RuntimeMethod* method);
// System.Object System.Convert::ChangeType(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Convert_ChangeType_mD726EC15920319382D858ECD7FD78339110D7FD4 (RuntimeObject * ___value0, Type_t * ___conversionType1, const RuntimeMethod* method);
// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTypeCoercionException__ctor_m23C329A29DF7997EE994DBBF100AADAA0260024A (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1 (Type_t * __this, const RuntimeMethod* method);
// System.Array Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceArray(System.Type,System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * TypeCoercionUtility_CoerceArray_m18EC71BDFBD11E4A9C9D42B6CA3307C426704AA3 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___elementType0, RuntimeObject* ___value1, const RuntimeMethod* method);
// System.Reflection.ConstructorInfo[] System.Type::GetConstructors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfoU5BU5D_t3AD132A16A05A15B043BE275A8822F1872770498* Type_GetConstructors_mEC149FCD78EA6555E262AD2FA1FB44A0441EA4DE (Type_t * __this, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method);
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Boolean System.Type::Equals(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_Equals_m964C48F3CF76988005D74733AA272461E5062F3A (Type_t * __this, Type_t * ___o0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Object Pathfinding.Serialization.JsonFx.JsonConverter::Read(Pathfinding.Serialization.JsonFx.JsonReader,System.Int32,System.Type,System.Boolean,Pathfinding.Serialization.JsonFx.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonConverter_Read_m26DC435E8BA43B71BE34DA98AEF0657FB64022A9 (JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE * __this, JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * ___reader0, int32_t ___depth1, Type_t * ___type2, bool ___typeIsHint3, int32_t ___nextToken4, const RuntimeMethod* method)
{
	{
		JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * L_0 = ___reader0;
		int32_t L_1 = ___depth1;
		Type_t * L_2 = ___type2;
		bool L_3 = ___typeIsHint3;
		RuntimeObject * L_4;
		L_4 = VirtFuncInvoker4< RuntimeObject *, JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 *, int32_t, Type_t *, bool >::Invoke(6 /* System.Object Pathfinding.Serialization.JsonFx.JsonConverter::Read(Pathfinding.Serialization.JsonFx.JsonReader,System.Int32,System.Type,System.Boolean) */, __this, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonConverter::Read(Pathfinding.Serialization.JsonFx.JsonReader,System.Int32,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonConverter_Read_mF92CDB888A1848E819B523A6105EB9724A8AB2B8 (JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE * __this, JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * ___reader0, int32_t ___depth1, Type_t * ___type2, bool ___typeIsHint3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * V_1 = NULL;
	{
		int32_t L_0 = ___depth1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000c;
		}
	}
	{
		bool L_1 = __this->get_convertAtDepthZero_0();
		if (!L_1)
		{
			goto IL_0034;
		}
	}

IL_000c:
	{
		JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * L_2 = ___reader0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject * L_5;
		L_5 = JsonReader_Read_mDE1146E85B57E87E8610C4B5F325744610AC42F9(L_2, L_4, (bool)0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		RuntimeObject * L_6 = V_0;
		V_1 = ((Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)IsInstClass((RuntimeObject*)L_6, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var));
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_7 = V_1;
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		return NULL;
	}

IL_002b:
	{
		Type_t * L_8 = ___type2;
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_9 = V_1;
		RuntimeObject * L_10;
		L_10 = VirtFuncInvoker2< RuntimeObject *, Type_t *, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * >::Invoke(7 /* System.Object Pathfinding.Serialization.JsonFx.JsonConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, __this, L_8, L_9);
		return L_10;
	}

IL_0034:
	{
		JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * L_11 = ___reader0;
		Type_t * L_12 = ___type2;
		bool L_13 = ___typeIsHint3;
		NullCheck(L_11);
		RuntimeObject * L_14;
		L_14 = JsonReader_Read_mDE1146E85B57E87E8610C4B5F325744610AC42F9(L_11, L_12, L_13, (bool)1, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonConverter::ReadJson(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonConverter_ReadJson_m28541EA504D0A2C5B97AAA00CEC094A5ACD947A5 (JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE * __this, Type_t * ___type0, Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * ___value1, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC202283F6CD897CCB5AB82E4DA5E003E22655BD9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonConverter_ReadJson_m28541EA504D0A2C5B97AAA00CEC094A5ACD947A5_RuntimeMethod_var)));
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
// System.Void Pathfinding.Serialization.JsonFx.JsonDeserializationException::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980 (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * __this, String_t* ___message0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		__this->set_index_17((-1));
		String_t* L_0 = ___message0;
		JsonSerializationException__ctor_m6F98CEBD3905761D1961DB50F3DBCF51F1422CC0(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___index1;
		__this->set_index_17(L_1);
		return;
	}
}
// System.Int32 Pathfinding.Serialization.JsonFx.JsonDeserializationException::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonDeserializationException_get_Index_m9F78803C4C42AB64C2FF59D6DB34128993BECCE4 (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_index_17();
		return L_0;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonDeserializationException::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonDeserializationException_ToString_m95DB78AC17E581B420F198EFC58B20A46D01C8CA (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27135BBEDAB516092D9B4F214A2D1876BFFE767F);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral27135BBEDAB516092D9B4F214A2D1876BFFE767F);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral27135BBEDAB516092D9B4F214A2D1876BFFE767F);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_0;
		int32_t L_3;
		L_3 = JsonDeserializationException_get_Index_m9F78803C4C42AB64C2FF59D6DB34128993BECCE4_inline(__this, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = V_0;
		String_t* L_8;
		L_8 = Exception_ToString_m7401DB4C24A9C4A4951725780B3C1367D67D5A4C(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_0;
		String_t* L_10;
		L_10 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_9, /*hidden argument*/NULL);
		return L_10;
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
// System.Boolean Pathfinding.Serialization.JsonFx.JsonIgnoreAttribute::IsJsonIgnore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonIgnoreAttribute_IsJsonIgnore_m9563F1F06D6239BB9E81A5632364992DBB412E97 (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICustomAttributeProvider_tC8BCE1D3E22F82F78095824C7EB2F62A6DAD2492_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonIgnoreAttribute_tCB43F6CCB88C03EA72A1641D93CDB99AB0657C47_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = (RuntimeObject*)NULL;
		Type_t * L_3 = V_0;
		Type_t * L_4;
		L_4 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(76 /* System.Boolean System.Type::get_IsEnum() */, L_4);
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		Type_t * L_6 = V_0;
		Type_t * L_7;
		L_7 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_6, /*hidden argument*/NULL);
		Type_t * L_8 = V_0;
		RuntimeObject * L_9 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Enum_GetName_mA141F96AFDC64AD7020374311750DBA47BFCA8FA(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		FieldInfo_t * L_11;
		L_11 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_7, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		goto IL_0037;
	}

IL_0030:
	{
		RuntimeObject * L_12 = ___value0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, ICustomAttributeProvider_tC8BCE1D3E22F82F78095824C7EB2F62A6DAD2492_il2cpp_TypeInfo_var));
	}

IL_0037:
	{
		RuntimeObject* L_13 = V_1;
		if (L_13)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m789B4E75608A673F2CF5DDFC2E67DA20AF440A34(L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonIgnoreAttribute_IsJsonIgnore_m9563F1F06D6239BB9E81A5632364992DBB412E97_RuntimeMethod_var)));
	}

IL_0040:
	{
		RuntimeObject* L_15 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (JsonIgnoreAttribute_tCB43F6CCB88C03EA72A1641D93CDB99AB0657C47_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, Type_t *, bool >::Invoke(2 /* System.Boolean System.Reflection.ICustomAttributeProvider::IsDefined(System.Type,System.Boolean) */, ICustomAttributeProvider_tC8BCE1D3E22F82F78095824C7EB2F62A6DAD2492_il2cpp_TypeInfo_var, L_15, L_17, (bool)1);
		return L_18;
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
// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonNameAttribute_get_Name_m686C7AFE52EACCC11E2FF91631B56FB49B1B3B4D (JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_jsonName_0();
		return L_0;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonNameAttribute::GetJsonName(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonNameAttribute_GetJsonName_m7A8433D3C798FE0D3035A8B835513120228A147C (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	MemberInfo_t * V_1 = NULL;
	String_t* V_2 = NULL;
	JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E * V_3 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = (MemberInfo_t *)NULL;
		Type_t * L_3 = V_0;
		Type_t * L_4;
		L_4 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtFuncInvoker0< bool >::Invoke(76 /* System.Boolean System.Type::get_IsEnum() */, L_4);
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeObject * L_7 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		String_t* L_8;
		L_8 = Enum_GetName_mA141F96AFDC64AD7020374311750DBA47BFCA8FA(L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_002d;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_002d:
	{
		Type_t * L_11 = V_0;
		Type_t * L_12;
		L_12 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_11, /*hidden argument*/NULL);
		String_t* L_13 = V_2;
		NullCheck(L_12);
		FieldInfo_t * L_14;
		L_14 = Type_GetField_m7E0197C80896690B5F5DBCCE44E3354FFDA13D2C(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		goto IL_0043;
	}

IL_003c:
	{
		RuntimeObject * L_15 = ___value0;
		V_1 = ((MemberInfo_t *)IsInstClass((RuntimeObject*)L_15, MemberInfo_t_il2cpp_TypeInfo_var));
	}

IL_0043:
	{
		MemberInfo_t * L_16 = V_1;
		bool L_17;
		L_17 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_16, NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_18 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m789B4E75608A673F2CF5DDFC2E67DA20AF440A34(L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonNameAttribute_GetJsonName_m7A8433D3C798FE0D3035A8B835513120228A147C_RuntimeMethod_var)));
	}

IL_0052:
	{
		MemberInfo_t * L_19 = V_1;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21;
		L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_22;
		L_22 = Attribute_GetCustomAttribute_mC3098F23886E5D9E7E8083DE6E80B5D2A136FC25(L_19, L_21, /*hidden argument*/NULL);
		V_3 = ((JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E *)IsInstClass((RuntimeObject*)L_22, JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E_il2cpp_TypeInfo_var));
		JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E * L_23 = V_3;
		if (L_23)
		{
			goto IL_006d;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_006d:
	{
		JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E * L_24 = V_3;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = JsonNameAttribute_get_Name_m686C7AFE52EACCC11E2FF91631B56FB49B1B3B4D_inline(L_24, /*hidden argument*/NULL);
		return L_25;
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
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m7EEDD0A2CC330921B039E7509AA492632D8E710D (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, String_t* ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___input0;
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_1 = (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 *)il2cpp_codegen_object_new(JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161_il2cpp_TypeInfo_var);
		JsonReaderSettings__ctor_mE9A0BF84BF1E3A06DE17F12995A37796B8EA4B25(L_1, /*hidden argument*/NULL);
		JsonReader__ctor_m08E576E5F1C2AB949519E0B850C93A4ECF5E2EE8(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.ctor(System.String,Pathfinding.Serialization.JsonFx.JsonReaderSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m08E576E5F1C2AB949519E0B850C93A4ECF5E2EE8 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, String_t* ___input0, JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * ___settings1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m385A256FF301975CA45DD5B822C84996B2F6B3D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m4AC6C361FCE819A1EAA9030F17813893856939DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_0 = (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 *)il2cpp_codegen_object_new(JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161_il2cpp_TypeInfo_var);
		JsonReaderSettings__ctor_mE9A0BF84BF1E3A06DE17F12995A37796B8EA4B25(L_0, /*hidden argument*/NULL);
		__this->set_Settings_8(L_0);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_1, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		__this->set_previouslyDeserialized_13(L_1);
		Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E * L_2 = (Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E *)il2cpp_codegen_object_new(Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E_il2cpp_TypeInfo_var);
		Stack_1__ctor_m385A256FF301975CA45DD5B822C84996B2F6B3D6(L_2, /*hidden argument*/Stack_1__ctor_m385A256FF301975CA45DD5B822C84996B2F6B3D6_RuntimeMethod_var);
		__this->set_jsArrays_14(L_2);
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_3 = (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 *)il2cpp_codegen_object_new(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981_il2cpp_TypeInfo_var);
		Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A(L_3, /*hidden argument*/Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_RuntimeMethod_var);
		__this->set_parentClass_16(L_3);
		Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * L_4 = (Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E *)il2cpp_codegen_object_new(Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E_il2cpp_TypeInfo_var);
		Stack_1__ctor_m4AC6C361FCE819A1EAA9030F17813893856939DD(L_4, /*hidden argument*/Stack_1__ctor_m4AC6C361FCE819A1EAA9030F17813893856939DD_RuntimeMethod_var);
		__this->set_parentMemberInfo_17(L_4);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_5 = ___settings1;
		__this->set_Settings_8(L_5);
		String_t* L_6 = ___input0;
		__this->set_Source_9(L_6);
		String_t* L_7 = __this->get_Source_9();
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		__this->set_SourceLength_10(L_8);
		return;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Deserialize(System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_Deserialize_m0EB128E34154DA0761816AEE6E8714122C46084C (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, int32_t ___start0, Type_t * ___type1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mA76A49FA301A7BF0429ACF083F43F4C43834E91A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___start0;
		__this->set_index_11(L_0);
		__this->set_depth_12((-1));
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_1 = __this->get_parentClass_16();
		NullCheck(L_1);
		Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61(L_1, /*hidden argument*/Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_RuntimeMethod_var);
		Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * L_2 = __this->get_parentMemberInfo_17();
		NullCheck(L_2);
		Stack_1_Clear_mA76A49FA301A7BF0429ACF083F43F4C43834E91A(L_2, /*hidden argument*/Stack_1_Clear_mA76A49FA301A7BF0429ACF083F43F4C43834E91A_RuntimeMethod_var);
		Type_t * L_3 = ___type1;
		RuntimeObject * L_4;
		L_4 = JsonReader_Read_mDE1146E85B57E87E8610C4B5F325744610AC42F9(__this, L_3, (bool)0, (bool)0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Read(System.Type,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_Read_mDE1146E85B57E87E8610C4B5F325744610AC42F9 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, Type_t * ___expectedType0, bool ___typeIsHint1, bool ___skipConverters2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonSerializable_tB45D66B451ED7DD92DC91910D1FA415DBE52EE16_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonSerializable_tB45D66B451ED7DD92DC91910D1FA415DBE52EE16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	int32_t V_6 = 0;
	JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * G_B13_0 = NULL;
	JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * G_B12_0 = NULL;
	Type_t * G_B14_0 = NULL;
	JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * G_B14_1 = NULL;
	JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * G_B17_0 = NULL;
	JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * G_B16_0 = NULL;
	Type_t * G_B18_0 = NULL;
	JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * G_B18_1 = NULL;
	JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * G_B21_0 = NULL;
	JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * G_B20_0 = NULL;
	Type_t * G_B22_0 = NULL;
	JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * G_B22_1 = NULL;
	JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * G_B25_0 = NULL;
	JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * G_B24_0 = NULL;
	Type_t * G_B26_0 = NULL;
	JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * G_B26_1 = NULL;
	{
		int32_t L_0 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		Type_t * L_1 = ___expectedType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		bool L_4;
		L_4 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		___expectedType0 = (Type_t *)NULL;
	}

IL_0023:
	{
		int32_t L_5 = __this->get_index_11();
		V_0 = L_5;
		int32_t L_6;
		L_6 = JsonReader_Tokenize_m9CD94D3D14E49165F866815A309ED73FA5AA0972(__this, /*hidden argument*/NULL);
		V_1 = L_6;
		Type_t * L_7 = ___expectedType0;
		bool L_8;
		L_8 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_7, NULL, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_00c3;
		}
	}
	{
		Type_t * L_9 = ___expectedType0;
		NullCheck(L_9);
		bool L_10;
		L_10 = Type_get_IsPrimitive_m43E50D507C45CE3BD51C0DC07C8AB061AFD6B3C3(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_00c3;
		}
	}
	{
		bool L_11 = ___skipConverters2;
		if (L_11)
		{
			goto IL_00c3;
		}
	}
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_12 = __this->get_Settings_8();
		Type_t * L_13 = ___expectedType0;
		NullCheck(L_12);
		JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE * L_14;
		L_14 = VirtFuncInvoker1< JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE *, Type_t * >::Invoke(4 /* Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonReaderSettings::GetConverter(System.Type) */, L_12, L_13);
		V_2 = L_14;
		JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE * L_15 = V_2;
		if (!L_15)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->set_index_11(L_16);
		JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE * L_17 = V_2;
		int32_t L_18 = __this->get_depth_12();
		Type_t * L_19 = ___expectedType0;
		bool L_20 = ___typeIsHint1;
		int32_t L_21 = V_1;
		NullCheck(L_17);
		RuntimeObject * L_22;
		L_22 = VirtFuncInvoker5< RuntimeObject *, JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 *, int32_t, Type_t *, bool, int32_t >::Invoke(5 /* System.Object Pathfinding.Serialization.JsonFx.JsonConverter::Read(Pathfinding.Serialization.JsonFx.JsonReader,System.Int32,System.Type,System.Boolean,Pathfinding.Serialization.JsonFx.JsonToken) */, L_17, __this, L_18, L_19, L_20, L_21);
		V_3 = L_22;
		int32_t L_23 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)));
		RuntimeObject * L_24 = V_3;
		return L_24;
	}

IL_0080:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (IJsonSerializable_tB45D66B451ED7DD92DC91910D1FA415DBE52EE16_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_25, /*hidden argument*/NULL);
		Type_t * L_27 = ___expectedType0;
		NullCheck(L_26);
		bool L_28;
		L_28 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_27);
		if (!L_28)
		{
			goto IL_00c3;
		}
	}
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_29 = __this->get_Settings_8();
		NullCheck(L_29);
		TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * L_30 = L_29->get_Coercion_0();
		Type_t * L_31 = ___expectedType0;
		NullCheck(L_30);
		RuntimeObject * L_32;
		L_32 = TypeCoercionUtility_InstantiateObject_m8291F976813AFB4FF368A89A1BD71EB65C68D54E(L_30, L_31, /*hidden argument*/NULL);
		V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_32, IJsonSerializable_tB45D66B451ED7DD92DC91910D1FA415DBE52EE16_il2cpp_TypeInfo_var));
		RuntimeObject* L_33 = V_4;
		NullCheck(L_33);
		InterfaceActionInvoker1< JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * >::Invoke(0 /* System.Void Pathfinding.Serialization.JsonFx.IJsonSerializable::ReadJson(Pathfinding.Serialization.JsonFx.JsonReader) */, IJsonSerializable_tB45D66B451ED7DD92DC91910D1FA415DBE52EE16_il2cpp_TypeInfo_var, L_33, __this);
		int32_t L_34 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1)));
		RuntimeObject* L_35 = V_4;
		return L_35;
	}

IL_00c3:
	{
		V_5 = NULL;
		int32_t L_36 = V_1;
		V_6 = L_36;
		int32_t L_37 = V_6;
		switch (L_37)
		{
			case 0:
			{
				goto IL_02cb;
			}
			case 1:
			{
				goto IL_02a4;
			}
			case 2:
			{
				goto IL_01e1;
			}
			case 3:
			{
				goto IL_0189;
			}
			case 4:
			{
				goto IL_01b5;
			}
			case 5:
			{
				goto IL_0208;
			}
			case 6:
			{
				goto IL_023c;
			}
			case 7:
			{
				goto IL_0270;
			}
			case 8:
			{
				goto IL_0169;
			}
			case 9:
			{
				goto IL_0149;
			}
			case 10:
			{
				goto IL_0129;
			}
			case 11:
			{
				goto IL_02cb;
			}
			case 12:
			{
				goto IL_0109;
			}
		}
	}
	{
		goto IL_02cb;
	}

IL_0109:
	{
		bool L_38 = ___typeIsHint1;
		G_B12_0 = __this;
		if (L_38)
		{
			G_B13_0 = __this;
			goto IL_0110;
		}
	}
	{
		Type_t * L_39 = ___expectedType0;
		G_B14_0 = L_39;
		G_B14_1 = G_B12_0;
		goto IL_0111;
	}

IL_0110:
	{
		G_B14_0 = ((Type_t *)(NULL));
		G_B14_1 = G_B13_0;
	}

IL_0111:
	{
		NullCheck(G_B14_1);
		RuntimeObject * L_40;
		L_40 = JsonReader_ReadObject_m8758A3709BC9BF0759A12B6F7A286D47585C8295(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		V_5 = L_40;
		int32_t L_41 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1)));
		RuntimeObject * L_42 = V_5;
		return L_42;
	}

IL_0129:
	{
		bool L_43 = ___typeIsHint1;
		G_B16_0 = __this;
		if (L_43)
		{
			G_B17_0 = __this;
			goto IL_0130;
		}
	}
	{
		Type_t * L_44 = ___expectedType0;
		G_B18_0 = L_44;
		G_B18_1 = G_B16_0;
		goto IL_0131;
	}

IL_0130:
	{
		G_B18_0 = ((Type_t *)(NULL));
		G_B18_1 = G_B17_0;
	}

IL_0131:
	{
		NullCheck(G_B18_1);
		RuntimeObject* L_45;
		L_45 = JsonReader_ReadArray_m4D0E6C1238B37455ABA373B297C7D11E45A4D959(G_B18_1, G_B18_0, /*hidden argument*/NULL);
		V_5 = L_45;
		int32_t L_46 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)1)));
		RuntimeObject * L_47 = V_5;
		return L_47;
	}

IL_0149:
	{
		bool L_48 = ___typeIsHint1;
		G_B20_0 = __this;
		if (L_48)
		{
			G_B21_0 = __this;
			goto IL_0150;
		}
	}
	{
		Type_t * L_49 = ___expectedType0;
		G_B22_0 = L_49;
		G_B22_1 = G_B20_0;
		goto IL_0151;
	}

IL_0150:
	{
		G_B22_0 = ((Type_t *)(NULL));
		G_B22_1 = G_B21_0;
	}

IL_0151:
	{
		NullCheck(G_B22_1);
		RuntimeObject * L_50;
		L_50 = JsonReader_ReadString_mB5869770E30A99CDCA713053CE3AF27AF7BB4609(G_B22_1, G_B22_0, /*hidden argument*/NULL);
		V_5 = L_50;
		int32_t L_51 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)1)));
		RuntimeObject * L_52 = V_5;
		return L_52;
	}

IL_0169:
	{
		bool L_53 = ___typeIsHint1;
		G_B24_0 = __this;
		if (L_53)
		{
			G_B25_0 = __this;
			goto IL_0170;
		}
	}
	{
		Type_t * L_54 = ___expectedType0;
		G_B26_0 = L_54;
		G_B26_1 = G_B24_0;
		goto IL_0171;
	}

IL_0170:
	{
		G_B26_0 = ((Type_t *)(NULL));
		G_B26_1 = G_B25_0;
	}

IL_0171:
	{
		NullCheck(G_B26_1);
		RuntimeObject * L_55;
		L_55 = JsonReader_ReadNumber_mCC5A7C352FCE9BC0BB40030E6E84BDD2392BBE67(G_B26_1, G_B26_0, /*hidden argument*/NULL);
		V_5 = L_55;
		int32_t L_56 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)1)));
		RuntimeObject * L_57 = V_5;
		return L_57;
	}

IL_0189:
	{
		int32_t L_58 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_59 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralFalse_0();
		NullCheck(L_59);
		int32_t L_60;
		L_60 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_59, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)L_60)));
		int32_t L_61 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)1)));
		bool L_62 = ((bool)0);
		RuntimeObject * L_63 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_62);
		return L_63;
	}

IL_01b5:
	{
		int32_t L_64 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_65 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralTrue_1();
		NullCheck(L_65);
		int32_t L_66;
		L_66 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_65, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)L_66)));
		int32_t L_67 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1)));
		bool L_68 = ((bool)1);
		RuntimeObject * L_69 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_68);
		return L_69;
	}

IL_01e1:
	{
		int32_t L_70 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_71 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralNull_2();
		NullCheck(L_71);
		int32_t L_72;
		L_72 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_71, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)L_72)));
		int32_t L_73 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_73, (int32_t)1)));
		return NULL;
	}

IL_0208:
	{
		int32_t L_74 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_75 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralNotANumber_4();
		NullCheck(L_75);
		int32_t L_76;
		L_76 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_75, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)L_76)));
		int32_t L_77 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_77, (int32_t)1)));
		double L_78 = (std::numeric_limits<double>::quiet_NaN());
		RuntimeObject * L_79 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_78);
		return L_79;
	}

IL_023c:
	{
		int32_t L_80 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_81 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralPositiveInfinity_5();
		NullCheck(L_81);
		int32_t L_82;
		L_82 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_81, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)L_82)));
		int32_t L_83 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_83, (int32_t)1)));
		double L_84 = (std::numeric_limits<double>::infinity());
		RuntimeObject * L_85 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_84);
		return L_85;
	}

IL_0270:
	{
		int32_t L_86 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_87 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralNegativeInfinity_6();
		NullCheck(L_87);
		int32_t L_88;
		L_88 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_87, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)L_88)));
		int32_t L_89 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1)));
		double L_90 = (-std::numeric_limits<double>::infinity());
		RuntimeObject * L_91 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_90);
		return L_91;
	}

IL_02a4:
	{
		int32_t L_92 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_93 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralUndefined_3();
		NullCheck(L_93);
		int32_t L_94;
		L_94 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_93, /*hidden argument*/NULL);
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)L_94)));
		int32_t L_95 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)1)));
		return NULL;
	}

IL_02cb:
	{
		int32_t L_96 = __this->get_depth_12();
		__this->set_depth_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_96, (int32_t)1)));
		return NULL;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadObject(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_ReadObject_m8758A3709BC9BF0759A12B6F7A286D47585C8295 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	{
		V_0 = (Type_t *)NULL;
		V_1 = (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD *)NULL;
		Type_t * L_0 = ___objectType0;
		bool L_1;
		L_1 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_0, NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0053;
		}
	}
	{
		Type_t * L_2 = ___objectType0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		V_2 = NULL;
		goto IL_002d;
	}

IL_0019:
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_4 = __this->get_Settings_8();
		NullCheck(L_4);
		TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * L_5 = L_4->get_Coercion_0();
		Type_t * L_6 = ___objectType0;
		NullCheck(L_5);
		RuntimeObject * L_7;
		L_7 = TypeCoercionUtility_InstantiateObject_mFD25F6D6D6AE55BBF4AD09828FA9A8A999792B52(L_5, L_6, (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD **)(&V_1), /*hidden argument*/NULL);
		V_2 = L_7;
	}

IL_002d:
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_8 = __this->get_Settings_8();
		NullCheck(L_8);
		bool L_9;
		L_9 = JsonReaderSettings_get_HandleCyclicReferences_mAC59C18B565E5AE845F3F7969644F1066ADD1A93_inline(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0046;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_10 = __this->get_previouslyDeserialized_13();
		RuntimeObject * L_11 = V_2;
		NullCheck(L_10);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_10, L_11, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
	}

IL_0046:
	{
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_12 = V_1;
		if (L_12)
		{
			goto IL_0059;
		}
	}
	{
		Type_t * L_13 = ___objectType0;
		Type_t * L_14;
		L_14 = JsonReader_GetGenericDictionaryType_m1628FA1B7C8DCE3D64EC19FBFB7AFD7CB13883B1(__this, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_0059;
	}

IL_0053:
	{
		Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 * L_15 = (Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399 *)il2cpp_codegen_object_new(Dictionary_2_t692011309BA94F599C6042A381FC9F8B3CB08399_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63(L_15, /*hidden argument*/Dictionary_2__ctor_mCD0C2F0325B7677B9BC340A60AA3FB9C7A88FF63_RuntimeMethod_var);
		V_2 = L_15;
	}

IL_0059:
	{
		RuntimeObject * L_16 = V_2;
		V_3 = L_16;
		Type_t * L_17 = ___objectType0;
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_18 = V_1;
		Type_t * L_19 = V_0;
		JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423(__this, (RuntimeObject **)(&V_2), L_17, L_18, L_19, /*hidden argument*/NULL);
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_20 = __this->get_Settings_8();
		NullCheck(L_20);
		bool L_21;
		L_21 = JsonReaderSettings_get_HandleCyclicReferences_mAC59C18B565E5AE845F3F7969644F1066ADD1A93_inline(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0098;
		}
	}
	{
		RuntimeObject * L_22 = V_3;
		RuntimeObject * L_23 = V_2;
		if ((((RuntimeObject*)(RuntimeObject *)L_22) == ((RuntimeObject*)(RuntimeObject *)L_23)))
		{
			goto IL_0098;
		}
	}
	{
		Type_t * L_24 = ___objectType0;
		bool L_25;
		L_25 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_24, NULL, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0098;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_26 = __this->get_previouslyDeserialized_13();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_27 = __this->get_previouslyDeserialized_13();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_27, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		NullCheck(L_26);
		List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2(L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_RuntimeMethod_var);
	}

IL_0098:
	{
		RuntimeObject * L_29 = V_2;
		return L_29;
	}
}
// System.Type Pathfinding.Serialization.JsonFx.JsonReader::GetGenericDictionaryType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonReader_GetGenericDictionaryType_m1628FA1B7C8DCE3D64EC19FBFB7AFD7CB13883B1 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_1 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	{
		Type_t * L_0 = ___objectType0;
		Type_t * L_1;
		L_1 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_2 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_TypeGenericIDictionary_7();
		NullCheck(L_1);
		Type_t * L_3;
		L_3 = Type_GetInterface_m1241E49F8C5AD57533E962F9D3B62751DAF7D18A(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Type_t * L_4 = V_0;
		if (!L_4)
		{
			goto IL_006f;
		}
	}
	{
		Type_t * L_5 = V_0;
		NullCheck(L_5);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6;
		L_6 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(105 /* System.Type[] System.Type::GetGenericArguments() */, L_5);
		V_1 = L_6;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_7 = V_1;
		NullCheck(L_7);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))) == ((uint32_t)2))))
		{
			goto IL_006f;
		}
	}
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Type_t * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_10, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0057;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		V_2 = L_14;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = V_2;
		Type_t * L_16 = ___objectType0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = V_2;
		String_t* L_18;
		L_18 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral452BFBBAF70C5EF1721BE12989A379A52F35C137)), L_17, /*hidden argument*/NULL);
		int32_t L_19 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_20 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_20, L_18, L_19, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_GetGenericDictionaryType_m1628FA1B7C8DCE3D64EC19FBFB7AFD7CB13883B1_RuntimeMethod_var)));
	}

IL_0057:
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = 1;
		Type_t * L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_23, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_006f;
		}
	}
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = 1;
		Type_t * L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		return L_29;
	}

IL_006f:
	{
		return (Type_t *)NULL;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::PopulateObject(System.Object&,System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, RuntimeObject ** ___result0, Type_t * ___objectType1, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * ___memberMap2, Type_t * ___genericDictionaryType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m6E65E040F0390049F8D40F86AEF88F680C5BBAC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mE5F96700E6F60A13D9B66B2EADA122532E26FF08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m01BC3D9F7D0CB112CD8A406E7E21D861F23E9297_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E24966AAC8E45227EBD6E8A3E51083DABA17921);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EEC3D61FB2FAA6A832418D53400A91BBE05D2E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t * V_2 = NULL;
	MemberInfo_t * V_3 = NULL;
	String_t* V_4 = NULL;
	RuntimeObject * V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_10 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_11 = NULL;
	String_t* G_B14_0 = NULL;
	String_t* G_B55_0 = NULL;
	String_t* G_B54_0 = NULL;
	String_t* G_B56_0 = NULL;
	String_t* G_B56_1 = NULL;
	{
		String_t* L_0 = __this->get_Source_9();
		int32_t L_1 = __this->get_index_11();
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)123))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_4 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5457B4732B48F5352ECD0C9C97B62CCF3703C1C1)), L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var)));
	}

IL_0026:
	{
		RuntimeObject ** L_5 = ___result0;
		RuntimeObject * L_6 = *((RuntimeObject **)L_5);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_0;
		if (L_7)
		{
			goto IL_006e;
		}
	}
	{
		Type_t * L_8 = ___objectType1;
		Type_t * L_9;
		L_9 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_10 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_TypeGenericIDictionary_7();
		NullCheck(L_9);
		Type_t * L_11;
		L_11 = Type_GetInterface_m1241E49F8C5AD57533E962F9D3B62751DAF7D18A(L_9, L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_11, NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_006e;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		V_10 = L_13;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_10;
		Type_t * L_15 = ___objectType1;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = V_10;
		String_t* L_17;
		L_17 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2BA03EA8B04430EA5974F2E64F45D92F46359305)), L_16, /*hidden argument*/NULL);
		int32_t L_18 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_19 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_19, L_17, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var)));
	}

IL_006e:
	{
		int32_t L_20 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1)));
		int32_t L_21 = __this->get_index_11();
		int32_t L_22 = __this->get_SourceLength_10();
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_23 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_24 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA55D6CD047AAD16FF1DC48785CF5ECEB98120B04)), L_23, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var)));
	}

IL_009b:
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_25 = __this->get_Settings_8();
		NullCheck(L_25);
		bool L_26;
		L_26 = JsonReaderSettings_get_AllowUnquotedObjectKeys_m95DD95963F70BA049021A14F6E253C7DCEF8284E_inline(L_25, /*hidden argument*/NULL);
		int32_t L_27;
		L_27 = JsonReader_Tokenize_mE7348B33149C9BE5160BEBAD1EFC58280336D55B(__this, L_26, /*hidden argument*/NULL);
		V_1 = L_27;
		int32_t L_28 = V_1;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)13))))
		{
			goto IL_04aa;
		}
	}
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)9))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_30 = V_1;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)16))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_31 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_32 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBED8B2301C7E241FD6DA19A158A85848FC98595B)), L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var)));
	}

IL_00d0:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) == ((int32_t)((int32_t)9))))
		{
			goto IL_00dd;
		}
	}
	{
		String_t* L_34;
		L_34 = JsonReader_ReadUnquotedKey_m4487953AF04567E0751CD1FAF95CF57E1FED7088(__this, /*hidden argument*/NULL);
		G_B14_0 = L_34;
		goto IL_00e9;
	}

IL_00dd:
	{
		RuntimeObject * L_35;
		L_35 = JsonReader_ReadString_mB5869770E30A99CDCA713053CE3AF27AF7BB4609(__this, (Type_t *)NULL, /*hidden argument*/NULL);
		G_B14_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_35, String_t_il2cpp_TypeInfo_var));
	}

IL_00e9:
	{
		V_4 = G_B14_0;
		Type_t * L_36 = ___genericDictionaryType3;
		bool L_37;
		L_37 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_36, NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0105;
		}
	}
	{
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_38 = ___memberMap2;
		if (!L_38)
		{
			goto IL_0105;
		}
	}
	{
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_39 = ___memberMap2;
		String_t* L_40 = V_4;
		Type_t * L_41;
		L_41 = TypeCoercionUtility_GetMemberInfo_mC90F5D09D26DD906DE4757AA97FF1E7ABB7686CB(L_39, L_40, (MemberInfo_t **)(&V_3), /*hidden argument*/NULL);
		V_2 = L_41;
		goto IL_010a;
	}

IL_0105:
	{
		Type_t * L_42 = ___genericDictionaryType3;
		V_2 = L_42;
		V_3 = (MemberInfo_t *)NULL;
	}

IL_010a:
	{
		int32_t L_43;
		L_43 = JsonReader_Tokenize_m9CD94D3D14E49165F866815A309ED73FA5AA0972(__this, /*hidden argument*/NULL);
		V_1 = L_43;
		int32_t L_44 = V_1;
		if ((((int32_t)L_44) == ((int32_t)((int32_t)14))))
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_45 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_46 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_46, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2326AF1D33072EE380903788C5005A78F51A0803)), L_45, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var)));
	}

IL_0127:
	{
		int32_t L_47 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1)));
		int32_t L_48 = __this->get_index_11();
		int32_t L_49 = __this->get_SourceLength_10();
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_50 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_51 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_51, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA55D6CD047AAD16FF1DC48785CF5ECEB98120B04)), L_50, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var)));
	}

IL_0154:
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_52 = __this->get_Settings_8();
		NullCheck(L_52);
		bool L_53;
		L_53 = JsonReaderSettings_get_HandleCyclicReferences_mAC59C18B565E5AE845F3F7969644F1066ADD1A93_inline(L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_01a3;
		}
	}
	{
		String_t* L_54 = V_4;
		bool L_55;
		L_55 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_54, _stringLiteral3E24966AAC8E45227EBD6E8A3E51083DABA17921, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_01a3;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_56 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_57;
		L_57 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_56, /*hidden argument*/NULL);
		RuntimeObject * L_58;
		L_58 = JsonReader_Read_mDE1146E85B57E87E8610C4B5F325744610AC42F9(__this, L_57, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_6 = ((*(int32_t*)((int32_t*)UnBox(L_58, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		RuntimeObject ** L_59 = ___result0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_60 = __this->get_previouslyDeserialized_13();
		int32_t L_61 = V_6;
		NullCheck(L_60);
		RuntimeObject * L_62;
		L_62 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_60, L_61, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		*((RuntimeObject **)L_59) = (RuntimeObject *)L_62;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_59, (void*)(RuntimeObject *)L_62);
		int32_t L_63;
		L_63 = JsonReader_Tokenize_m9CD94D3D14E49165F866815A309ED73FA5AA0972(__this, /*hidden argument*/NULL);
		V_1 = L_63;
		goto IL_04a2;
	}

IL_01a3:
	{
		String_t* L_64 = V_4;
		bool L_65;
		L_65 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_64, _stringLiteral5EEC3D61FB2FAA6A832418D53400A91BBE05D2E4, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_01f8;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_66 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_67;
		L_67 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_66, /*hidden argument*/NULL);
		RuntimeObject * L_68;
		L_68 = JsonReader_Read_mDE1146E85B57E87E8610C4B5F325744610AC42F9(__this, L_67, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_7 = ((*(int32_t*)((int32_t*)UnBox(L_68, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
		ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * L_69 = __this->get_referenceHandler_15();
		if (L_69)
		{
			goto IL_01dd;
		}
	}
	{
		Exception_t * L_70 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_70, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCC1F15E1DDEEEBDE2F8AC68910F0679026C5B6BE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var)));
	}

IL_01dd:
	{
		ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * L_71 = __this->get_referenceHandler_15();
		int32_t L_72 = V_7;
		RuntimeObject ** L_73 = ___result0;
		RuntimeObject * L_74 = *((RuntimeObject **)L_73);
		NullCheck(L_71);
		ReferenceHandlerReader_Set_m7BC475373BEF18890E3A8D65BE3013D29E2E09F9(L_71, L_72, L_74, /*hidden argument*/NULL);
		int32_t L_75;
		L_75 = JsonReader_Tokenize_m9CD94D3D14E49165F866815A309ED73FA5AA0972(__this, /*hidden argument*/NULL);
		V_1 = L_75;
		goto IL_04a2;
	}

IL_01f8:
	{
		Type_t * L_76 = ___objectType1;
		if (!L_76)
		{
			goto IL_021e;
		}
	}
	{
		Type_t * L_77 = ___objectType1;
		NullCheck(L_77);
		bool L_78;
		L_78 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_77, /*hidden argument*/NULL);
		if (L_78)
		{
			goto IL_021e;
		}
	}
	{
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_79 = __this->get_parentClass_16();
		RuntimeObject ** L_80 = ___result0;
		RuntimeObject * L_81 = *((RuntimeObject **)L_80);
		NullCheck(L_79);
		Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04(L_79, L_81, /*hidden argument*/Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_RuntimeMethod_var);
		Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * L_82 = __this->get_parentMemberInfo_17();
		MemberInfo_t * L_83 = V_3;
		NullCheck(L_82);
		Stack_1_Push_m01BC3D9F7D0CB112CD8A406E7E21D861F23E9297(L_82, L_83, /*hidden argument*/Stack_1_Push_m01BC3D9F7D0CB112CD8A406E7E21D861F23E9297_RuntimeMethod_var);
		goto IL_0236;
	}

IL_021e:
	{
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_84 = __this->get_parentClass_16();
		NullCheck(L_84);
		Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04(L_84, NULL, /*hidden argument*/Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_RuntimeMethod_var);
		Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * L_85 = __this->get_parentMemberInfo_17();
		NullCheck(L_85);
		Stack_1_Push_m01BC3D9F7D0CB112CD8A406E7E21D861F23E9297(L_85, (MemberInfo_t *)NULL, /*hidden argument*/Stack_1_Push_m01BC3D9F7D0CB112CD8A406E7E21D861F23E9297_RuntimeMethod_var);
	}

IL_0236:
	{
		Type_t * L_86 = V_2;
		RuntimeObject * L_87;
		L_87 = JsonReader_Read_mDE1146E85B57E87E8610C4B5F325744610AC42F9(__this, L_86, (bool)0, (bool)0, /*hidden argument*/NULL);
		V_5 = L_87;
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_88 = __this->get_parentClass_16();
		NullCheck(L_88);
		RuntimeObject * L_89;
		L_89 = Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12(L_88, /*hidden argument*/Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_RuntimeMethod_var);
		Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * L_90 = __this->get_parentMemberInfo_17();
		NullCheck(L_90);
		MemberInfo_t * L_91;
		L_91 = Stack_1_Pop_mE5F96700E6F60A13D9B66B2EADA122532E26FF08(L_90, /*hidden argument*/Stack_1_Pop_mE5F96700E6F60A13D9B66B2EADA122532E26FF08_RuntimeMethod_var);
		RuntimeObject * L_92 = V_5;
		if (!L_92)
		{
			goto IL_03ce;
		}
	}
	{
		RuntimeObject * L_93 = V_5;
		NullCheck(L_93);
		Type_t * L_94;
		L_94 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_93, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_95 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_96;
		L_96 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_95, /*hidden argument*/NULL);
		bool L_97;
		L_97 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_94, L_96, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_03ce;
		}
	}
	{
		Type_t * L_98 = V_2;
		bool L_99;
		L_99 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_98, NULL, /*hidden argument*/NULL);
		if (L_99)
		{
			goto IL_03ce;
		}
	}
	{
		Type_t * L_100 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_101 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_102;
		L_102 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_101, /*hidden argument*/NULL);
		bool L_103;
		L_103 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_100, L_102, /*hidden argument*/NULL);
		if (L_103)
		{
			goto IL_03ce;
		}
	}
	{
		RuntimeObject * L_104 = V_5;
		V_8 = ((String_t*)IsInstSealed((RuntimeObject*)L_104, String_t_il2cpp_TypeInfo_var));
		String_t* L_105 = V_8;
		NullCheck(L_105);
		bool L_106;
		L_106 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_105, _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, /*hidden argument*/NULL);
		if (!L_106)
		{
			goto IL_03ad;
		}
	}
	{
		String_t* L_107 = V_8;
		NullCheck(L_107);
		String_t* L_108;
		L_108 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_107, 1, /*hidden argument*/NULL);
		bool L_109;
		L_109 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_108, (int32_t*)(&V_9), /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_0367;
		}
	}
	{
		ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * L_110 = __this->get_referenceHandler_15();
		int32_t L_111 = V_9;
		NullCheck(L_110);
		bool L_112;
		L_112 = ReferenceHandlerReader_TryGetValueFromID_mC1AD68F65F5F0ABDAFDAD0C434840AD4B549D3F3(L_110, L_111, (RuntimeObject **)(&V_5), /*hidden argument*/NULL);
		if (L_112)
		{
			goto IL_03ce;
		}
	}
	{
		RuntimeObject* L_113 = V_0;
		if (!L_113)
		{
			goto IL_02f3;
		}
	}
	{
		ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * L_114 = __this->get_referenceHandler_15();
		int32_t L_115 = V_9;
		RuntimeObject* L_116 = V_0;
		String_t* L_117 = V_4;
		NullCheck(L_114);
		ReferenceHandlerReader_AddDelayedDictionarySetter_m3E8ECEE2E3D6324503B4C91F9D1A2ADBC698F0BF(L_114, L_115, L_116, L_117, /*hidden argument*/NULL);
		goto IL_0362;
	}

IL_02f3:
	{
		Type_t * L_118 = ___objectType1;
		if (!L_118)
		{
			goto IL_0352;
		}
	}
	{
		Type_t * L_119 = ___objectType1;
		NullCheck(L_119);
		bool L_120;
		L_120 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_119, /*hidden argument*/NULL);
		if (!L_120)
		{
			goto IL_0352;
		}
	}
	{
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_121 = __this->get_parentClass_16();
		NullCheck(L_121);
		RuntimeObject * L_122;
		L_122 = Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E(L_121, /*hidden argument*/Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_RuntimeMethod_var);
		if (!L_122)
		{
			goto IL_0331;
		}
	}
	{
		ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * L_123 = __this->get_referenceHandler_15();
		int32_t L_124 = V_9;
		Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * L_125 = __this->get_parentClass_16();
		NullCheck(L_125);
		RuntimeObject * L_126;
		L_126 = Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E(L_125, /*hidden argument*/Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_RuntimeMethod_var);
		Stack_1_t6D4829AC0E2B5EDDD1F2BDD6CDF360E01A12C68E * L_127 = __this->get_parentMemberInfo_17();
		NullCheck(L_127);
		MemberInfo_t * L_128;
		L_128 = Stack_1_Peek_m6E65E040F0390049F8D40F86AEF88F680C5BBAC9(L_127, /*hidden argument*/Stack_1_Peek_m6E65E040F0390049F8D40F86AEF88F680C5BBAC9_RuntimeMethod_var);
		MemberInfo_t * L_129 = V_3;
		NullCheck(L_123);
		ReferenceHandlerReader_AddDelayedSetter_m835D5E6B07055902CF1588ACC03227164A57FE42(L_123, L_124, L_126, L_128, L_129, /*hidden argument*/NULL);
		goto IL_0362;
	}

IL_0331:
	{
		Type_t * L_130 = ___objectType1;
		NullCheck(L_130);
		String_t* L_131;
		L_131 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_130);
		String_t* L_132;
		L_132 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF1A27E97374B8EF8312018EE6DBD2C3890CD2DC)), L_131, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), /*hidden argument*/NULL);
		int32_t L_133 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_134 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_134, L_132, L_133, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_134, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var)));
	}

IL_0352:
	{
		ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * L_135 = __this->get_referenceHandler_15();
		int32_t L_136 = V_9;
		MemberInfo_t * L_137 = V_3;
		RuntimeObject ** L_138 = ___result0;
		RuntimeObject * L_139 = *((RuntimeObject **)L_138);
		NullCheck(L_135);
		ReferenceHandlerReader_AddDelayedSetter_mDFF6E2C00EED5697BF85229F68BC2E6312CCE335(L_135, L_136, L_137, L_139, /*hidden argument*/NULL);
	}

IL_0362:
	{
		V_5 = NULL;
		goto IL_03ce;
	}

IL_0367:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_140 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var)), (uint32_t)5);
		V_11 = L_140;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_141 = V_11;
		NullCheck(L_141);
		ArrayElementTypeCheck (L_141, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FD73529E874E82DDA9E7B84AE21412CD73FEFF7)));
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FD73529E874E82DDA9E7B84AE21412CD73FEFF7)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_142 = V_11;
		Type_t * L_143 = V_2;
		NullCheck(L_143);
		String_t* L_144;
		L_144 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_143);
		NullCheck(L_142);
		ArrayElementTypeCheck (L_142, L_144);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_144);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_145 = V_11;
		NullCheck(L_145);
		ArrayElementTypeCheck (L_145, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCA0514C5253EA13591307D8EBAFC89321634E095)));
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCA0514C5253EA13591307D8EBAFC89321634E095)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_146 = V_11;
		String_t* L_147 = V_8;
		NullCheck(L_146);
		ArrayElementTypeCheck (L_146, L_147);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_147);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_148 = V_11;
		NullCheck(L_148);
		ArrayElementTypeCheck (L_148, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)));
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_149 = V_11;
		String_t* L_150;
		L_150 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_149, /*hidden argument*/NULL);
		int32_t L_151 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_152 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_152, L_150, L_151, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_152, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var)));
	}

IL_03ad:
	{
		Type_t * L_153 = V_2;
		NullCheck(L_153);
		String_t* L_154;
		L_154 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_153);
		String_t* L_155;
		L_155 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FD73529E874E82DDA9E7B84AE21412CD73FEFF7)), L_154, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFDD39D0B0B17CB066C77D8A693B9FAC85260F0B2)), /*hidden argument*/NULL);
		int32_t L_156 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_157 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_157, L_155, L_156, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_157, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var)));
	}

IL_03ce:
	{
		RuntimeObject ** L_158 = ___result0;
		RuntimeObject * L_159 = *((RuntimeObject **)L_158);
		if (L_159)
		{
			goto IL_040c;
		}
	}
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_160 = __this->get_Settings_8();
		String_t* L_161 = V_4;
		NullCheck(L_160);
		bool L_162;
		L_162 = JsonReaderSettings_IsTypeHintName_mF55B2C2E0ABF9F104F917DC5FCC952CC01AFCD50(L_160, L_161, /*hidden argument*/NULL);
		if (L_162)
		{
			goto IL_040c;
		}
	}
	{
		Type_t * L_163 = ___objectType1;
		G_B54_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF6332CAF2336F3BE1159385284C46DF80D13915));
		if (L_163)
		{
			G_B55_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF6332CAF2336F3BE1159385284C46DF80D13915));
			goto IL_03f0;
		}
	}
	{
		G_B56_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1));
		G_B56_1 = G_B54_0;
		goto IL_03f6;
	}

IL_03f0:
	{
		Type_t * L_164 = ___objectType1;
		NullCheck(L_164);
		String_t* L_165;
		L_165 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_164);
		G_B56_0 = L_165;
		G_B56_1 = G_B55_0;
	}

IL_03f6:
	{
		String_t* L_166;
		L_166 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B56_1, G_B56_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87433BD837DDDF310440C2A80469D1C9EC12D8F1)), /*hidden argument*/NULL);
		int32_t L_167 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_168 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_168, L_166, L_167, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_168, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var)));
	}

IL_040c:
	{
		RuntimeObject* L_169 = V_0;
		if (!L_169)
		{
			goto IL_0455;
		}
	}
	{
		Type_t * L_170 = ___objectType1;
		bool L_171;
		L_171 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_170, NULL, /*hidden argument*/NULL);
		if (!L_171)
		{
			goto IL_0449;
		}
	}
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_172 = __this->get_Settings_8();
		String_t* L_173 = V_4;
		NullCheck(L_172);
		bool L_174;
		L_174 = JsonReaderSettings_IsTypeHintName_mF55B2C2E0ABF9F104F917DC5FCC952CC01AFCD50(L_172, L_173, /*hidden argument*/NULL);
		if (!L_174)
		{
			goto IL_0449;
		}
	}
	{
		RuntimeObject ** L_175 = ___result0;
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_176 = __this->get_Settings_8();
		NullCheck(L_176);
		TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * L_177 = L_176->get_Coercion_0();
		RuntimeObject* L_178 = V_0;
		RuntimeObject * L_179 = V_5;
		NullCheck(L_177);
		RuntimeObject * L_180;
		L_180 = TypeCoercionUtility_ProcessTypeHint_m47B3DED1B0B0DB1C95FAA3E62DE935254E76C85D(L_177, L_178, ((String_t*)IsInstSealed((RuntimeObject*)L_179, String_t_il2cpp_TypeInfo_var)), (Type_t **)(&___objectType1), (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD **)(&___memberMap2), /*hidden argument*/NULL);
		*((RuntimeObject **)L_175) = (RuntimeObject *)L_180;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_175, (void*)(RuntimeObject *)L_180);
		V_0 = (RuntimeObject*)NULL;
		goto IL_049b;
	}

IL_0449:
	{
		RuntimeObject* L_181 = V_0;
		String_t* L_182 = V_4;
		RuntimeObject * L_183 = V_5;
		NullCheck(L_181);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_181, L_182, L_183);
		goto IL_049b;
	}

IL_0455:
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_184 = __this->get_Settings_8();
		String_t* L_185 = V_4;
		NullCheck(L_184);
		bool L_186;
		L_186 = JsonReaderSettings_IsTypeHintName_mF55B2C2E0ABF9F104F917DC5FCC952CC01AFCD50(L_184, L_185, /*hidden argument*/NULL);
		if (!L_186)
		{
			goto IL_0485;
		}
	}
	{
		RuntimeObject ** L_187 = ___result0;
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_188 = __this->get_Settings_8();
		NullCheck(L_188);
		TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * L_189 = L_188->get_Coercion_0();
		RuntimeObject ** L_190 = ___result0;
		RuntimeObject * L_191 = *((RuntimeObject **)L_190);
		RuntimeObject * L_192 = V_5;
		NullCheck(L_189);
		RuntimeObject * L_193;
		L_193 = TypeCoercionUtility_ProcessTypeHint_m6F3980427D2AD974304836ECFD0E74EF64D7BCA8(L_189, L_191, ((String_t*)IsInstSealed((RuntimeObject*)L_192, String_t_il2cpp_TypeInfo_var)), (Type_t **)(&___objectType1), (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD **)(&___memberMap2), /*hidden argument*/NULL);
		*((RuntimeObject **)L_187) = (RuntimeObject *)L_193;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_187, (void*)(RuntimeObject *)L_193);
		goto IL_049b;
	}

IL_0485:
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_194 = __this->get_Settings_8();
		NullCheck(L_194);
		TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * L_195 = L_194->get_Coercion_0();
		RuntimeObject ** L_196 = ___result0;
		RuntimeObject * L_197 = *((RuntimeObject **)L_196);
		Type_t * L_198 = V_2;
		MemberInfo_t * L_199 = V_3;
		RuntimeObject * L_200 = V_5;
		NullCheck(L_195);
		TypeCoercionUtility_SetMemberValue_m9B934C08F9EF43F0D03940043D6EEF0A6634D436(L_195, L_197, L_198, L_199, L_200, /*hidden argument*/NULL);
	}

IL_049b:
	{
		int32_t L_201;
		L_201 = JsonReader_Tokenize_m9CD94D3D14E49165F866815A309ED73FA5AA0972(__this, /*hidden argument*/NULL);
		V_1 = L_201;
	}

IL_04a2:
	{
		int32_t L_202 = V_1;
		if ((((int32_t)L_202) == ((int32_t)((int32_t)15))))
		{
			goto IL_006e;
		}
	}

IL_04aa:
	{
		int32_t L_203 = V_1;
		if ((((int32_t)L_203) == ((int32_t)((int32_t)13))))
		{
			goto IL_04c0;
		}
	}
	{
		int32_t L_204 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_205 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_205, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA55D6CD047AAD16FF1DC48785CF5ECEB98120B04)), L_204, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_205, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_PopulateObject_mAB559159FEEA5F5BD24329D5BB7DFE93B283D423_RuntimeMethod_var)));
	}

IL_04c0:
	{
		int32_t L_206 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_206, (int32_t)1)));
		return;
	}
}
// System.Collections.IEnumerable Pathfinding.Serialization.JsonFx.JsonReader::ReadArray(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_ReadArray_m4D0E6C1238B37455ABA373B297C7D11E45A4D959 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, Type_t * ___arrayType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mAC437FAF19B6F21DD90D59C629BA8F7967971E56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mE3B72B1BB3B8DD41788D39A3AF38E6A94B241400_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m40417D9B18D29FD4A072DABC1449DACEF8009C6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m253EA52BAAD842AB2283B9DFE7A1751B551568F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m392A13AD94153607A4D45B7E4F532E2FE2E12CD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAD480D06B9E19C3032AF3EE954FF7D4D869637F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mDC993CCCCBF573DB43919E8E91B927D76C22C99A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2F377D93C74B8090B226DCC307AB5BB600181453_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m2895369C19E6CC80590BBB8C9FC2EE29C6F3A8E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m652692CDAC1CA17EE479C4808887D42E49428433_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m857B3ADC20A6730A3B2057AF3F3BBD813DAB5E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Type_t * V_2 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_3 = NULL;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_4 = NULL;
	List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * V_5 = NULL;
	int32_t V_6 = 0;
	RuntimeObject * V_7 = NULL;
	int32_t V_8 = 0;
	RuntimeObject* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	int32_t V_11 = 0;
	RuntimeArray * V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_15 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_16 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_17 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_18 = NULL;
	KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  V_19;
	memset((&V_19), 0, sizeof(V_19));
	KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  V_20;
	memset((&V_20), 0, sizeof(V_20));
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * G_B11_0 = NULL;
	{
		String_t* L_0 = __this->get_Source_9();
		int32_t L_1 = __this->get_index_11();
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)91))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_4 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral928EE8E3EBAC8D2AEA281A504385C5DDA82CE607)), L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadArray_m4D0E6C1238B37455ABA373B297C7D11E45A4D959_RuntimeMethod_var)));
	}

IL_0026:
	{
		Type_t * L_5 = ___arrayType0;
		bool L_6;
		L_6 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_5, NULL, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_0;
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		V_2 = (Type_t *)NULL;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		Type_t * L_9 = ___arrayType0;
		NullCheck(L_9);
		bool L_10;
		L_10 = Type_get_HasElementType_m0E9BE136D7122FF3C2C92176B2FB40A39E5597D8(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		Type_t * L_11 = ___arrayType0;
		NullCheck(L_11);
		Type_t * L_12;
		L_12 = VirtFuncInvoker0< Type_t * >::Invoke(104 /* System.Type System.Type::GetElementType() */, L_11);
		V_2 = L_12;
		goto IL_006a;
	}

IL_004c:
	{
		Type_t * L_13 = ___arrayType0;
		Type_t * L_14;
		L_14 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtFuncInvoker0< bool >::Invoke(80 /* System.Boolean System.Type::get_IsGenericType() */, L_14);
		if (!L_15)
		{
			goto IL_006a;
		}
	}
	{
		Type_t * L_16 = ___arrayType0;
		NullCheck(L_16);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_17;
		L_17 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(105 /* System.Type[] System.Type::GetGenericArguments() */, L_16);
		V_3 = L_17;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_18 = V_3;
		NullCheck(L_18);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_006a;
		}
	}
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_19 = V_3;
		NullCheck(L_19);
		int32_t L_20 = 0;
		Type_t * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_2 = L_21;
	}

IL_006a:
	{
		Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E * L_22 = __this->get_jsArrays_14();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Stack_1_get_Count_m857B3ADC20A6730A3B2057AF3F3BBD813DAB5E08_inline(L_22, /*hidden argument*/Stack_1_get_Count_m857B3ADC20A6730A3B2057AF3F3BBD813DAB5E08_RuntimeMethod_var);
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_24 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_il2cpp_TypeInfo_var);
		List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B(L_24, /*hidden argument*/List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_RuntimeMethod_var);
		G_B11_0 = L_24;
		goto IL_008a;
	}

IL_007f:
	{
		Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E * L_25 = __this->get_jsArrays_14();
		NullCheck(L_25);
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_26;
		L_26 = Stack_1_Pop_m2895369C19E6CC80590BBB8C9FC2EE29C6F3A8E1(L_25, /*hidden argument*/Stack_1_Pop_m2895369C19E6CC80590BBB8C9FC2EE29C6F3A8E1_RuntimeMethod_var);
		G_B11_0 = L_26;
	}

IL_008a:
	{
		V_4 = G_B11_0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_27 = V_4;
		NullCheck(L_27);
		List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0(L_27, /*hidden argument*/List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_RuntimeMethod_var);
		V_5 = (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 *)NULL;
	}

IL_0096:
	{
		int32_t L_28 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		int32_t L_29 = __this->get_index_11();
		int32_t L_30 = __this->get_SourceLength_10();
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_31 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_32 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE0AE246BF739BAF1083CA905EB49206E8FF3C26)), L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadArray_m4D0E6C1238B37455ABA373B297C7D11E45A4D959_RuntimeMethod_var)));
	}

IL_00c3:
	{
		int32_t L_33;
		L_33 = JsonReader_Tokenize_m9CD94D3D14E49165F866815A309ED73FA5AA0972(__this, /*hidden argument*/NULL);
		V_6 = L_33;
		int32_t L_34 = V_6;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)11))))
		{
			goto IL_026c;
		}
	}
	{
		Type_t * L_35 = V_2;
		bool L_36 = V_1;
		RuntimeObject * L_37;
		L_37 = JsonReader_Read_mDE1146E85B57E87E8610C4B5F325744610AC42F9(__this, L_35, L_36, (bool)0, /*hidden argument*/NULL);
		V_7 = L_37;
		RuntimeObject * L_38 = V_7;
		if (!L_38)
		{
			goto IL_01da;
		}
	}
	{
		ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * L_39 = __this->get_referenceHandler_15();
		if (!L_39)
		{
			goto IL_01da;
		}
	}
	{
		RuntimeObject * L_40 = V_7;
		NullCheck(L_40);
		Type_t * L_41;
		L_41 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_40, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_42 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43;
		L_43 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_42, /*hidden argument*/NULL);
		bool L_44;
		L_44 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_41, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_01da;
		}
	}
	{
		Type_t * L_45 = V_2;
		bool L_46;
		L_46 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_45, NULL, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_01da;
		}
	}
	{
		Type_t * L_47 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_48 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_49;
		L_49 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_48, /*hidden argument*/NULL);
		bool L_50;
		L_50 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_47, L_49, /*hidden argument*/NULL);
		if (L_50)
		{
			goto IL_01da;
		}
	}
	{
		RuntimeObject * L_51 = V_7;
		NullCheck(((String_t*)IsInstSealed((RuntimeObject*)L_51, String_t_il2cpp_TypeInfo_var)));
		bool L_52;
		L_52 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(((String_t*)IsInstSealed((RuntimeObject*)L_51, String_t_il2cpp_TypeInfo_var)), _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_01cf;
		}
	}
	{
		RuntimeObject * L_53 = V_7;
		NullCheck(((String_t*)IsInstSealed((RuntimeObject*)L_53, String_t_il2cpp_TypeInfo_var)));
		String_t* L_54;
		L_54 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(((String_t*)IsInstSealed((RuntimeObject*)L_53, String_t_il2cpp_TypeInfo_var)), 1, /*hidden argument*/NULL);
		bool L_55;
		L_55 = Int32_TryParse_m748B8DB1D0C9D25C3D1812D7887411C4AFC1DDC2(L_54, (int32_t*)(&V_8), /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_018f;
		}
	}
	{
		ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * L_56 = __this->get_referenceHandler_15();
		int32_t L_57 = V_8;
		NullCheck(L_56);
		bool L_58;
		L_58 = ReferenceHandlerReader_TryGetValueFromID_mC1AD68F65F5F0ABDAFDAD0C434840AD4B549D3F3(L_56, L_57, (RuntimeObject **)(&V_7), /*hidden argument*/NULL);
		if (L_58)
		{
			goto IL_01da;
		}
	}
	{
		List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * L_59 = V_5;
		if (L_59)
		{
			goto IL_0175;
		}
	}
	{
		List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * L_60 = (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 *)il2cpp_codegen_object_new(List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4_il2cpp_TypeInfo_var);
		List_1__ctor_m392A13AD94153607A4D45B7E4F532E2FE2E12CD7(L_60, /*hidden argument*/List_1__ctor_m392A13AD94153607A4D45B7E4F532E2FE2E12CD7_RuntimeMethod_var);
		V_5 = L_60;
	}

IL_0175:
	{
		List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * L_61 = V_5;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_62 = V_4;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_62, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		int32_t L_64 = V_8;
		KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  L_65;
		memset((&L_65), 0, sizeof(L_65));
		KeyValuePair_2__ctor_mAC437FAF19B6F21DD90D59C629BA8F7967971E56((&L_65), L_63, L_64, /*hidden argument*/KeyValuePair_2__ctor_mAC437FAF19B6F21DD90D59C629BA8F7967971E56_RuntimeMethod_var);
		NullCheck(L_61);
		List_1_Add_m253EA52BAAD842AB2283B9DFE7A1751B551568F3(L_61, L_65, /*hidden argument*/List_1_Add_m253EA52BAAD842AB2283B9DFE7A1751B551568F3_RuntimeMethod_var);
		V_7 = NULL;
		goto IL_01da;
	}

IL_018f:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_66 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)5);
		V_15 = L_66;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_67 = V_15;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FD73529E874E82DDA9E7B84AE21412CD73FEFF7)));
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FD73529E874E82DDA9E7B84AE21412CD73FEFF7)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_68 = V_15;
		Type_t * L_69 = V_2;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_69);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_70);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_70);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_71 = V_15;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCA0514C5253EA13591307D8EBAFC89321634E095)));
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCA0514C5253EA13591307D8EBAFC89321634E095)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_72 = V_15;
		RuntimeObject * L_73 = V_7;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_73);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_73);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_74 = V_15;
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)));
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_75 = V_15;
		String_t* L_76;
		L_76 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_75, /*hidden argument*/NULL);
		Exception_t * L_77 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_77, L_76, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadArray_m4D0E6C1238B37455ABA373B297C7D11E45A4D959_RuntimeMethod_var)));
	}

IL_01cf:
	{
		Exception_t * L_78 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_78, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD4F5AB3DB8A9A36171F6BAE4DC5ED6137E31D30B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadArray_m4D0E6C1238B37455ABA373B297C7D11E45A4D959_RuntimeMethod_var)));
	}

IL_01da:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_79 = V_4;
		RuntimeObject * L_80 = V_7;
		NullCheck(L_79);
		List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E(L_79, L_80, /*hidden argument*/List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_RuntimeMethod_var);
		RuntimeObject * L_81 = V_7;
		if (L_81)
		{
			goto IL_0203;
		}
	}
	{
		Type_t * L_82 = V_2;
		bool L_83;
		L_83 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_82, NULL, /*hidden argument*/NULL);
		if (L_83)
		{
			goto IL_01ff;
		}
	}
	{
		Type_t * L_84 = V_2;
		Type_t * L_85;
		L_85 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		bool L_86;
		L_86 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_85, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_01ff;
		}
	}
	{
		V_2 = (Type_t *)NULL;
	}

IL_01ff:
	{
		V_0 = (bool)1;
		goto IL_025b;
	}

IL_0203:
	{
		Type_t * L_87 = V_2;
		bool L_88;
		L_88 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_87, NULL, /*hidden argument*/NULL);
		if (L_88)
		{
			goto IL_024e;
		}
	}
	{
		Type_t * L_89 = V_2;
		Type_t * L_90;
		L_90 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_89, /*hidden argument*/NULL);
		RuntimeObject * L_91 = V_7;
		NullCheck(L_91);
		Type_t * L_92;
		L_92 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_91, /*hidden argument*/NULL);
		Type_t * L_93;
		L_93 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_92, /*hidden argument*/NULL);
		NullCheck(L_90);
		bool L_94;
		L_94 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_90, L_93);
		if (L_94)
		{
			goto IL_024e;
		}
	}
	{
		RuntimeObject * L_95 = V_7;
		NullCheck(L_95);
		Type_t * L_96;
		L_96 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_95, /*hidden argument*/NULL);
		Type_t * L_97;
		L_97 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_96, /*hidden argument*/NULL);
		Type_t * L_98 = V_2;
		Type_t * L_99;
		L_99 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_98, /*hidden argument*/NULL);
		NullCheck(L_97);
		bool L_100;
		L_100 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_97, L_99);
		if (!L_100)
		{
			goto IL_0248;
		}
	}
	{
		RuntimeObject * L_101 = V_7;
		NullCheck(L_101);
		Type_t * L_102;
		L_102 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_101, /*hidden argument*/NULL);
		V_2 = L_102;
		goto IL_025b;
	}

IL_0248:
	{
		V_2 = (Type_t *)NULL;
		V_0 = (bool)1;
		goto IL_025b;
	}

IL_024e:
	{
		bool L_103 = V_0;
		if (L_103)
		{
			goto IL_025b;
		}
	}
	{
		RuntimeObject * L_104 = V_7;
		NullCheck(L_104);
		Type_t * L_105;
		L_105 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_104, /*hidden argument*/NULL);
		V_2 = L_105;
		V_0 = (bool)1;
	}

IL_025b:
	{
		int32_t L_106;
		L_106 = JsonReader_Tokenize_m9CD94D3D14E49165F866815A309ED73FA5AA0972(__this, /*hidden argument*/NULL);
		V_6 = L_106;
		int32_t L_107 = V_6;
		if ((((int32_t)L_107) == ((int32_t)((int32_t)15))))
		{
			goto IL_0096;
		}
	}

IL_026c:
	{
		int32_t L_108 = V_6;
		if ((((int32_t)L_108) == ((int32_t)((int32_t)11))))
		{
			goto IL_0283;
		}
	}
	{
		int32_t L_109 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_110 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_110, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE0AE246BF739BAF1083CA905EB49206E8FF3C26)), L_109, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_110, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadArray_m4D0E6C1238B37455ABA373B297C7D11E45A4D959_RuntimeMethod_var)));
	}

IL_0283:
	{
		int32_t L_111 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)1)));
		Stack_1_t3D2C9E9C7EC2B5E474C5AF33C26AB659F62A060E * L_112 = __this->get_jsArrays_14();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_113 = V_4;
		NullCheck(L_112);
		Stack_1_Push_m652692CDAC1CA17EE479C4808887D42E49428433(L_112, L_113, /*hidden argument*/Stack_1_Push_m652692CDAC1CA17EE479C4808887D42E49428433_RuntimeMethod_var);
		Type_t * L_114 = V_2;
		bool L_115;
		L_115 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_114, NULL, /*hidden argument*/NULL);
		if (L_115)
		{
			goto IL_038e;
		}
	}
	{
		Type_t * L_116 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_117 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_118;
		L_118 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_117, /*hidden argument*/NULL);
		bool L_119;
		L_119 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_116, L_118, /*hidden argument*/NULL);
		if (L_119)
		{
			goto IL_038e;
		}
	}
	{
		Type_t * L_120 = ___arrayType0;
		if (!L_120)
		{
			goto IL_0335;
		}
	}
	{
		Type_t * L_121 = ___arrayType0;
		NullCheck(L_121);
		bool L_122;
		L_122 = VirtFuncInvoker0< bool >::Invoke(80 /* System.Boolean System.Type::get_IsGenericType() */, L_121);
		if (!L_122)
		{
			goto IL_0335;
		}
	}
	{
		Type_t * L_123 = ___arrayType0;
		NullCheck(L_123);
		Type_t * L_124;
		L_124 = VirtFuncInvoker0< Type_t * >::Invoke(107 /* System.Type System.Type::GetGenericTypeDefinition() */, L_123);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_125 = { reinterpret_cast<intptr_t> (List_1_t2F377D93C74B8090B226DCC307AB5BB600181453_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_126;
		L_126 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_125, /*hidden argument*/NULL);
		bool L_127;
		L_127 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_124, L_126, /*hidden argument*/NULL);
		if (!L_127)
		{
			goto IL_0335;
		}
	}
	{
		Type_t * L_128 = ___arrayType0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_129 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		V_16 = L_129;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_130 = V_16;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_131 = V_4;
		NullCheck(L_131);
		int32_t L_132;
		L_132 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_131, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		int32_t L_133 = L_132;
		RuntimeObject * L_134 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_133);
		NullCheck(L_130);
		ArrayElementTypeCheck (L_130, L_134);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_134);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_135 = V_16;
		RuntimeObject * L_136;
		L_136 = Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1(L_128, L_135, /*hidden argument*/NULL);
		V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_136, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
		V_11 = 0;
		goto IL_0324;
	}

IL_030d:
	{
		RuntimeObject* L_137 = V_10;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_138 = V_4;
		int32_t L_139 = V_11;
		NullCheck(L_138);
		RuntimeObject * L_140;
		L_140 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_138, L_139, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		NullCheck(L_137);
		int32_t L_141;
		L_141 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_137, L_140);
		int32_t L_142 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_142, (int32_t)1));
	}

IL_0324:
	{
		int32_t L_143 = V_11;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_144 = V_4;
		NullCheck(L_144);
		int32_t L_145;
		L_145 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_144, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if ((((int32_t)L_143) < ((int32_t)L_145)))
		{
			goto IL_030d;
		}
	}
	{
		RuntimeObject* L_146 = V_10;
		V_9 = L_146;
		goto IL_0397;
	}

IL_0335:
	{
		Type_t * L_147 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_148 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_17 = L_148;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_149 = V_17;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_150 = V_4;
		NullCheck(L_150);
		int32_t L_151;
		L_151 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_150, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_151);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_152 = V_17;
		RuntimeArray * L_153;
		L_153 = Array_CreateInstance_mAC559A46842AAC4E4C08FAA69E60AA6CCFDEDA64(L_147, L_152, /*hidden argument*/NULL);
		V_12 = L_153;
		V_13 = 0;
		goto IL_037d;
	}

IL_0357:
	{
		RuntimeArray * L_154 = V_12;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_155 = V_4;
		int32_t L_156 = V_13;
		NullCheck(L_155);
		RuntimeObject * L_157;
		L_157 = List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_inline(L_155, L_156, /*hidden argument*/List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_RuntimeMethod_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_158 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_18 = L_158;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_159 = V_18;
		int32_t L_160 = V_13;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_160);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_161 = V_18;
		NullCheck(L_154);
		Array_SetValue_m155453B293707C32AF61EB51F74A2381B91C2847(L_154, L_157, L_161, /*hidden argument*/NULL);
		int32_t L_162 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_162, (int32_t)1));
	}

IL_037d:
	{
		int32_t L_163 = V_13;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_164 = V_4;
		NullCheck(L_164);
		int32_t L_165;
		L_165 = List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_inline(L_164, /*hidden argument*/List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_RuntimeMethod_var);
		if ((((int32_t)L_163) < ((int32_t)L_165)))
		{
			goto IL_0357;
		}
	}
	{
		RuntimeArray * L_166 = V_12;
		V_9 = L_166;
		goto IL_0397;
	}

IL_038e:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_167 = V_4;
		NullCheck(L_167);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_168;
		L_168 = List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D(L_167, /*hidden argument*/List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_RuntimeMethod_var);
		V_9 = (RuntimeObject*)L_168;
	}

IL_0397:
	{
		List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * L_169 = V_5;
		if (!L_169)
		{
			goto IL_03e2;
		}
	}
	{
		V_14 = 0;
		goto IL_03d7;
	}

IL_03a0:
	{
		ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * L_170 = __this->get_referenceHandler_15();
		List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * L_171 = V_5;
		int32_t L_172 = V_14;
		NullCheck(L_171);
		KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  L_173;
		L_173 = List_1_get_Item_mDC993CCCCBF573DB43919E8E91B927D76C22C99A_inline(L_171, L_172, /*hidden argument*/List_1_get_Item_mDC993CCCCBF573DB43919E8E91B927D76C22C99A_RuntimeMethod_var);
		V_19 = L_173;
		int32_t L_174;
		L_174 = KeyValuePair_2_get_Value_m40417D9B18D29FD4A072DABC1449DACEF8009C6A_inline((KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB *)(&V_19), /*hidden argument*/KeyValuePair_2_get_Value_m40417D9B18D29FD4A072DABC1449DACEF8009C6A_RuntimeMethod_var);
		RuntimeObject* L_175 = V_9;
		List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * L_176 = V_5;
		int32_t L_177 = V_14;
		NullCheck(L_176);
		KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  L_178;
		L_178 = List_1_get_Item_mDC993CCCCBF573DB43919E8E91B927D76C22C99A_inline(L_176, L_177, /*hidden argument*/List_1_get_Item_mDC993CCCCBF573DB43919E8E91B927D76C22C99A_RuntimeMethod_var);
		V_20 = L_178;
		int32_t L_179;
		L_179 = KeyValuePair_2_get_Key_mE3B72B1BB3B8DD41788D39A3AF38E6A94B241400_inline((KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB *)(&V_20), /*hidden argument*/KeyValuePair_2_get_Key_mE3B72B1BB3B8DD41788D39A3AF38E6A94B241400_RuntimeMethod_var);
		NullCheck(L_170);
		ReferenceHandlerReader_AddDelayedListSetter_mCAEFB2C596DC7C87EA07EA46B3C8FA968C85A4D0(L_170, L_174, L_175, L_179, /*hidden argument*/NULL);
		int32_t L_180 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)1));
	}

IL_03d7:
	{
		int32_t L_181 = V_14;
		List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * L_182 = V_5;
		NullCheck(L_182);
		int32_t L_183;
		L_183 = List_1_get_Count_mAD480D06B9E19C3032AF3EE954FF7D4D869637F2_inline(L_182, /*hidden argument*/List_1_get_Count_mAD480D06B9E19C3032AF3EE954FF7D4D869637F2_RuntimeMethod_var);
		if ((((int32_t)L_181) < ((int32_t)L_183)))
		{
			goto IL_03a0;
		}
	}

IL_03e2:
	{
		RuntimeObject* L_184 = V_9;
		return L_184;
	}
}
// System.String Pathfinding.Serialization.JsonFx.JsonReader::ReadUnquotedKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonReader_ReadUnquotedKey_m4487953AF04567E0751CD1FAF95CF57E1FED7088 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_index_11();
		V_0 = L_0;
	}

IL_0007:
	{
		int32_t L_1 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		int32_t L_2;
		L_2 = JsonReader_Tokenize_mE7348B33149C9BE5160BEBAD1EFC58280336D55B(__this, (bool)1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0007;
		}
	}
	{
		String_t* L_3 = __this->get_Source_9();
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_index_11();
		int32_t L_6 = V_0;
		NullCheck(L_3);
		String_t* L_7;
		L_7 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_3, L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)L_6)), /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadString(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_ReadString_mB5869770E30A99CDCA713053CE3AF27AF7BB4609 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, Type_t * ___expectedType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	Il2CppChar V_4 = 0x0;
	{
		String_t* L_0 = __this->get_Source_9();
		int32_t L_1 = __this->get_index_11();
		NullCheck(L_0);
		Il2CppChar L_2;
		L_2 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_0, L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)34))))
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_3 = __this->get_Source_9();
		int32_t L_4 = __this->get_index_11();
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_3, L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)((int32_t)39))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_6 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_7 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9967393E7AD32CC664FFB02F6AE872530750A387)), L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadString_mB5869770E30A99CDCA713053CE3AF27AF7BB4609_RuntimeMethod_var)));
	}

IL_003b:
	{
		String_t* L_8 = __this->get_Source_9();
		int32_t L_9 = __this->get_index_11();
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		int32_t L_11 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		int32_t L_12 = __this->get_index_11();
		int32_t L_13 = __this->get_SourceLength_10();
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_14 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_15 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C03B27CFC3411D3E0CA217A1982875AA01C309E)), L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadString_mB5869770E30A99CDCA713053CE3AF27AF7BB4609_RuntimeMethod_var)));
	}

IL_007a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		StringBuilder_t * L_16 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_builder_18();
		NullCheck(L_16);
		StringBuilder_set_Length_m7C1756193B05DCA5A23C5DC98EE90A9FC685A27A(L_16, 0, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_index_11();
		V_1 = L_17;
		goto IL_0296;
	}

IL_0091:
	{
		String_t* L_18 = __this->get_Source_9();
		int32_t L_19 = __this->get_index_11();
		NullCheck(L_18);
		Il2CppChar L_20;
		L_20 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_18, L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_0269;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		StringBuilder_t * L_21 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_builder_18();
		String_t* L_22 = __this->get_Source_9();
		int32_t L_23 = V_1;
		int32_t L_24 = __this->get_index_11();
		int32_t L_25 = V_1;
		NullCheck(L_21);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17(L_21, L_22, L_23, ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)), /*hidden argument*/NULL);
		int32_t L_27 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		int32_t L_28 = __this->get_index_11();
		int32_t L_29 = __this->get_SourceLength_10();
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_00f0;
		}
	}
	{
		int32_t L_30 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_31 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C03B27CFC3411D3E0CA217A1982875AA01C309E)), L_30, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadString_mB5869770E30A99CDCA713053CE3AF27AF7BB4609_RuntimeMethod_var)));
	}

IL_00f0:
	{
		String_t* L_32 = __this->get_Source_9();
		int32_t L_33 = __this->get_index_11();
		NullCheck(L_32);
		Il2CppChar L_34;
		L_34 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_32, L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		Il2CppChar L_35 = V_4;
		if ((((int32_t)L_35) > ((int32_t)((int32_t)98))))
		{
			goto IL_011d;
		}
	}
	{
		Il2CppChar L_36 = V_4;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)48))))
		{
			goto IL_0233;
		}
	}
	{
		Il2CppChar L_37 = V_4;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)98))))
		{
			goto IL_0148;
		}
	}
	{
		goto IL_0217;
	}

IL_011d:
	{
		Il2CppChar L_38 = V_4;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)102))))
		{
			goto IL_0159;
		}
	}
	{
		Il2CppChar L_39 = V_4;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)110))))
		{
			goto IL_016b;
		}
	}
	{
		Il2CppChar L_40 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_017d;
			}
			case 1:
			{
				goto IL_0217;
			}
			case 2:
			{
				goto IL_018f;
			}
			case 3:
			{
				goto IL_01a1;
			}
		}
	}
	{
		goto IL_0217;
	}

IL_0148:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		StringBuilder_t * L_41 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_builder_18();
		NullCheck(L_41);
		StringBuilder_t * L_42;
		L_42 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_41, 8, /*hidden argument*/NULL);
		goto IL_0233;
	}

IL_0159:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		StringBuilder_t * L_43 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_builder_18();
		NullCheck(L_43);
		StringBuilder_t * L_44;
		L_44 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_43, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0233;
	}

IL_016b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		StringBuilder_t * L_45 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_builder_18();
		NullCheck(L_45);
		StringBuilder_t * L_46;
		L_46 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_45, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0233;
	}

IL_017d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		StringBuilder_t * L_47 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_builder_18();
		NullCheck(L_47);
		StringBuilder_t * L_48;
		L_48 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_47, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0233;
	}

IL_018f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		StringBuilder_t * L_49 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_builder_18();
		NullCheck(L_49);
		StringBuilder_t * L_50;
		L_50 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_49, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0233;
	}

IL_01a1:
	{
		int32_t L_51 = __this->get_index_11();
		int32_t L_52 = __this->get_SourceLength_10();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)4))) >= ((int32_t)L_52)))
		{
			goto IL_01f9;
		}
	}
	{
		String_t* L_53 = __this->get_Source_9();
		int32_t L_54 = __this->get_index_11();
		NullCheck(L_53);
		String_t* L_55;
		L_55 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_53, ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1)), 4, /*hidden argument*/NULL);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_56;
		L_56 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		bool L_57;
		L_57 = Int32_TryParse_m006085C3B9AC64929E893942EF7A55328FDAE090(L_55, ((int32_t)512), L_56, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_01f9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		StringBuilder_t * L_58 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_builder_18();
		int32_t L_59 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		String_t* L_60;
		L_60 = Char_ConvertFromUtf32_m61381B403A3A7CF89350DE07F87D91C169C71AD7(L_59, /*hidden argument*/NULL);
		NullCheck(L_58);
		StringBuilder_t * L_61;
		L_61 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_58, L_60, /*hidden argument*/NULL);
		int32_t L_62 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)4)));
		goto IL_0233;
	}

IL_01f9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		StringBuilder_t * L_63 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_builder_18();
		String_t* L_64 = __this->get_Source_9();
		int32_t L_65 = __this->get_index_11();
		NullCheck(L_64);
		Il2CppChar L_66;
		L_66 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_64, L_65, /*hidden argument*/NULL);
		NullCheck(L_63);
		StringBuilder_t * L_67;
		L_67 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_63, L_66, /*hidden argument*/NULL);
		goto IL_0233;
	}

IL_0217:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		StringBuilder_t * L_68 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_builder_18();
		String_t* L_69 = __this->get_Source_9();
		int32_t L_70 = __this->get_index_11();
		NullCheck(L_69);
		Il2CppChar L_71;
		L_71 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_69, L_70, /*hidden argument*/NULL);
		NullCheck(L_68);
		StringBuilder_t * L_72;
		L_72 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_68, L_71, /*hidden argument*/NULL);
	}

IL_0233:
	{
		int32_t L_73 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1)));
		int32_t L_74 = __this->get_index_11();
		int32_t L_75 = __this->get_SourceLength_10();
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_76 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_77 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_77, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C03B27CFC3411D3E0CA217A1982875AA01C309E)), L_76, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadString_mB5869770E30A99CDCA713053CE3AF27AF7BB4609_RuntimeMethod_var)));
	}

IL_0260:
	{
		int32_t L_78 = __this->get_index_11();
		V_1 = L_78;
		goto IL_0296;
	}

IL_0269:
	{
		int32_t L_79 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1)));
		int32_t L_80 = __this->get_index_11();
		int32_t L_81 = __this->get_SourceLength_10();
		if ((((int32_t)L_80) < ((int32_t)L_81)))
		{
			goto IL_0296;
		}
	}
	{
		int32_t L_82 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_83 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_83, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C03B27CFC3411D3E0CA217A1982875AA01C309E)), L_82, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_83, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadString_mB5869770E30A99CDCA713053CE3AF27AF7BB4609_RuntimeMethod_var)));
	}

IL_0296:
	{
		String_t* L_84 = __this->get_Source_9();
		int32_t L_85 = __this->get_index_11();
		NullCheck(L_84);
		Il2CppChar L_86;
		L_86 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_84, L_85, /*hidden argument*/NULL);
		Il2CppChar L_87 = V_0;
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0091;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		StringBuilder_t * L_88 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_builder_18();
		String_t* L_89 = __this->get_Source_9();
		int32_t L_90 = V_1;
		int32_t L_91 = __this->get_index_11();
		int32_t L_92 = V_1;
		NullCheck(L_88);
		StringBuilder_t * L_93;
		L_93 = StringBuilder_Append_mB0253AA6494BFCC6EA6E5FA343D0DAE6F58CBD17(L_88, L_89, L_90, ((int32_t)il2cpp_codegen_subtract((int32_t)L_91, (int32_t)L_92)), /*hidden argument*/NULL);
		int32_t L_94 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1)));
		StringBuilder_t * L_95 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_builder_18();
		NullCheck(L_95);
		String_t* L_96;
		L_96 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_95);
		V_3 = L_96;
		Type_t * L_97 = ___expectedType0;
		bool L_98;
		L_98 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_97, NULL, /*hidden argument*/NULL);
		if (L_98)
		{
			goto IL_031d;
		}
	}
	{
		Type_t * L_99 = ___expectedType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_100 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_101;
		L_101 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_100, /*hidden argument*/NULL);
		bool L_102;
		L_102 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_99, L_101, /*hidden argument*/NULL);
		if (L_102)
		{
			goto IL_031d;
		}
	}
	{
		String_t* L_103 = V_3;
		NullCheck(L_103);
		bool L_104;
		L_104 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_103, _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476, /*hidden argument*/NULL);
		if (!L_104)
		{
			goto IL_030a;
		}
	}
	{
		String_t* L_105 = V_3;
		return L_105;
	}

IL_030a:
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_106 = __this->get_Settings_8();
		NullCheck(L_106);
		TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * L_107 = L_106->get_Coercion_0();
		Type_t * L_108 = ___expectedType0;
		String_t* L_109 = V_3;
		NullCheck(L_107);
		RuntimeObject * L_110;
		L_110 = TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E(L_107, L_108, L_109, /*hidden argument*/NULL);
		return L_110;
	}

IL_031d:
	{
		String_t* L_111 = V_3;
		return L_111;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::ReadNumber(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_ReadNumber_mCC5A7C352FCE9BC0BB40030E6E84BDD2392BBE67 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, Type_t * ___expectedType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  V_7;
	memset((&V_7), 0, sizeof(V_7));
	double V_8 = 0.0;
	int32_t G_B17_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	{
		V_0 = (bool)0;
		V_1 = (bool)0;
		int32_t L_0 = __this->get_index_11();
		V_2 = L_0;
		V_3 = 0;
		V_4 = 0;
		String_t* L_1 = __this->get_Source_9();
		int32_t L_2 = __this->get_index_11();
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_4 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		int32_t L_5 = __this->get_index_11();
		int32_t L_6 = __this->get_SourceLength_10();
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		String_t* L_7 = __this->get_Source_9();
		int32_t L_8 = __this->get_index_11();
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Char_IsDigit_mC19135099993954C820E030363B943034575F504(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0078;
		}
	}

IL_0059:
	{
		int32_t L_11 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_12 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B9D83E35717519F7593553D4AC00C3A46B092BC)), L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadNumber_mCC5A7C352FCE9BC0BB40030E6E84BDD2392BBE67_RuntimeMethod_var)));
	}

IL_006a:
	{
		int32_t L_13 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
	}

IL_0078:
	{
		int32_t L_14 = __this->get_index_11();
		int32_t L_15 = __this->get_SourceLength_10();
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_16 = __this->get_Source_9();
		int32_t L_17 = __this->get_index_11();
		NullCheck(L_16);
		Il2CppChar L_18;
		L_18 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_16, L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Char_IsDigit_mC19135099993954C820E030363B943034575F504(L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_006a;
		}
	}

IL_009e:
	{
		int32_t L_20 = __this->get_index_11();
		int32_t L_21 = __this->get_SourceLength_10();
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_013f;
		}
	}
	{
		String_t* L_22 = __this->get_Source_9();
		int32_t L_23 = __this->get_index_11();
		NullCheck(L_22);
		Il2CppChar L_24;
		L_24 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_22, L_23, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_013f;
		}
	}
	{
		V_0 = (bool)1;
		int32_t L_25 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)));
		int32_t L_26 = __this->get_index_11();
		int32_t L_27 = __this->get_SourceLength_10();
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_00fa;
		}
	}
	{
		String_t* L_28 = __this->get_Source_9();
		int32_t L_29 = __this->get_index_11();
		NullCheck(L_28);
		Il2CppChar L_30;
		L_30 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_28, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Char_IsDigit_mC19135099993954C820E030363B943034575F504(L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_0119;
		}
	}

IL_00fa:
	{
		int32_t L_32 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_33 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B9D83E35717519F7593553D4AC00C3A46B092BC)), L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadNumber_mCC5A7C352FCE9BC0BB40030E6E84BDD2392BBE67_RuntimeMethod_var)));
	}

IL_010b:
	{
		int32_t L_34 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)));
	}

IL_0119:
	{
		int32_t L_35 = __this->get_index_11();
		int32_t L_36 = __this->get_SourceLength_10();
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_013f;
		}
	}
	{
		String_t* L_37 = __this->get_Source_9();
		int32_t L_38 = __this->get_index_11();
		NullCheck(L_37);
		Il2CppChar L_39;
		L_39 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_37, L_38, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Char_IsDigit_mC19135099993954C820E030363B943034575F504(L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_010b;
		}
	}

IL_013f:
	{
		int32_t L_41 = __this->get_index_11();
		int32_t L_42 = V_2;
		bool L_43 = V_0;
		G_B16_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)L_42));
		if (L_43)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)L_42));
			goto IL_014d;
		}
	}
	{
		G_B18_0 = 0;
		G_B18_1 = G_B16_0;
		goto IL_014e;
	}

IL_014d:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
	}

IL_014e:
	{
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)G_B18_1, (int32_t)G_B18_0));
		int32_t L_44 = __this->get_index_11();
		int32_t L_45 = __this->get_SourceLength_10();
		if ((((int32_t)L_44) >= ((int32_t)L_45)))
		{
			goto IL_02b5;
		}
	}
	{
		String_t* L_46 = __this->get_Source_9();
		int32_t L_47 = __this->get_index_11();
		NullCheck(L_46);
		Il2CppChar L_48;
		L_48 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_46, L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_48) == ((int32_t)((int32_t)101))))
		{
			goto IL_018e;
		}
	}
	{
		String_t* L_49 = __this->get_Source_9();
		int32_t L_50 = __this->get_index_11();
		NullCheck(L_49);
		Il2CppChar L_51;
		L_51 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_49, L_50, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_02b5;
		}
	}

IL_018e:
	{
		V_1 = (bool)1;
		int32_t L_52 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1)));
		int32_t L_53 = __this->get_index_11();
		int32_t L_54 = __this->get_SourceLength_10();
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_01bd;
		}
	}
	{
		int32_t L_55 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_56 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_56, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B9D83E35717519F7593553D4AC00C3A46B092BC)), L_55, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_56, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadNumber_mCC5A7C352FCE9BC0BB40030E6E84BDD2392BBE67_RuntimeMethod_var)));
	}

IL_01bd:
	{
		int32_t L_57 = __this->get_index_11();
		V_5 = L_57;
		String_t* L_58 = __this->get_Source_9();
		int32_t L_59 = __this->get_index_11();
		NullCheck(L_58);
		Il2CppChar L_60;
		L_60 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_58, L_59, /*hidden argument*/NULL);
		if ((((int32_t)L_60) == ((int32_t)((int32_t)45))))
		{
			goto IL_01ef;
		}
	}
	{
		String_t* L_61 = __this->get_Source_9();
		int32_t L_62 = __this->get_index_11();
		NullCheck(L_61);
		Il2CppChar L_63;
		L_63 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_61, L_62, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_63) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0234;
		}
	}

IL_01ef:
	{
		int32_t L_64 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1)));
		int32_t L_65 = __this->get_index_11();
		int32_t L_66 = __this->get_SourceLength_10();
		if ((((int32_t)L_65) >= ((int32_t)L_66)))
		{
			goto IL_0223;
		}
	}
	{
		String_t* L_67 = __this->get_Source_9();
		int32_t L_68 = __this->get_index_11();
		NullCheck(L_67);
		Il2CppChar L_69;
		L_69 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_67, L_68, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Char_IsDigit_mC19135099993954C820E030363B943034575F504(L_69, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_026b;
		}
	}

IL_0223:
	{
		int32_t L_71 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_72 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_72, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B9D83E35717519F7593553D4AC00C3A46B092BC)), L_71, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_72, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadNumber_mCC5A7C352FCE9BC0BB40030E6E84BDD2392BBE67_RuntimeMethod_var)));
	}

IL_0234:
	{
		String_t* L_73 = __this->get_Source_9();
		int32_t L_74 = __this->get_index_11();
		NullCheck(L_73);
		Il2CppChar L_75;
		L_75 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_73, L_74, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_76;
		L_76 = Char_IsDigit_mC19135099993954C820E030363B943034575F504(L_75, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_026b;
		}
	}
	{
		int32_t L_77 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_78 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_78, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B9D83E35717519F7593553D4AC00C3A46B092BC)), L_77, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_78, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_ReadNumber_mCC5A7C352FCE9BC0BB40030E6E84BDD2392BBE67_RuntimeMethod_var)));
	}

IL_025d:
	{
		int32_t L_79 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_79, (int32_t)1)));
	}

IL_026b:
	{
		int32_t L_80 = __this->get_index_11();
		int32_t L_81 = __this->get_SourceLength_10();
		if ((((int32_t)L_80) >= ((int32_t)L_81)))
		{
			goto IL_0291;
		}
	}
	{
		String_t* L_82 = __this->get_Source_9();
		int32_t L_83 = __this->get_index_11();
		NullCheck(L_82);
		Il2CppChar L_84;
		L_84 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_82, L_83, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_85;
		L_85 = Char_IsDigit_mC19135099993954C820E030363B943034575F504(L_84, /*hidden argument*/NULL);
		if (L_85)
		{
			goto IL_025d;
		}
	}

IL_0291:
	{
		String_t* L_86 = __this->get_Source_9();
		int32_t L_87 = V_5;
		int32_t L_88 = __this->get_index_11();
		int32_t L_89 = V_5;
		NullCheck(L_86);
		String_t* L_90;
		L_90 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_86, L_87, ((int32_t)il2cpp_codegen_subtract((int32_t)L_88, (int32_t)L_89)), /*hidden argument*/NULL);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_91;
		L_91 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		bool L_92;
		L_92 = Int32_TryParse_m006085C3B9AC64929E893942EF7A55328FDAE090(L_90, 7, L_91, (int32_t*)(&V_4), /*hidden argument*/NULL);
	}

IL_02b5:
	{
		String_t* L_93 = __this->get_Source_9();
		int32_t L_94 = V_2;
		int32_t L_95 = __this->get_index_11();
		int32_t L_96 = V_2;
		NullCheck(L_93);
		String_t* L_97;
		L_97 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_93, L_94, ((int32_t)il2cpp_codegen_subtract((int32_t)L_95, (int32_t)L_96)), /*hidden argument*/NULL);
		V_6 = L_97;
		bool L_98 = V_0;
		if (L_98)
		{
			goto IL_0386;
		}
	}
	{
		bool L_99 = V_1;
		if (L_99)
		{
			goto IL_0386;
		}
	}
	{
		int32_t L_100 = V_3;
		if ((((int32_t)L_100) >= ((int32_t)((int32_t)19))))
		{
			goto IL_0386;
		}
	}
	{
		String_t* L_101 = V_6;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_102;
		L_102 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_103;
		L_103 = Decimal_Parse_mE9DEB6C845015FC1C2F1829D5CFC97403DCBC74B(L_101, 7, L_102, /*hidden argument*/NULL);
		V_7 = L_103;
		Type_t * L_104 = ___expectedType0;
		bool L_105;
		L_105 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_104, NULL, /*hidden argument*/NULL);
		if (L_105)
		{
			goto IL_0310;
		}
	}
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_106 = __this->get_Settings_8();
		NullCheck(L_106);
		TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * L_107 = L_106->get_Coercion_0();
		Type_t * L_108 = ___expectedType0;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_109 = V_7;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_110 = L_109;
		RuntimeObject * L_111 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_110);
		NullCheck(L_107);
		RuntimeObject * L_112;
		L_112 = TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E(L_107, L_108, L_111, /*hidden argument*/NULL);
		return L_112;
	}

IL_0310:
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_113 = V_7;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_114;
		memset((&L_114), 0, sizeof(L_114));
		Decimal__ctor_m3C20B602B540FD08434894065D20BDBA60FF79BC((&L_114), ((int32_t)-2147483648LL), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		bool L_115;
		L_115 = Decimal_op_GreaterThanOrEqual_m5A41C18955592447AE1A4C61575AF1BB3FB111A4(L_113, L_114, /*hidden argument*/NULL);
		if (!L_115)
		{
			goto IL_0343;
		}
	}
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_116 = V_7;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_117;
		memset((&L_117), 0, sizeof(L_117));
		Decimal__ctor_m3C20B602B540FD08434894065D20BDBA60FF79BC((&L_117), ((int32_t)2147483647LL), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		bool L_118;
		L_118 = Decimal_op_LessThanOrEqual_m28805548C35DAB5E7431BD7260367074B929B1A8(L_116, L_117, /*hidden argument*/NULL);
		if (!L_118)
		{
			goto IL_0343;
		}
	}
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_119 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		int32_t L_120;
		L_120 = Decimal_op_Explicit_m2B2A60437392A75F80B56C5C53CA06B50F7F9D3E(L_119, /*hidden argument*/NULL);
		int32_t L_121 = L_120;
		RuntimeObject * L_122 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_121);
		return L_122;
	}

IL_0343:
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_123 = V_7;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_124;
		memset((&L_124), 0, sizeof(L_124));
		Decimal__ctor_m145E08923E726750B62B4CB80C5A758ED3A4669C((&L_124), ((int64_t)(std::numeric_limits<int64_t>::min)()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		bool L_125;
		L_125 = Decimal_op_GreaterThanOrEqual_m5A41C18955592447AE1A4C61575AF1BB3FB111A4(L_123, L_124, /*hidden argument*/NULL);
		if (!L_125)
		{
			goto IL_037e;
		}
	}
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_126 = V_7;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_127;
		memset((&L_127), 0, sizeof(L_127));
		Decimal__ctor_m145E08923E726750B62B4CB80C5A758ED3A4669C((&L_127), ((int64_t)(std::numeric_limits<int64_t>::max)()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		bool L_128;
		L_128 = Decimal_op_LessThanOrEqual_m28805548C35DAB5E7431BD7260367074B929B1A8(L_126, L_127, /*hidden argument*/NULL);
		if (!L_128)
		{
			goto IL_037e;
		}
	}
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_129 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		int64_t L_130;
		L_130 = Decimal_op_Explicit_m0C0F3F7FB50EE1771393A9C22342734251EB0D74(L_129, /*hidden argument*/NULL);
		int64_t L_131 = L_130;
		RuntimeObject * L_132 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_131);
		return L_132;
	}

IL_037e:
	{
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_133 = V_7;
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_134 = L_133;
		RuntimeObject * L_135 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_134);
		return L_135;
	}

IL_0386:
	{
		Type_t * L_136 = ___expectedType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_137 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_138;
		L_138 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_137, /*hidden argument*/NULL);
		bool L_139;
		L_139 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_136, L_138, /*hidden argument*/NULL);
		if (!L_139)
		{
			goto IL_03af;
		}
	}
	{
		String_t* L_140 = V_6;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_141;
		L_141 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_142;
		L_142 = Decimal_Parse_mE9DEB6C845015FC1C2F1829D5CFC97403DCBC74B(L_140, ((int32_t)167), L_141, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_143 = L_142;
		RuntimeObject * L_144 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_143);
		return L_144;
	}

IL_03af:
	{
		String_t* L_145 = V_6;
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_146;
		L_146 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		double L_147;
		L_147 = Double_Parse_mD60850592CF629A16EA1ECC6834385E7DDAD239F(L_145, ((int32_t)167), L_146, /*hidden argument*/NULL);
		V_8 = L_147;
		Type_t * L_148 = ___expectedType0;
		bool L_149;
		L_149 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_148, NULL, /*hidden argument*/NULL);
		if (L_149)
		{
			goto IL_03e4;
		}
	}
	{
		JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * L_150 = __this->get_Settings_8();
		NullCheck(L_150);
		TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * L_151 = L_150->get_Coercion_0();
		Type_t * L_152 = ___expectedType0;
		double L_153 = V_8;
		double L_154 = L_153;
		RuntimeObject * L_155 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_154);
		NullCheck(L_151);
		RuntimeObject * L_156;
		L_156 = TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E(L_151, L_152, L_155, /*hidden argument*/NULL);
		return L_156;
	}

IL_03e4:
	{
		double L_157 = V_8;
		double L_158 = L_157;
		RuntimeObject * L_159 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_158);
		return L_159;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.JsonReader::Deserialize(System.String,System.Int32,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_Deserialize_m3F6CE2689D3C8C6AF61E51DF2C364D8A62A741D8 (String_t* ___value0, int32_t ___start1, Type_t * ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * L_1 = (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 *)il2cpp_codegen_object_new(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		JsonReader__ctor_m7EEDD0A2CC330921B039E7509AA492632D8E710D(L_1, L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___start1;
		Type_t * L_3 = ___type2;
		NullCheck(L_1);
		RuntimeObject * L_4;
		L_4 = JsonReader_Deserialize_m0EB128E34154DA0761816AEE6E8714122C46084C(L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_Tokenize_m9CD94D3D14E49165F866815A309ED73FA5AA0972 (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = JsonReader_Tokenize_mE7348B33149C9BE5160BEBAD1EFC58280336D55B(__this, (bool)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// Pathfinding.Serialization.JsonFx.JsonToken Pathfinding.Serialization.JsonFx.JsonReader::Tokenize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_Tokenize_mE7348B33149C9BE5160BEBAD1EFC58280336D55B (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, bool ___allowUnquotedString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A3368DAE484FE379E69F430C2A7AAC7B6DBF7C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97904970B3A68365EC4C5BC81CD8B049D3A81ECD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEC1B25E3E42C42165FD24BA61715FD024A24168);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	Il2CppChar V_3 = 0x0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_4 = NULL;
	{
		int32_t L_0 = __this->get_index_11();
		int32_t L_1 = __this->get_SourceLength_10();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_002e;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0010:
	{
		int32_t L_2 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		int32_t L_3 = __this->get_index_11();
		int32_t L_4 = __this->get_SourceLength_10();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}
	{
		return (int32_t)(0);
	}

IL_002e:
	{
		String_t* L_5 = __this->get_Source_9();
		int32_t L_6 = __this->get_index_11();
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_9 = __this->get_Source_9();
		int32_t L_10 = __this->get_index_11();
		NullCheck(L_9);
		Il2CppChar L_11;
		L_11 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(_stringLiteralBEC1B25E3E42C42165FD24BA61715FD024A24168);
		Il2CppChar L_12;
		L_12 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteralBEC1B25E3E42C42165FD24BA61715FD024A24168, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_021c;
		}
	}
	{
		int32_t L_13 = __this->get_index_11();
		int32_t L_14 = __this->get_SourceLength_10();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1))) < ((int32_t)L_14)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_15 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_16 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2D256627D0DEE6975EF4613B6CB13909F7659BF)), L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Tokenize_mE7348B33149C9BE5160BEBAD1EFC58280336D55B_RuntimeMethod_var)));
	}

IL_0088:
	{
		int32_t L_17 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		V_0 = (bool)0;
		String_t* L_18 = __this->get_Source_9();
		int32_t L_19 = __this->get_index_11();
		NullCheck(L_18);
		Il2CppChar L_20;
		L_20 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_18, L_19, /*hidden argument*/NULL);
		NullCheck(_stringLiteralBEC1B25E3E42C42165FD24BA61715FD024A24168);
		Il2CppChar L_21;
		L_21 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteralBEC1B25E3E42C42165FD24BA61715FD024A24168, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)L_21))))
		{
			goto IL_00ba;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00e9;
	}

IL_00ba:
	{
		String_t* L_22 = __this->get_Source_9();
		int32_t L_23 = __this->get_index_11();
		NullCheck(L_22);
		Il2CppChar L_24;
		L_24 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_22, L_23, /*hidden argument*/NULL);
		NullCheck(_stringLiteral1A3368DAE484FE379E69F430C2A7AAC7B6DBF7C3);
		Il2CppChar L_25;
		L_25 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteral1A3368DAE484FE379E69F430C2A7AAC7B6DBF7C3, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_24) == ((int32_t)L_25)))
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_26 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_27 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4941F27CECCAED86C206C63E64FEE85A45B8B1ED)), L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Tokenize_mE7348B33149C9BE5160BEBAD1EFC58280336D55B_RuntimeMethod_var)));
	}

IL_00e9:
	{
		int32_t L_28 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		bool L_29 = V_0;
		if (!L_29)
		{
			goto IL_01c6;
		}
	}
	{
		int32_t L_30 = __this->get_index_11();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)2));
		int32_t L_31 = __this->get_index_11();
		int32_t L_32 = __this->get_SourceLength_10();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1))) < ((int32_t)L_32)))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_33 = V_1;
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_34 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF6EA462A42992F82724EAA46C35751CEBA493DB2)), L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Tokenize_mE7348B33149C9BE5160BEBAD1EFC58280336D55B_RuntimeMethod_var)));
	}

IL_0122:
	{
		int32_t L_35 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
		int32_t L_36 = __this->get_index_11();
		int32_t L_37 = __this->get_SourceLength_10();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1))) < ((int32_t)L_37)))
		{
			goto IL_014c;
		}
	}
	{
		int32_t L_38 = V_1;
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_39 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF6EA462A42992F82724EAA46C35751CEBA493DB2)), L_38, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Tokenize_mE7348B33149C9BE5160BEBAD1EFC58280336D55B_RuntimeMethod_var)));
	}

IL_014c:
	{
		String_t* L_40 = __this->get_Source_9();
		int32_t L_41 = __this->get_index_11();
		NullCheck(L_40);
		Il2CppChar L_42;
		L_42 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_40, L_41, /*hidden argument*/NULL);
		NullCheck(_stringLiteral97904970B3A68365EC4C5BC81CD8B049D3A81ECD);
		Il2CppChar L_43;
		L_43 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteral97904970B3A68365EC4C5BC81CD8B049D3A81ECD, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)L_43))))
		{
			goto IL_0122;
		}
	}
	{
		String_t* L_44 = __this->get_Source_9();
		int32_t L_45 = __this->get_index_11();
		NullCheck(L_44);
		Il2CppChar L_46;
		L_46 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_44, ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(_stringLiteral97904970B3A68365EC4C5BC81CD8B049D3A81ECD);
		Il2CppChar L_47;
		L_47 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteral97904970B3A68365EC4C5BC81CD8B049D3A81ECD, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_46) == ((uint32_t)L_47))))
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_48 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)2)));
		int32_t L_49 = __this->get_index_11();
		int32_t L_50 = __this->get_SourceLength_10();
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0204;
		}
	}
	{
		return (int32_t)(0);
	}

IL_01a8:
	{
		int32_t L_51 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1)));
		int32_t L_52 = __this->get_index_11();
		int32_t L_53 = __this->get_SourceLength_10();
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_01c6;
		}
	}
	{
		return (int32_t)(0);
	}

IL_01c6:
	{
		String_t* L_54 = __this->get_Source_9();
		int32_t L_55 = __this->get_index_11();
		NullCheck(L_54);
		Il2CppChar L_56;
		L_56 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_54, L_55, /*hidden argument*/NULL);
		NullCheck(_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		int32_t L_57;
		L_57 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, L_56, /*hidden argument*/NULL);
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_01a8;
		}
	}
	{
		goto IL_0204;
	}

IL_01e6:
	{
		int32_t L_58 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)1)));
		int32_t L_59 = __this->get_index_11();
		int32_t L_60 = __this->get_SourceLength_10();
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_0204;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0204:
	{
		String_t* L_61 = __this->get_Source_9();
		int32_t L_62 = __this->get_index_11();
		NullCheck(L_61);
		Il2CppChar L_63;
		L_63 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_61, L_62, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_64;
		L_64 = Char_IsWhiteSpace_m99A5E1BE1EB9F17EA530A67A607DA8C260BCBF99(L_63, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_01e6;
		}
	}

IL_021c:
	{
		String_t* L_65 = __this->get_Source_9();
		int32_t L_66 = __this->get_index_11();
		NullCheck(L_65);
		Il2CppChar L_67;
		L_67 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_65, L_66, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_024f;
		}
	}
	{
		int32_t L_68 = __this->get_index_11();
		__this->set_index_11(((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)1)));
		int32_t L_69 = __this->get_index_11();
		int32_t L_70 = __this->get_SourceLength_10();
		if ((((int32_t)L_69) < ((int32_t)L_70)))
		{
			goto IL_024f;
		}
	}
	{
		return (int32_t)(0);
	}

IL_024f:
	{
		String_t* L_71 = __this->get_Source_9();
		int32_t L_72 = __this->get_index_11();
		NullCheck(L_71);
		Il2CppChar L_73;
		L_73 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_71, L_72, /*hidden argument*/NULL);
		V_3 = L_73;
		Il2CppChar L_74 = V_3;
		if ((((int32_t)L_74) > ((int32_t)((int32_t)44))))
		{
			goto IL_0277;
		}
	}
	{
		Il2CppChar L_75 = V_3;
		if ((((int32_t)L_75) == ((int32_t)((int32_t)34))))
		{
			goto IL_02b4;
		}
	}
	{
		Il2CppChar L_76 = V_3;
		if ((((int32_t)L_76) == ((int32_t)((int32_t)39))))
		{
			goto IL_02b4;
		}
	}
	{
		Il2CppChar L_77 = V_3;
		if ((((int32_t)L_77) == ((int32_t)((int32_t)44))))
		{
			goto IL_02b7;
		}
	}
	{
		goto IL_02bd;
	}

IL_0277:
	{
		Il2CppChar L_78 = V_3;
		if ((((int32_t)L_78) == ((int32_t)((int32_t)58))))
		{
			goto IL_02ba;
		}
	}
	{
		Il2CppChar L_79 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_79, (int32_t)((int32_t)91))))
		{
			case 0:
			{
				goto IL_02a8;
			}
			case 1:
			{
				goto IL_02bd;
			}
			case 2:
			{
				goto IL_02ab;
			}
		}
	}
	{
		Il2CppChar L_80 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)((int32_t)123))))
		{
			case 0:
			{
				goto IL_02ae;
			}
			case 1:
			{
				goto IL_02bd;
			}
			case 2:
			{
				goto IL_02b1;
			}
		}
	}
	{
		goto IL_02bd;
	}

IL_02a8:
	{
		return (int32_t)(((int32_t)10));
	}

IL_02ab:
	{
		return (int32_t)(((int32_t)11));
	}

IL_02ae:
	{
		return (int32_t)(((int32_t)12));
	}

IL_02b1:
	{
		return (int32_t)(((int32_t)13));
	}

IL_02b4:
	{
		return (int32_t)(((int32_t)9));
	}

IL_02b7:
	{
		return (int32_t)(((int32_t)15));
	}

IL_02ba:
	{
		return (int32_t)(((int32_t)14));
	}

IL_02bd:
	{
		String_t* L_81 = __this->get_Source_9();
		int32_t L_82 = __this->get_index_11();
		NullCheck(L_81);
		Il2CppChar L_83;
		L_83 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_81, L_82, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_84;
		L_84 = Char_IsDigit_mC19135099993954C820E030363B943034575F504(L_83, /*hidden argument*/NULL);
		if (L_84)
		{
			goto IL_0314;
		}
	}
	{
		String_t* L_85 = __this->get_Source_9();
		int32_t L_86 = __this->get_index_11();
		NullCheck(L_85);
		Il2CppChar L_87;
		L_87 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_85, L_86, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_87) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0316;
		}
	}
	{
		int32_t L_88 = __this->get_index_11();
		int32_t L_89 = __this->get_SourceLength_10();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1))) >= ((int32_t)L_89)))
		{
			goto IL_0316;
		}
	}
	{
		String_t* L_90 = __this->get_Source_9();
		int32_t L_91 = __this->get_index_11();
		NullCheck(L_90);
		Il2CppChar L_92;
		L_92 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_90, ((int32_t)il2cpp_codegen_add((int32_t)L_91, (int32_t)1)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = Char_IsDigit_mC19135099993954C820E030363B943034575F504(L_92, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_0316;
		}
	}

IL_0314:
	{
		return (int32_t)(8);
	}

IL_0316:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_94 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralFalse_0();
		bool L_95;
		L_95 = JsonReader_MatchLiteral_m76329B85F15E7B34124BDFF441AAB913B8CB9A3C(__this, L_94, /*hidden argument*/NULL);
		if (!L_95)
		{
			goto IL_0325;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0325:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_96 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralTrue_1();
		bool L_97;
		L_97 = JsonReader_MatchLiteral_m76329B85F15E7B34124BDFF441AAB913B8CB9A3C(__this, L_96, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_0334;
		}
	}
	{
		return (int32_t)(4);
	}

IL_0334:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_98 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralNull_2();
		bool L_99;
		L_99 = JsonReader_MatchLiteral_m76329B85F15E7B34124BDFF441AAB913B8CB9A3C(__this, L_98, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_0343;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0343:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_100 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralNotANumber_4();
		bool L_101;
		L_101 = JsonReader_MatchLiteral_m76329B85F15E7B34124BDFF441AAB913B8CB9A3C(__this, L_100, /*hidden argument*/NULL);
		if (!L_101)
		{
			goto IL_0352;
		}
	}
	{
		return (int32_t)(5);
	}

IL_0352:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_102 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralPositiveInfinity_5();
		bool L_103;
		L_103 = JsonReader_MatchLiteral_m76329B85F15E7B34124BDFF441AAB913B8CB9A3C(__this, L_102, /*hidden argument*/NULL);
		if (!L_103)
		{
			goto IL_0361;
		}
	}
	{
		return (int32_t)(6);
	}

IL_0361:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_104 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralNegativeInfinity_6();
		bool L_105;
		L_105 = JsonReader_MatchLiteral_m76329B85F15E7B34124BDFF441AAB913B8CB9A3C(__this, L_104, /*hidden argument*/NULL);
		if (!L_105)
		{
			goto IL_0370;
		}
	}
	{
		return (int32_t)(7);
	}

IL_0370:
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		String_t* L_106 = ((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->get_LiteralUndefined_3();
		bool L_107;
		L_107 = JsonReader_MatchLiteral_m76329B85F15E7B34124BDFF441AAB913B8CB9A3C(__this, L_106, /*hidden argument*/NULL);
		if (!L_107)
		{
			goto IL_037f;
		}
	}
	{
		return (int32_t)(1);
	}

IL_037f:
	{
		bool L_108 = ___allowUnquotedString0;
		if (!L_108)
		{
			goto IL_0385;
		}
	}
	{
		return (int32_t)(((int32_t)16));
	}

IL_0385:
	{
		String_t* L_109 = __this->get_Source_9();
		int32_t L_110 = __this->get_index_11();
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var)));
		int32_t L_111;
		L_111 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_110, (int32_t)5)), /*hidden argument*/NULL);
		int32_t L_112 = __this->get_SourceLength_10();
		int32_t L_113 = __this->get_index_11();
		int32_t L_114;
		L_114 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_112, (int32_t)L_113)), (int32_t)1)), ((int32_t)20), /*hidden argument*/NULL);
		NullCheck(L_109);
		String_t* L_115;
		L_115 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_109, L_111, L_114, /*hidden argument*/NULL);
		V_2 = L_115;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_116 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)((int32_t)9));
		V_4 = L_116;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_117 = V_4;
		NullCheck(L_117);
		ArrayElementTypeCheck (L_117, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33DF2C4AEDE75FD00D11899B29D6151E7E5EC562)));
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33DF2C4AEDE75FD00D11899B29D6151E7E5EC562)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_118 = V_4;
		String_t* L_119 = __this->get_Source_9();
		int32_t L_120 = __this->get_index_11();
		NullCheck(L_119);
		Il2CppChar L_121;
		L_121 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_119, L_120, /*hidden argument*/NULL);
		Il2CppChar L_122 = L_121;
		RuntimeObject * L_123 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)), &L_122);
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_123);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_123);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_124 = V_4;
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C)));
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85E4DD1872CA9889B201BF423506257FB4DB467C)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_125 = V_4;
		String_t* L_126 = __this->get_Source_9();
		int32_t L_127 = __this->get_index_11();
		NullCheck(L_126);
		Il2CppChar L_128;
		L_128 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_126, L_127, /*hidden argument*/NULL);
		int32_t L_129 = ((int32_t)L_128);
		RuntimeObject * L_130 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_129);
		NullCheck(L_125);
		ArrayElementTypeCheck (L_125, L_130);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_130);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_131 = V_4;
		NullCheck(L_131);
		ArrayElementTypeCheck (L_131, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral767EA09B5EB3270D152C90E593B45D31C8B05123)));
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral767EA09B5EB3270D152C90E593B45D31C8B05123)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_132 = V_4;
		int32_t L_133 = __this->get_index_11();
		int32_t L_134 = L_133;
		RuntimeObject * L_135 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_134);
		NullCheck(L_132);
		ArrayElementTypeCheck (L_132, L_135);
		(L_132)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_135);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_136 = V_4;
		NullCheck(L_136);
		ArrayElementTypeCheck (L_136, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4E5B505467C549DAFBE374797F3373943CC8D1E)));
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA4E5B505467C549DAFBE374797F3373943CC8D1E)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_137 = V_4;
		String_t* L_138 = V_2;
		NullCheck(L_137);
		ArrayElementTypeCheck (L_137, L_138);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_138);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_139 = V_4;
		NullCheck(L_139);
		ArrayElementTypeCheck (L_139, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)));
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_140 = V_4;
		String_t* L_141;
		L_141 = String_Concat_m6F0ED62933448F8B944E52872E1EE86F6705D306(L_140, /*hidden argument*/NULL);
		int32_t L_142 = __this->get_index_11();
		JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * L_143 = (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B_il2cpp_TypeInfo_var)));
		JsonDeserializationException__ctor_mF533C31E62207AB1B202776DABB17C6CEA4CE980(L_143, L_141, L_142, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Tokenize_mE7348B33149C9BE5160BEBAD1EFC58280336D55B_RuntimeMethod_var)));
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReader::MatchLiteral(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_MatchLiteral_m76329B85F15E7B34124BDFF441AAB913B8CB9A3C (JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04 * __this, String_t* ___literal0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___literal0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_index_11();
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_SourceLength_10();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3))) <= ((int32_t)L_4)))
		{
			goto IL_0019;
		}
	}
	{
		return (bool)0;
	}

IL_0019:
	{
		V_1 = 0;
		goto IL_003f;
	}

IL_001d:
	{
		String_t* L_5 = ___literal0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, L_6, /*hidden argument*/NULL);
		String_t* L_8 = __this->get_Source_9();
		int32_t L_9 = __this->get_index_11();
		int32_t L_10 = V_1;
		NullCheck(L_8);
		Il2CppChar L_11;
		L_11 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_003b:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003f:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__cctor_m00A7C4AA7AF5FD935783CEE5139640CA08AEDD9D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B22DE498A248A5D137E9D01CFAA089B3CA784EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F45AE1F6DDDD4F0B29149B9126317C62C36E5A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70EEFAA66DA29FAC9E1A81759A5984878FB67ED3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA8C44D8001E19877B2F2B86EC61A60048AF615);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6EE62DB00262C920020AFD07565C53A04BC896D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->set_LiteralFalse_0(_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->set_LiteralTrue_1(_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->set_LiteralNull_2(_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->set_LiteralUndefined_3(_stringLiteral6F45AE1F6DDDD4F0B29149B9126317C62C36E5A5);
		((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->set_LiteralNotANumber_4(_stringLiteral9CA8C44D8001E19877B2F2B86EC61A60048AF615);
		((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->set_LiteralPositiveInfinity_5(_stringLiteral5B22DE498A248A5D137E9D01CFAA089B3CA784EA);
		((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->set_LiteralNegativeInfinity_6(_stringLiteral70EEFAA66DA29FAC9E1A81759A5984878FB67ED3);
		((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->set_TypeGenericIDictionary_7(_stringLiteralB6EE62DB00262C920020AFD07565C53A04BC896D);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		((JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t181CC01C80AB6822FB2DC15EFF22625FCE17EB04_il2cpp_TypeInfo_var))->set_builder_18(L_0);
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
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_HandleCyclicReferences()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReaderSettings_get_HandleCyclicReferences_mAC59C18B565E5AE845F3F7969644F1066ADD1A93 (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHandleCyclicReferencesU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::get_AllowUnquotedObjectKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReaderSettings_get_AllowUnquotedObjectKeys_m95DD95963F70BA049021A14F6E253C7DCEF8284E (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_allowUnquotedObjectKeys_1();
		return L_0;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.JsonReaderSettings::IsTypeHintName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReaderSettings_IsTypeHintName_mF55B2C2E0ABF9F104F917DC5FCC952CC01AFCD50 (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = __this->get_typeHintName_2();
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_4;
		L_4 = StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline(/*hidden argument*/NULL);
		String_t* L_5 = __this->get_typeHintName_2();
		String_t* L_6 = ___name0;
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(11 /* System.Boolean System.StringComparer::Equals(System.String,System.String) */, L_4, L_5, L_6);
		return L_7;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonReaderSettings::GetConverter(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE * JsonReaderSettings_GetConverter_m7299B2FFE6CF93A59DFA47E7F2F39DC6DA98FCBD (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDB2BAD2495D3C5B613157E5390B579F1DCF987CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4E714CAEC2C0511112DA7FB82AD2649DEC66AE95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 * L_0 = __this->get_converters_3();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE * L_2;
		L_2 = List_1_get_Item_m4E714CAEC2C0511112DA7FB82AD2649DEC66AE95_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m4E714CAEC2C0511112DA7FB82AD2649DEC66AE95_RuntimeMethod_var);
		Type_t * L_3 = ___type0;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtFuncInvoker1< bool, Type_t * >::Invoke(4 /* System.Boolean Pathfinding.Serialization.JsonFx.JsonConverter::CanConvert(System.Type) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 * L_5 = __this->get_converters_3();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE * L_7;
		L_7 = List_1_get_Item_m4E714CAEC2C0511112DA7FB82AD2649DEC66AE95_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m4E714CAEC2C0511112DA7FB82AD2649DEC66AE95_RuntimeMethod_var);
		return L_7;
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0029:
	{
		int32_t L_9 = V_0;
		List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 * L_10 = __this->get_converters_3();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_mDB2BAD2495D3C5B613157E5390B579F1DCF987CB_inline(L_10, /*hidden argument*/List_1_get_Count_mDB2BAD2495D3C5B613157E5390B579F1DCF987CB_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		return (JsonConverter_tEEE877F3017E6709DBD79FE4E1FEE3FFEB86A3DE *)NULL;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonReaderSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReaderSettings__ctor_mE9A0BF84BF1E3A06DE17F12995A37796B8EA4B25 (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6D992560ED4AE5797589B37BEB92C75888B02B5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * L_0 = (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 *)il2cpp_codegen_object_new(TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324_il2cpp_TypeInfo_var);
		TypeCoercionUtility__ctor_mF0DC0E8046282F40CB1AA68D39DF24CD94006D45(L_0, /*hidden argument*/NULL);
		__this->set_Coercion_0(L_0);
		List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 * L_1 = (List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090 *)il2cpp_codegen_object_new(List_1_tA3A2AB7AFCA71F4747583F02A40612638A780090_il2cpp_TypeInfo_var);
		List_1__ctor_m6D992560ED4AE5797589B37BEB92C75888B02B5F(L_1, /*hidden argument*/List_1__ctor_m6D992560ED4AE5797589B37BEB92C75888B02B5F_RuntimeMethod_var);
		__this->set_converters_3(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Pathfinding.Serialization.JsonFx.JsonSerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializationException__ctor_m6F98CEBD3905761D1961DB50F3DBCF51F1422CC0 (JsonSerializationException_t30AA11A4AC9A59D2E65397E7D4FE7F3B77844329 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(__this, L_0, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTypeCoercionException__ctor_mB072274458278B3220CFDC25E3FB842E324ACBF3 (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.JsonTypeCoercionException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTypeCoercionException__ctor_m23C329A29DF7997EE994DBBF100AADAA0260024A (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerException1;
		ArgumentException__ctor_m2D82228EC0D314063BFC7BB308A43927D1D76852(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Boolean Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::TryGetValueFromID(System.Int32,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceHandlerReader_TryGetValueFromID_mC1AD68F65F5F0ABDAFDAD0C434840AD4B549D3F3 (ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * __this, int32_t ___id0, RuntimeObject ** ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = __this->get_mapping_0();
		int32_t L_1 = ___id0;
		RuntimeObject ** L_2 = ___result1;
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E(L_0, L_1, (RuntimeObject **)L_2, /*hidden argument*/Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedSetter(System.Int32,System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceHandlerReader_AddDelayedSetter_mDFF6E2C00EED5697BF85229F68BC2E6312CCE335 (ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * __this, int32_t ___id0, MemberInfo_t * ___memberInfo1, RuntimeObject * ___val2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB8FB105C664FCA3453BDA036CD907A57CA32DAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB5265712D80F95800619202B962EADA049C57773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1CD9C325D5C5E995B369D0BFA14E286BB884BA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m66410DB8E9889210830D237D0C50C0C4283BB5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC5617239D741910561908C246B37986FF4CFEE1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45CF9D7F9A41567CF92F2AF2160E0B139FEB6652_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___val2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05FC263DEDBF63BA3F19BD67B2BC8391F38B1733)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReferenceHandlerReader_AddDelayedSetter_mDFF6E2C00EED5697BF85229F68BC2E6312CCE335_RuntimeMethod_var)));
	}

IL_000e:
	{
		Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * L_2 = __this->get_delayedSetters_1();
		int32_t L_3 = ___id0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mB8FB105C664FCA3453BDA036CD907A57CA32DAF6(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_mB8FB105C664FCA3453BDA036CD907A57CA32DAF6_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * L_5 = __this->get_delayedSetters_1();
		int32_t L_6 = ___id0;
		List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * L_7 = (List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 *)il2cpp_codegen_object_new(List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05_il2cpp_TypeInfo_var);
		List_1__ctor_m45CF9D7F9A41567CF92F2AF2160E0B139FEB6652(L_7, /*hidden argument*/List_1__ctor_m45CF9D7F9A41567CF92F2AF2160E0B139FEB6652_RuntimeMethod_var);
		NullCheck(L_5);
		Dictionary_2_set_Item_m1CD9C325D5C5E995B369D0BFA14E286BB884BA48(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m1CD9C325D5C5E995B369D0BFA14E286BB884BA48_RuntimeMethod_var);
	}

IL_002d:
	{
		Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * L_8 = __this->get_delayedSetters_1();
		int32_t L_9 = ___id0;
		NullCheck(L_8);
		List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * L_10;
		L_10 = Dictionary_2_get_Item_mB5265712D80F95800619202B962EADA049C57773(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_mB5265712D80F95800619202B962EADA049C57773_RuntimeMethod_var);
		MemberInfo_t * L_11 = ___memberInfo1;
		RuntimeObject * L_12 = ___val2;
		KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023  L_13;
		memset((&L_13), 0, sizeof(L_13));
		KeyValuePair_2__ctor_m66410DB8E9889210830D237D0C50C0C4283BB5A4((&L_13), L_11, L_12, /*hidden argument*/KeyValuePair_2__ctor_m66410DB8E9889210830D237D0C50C0C4283BB5A4_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_Add_mC5617239D741910561908C246B37986FF4CFEE1A(L_10, L_13, /*hidden argument*/List_1_Add_mC5617239D741910561908C246B37986FF4CFEE1A_RuntimeMethod_var);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedSetter(System.Int32,System.Object,System.Reflection.MemberInfo,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceHandlerReader_AddDelayedSetter_m835D5E6B07055902CF1588ACC03227164A57FE42 (ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * __this, int32_t ___id0, RuntimeObject * ___parentClass1, MemberInfo_t * ___child2, MemberInfo_t * ___memberInfo3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m086D1BD2B707DBA7E068746EEC06E74CBBE989BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m95AF254A5360A04671D7D03CC8CBDF1B171BC4D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m646BF45C644F9A1B26BB9F7FEFDB73D896A9405E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE61D67F4C6136B0EED0023581D4F3220F6C58077_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA54F47905B0601AC44193CFC9D59B9B29A317ED6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___parentClass1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral05FC263DEDBF63BA3F19BD67B2BC8391F38B1733)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReferenceHandlerReader_AddDelayedSetter_m835D5E6B07055902CF1588ACC03227164A57FE42_RuntimeMethod_var)));
	}

IL_000e:
	{
		Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E * L_2 = __this->get_deepDelayedSetters_4();
		int32_t L_3 = ___id0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m086D1BD2B707DBA7E068746EEC06E74CBBE989BB(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m086D1BD2B707DBA7E068746EEC06E74CBBE989BB_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E * L_5 = __this->get_deepDelayedSetters_4();
		int32_t L_6 = ___id0;
		List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * L_7 = (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC *)il2cpp_codegen_object_new(List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC_il2cpp_TypeInfo_var);
		List_1__ctor_mA54F47905B0601AC44193CFC9D59B9B29A317ED6(L_7, /*hidden argument*/List_1__ctor_mA54F47905B0601AC44193CFC9D59B9B29A317ED6_RuntimeMethod_var);
		NullCheck(L_5);
		Dictionary_2_set_Item_m646BF45C644F9A1B26BB9F7FEFDB73D896A9405E(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_m646BF45C644F9A1B26BB9F7FEFDB73D896A9405E_RuntimeMethod_var);
	}

IL_002d:
	{
		Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E * L_8 = __this->get_deepDelayedSetters_4();
		int32_t L_9 = ___id0;
		NullCheck(L_8);
		List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * L_10;
		L_10 = Dictionary_2_get_Item_m95AF254A5360A04671D7D03CC8CBDF1B171BC4D9(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_m95AF254A5360A04671D7D03CC8CBDF1B171BC4D9_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262 ));
		RuntimeObject * L_11 = ___parentClass1;
		(&V_0)->set_parentClass_0(L_11);
		MemberInfo_t * L_12 = ___child2;
		(&V_0)->set_child_1(L_12);
		MemberInfo_t * L_13 = ___memberInfo3;
		(&V_0)->set_member_2(L_13);
		DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  L_14 = V_0;
		NullCheck(L_10);
		List_1_Add_mE61D67F4C6136B0EED0023581D4F3220F6C58077(L_10, L_14, /*hidden argument*/List_1_Add_mE61D67F4C6136B0EED0023581D4F3220F6C58077_RuntimeMethod_var);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedDictionarySetter(System.Int32,System.Collections.IDictionary,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceHandlerReader_AddDelayedDictionarySetter_m3E8ECEE2E3D6324503B4C91F9D1A2ADBC698F0BF (ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * __this, int32_t ___id0, RuntimeObject* ___dict1, String_t* ___key2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC112CC3E644509CC16F8D27B5DF4BA019723FC78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7ACC429A18952CD2D520C6B08E302FCEB9CECA05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m5FE08B9838245499C5C1EB40D32157975823D2B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m10A9E384657138ADB1327790F29DFF1B28D97B9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD4717B35B78B9533329DF0029EA737A55EB14A87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5FBE69A9CF54F876B213F267747B60A042A2BF2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___key2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReferenceHandlerReader_AddDelayedDictionarySetter_m3E8ECEE2E3D6324503B4C91F9D1A2ADBC698F0BF_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___dict1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral807ECAB7EBAECB7C852A1324352B400DE8C8325F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReferenceHandlerReader_AddDelayedDictionarySetter_m3E8ECEE2E3D6324503B4C91F9D1A2ADBC698F0BF_RuntimeMethod_var)));
	}

IL_001c:
	{
		Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * L_4 = __this->get_delayedDictSetters_2();
		int32_t L_5 = ___id0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_mC112CC3E644509CC16F8D27B5DF4BA019723FC78(L_4, L_5, /*hidden argument*/Dictionary_2_ContainsKey_mC112CC3E644509CC16F8D27B5DF4BA019723FC78_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_003b;
		}
	}
	{
		Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * L_7 = __this->get_delayedDictSetters_2();
		int32_t L_8 = ___id0;
		List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * L_9 = (List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF *)il2cpp_codegen_object_new(List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF_il2cpp_TypeInfo_var);
		List_1__ctor_m5FBE69A9CF54F876B213F267747B60A042A2BF2D(L_9, /*hidden argument*/List_1__ctor_m5FBE69A9CF54F876B213F267747B60A042A2BF2D_RuntimeMethod_var);
		NullCheck(L_7);
		Dictionary_2_set_Item_m5FE08B9838245499C5C1EB40D32157975823D2B0(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_set_Item_m5FE08B9838245499C5C1EB40D32157975823D2B0_RuntimeMethod_var);
	}

IL_003b:
	{
		Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * L_10 = __this->get_delayedDictSetters_2();
		int32_t L_11 = ___id0;
		NullCheck(L_10);
		List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * L_12;
		L_12 = Dictionary_2_get_Item_m7ACC429A18952CD2D520C6B08E302FCEB9CECA05(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_m7ACC429A18952CD2D520C6B08E302FCEB9CECA05_RuntimeMethod_var);
		String_t* L_13 = ___key2;
		RuntimeObject* L_14 = ___dict1;
		KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB  L_15;
		memset((&L_15), 0, sizeof(L_15));
		KeyValuePair_2__ctor_m10A9E384657138ADB1327790F29DFF1B28D97B9C((&L_15), L_13, L_14, /*hidden argument*/KeyValuePair_2__ctor_m10A9E384657138ADB1327790F29DFF1B28D97B9C_RuntimeMethod_var);
		NullCheck(L_12);
		List_1_Add_mD4717B35B78B9533329DF0029EA737A55EB14A87(L_12, L_15, /*hidden argument*/List_1_Add_mD4717B35B78B9533329DF0029EA737A55EB14A87_RuntimeMethod_var);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::AddDelayedListSetter(System.Int32,System.Collections.IList,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceHandlerReader_AddDelayedListSetter_mCAEFB2C596DC7C87EA07EA46B3C8FA968C85A4D0 (ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * __this, int32_t ___id0, RuntimeObject* ___list1, int32_t ___index2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m99F0D850FE3B2DECC9C565302955AFE1490A7E44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD38E439615B1E89B4B6401E00B7229DA92B7A1BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDEC5DE1ECB3C3AB88643EFC7C24D0231E9A58712_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mB1AA9D9A108A0FDC33C3778D599D98E70C97EB85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m70662DB9F27C0BDD77432538DCCB0438B1E70C42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4A286B11AFB3D77A2092A5A65B2EB66F4DC39294_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09A64D9E437F063360CB595BAD6247536D11B374_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___list1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReferenceHandlerReader_AddDelayedListSetter_mCAEFB2C596DC7C87EA07EA46B3C8FA968C85A4D0_RuntimeMethod_var)));
	}

IL_000e:
	{
		Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * L_2 = __this->get_delayedListSetters_3();
		int32_t L_3 = ___id0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m99F0D850FE3B2DECC9C565302955AFE1490A7E44(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_m99F0D850FE3B2DECC9C565302955AFE1490A7E44_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002d;
		}
	}
	{
		Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * L_5 = __this->get_delayedListSetters_3();
		int32_t L_6 = ___id0;
		List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * L_7 = (List_1_t09A64D9E437F063360CB595BAD6247536D11B374 *)il2cpp_codegen_object_new(List_1_t09A64D9E437F063360CB595BAD6247536D11B374_il2cpp_TypeInfo_var);
		List_1__ctor_m4A286B11AFB3D77A2092A5A65B2EB66F4DC39294(L_7, /*hidden argument*/List_1__ctor_m4A286B11AFB3D77A2092A5A65B2EB66F4DC39294_RuntimeMethod_var);
		NullCheck(L_5);
		Dictionary_2_set_Item_mDEC5DE1ECB3C3AB88643EFC7C24D0231E9A58712(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_set_Item_mDEC5DE1ECB3C3AB88643EFC7C24D0231E9A58712_RuntimeMethod_var);
	}

IL_002d:
	{
		Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * L_8 = __this->get_delayedListSetters_3();
		int32_t L_9 = ___id0;
		NullCheck(L_8);
		List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * L_10;
		L_10 = Dictionary_2_get_Item_mD38E439615B1E89B4B6401E00B7229DA92B7A1BA(L_8, L_9, /*hidden argument*/Dictionary_2_get_Item_mD38E439615B1E89B4B6401E00B7229DA92B7A1BA_RuntimeMethod_var);
		int32_t L_11 = ___index2;
		RuntimeObject* L_12 = ___list1;
		KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED  L_13;
		memset((&L_13), 0, sizeof(L_13));
		KeyValuePair_2__ctor_mB1AA9D9A108A0FDC33C3778D599D98E70C97EB85((&L_13), L_11, L_12, /*hidden argument*/KeyValuePair_2__ctor_mB1AA9D9A108A0FDC33C3778D599D98E70C97EB85_RuntimeMethod_var);
		NullCheck(L_10);
		List_1_Add_m70662DB9F27C0BDD77432538DCCB0438B1E70C42(L_10, L_13, /*hidden argument*/List_1_Add_m70662DB9F27C0BDD77432538DCCB0438B1E70C42_RuntimeMethod_var);
		return;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerReader::Set(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceHandlerReader_Set_m7BC475373BEF18890E3A8D65BE3013D29E2E09F9 (ReferenceHandlerReader_t76191991977D12A259A2E12C290FC1521E4368B3 * __this, int32_t ___id0, RuntimeObject * ___val1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m086D1BD2B707DBA7E068746EEC06E74CBBE989BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m99F0D850FE3B2DECC9C565302955AFE1490A7E44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mB8FB105C664FCA3453BDA036CD907A57CA32DAF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mC112CC3E644509CC16F8D27B5DF4BA019723FC78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m54A8DF575FAFF8B0FA9F714ECFF2F2AC222F1C0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mAC3A792F504A06162458084B639B9FDB5C265499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mF1389027CC6FAF5550C8D326D7F80B309C2E4985_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m7ACC429A18952CD2D520C6B08E302FCEB9CECA05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m95AF254A5360A04671D7D03CC8CBDF1B171BC4D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB5265712D80F95800619202B962EADA049C57773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD38E439615B1E89B4B6401E00B7229DA92B7A1BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA0FAD2D4503C56DA9DC3E9139CF096277068D211_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mBB69282F5538285975EB23BCA2595641255930A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mE381E43DD67F3565622F42212A979007B191ECD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2B010442FE5020DE938F890056BABD0986ECE976_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m6583FA6131280A3D9E743AC209EC305DAF9BA380_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m91B6E29B8D89D66FE2ABBA9A44B99078879399DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m04A04AB486705433C77A3706E9679B3A29AA1A94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD64522C65930DA02AC1A09ADBAB0A4F1641CBAFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE0E89071B73D5694BB7B0DAB08FC0B28731C73AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mE3A7FB05C3733B4170C10054B4FEE9DA00A33D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m06B1F50ABA78B2C06CE847731D472A86402FEDCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1E1BF095855D287C02F9C186F384A75D0EBFC436_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8994FFC7AE7DA2C1360413DBD15A4172FE89B39A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9C6D75878C3DE735D01021D433F01B792B89807E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1192BDBF73CA9A5DE28D8381F20144A3470E7D31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m368139A6A0CC1BDC74DE93631EA7DB3A46290369_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4FB4BBD57DC08E95768992566FD7250B785F0470_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD6184FABD3EB1F0BCB34079249503944C6A992A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * V_0 = NULL;
	int32_t V_1 = 0;
	MemberInfo_t * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * V_4 = NULL;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	RuntimeObject* V_11 = NULL;
	List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * V_12 = NULL;
	int32_t V_13 = 0;
	MemberInfo_t * V_14 = NULL;
	RuntimeObject * V_15 = NULL;
	RuntimeObject * V_16 = NULL;
	MemberInfo_t * V_17 = NULL;
	KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023  V_18;
	memset((&V_18), 0, sizeof(V_18));
	KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023  V_19;
	memset((&V_19), 0, sizeof(V_19));
	KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB  V_20;
	memset((&V_20), 0, sizeof(V_20));
	KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB  V_21;
	memset((&V_21), 0, sizeof(V_21));
	KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED  V_22;
	memset((&V_22), 0, sizeof(V_22));
	KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED  V_23;
	memset((&V_23), 0, sizeof(V_23));
	{
		Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * L_0 = __this->get_mapping_0();
		int32_t L_1 = ___id0;
		RuntimeObject * L_2 = ___val1;
		NullCheck(L_0);
		Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_RuntimeMethod_var);
		Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * L_3 = __this->get_delayedSetters_1();
		int32_t L_4 = ___id0;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_mB8FB105C664FCA3453BDA036CD907A57CA32DAF6(L_3, L_4, /*hidden argument*/Dictionary_2_ContainsKey_mB8FB105C664FCA3453BDA036CD907A57CA32DAF6_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_009e;
		}
	}
	{
		Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * L_6 = __this->get_delayedSetters_1();
		int32_t L_7 = ___id0;
		NullCheck(L_6);
		List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * L_8;
		L_8 = Dictionary_2_get_Item_mB5265712D80F95800619202B962EADA049C57773(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_mB5265712D80F95800619202B962EADA049C57773_RuntimeMethod_var);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0082;
	}

IL_002f:
	{
		List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023  L_11;
		L_11 = List_1_get_Item_m1192BDBF73CA9A5DE28D8381F20144A3470E7D31_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m1192BDBF73CA9A5DE28D8381F20144A3470E7D31_RuntimeMethod_var);
		V_18 = L_11;
		MemberInfo_t * L_12;
		L_12 = KeyValuePair_2_get_Key_mA0FAD2D4503C56DA9DC3E9139CF096277068D211_inline((KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023 *)(&V_18), /*hidden argument*/KeyValuePair_2_get_Key_mA0FAD2D4503C56DA9DC3E9139CF096277068D211_RuntimeMethod_var);
		V_2 = L_12;
		List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * L_13 = V_0;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023  L_15;
		L_15 = List_1_get_Item_m1192BDBF73CA9A5DE28D8381F20144A3470E7D31_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_m1192BDBF73CA9A5DE28D8381F20144A3470E7D31_RuntimeMethod_var);
		V_19 = L_15;
		RuntimeObject * L_16;
		L_16 = KeyValuePair_2_get_Value_m6583FA6131280A3D9E743AC209EC305DAF9BA380_inline((KeyValuePair_2_t88D27E2C4687C22D6CC9F345ADD0DC30DB1A9023 *)(&V_19), /*hidden argument*/KeyValuePair_2_get_Value_m6583FA6131280A3D9E743AC209EC305DAF9BA380_RuntimeMethod_var);
		V_3 = L_16;
		MemberInfo_t * L_17 = V_2;
		if (!((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_17, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0069;
		}
	}
	{
		MemberInfo_t * L_18 = V_2;
		RuntimeObject * L_19 = V_3;
		RuntimeObject * L_20 = ___val1;
		NullCheck(((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_18, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(29 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_18, PropertyInfo_t_il2cpp_TypeInfo_var)), L_19, L_20, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		goto IL_007e;
	}

IL_0069:
	{
		MemberInfo_t * L_21 = V_2;
		if (!((FieldInfo_t *)IsInstClass((RuntimeObject*)L_21, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_007e;
		}
	}
	{
		MemberInfo_t * L_22 = V_2;
		RuntimeObject * L_23 = V_3;
		RuntimeObject * L_24 = ___val1;
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_22, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_22, FieldInfo_t_il2cpp_TypeInfo_var)), L_23, L_24, /*hidden argument*/NULL);
	}

IL_007e:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0082:
	{
		int32_t L_26 = V_1;
		List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = List_1_get_Count_m1E1BF095855D287C02F9C186F384A75D0EBFC436_inline(L_27, /*hidden argument*/List_1_get_Count_m1E1BF095855D287C02F9C186F384A75D0EBFC436_RuntimeMethod_var);
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_002f;
		}
	}
	{
		List_1_tE1707504A33FAF186606F61CE6C63F7455F48E05 * L_29 = V_0;
		NullCheck(L_29);
		List_1_Clear_mE0E89071B73D5694BB7B0DAB08FC0B28731C73AE(L_29, /*hidden argument*/List_1_Clear_mE0E89071B73D5694BB7B0DAB08FC0B28731C73AE_RuntimeMethod_var);
		Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * L_30 = __this->get_delayedSetters_1();
		int32_t L_31 = ___id0;
		NullCheck(L_30);
		bool L_32;
		L_32 = Dictionary_2_Remove_mAC3A792F504A06162458084B639B9FDB5C265499(L_30, L_31, /*hidden argument*/Dictionary_2_Remove_mAC3A792F504A06162458084B639B9FDB5C265499_RuntimeMethod_var);
	}

IL_009e:
	{
		Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * L_33 = __this->get_delayedDictSetters_2();
		int32_t L_34 = ___id0;
		NullCheck(L_33);
		bool L_35;
		L_35 = Dictionary_2_ContainsKey_mC112CC3E644509CC16F8D27B5DF4BA019723FC78(L_33, L_34, /*hidden argument*/Dictionary_2_ContainsKey_mC112CC3E644509CC16F8D27B5DF4BA019723FC78_RuntimeMethod_var);
		if (!L_35)
		{
			goto IL_0116;
		}
	}
	{
		Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * L_36 = __this->get_delayedDictSetters_2();
		int32_t L_37 = ___id0;
		NullCheck(L_36);
		List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * L_38;
		L_38 = Dictionary_2_get_Item_m7ACC429A18952CD2D520C6B08E302FCEB9CECA05(L_36, L_37, /*hidden argument*/Dictionary_2_get_Item_m7ACC429A18952CD2D520C6B08E302FCEB9CECA05_RuntimeMethod_var);
		V_4 = L_38;
		V_5 = 0;
		goto IL_00f7;
	}

IL_00bf:
	{
		List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * L_39 = V_4;
		int32_t L_40 = V_5;
		NullCheck(L_39);
		KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB  L_41;
		L_41 = List_1_get_Item_m368139A6A0CC1BDC74DE93631EA7DB3A46290369_inline(L_39, L_40, /*hidden argument*/List_1_get_Item_m368139A6A0CC1BDC74DE93631EA7DB3A46290369_RuntimeMethod_var);
		V_20 = L_41;
		String_t* L_42;
		L_42 = KeyValuePair_2_get_Key_mBB69282F5538285975EB23BCA2595641255930A1_inline((KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB *)(&V_20), /*hidden argument*/KeyValuePair_2_get_Key_mBB69282F5538285975EB23BCA2595641255930A1_RuntimeMethod_var);
		V_6 = L_42;
		List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * L_43 = V_4;
		int32_t L_44 = V_5;
		NullCheck(L_43);
		KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB  L_45;
		L_45 = List_1_get_Item_m368139A6A0CC1BDC74DE93631EA7DB3A46290369_inline(L_43, L_44, /*hidden argument*/List_1_get_Item_m368139A6A0CC1BDC74DE93631EA7DB3A46290369_RuntimeMethod_var);
		V_21 = L_45;
		RuntimeObject* L_46;
		L_46 = KeyValuePair_2_get_Value_m2B010442FE5020DE938F890056BABD0986ECE976_inline((KeyValuePair_2_t48CB5EA45A07CF6D5A2C119F723276B2E1FC6ABB *)(&V_21), /*hidden argument*/KeyValuePair_2_get_Value_m2B010442FE5020DE938F890056BABD0986ECE976_RuntimeMethod_var);
		V_7 = L_46;
		RuntimeObject* L_47 = V_7;
		String_t* L_48 = V_6;
		RuntimeObject * L_49 = ___val1;
		NullCheck(L_47);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_47, L_48, L_49);
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00f7:
	{
		int32_t L_51 = V_5;
		List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * L_52 = V_4;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = List_1_get_Count_m06B1F50ABA78B2C06CE847731D472A86402FEDCF_inline(L_52, /*hidden argument*/List_1_get_Count_m06B1F50ABA78B2C06CE847731D472A86402FEDCF_RuntimeMethod_var);
		if ((((int32_t)L_51) < ((int32_t)L_53)))
		{
			goto IL_00bf;
		}
	}
	{
		List_1_t0BE4696AFA709CFA2B7EAB23AB25216113C80ACF * L_54 = V_4;
		NullCheck(L_54);
		List_1_Clear_mE3A7FB05C3733B4170C10054B4FEE9DA00A33D98(L_54, /*hidden argument*/List_1_Clear_mE3A7FB05C3733B4170C10054B4FEE9DA00A33D98_RuntimeMethod_var);
		Dictionary_2_tA28CEAA39455A21C2F96C6D2FCA794C0C28A8CAB * L_55 = __this->get_delayedDictSetters_2();
		int32_t L_56 = ___id0;
		NullCheck(L_55);
		bool L_57;
		L_57 = Dictionary_2_Remove_mF1389027CC6FAF5550C8D326D7F80B309C2E4985(L_55, L_56, /*hidden argument*/Dictionary_2_Remove_mF1389027CC6FAF5550C8D326D7F80B309C2E4985_RuntimeMethod_var);
	}

IL_0116:
	{
		Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * L_58 = __this->get_delayedListSetters_3();
		int32_t L_59 = ___id0;
		NullCheck(L_58);
		bool L_60;
		L_60 = Dictionary_2_ContainsKey_m99F0D850FE3B2DECC9C565302955AFE1490A7E44(L_58, L_59, /*hidden argument*/Dictionary_2_ContainsKey_m99F0D850FE3B2DECC9C565302955AFE1490A7E44_RuntimeMethod_var);
		if (!L_60)
		{
			goto IL_018e;
		}
	}
	{
		Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * L_61 = __this->get_delayedListSetters_3();
		int32_t L_62 = ___id0;
		NullCheck(L_61);
		List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * L_63;
		L_63 = Dictionary_2_get_Item_mD38E439615B1E89B4B6401E00B7229DA92B7A1BA(L_61, L_62, /*hidden argument*/Dictionary_2_get_Item_mD38E439615B1E89B4B6401E00B7229DA92B7A1BA_RuntimeMethod_var);
		V_8 = L_63;
		V_9 = 0;
		goto IL_016f;
	}

IL_0137:
	{
		List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * L_64 = V_8;
		int32_t L_65 = V_9;
		NullCheck(L_64);
		KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED  L_66;
		L_66 = List_1_get_Item_mD6184FABD3EB1F0BCB34079249503944C6A992A6_inline(L_64, L_65, /*hidden argument*/List_1_get_Item_mD6184FABD3EB1F0BCB34079249503944C6A992A6_RuntimeMethod_var);
		V_22 = L_66;
		int32_t L_67;
		L_67 = KeyValuePair_2_get_Key_mE381E43DD67F3565622F42212A979007B191ECD0_inline((KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED *)(&V_22), /*hidden argument*/KeyValuePair_2_get_Key_mE381E43DD67F3565622F42212A979007B191ECD0_RuntimeMethod_var);
		V_10 = L_67;
		List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * L_68 = V_8;
		int32_t L_69 = V_9;
		NullCheck(L_68);
		KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED  L_70;
		L_70 = List_1_get_Item_mD6184FABD3EB1F0BCB34079249503944C6A992A6_inline(L_68, L_69, /*hidden argument*/List_1_get_Item_mD6184FABD3EB1F0BCB34079249503944C6A992A6_RuntimeMethod_var);
		V_23 = L_70;
		RuntimeObject* L_71;
		L_71 = KeyValuePair_2_get_Value_m91B6E29B8D89D66FE2ABBA9A44B99078879399DF_inline((KeyValuePair_2_t3A30B226FE57F721B7124BB29A0D2BBF31F1F3ED *)(&V_23), /*hidden argument*/KeyValuePair_2_get_Value_m91B6E29B8D89D66FE2ABBA9A44B99078879399DF_RuntimeMethod_var);
		V_11 = L_71;
		RuntimeObject* L_72 = V_11;
		int32_t L_73 = V_10;
		RuntimeObject * L_74 = ___val1;
		NullCheck(L_72);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_72, L_73, L_74);
		int32_t L_75 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, (int32_t)1));
	}

IL_016f:
	{
		int32_t L_76 = V_9;
		List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * L_77 = V_8;
		NullCheck(L_77);
		int32_t L_78;
		L_78 = List_1_get_Count_m9C6D75878C3DE735D01021D433F01B792B89807E_inline(L_77, /*hidden argument*/List_1_get_Count_m9C6D75878C3DE735D01021D433F01B792B89807E_RuntimeMethod_var);
		if ((((int32_t)L_76) < ((int32_t)L_78)))
		{
			goto IL_0137;
		}
	}
	{
		List_1_t09A64D9E437F063360CB595BAD6247536D11B374 * L_79 = V_8;
		NullCheck(L_79);
		List_1_Clear_mD64522C65930DA02AC1A09ADBAB0A4F1641CBAFC(L_79, /*hidden argument*/List_1_Clear_mD64522C65930DA02AC1A09ADBAB0A4F1641CBAFC_RuntimeMethod_var);
		Dictionary_2_tF50A2F6398320AEA800341FBC3D0A9D246BC9CA0 * L_80 = __this->get_delayedListSetters_3();
		int32_t L_81 = ___id0;
		NullCheck(L_80);
		bool L_82;
		L_82 = Dictionary_2_Remove_m54A8DF575FAFF8B0FA9F714ECFF2F2AC222F1C0D(L_80, L_81, /*hidden argument*/Dictionary_2_Remove_m54A8DF575FAFF8B0FA9F714ECFF2F2AC222F1C0D_RuntimeMethod_var);
	}

IL_018e:
	{
		Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E * L_83 = __this->get_deepDelayedSetters_4();
		int32_t L_84 = ___id0;
		NullCheck(L_83);
		bool L_85;
		L_85 = Dictionary_2_ContainsKey_m086D1BD2B707DBA7E068746EEC06E74CBBE989BB(L_83, L_84, /*hidden argument*/Dictionary_2_ContainsKey_m086D1BD2B707DBA7E068746EEC06E74CBBE989BB_RuntimeMethod_var);
		if (!L_85)
		{
			goto IL_02bd;
		}
	}
	{
		Dictionary_2_t14758AC9C5089B3FE39BBEAD90C5105A50DB494E * L_86 = __this->get_deepDelayedSetters_4();
		int32_t L_87 = ___id0;
		NullCheck(L_86);
		List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * L_88;
		L_88 = Dictionary_2_get_Item_m95AF254A5360A04671D7D03CC8CBDF1B171BC4D9(L_86, L_87, /*hidden argument*/Dictionary_2_get_Item_m95AF254A5360A04671D7D03CC8CBDF1B171BC4D9_RuntimeMethod_var);
		V_12 = L_88;
		V_13 = 0;
		goto IL_029b;
	}

IL_01b5:
	{
		List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * L_89 = V_12;
		int32_t L_90 = V_13;
		NullCheck(L_89);
		DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  L_91;
		L_91 = List_1_get_Item_m4FB4BBD57DC08E95768992566FD7250B785F0470_inline(L_89, L_90, /*hidden argument*/List_1_get_Item_m4FB4BBD57DC08E95768992566FD7250B785F0470_RuntimeMethod_var);
		MemberInfo_t * L_92 = L_91.get_child_1();
		V_14 = L_92;
		List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * L_93 = V_12;
		int32_t L_94 = V_13;
		NullCheck(L_93);
		DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  L_95;
		L_95 = List_1_get_Item_m4FB4BBD57DC08E95768992566FD7250B785F0470_inline(L_93, L_94, /*hidden argument*/List_1_get_Item_m4FB4BBD57DC08E95768992566FD7250B785F0470_RuntimeMethod_var);
		RuntimeObject * L_96 = L_95.get_parentClass_0();
		V_15 = L_96;
		V_16 = NULL;
		MemberInfo_t * L_97 = V_14;
		if (!((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_97, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_01f4;
		}
	}
	{
		MemberInfo_t * L_98 = V_14;
		RuntimeObject * L_99 = V_15;
		NullCheck(((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_98, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_100;
		L_100 = VirtFuncInvoker2< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(27 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_98, PropertyInfo_t_il2cpp_TypeInfo_var)), L_99, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		V_16 = L_100;
		goto IL_0215;
	}

IL_01f4:
	{
		MemberInfo_t * L_101 = V_14;
		if (!((FieldInfo_t *)IsInstClass((RuntimeObject*)L_101, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_020f;
		}
	}
	{
		MemberInfo_t * L_102 = V_14;
		RuntimeObject * L_103 = V_15;
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_102, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject * L_104;
		L_104 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_102, FieldInfo_t_il2cpp_TypeInfo_var)), L_103);
		V_16 = L_104;
		goto IL_0215;
	}

IL_020f:
	{
		Exception_t * L_105 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_105, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReferenceHandlerReader_Set_m7BC475373BEF18890E3A8D65BE3013D29E2E09F9_RuntimeMethod_var)));
	}

IL_0215:
	{
		List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * L_106 = V_12;
		int32_t L_107 = V_13;
		NullCheck(L_106);
		DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  L_108;
		L_108 = List_1_get_Item_m4FB4BBD57DC08E95768992566FD7250B785F0470_inline(L_106, L_107, /*hidden argument*/List_1_get_Item_m4FB4BBD57DC08E95768992566FD7250B785F0470_RuntimeMethod_var);
		MemberInfo_t * L_109 = L_108.get_member_2();
		V_17 = L_109;
		MemberInfo_t * L_110 = V_17;
		if (!((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_110, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0240;
		}
	}
	{
		MemberInfo_t * L_111 = V_17;
		RuntimeObject * L_112 = V_16;
		RuntimeObject * L_113 = ___val1;
		NullCheck(((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_111, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(29 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_111, PropertyInfo_t_il2cpp_TypeInfo_var)), L_112, L_113, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		goto IL_0260;
	}

IL_0240:
	{
		MemberInfo_t * L_114 = V_17;
		if (!((FieldInfo_t *)IsInstClass((RuntimeObject*)L_114, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_025a;
		}
	}
	{
		MemberInfo_t * L_115 = V_17;
		RuntimeObject * L_116 = V_16;
		RuntimeObject * L_117 = ___val1;
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_115, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_115, FieldInfo_t_il2cpp_TypeInfo_var)), L_116, L_117, /*hidden argument*/NULL);
		goto IL_0260;
	}

IL_025a:
	{
		Exception_t * L_118 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(L_118, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_118, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReferenceHandlerReader_Set_m7BC475373BEF18890E3A8D65BE3013D29E2E09F9_RuntimeMethod_var)));
	}

IL_0260:
	{
		MemberInfo_t * L_119 = V_14;
		if (!((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_119, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_027c;
		}
	}
	{
		MemberInfo_t * L_120 = V_14;
		RuntimeObject * L_121 = V_15;
		RuntimeObject * L_122 = V_16;
		NullCheck(((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_120, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(29 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_120, PropertyInfo_t_il2cpp_TypeInfo_var)), L_121, L_122, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		goto IL_0295;
	}

IL_027c:
	{
		MemberInfo_t * L_123 = V_14;
		if (!((FieldInfo_t *)IsInstClass((RuntimeObject*)L_123, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0295;
		}
	}
	{
		MemberInfo_t * L_124 = V_14;
		RuntimeObject * L_125 = V_15;
		RuntimeObject * L_126 = V_16;
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_124, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_124, FieldInfo_t_il2cpp_TypeInfo_var)), L_125, L_126, /*hidden argument*/NULL);
	}

IL_0295:
	{
		int32_t L_127 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1));
	}

IL_029b:
	{
		int32_t L_128 = V_13;
		List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * L_129 = V_12;
		NullCheck(L_129);
		int32_t L_130;
		L_130 = List_1_get_Count_m8994FFC7AE7DA2C1360413DBD15A4172FE89B39A_inline(L_129, /*hidden argument*/List_1_get_Count_m8994FFC7AE7DA2C1360413DBD15A4172FE89B39A_RuntimeMethod_var);
		if ((((int32_t)L_128) < ((int32_t)L_130)))
		{
			goto IL_01b5;
		}
	}
	{
		List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * L_131 = V_12;
		NullCheck(L_131);
		List_1_Clear_m04A04AB486705433C77A3706E9679B3A29AA1A94(L_131, /*hidden argument*/List_1_Clear_m04A04AB486705433C77A3706E9679B3A29AA1A94_RuntimeMethod_var);
		Dictionary_2_tC8D26BEB5C99A642300527163426427B176645D0 * L_132 = __this->get_delayedSetters_1();
		int32_t L_133 = ___id0;
		NullCheck(L_132);
		bool L_134;
		L_134 = Dictionary_2_Remove_mAC3A792F504A06162458084B639B9FDB5C265499(L_132, L_133, /*hidden argument*/Dictionary_2_Remove_mAC3A792F504A06162458084B639B9FDB5C265499_RuntimeMethod_var);
	}

IL_02bd:
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
// System.Type Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C (Type_t * ___tp0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___tp0;
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::get_MemberMapCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * TypeCoercionUtility_get_MemberMapCache_mDC272092FAA11928AD7FDFB2D4C00FBF32963630 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3EB3EB3FA9E674D490542CDED5CBE0876CF0A651_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * L_0 = __this->get_memberMapCache_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * L_1 = (Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 *)il2cpp_codegen_object_new(Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3EB3EB3FA9E674D490542CDED5CBE0876CF0A651(L_1, /*hidden argument*/Dictionary_2__ctor_m3EB3EB3FA9E674D490542CDED5CBE0876CF0A651_RuntimeMethod_var);
		__this->set_memberMapCache_0(L_1);
	}

IL_0013:
	{
		Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * L_2 = __this->get_memberMapCache_0();
		return L_2;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::ProcessTypeHint(System.Collections.IDictionary,System.String,System.Type&,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeCoercionUtility_ProcessTypeHint_m47B3DED1B0B0DB1C95FAA3E62DE935254E76C85D (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, RuntimeObject* ___result0, String_t* ___typeInfo1, Type_t ** ___objectType2, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** ___memberMap3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeCoercionUtility_ProcessTypeHint_m47B3DED1B0B0DB1C95FAA3E62DE935254E76C85D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		String_t* L_0 = ___typeInfo1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Type_t ** L_2 = ___objectType2;
		*((RuntimeObject **)L_2) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)NULL);
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** L_3 = ___memberMap3;
		*((RuntimeObject **)L_3) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)NULL);
		RuntimeObject* L_4 = ___result0;
		return L_4;
	}

IL_0011:
	{
		String_t* L_5 = ___typeInfo1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, L_5, (bool)0, TypeCoercionUtility_ProcessTypeHint_m47B3DED1B0B0DB1C95FAA3E62DE935254E76C85D_RuntimeMethod_var);
		V_0 = L_6;
		Type_t * L_7 = V_0;
		bool L_8;
		L_8 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_7, NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		Type_t ** L_9 = ___objectType2;
		*((RuntimeObject **)L_9) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_9, (void*)(RuntimeObject *)NULL);
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** L_10 = ___memberMap3;
		*((RuntimeObject **)L_10) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_10, (void*)(RuntimeObject *)NULL);
		RuntimeObject* L_11 = ___result0;
		return L_11;
	}

IL_002b:
	{
		Type_t ** L_12 = ___objectType2;
		Type_t * L_13 = V_0;
		*((RuntimeObject **)L_12) = (RuntimeObject *)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_13);
		Type_t ** L_14 = ___objectType2;
		Type_t * L_15 = *((Type_t **)L_14);
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** L_16 = ___memberMap3;
		RuntimeObject * L_17;
		L_17 = TypeCoercionUtility_InstantiateObject_mFD25F6D6D6AE55BBF4AD09828FA9A8A999792B52(__this, L_15, (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD **)L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::ProcessTypeHint(System.Object,System.String,System.Type&,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeCoercionUtility_ProcessTypeHint_m6F3980427D2AD974304836ECFD0E74EF64D7BCA8 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, RuntimeObject * ___result0, String_t* ___typeInfo1, Type_t ** ___objectType2, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** ___memberMap3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeCoercionUtility_ProcessTypeHint_m6F3980427D2AD974304836ECFD0E74EF64D7BCA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		String_t* L_0 = ___typeInfo1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = il2cpp_codegen_get_type(Type_GetType_mCF53A469C313ACD667D1B7817F6794A62CE31700_RuntimeMethod_var, L_0, (bool)0, TypeCoercionUtility_ProcessTypeHint_m6F3980427D2AD974304836ECFD0E74EF64D7BCA8_RuntimeMethod_var);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		bool L_3;
		L_3 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_2, NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		Type_t ** L_4 = ___objectType2;
		*((RuntimeObject **)L_4) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_4, (void*)(RuntimeObject *)NULL);
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** L_5 = ___memberMap3;
		*((RuntimeObject **)L_5) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)NULL);
		RuntimeObject * L_6 = ___result0;
		return L_6;
	}

IL_001a:
	{
		Type_t ** L_7 = ___objectType2;
		Type_t * L_8 = V_0;
		*((RuntimeObject **)L_7) = (RuntimeObject *)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)L_8);
		RuntimeObject * L_9 = ___result0;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_10 = ___result0;
		NullCheck(L_10);
		Type_t * L_11;
		L_11 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_10, /*hidden argument*/NULL);
		Type_t * L_12 = V_0;
		bool L_13;
		L_13 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_003b;
		}
	}
	{
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** L_14 = ___memberMap3;
		Type_t ** L_15 = ___objectType2;
		Type_t * L_16 = *((Type_t **)L_15);
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_17;
		L_17 = TypeCoercionUtility_GetMemberMap_m5F1A7BD221AB822C8FC3D382944EA06414AAC4CB(__this, L_16, /*hidden argument*/NULL);
		*((RuntimeObject **)L_14) = (RuntimeObject *)L_17;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_14, (void*)(RuntimeObject *)L_17);
		RuntimeObject * L_18 = ___result0;
		return L_18;
	}

IL_003b:
	{
		Type_t ** L_19 = ___objectType2;
		Type_t * L_20 = *((Type_t **)L_19);
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** L_21 = ___memberMap3;
		RuntimeObject * L_22;
		L_22 = TypeCoercionUtility_InstantiateObject_mFD25F6D6D6AE55BBF4AD09828FA9A8A999792B52(__this, L_20, (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD **)L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::InstantiateObject(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeCoercionUtility_InstantiateObject_m8291F976813AFB4FF368A89A1BD71EB65C68D54E (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___objectType0;
		RuntimeObject * L_1;
		L_1 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::InstantiateObject(System.Type,System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeCoercionUtility_InstantiateObject_mFD25F6D6D6AE55BBF4AD09828FA9A8A999792B52 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___objectType0, Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** ___memberMap1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		Type_t * L_0 = ___objectType0;
		RuntimeObject * L_1;
		L_1 = TypeCoercionUtility_InstantiateObject_m8291F976813AFB4FF368A89A1BD71EB65C68D54E(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD ** L_2 = ___memberMap1;
		Type_t * L_3 = ___objectType0;
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_4;
		L_4 = TypeCoercionUtility_GetMemberMap_m5F1A7BD221AB822C8FC3D382944EA06414AAC4CB(__this, L_3, /*hidden argument*/NULL);
		*((RuntimeObject **)L_2) = (RuntimeObject *)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_2, (void*)(RuntimeObject *)L_4);
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberMap(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * TypeCoercionUtility_GetMemberMap_m5F1A7BD221AB822C8FC3D382944EA06414AAC4CB (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		Type_t * L_2;
		L_2 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_1, /*hidden argument*/NULL);
		Type_t * L_3 = ___objectType0;
		Type_t * L_4;
		L_4 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_2, L_4);
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		return (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD *)NULL;
	}

IL_001e:
	{
		Type_t * L_6 = ___objectType0;
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_7;
		L_7 = TypeCoercionUtility_CreateMemberMap_m9F5B5B199AA87C902203689F7C17AE3B2409FF04(__this, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CreateMemberMap(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * TypeCoercionUtility_CreateMemberMap_m9F5B5B199AA87C902203689F7C17AE3B2409FF04 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD9198DB32EB268B2B200F0427C9DA107BC1BBFF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m73EDAD230A16E1DBC0F593695B8A04DC623D3938_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mA8DCEF09EF505221924518976EA48369665878EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMemberAttribute_t65EF12126310D84A48599F748A944AC890DFFAC3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * V_0 = NULL;
	Type_t * V_1 = NULL;
	PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* V_2 = NULL;
	int32_t V_3 = 0;
	PropertyInfo_t * V_4 = NULL;
	String_t* V_5 = NULL;
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_6 = NULL;
	FieldInfo_t * V_7 = NULL;
	String_t* V_8 = NULL;
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_9 = NULL;
	int32_t V_10 = 0;
	{
		Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * L_0;
		L_0 = TypeCoercionUtility_get_MemberMapCache_mDC272092FAA11928AD7FDFB2D4C00FBF32963630(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___objectType0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972(L_0, L_1, (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m3B8ED093D0D55BB86D9153E5F173B34BC9EAA972_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_4 = (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD *)il2cpp_codegen_object_new(Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD9198DB32EB268B2B200F0427C9DA107BC1BBFF9(L_4, /*hidden argument*/Dictionary_2__ctor_mD9198DB32EB268B2B200F0427C9DA107BC1BBFF9_RuntimeMethod_var);
		V_0 = L_4;
		Type_t * L_5 = ___objectType0;
		V_1 = L_5;
		goto IL_0111;
	}

IL_001f:
	{
		Type_t * L_6 = V_1;
		Type_t * L_7;
		L_7 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_8;
		L_8 = VirtFuncInvoker1< PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*, int32_t >::Invoke(58 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_7, ((int32_t)52));
		V_2 = L_8;
		V_3 = 0;
		goto IL_0082;
	}

IL_0031:
	{
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		PropertyInfo_t * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		PropertyInfo_t * L_13 = V_4;
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_13);
		if (!L_14)
		{
			goto IL_007e;
		}
	}
	{
		PropertyInfo_t * L_15 = V_4;
		NullCheck(L_15);
		bool L_16;
		L_16 = VirtFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_15);
		if (!L_16)
		{
			goto IL_007e;
		}
	}
	{
		PropertyInfo_t * L_17 = V_4;
		bool L_18;
		L_18 = JsonIgnoreAttribute_IsJsonIgnore_m9563F1F06D6239BB9E81A5632364992DBB412E97(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_007e;
		}
	}
	{
		PropertyInfo_t * L_19 = V_4;
		String_t* L_20;
		L_20 = JsonNameAttribute_GetJsonName_m7A8433D3C798FE0D3035A8B835513120228A147C(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		String_t* L_21 = V_5;
		bool L_22;
		L_22 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0074;
		}
	}
	{
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_23 = V_0;
		PropertyInfo_t * L_24 = V_4;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_24);
		PropertyInfo_t * L_26 = V_4;
		NullCheck(L_23);
		Dictionary_2_set_Item_mA8DCEF09EF505221924518976EA48369665878EE(L_23, L_25, L_26, /*hidden argument*/Dictionary_2_set_Item_mA8DCEF09EF505221924518976EA48369665878EE_RuntimeMethod_var);
		goto IL_007e;
	}

IL_0074:
	{
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_27 = V_0;
		String_t* L_28 = V_5;
		PropertyInfo_t * L_29 = V_4;
		NullCheck(L_27);
		Dictionary_2_set_Item_mA8DCEF09EF505221924518976EA48369665878EE(L_27, L_28, L_29, /*hidden argument*/Dictionary_2_set_Item_mA8DCEF09EF505221924518976EA48369665878EE_RuntimeMethod_var);
	}

IL_007e:
	{
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0082:
	{
		int32_t L_31 = V_3;
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_32 = V_2;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		Type_t * L_33 = V_1;
		Type_t * L_34;
		L_34 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_35;
		L_35 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(47 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_34, ((int32_t)52));
		V_6 = L_35;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_36 = V_6;
		V_9 = L_36;
		V_10 = 0;
		goto IL_0102;
	}

IL_00a0:
	{
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_37 = V_9;
		int32_t L_38 = V_10;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		FieldInfo_t * L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_7 = L_40;
		FieldInfo_t * L_41 = V_7;
		NullCheck(L_41);
		bool L_42;
		L_42 = FieldInfo_get_IsPublic_mA7FB5E40024835CA07195F3E1BFCBD41E9E013BD(L_41, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_00c6;
		}
	}
	{
		FieldInfo_t * L_43 = V_7;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_44 = { reinterpret_cast<intptr_t> (JsonMemberAttribute_t65EF12126310D84A48599F748A944AC890DFFAC3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45;
		L_45 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_44, /*hidden argument*/NULL);
		NullCheck(L_43);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_46;
		L_46 = VirtFuncInvoker2< ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Type_t *, bool >::Invoke(12 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_43, L_45, (bool)0);
		NullCheck(L_46);
		if (!((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length))))
		{
			goto IL_00fc;
		}
	}

IL_00c6:
	{
		FieldInfo_t * L_47 = V_7;
		bool L_48;
		L_48 = JsonIgnoreAttribute_IsJsonIgnore_m9563F1F06D6239BB9E81A5632364992DBB412E97(L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_00fc;
		}
	}
	{
		FieldInfo_t * L_49 = V_7;
		String_t* L_50;
		L_50 = JsonNameAttribute_GetJsonName_m7A8433D3C798FE0D3035A8B835513120228A147C(L_49, /*hidden argument*/NULL);
		V_8 = L_50;
		String_t* L_51 = V_8;
		bool L_52;
		L_52 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_51, /*hidden argument*/NULL);
		if (!L_52)
		{
			goto IL_00f2;
		}
	}
	{
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_53 = V_0;
		FieldInfo_t * L_54 = V_7;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_54);
		FieldInfo_t * L_56 = V_7;
		NullCheck(L_53);
		Dictionary_2_set_Item_mA8DCEF09EF505221924518976EA48369665878EE(L_53, L_55, L_56, /*hidden argument*/Dictionary_2_set_Item_mA8DCEF09EF505221924518976EA48369665878EE_RuntimeMethod_var);
		goto IL_00fc;
	}

IL_00f2:
	{
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_57 = V_0;
		String_t* L_58 = V_8;
		FieldInfo_t * L_59 = V_7;
		NullCheck(L_57);
		Dictionary_2_set_Item_mA8DCEF09EF505221924518976EA48369665878EE(L_57, L_58, L_59, /*hidden argument*/Dictionary_2_set_Item_mA8DCEF09EF505221924518976EA48369665878EE_RuntimeMethod_var);
	}

IL_00fc:
	{
		int32_t L_60 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0102:
	{
		int32_t L_61 = V_10;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_62 = V_9;
		NullCheck(L_62);
		if ((((int32_t)L_61) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length))))))
		{
			goto IL_00a0;
		}
	}
	{
		Type_t * L_63 = V_1;
		NullCheck(L_63);
		Type_t * L_64;
		L_64 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_63);
		V_1 = L_64;
	}

IL_0111:
	{
		Type_t * L_65 = V_1;
		if (L_65)
		{
			goto IL_001f;
		}
	}
	{
		Dictionary_2_t6BB36E424CCDE442BAB30377A2F7ECE9A9783125 * L_66;
		L_66 = TypeCoercionUtility_get_MemberMapCache_mDC272092FAA11928AD7FDFB2D4C00FBF32963630(__this, /*hidden argument*/NULL);
		Type_t * L_67 = ___objectType0;
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_68 = V_0;
		NullCheck(L_66);
		Dictionary_2_set_Item_m73EDAD230A16E1DBC0F593695B8A04DC623D3938(L_66, L_67, L_68, /*hidden argument*/Dictionary_2_set_Item_m73EDAD230A16E1DBC0F593695B8A04DC623D3938_RuntimeMethod_var);
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_69 = V_0;
		return L_69;
	}
}
// System.Type Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberInfo(System.Collections.Generic.Dictionary`2<System.String,System.Reflection.MemberInfo>,System.String,System.Reflection.MemberInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeCoercionUtility_GetMemberInfo_mC90F5D09D26DD906DE4757AA97FF1E7ABB7686CB (Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * ___memberMap0, String_t* ___memberName1, MemberInfo_t ** ___memberInfo2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m082C91C62C26D9C258ECD9114D21C6796306492F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_0 = ___memberMap0;
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		Dictionary_2_tCDA3EC87EE1E4CF694DE7B8754FD16211A0E3BDD * L_1 = ___memberMap0;
		String_t* L_2 = ___memberName1;
		MemberInfo_t ** L_3 = ___memberInfo2;
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m082C91C62C26D9C258ECD9114D21C6796306492F(L_1, L_2, (MemberInfo_t **)L_3, /*hidden argument*/Dictionary_2_TryGetValue_m082C91C62C26D9C258ECD9114D21C6796306492F_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		MemberInfo_t ** L_5 = ___memberInfo2;
		MemberInfo_t * L_6 = *((MemberInfo_t **)L_5);
		if (!((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_6, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		MemberInfo_t ** L_7 = ___memberInfo2;
		MemberInfo_t * L_8 = *((MemberInfo_t **)L_7);
		NullCheck(((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_8, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_9;
		L_9 = VirtFuncInvoker0< Type_t * >::Invoke(20 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_8, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_9;
	}

IL_0023:
	{
		MemberInfo_t ** L_10 = ___memberInfo2;
		MemberInfo_t * L_11 = *((MemberInfo_t **)L_10);
		if (!((FieldInfo_t *)IsInstClass((RuntimeObject*)L_11, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0039;
		}
	}
	{
		MemberInfo_t ** L_12 = ___memberInfo2;
		MemberInfo_t * L_13 = *((MemberInfo_t **)L_12);
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_13, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t * L_14;
		L_14 = VirtFuncInvoker0< Type_t * >::Invoke(19 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_13, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_14;
	}

IL_0039:
	{
		MemberInfo_t ** L_15 = ___memberInfo2;
		*((RuntimeObject **)L_15) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_15, (void*)(RuntimeObject *)NULL);
		return (Type_t *)NULL;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::SetMemberValue(System.Object,System.Type,System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeCoercionUtility_SetMemberValue_m9B934C08F9EF43F0D03940043D6EEF0A6634D436 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, RuntimeObject * ___result0, Type_t * ___memberType1, MemberInfo_t * ___memberInfo2, RuntimeObject * ___value3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___memberInfo2;
		if (!((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_0, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		MemberInfo_t * L_1 = ___memberInfo2;
		RuntimeObject * L_2 = ___result0;
		Type_t * L_3 = ___memberType1;
		RuntimeObject * L_4 = ___value3;
		RuntimeObject * L_5;
		L_5 = TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E(__this, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_1, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtActionInvoker3< RuntimeObject *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(29 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_1, PropertyInfo_t_il2cpp_TypeInfo_var)), L_2, L_5, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL);
		return;
	}

IL_001f:
	{
		MemberInfo_t * L_6 = ___memberInfo2;
		if (!((FieldInfo_t *)IsInstClass((RuntimeObject*)L_6, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_003c;
		}
	}
	{
		MemberInfo_t * L_7 = ___memberInfo2;
		RuntimeObject * L_8 = ___result0;
		Type_t * L_9 = ___memberType1;
		RuntimeObject * L_10 = ___value3;
		RuntimeObject * L_11;
		L_11 = TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E(__this, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_7, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_7, FieldInfo_t_il2cpp_TypeInfo_var)), L_8, L_11, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceType(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___targetType0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_1 = NULL;
	Type_t * V_2 = NULL;
	FieldInfo_t * V_3 = NULL;
	String_t* V_4 = NULL;
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_6 = NULL;
	TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * V_7 = NULL;
	Exception_t * V_8 = NULL;
	RuntimeObject * V_9 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_10 = NULL;
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_11 = NULL;
	int32_t V_12 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Type_t * L_0 = ___targetType0;
		bool L_1;
		L_1 = TypeCoercionUtility_IsNullable_m8B902510D0DB53140D619B3162A159F56CA220BC(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject * L_2 = ___value1;
		if (L_2)
		{
			goto IL_0048;
		}
	}
	{
		bool L_3 = __this->get_allowNullValueTypes_1();
		if (L_3)
		{
			goto IL_0046;
		}
	}
	{
		Type_t * L_4 = ___targetType0;
		Type_t * L_5;
		L_5 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_0046;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		V_10 = L_8;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_10;
		Type_t * L_10 = ___targetType0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_10);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_11);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_10;
		String_t* L_13;
		L_13 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC804843A4C1480DA8507B26098A435EAD9E5EF46)), L_12, /*hidden argument*/NULL);
		JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * L_14 = (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692_il2cpp_TypeInfo_var)));
		JsonTypeCoercionException__ctor_mB072274458278B3220CFDC25E3FB842E324ACBF3(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E_RuntimeMethod_var)));
	}

IL_0046:
	{
		RuntimeObject * L_15 = ___value1;
		return L_15;
	}

IL_0048:
	{
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_005d;
		}
	}
	{
		Type_t * L_17 = ___targetType0;
		NullCheck(L_17);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_18;
		L_18 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(105 /* System.Type[] System.Type::GetGenericArguments() */, L_17);
		V_1 = L_18;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_19 = V_1;
		NullCheck(L_19);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_005d;
		}
	}
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_20 = V_1;
		NullCheck(L_20);
		int32_t L_21 = 0;
		Type_t * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		___targetType0 = L_22;
	}

IL_005d:
	{
		RuntimeObject * L_23 = ___value1;
		NullCheck(L_23);
		Type_t * L_24;
		L_24 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		Type_t * L_25 = ___targetType0;
		Type_t * L_26;
		L_26 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_25, /*hidden argument*/NULL);
		Type_t * L_27 = V_2;
		Type_t * L_28;
		L_28 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_29;
		L_29 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_28);
		if (!L_29)
		{
			goto IL_0079;
		}
	}
	{
		RuntimeObject * L_30 = ___value1;
		return L_30;
	}

IL_0079:
	{
		Type_t * L_31 = ___targetType0;
		Type_t * L_32;
		L_32 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		bool L_33;
		L_33 = VirtFuncInvoker0< bool >::Invoke(76 /* System.Boolean System.Type::get_IsEnum() */, L_32);
		if (!L_33)
		{
			goto IL_0102;
		}
	}
	{
		RuntimeObject * L_34 = ___value1;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_34, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00eb;
		}
	}
	{
		Type_t * L_35 = ___targetType0;
		RuntimeObject * L_36 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96(L_35, L_36, /*hidden argument*/NULL);
		if (L_37)
		{
			goto IL_00de;
		}
	}
	{
		Type_t * L_38 = ___targetType0;
		Type_t * L_39;
		L_39 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_40;
		L_40 = Type_GetFields_m4E3B89F0F088B46F0C2E77CA537179C30AC5B372(L_39, /*hidden argument*/NULL);
		V_11 = L_40;
		V_12 = 0;
		goto IL_00d6;
	}

IL_00a9:
	{
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_41 = V_11;
		int32_t L_42 = V_12;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		FieldInfo_t * L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_3 = L_44;
		FieldInfo_t * L_45 = V_3;
		String_t* L_46;
		L_46 = JsonNameAttribute_GetJsonName_m7A8433D3C798FE0D3035A8B835513120228A147C(L_45, /*hidden argument*/NULL);
		V_4 = L_46;
		RuntimeObject * L_47 = ___value1;
		String_t* L_48 = V_4;
		NullCheck(((String_t*)CastclassSealed((RuntimeObject*)L_47, String_t_il2cpp_TypeInfo_var)));
		bool L_49;
		L_49 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(((String_t*)CastclassSealed((RuntimeObject*)L_47, String_t_il2cpp_TypeInfo_var)), L_48, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_00d0;
		}
	}
	{
		FieldInfo_t * L_50 = V_3;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_50);
		___value1 = L_51;
		goto IL_00de;
	}

IL_00d0:
	{
		int32_t L_52 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_00d6:
	{
		int32_t L_53 = V_12;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_54 = V_11;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_00a9;
		}
	}

IL_00de:
	{
		Type_t * L_55 = ___targetType0;
		RuntimeObject * L_56 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeObject * L_57;
		L_57 = Enum_Parse_m6601224637A9CF40F77358805956C2EE757EAF68(L_55, ((String_t*)CastclassSealed((RuntimeObject*)L_56, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_57;
	}

IL_00eb:
	{
		Type_t * L_58 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		Type_t * L_59;
		L_59 = Enum_GetUnderlyingType_m8BD5EDDA4C9A15C2988B27DD48314AC3C16F7A53(L_58, /*hidden argument*/NULL);
		RuntimeObject * L_60 = ___value1;
		RuntimeObject * L_61;
		L_61 = TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E(__this, L_59, L_60, /*hidden argument*/NULL);
		___value1 = L_61;
		Type_t * L_62 = ___targetType0;
		RuntimeObject * L_63 = ___value1;
		RuntimeObject * L_64;
		L_64 = Enum_ToObject_m2A05590A0D581206AAEB48B89187FD175D5F0967(L_62, L_63, /*hidden argument*/NULL);
		return L_64;
	}

IL_0102:
	{
		RuntimeObject * L_65 = ___value1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_65, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var)))
		{
			goto IL_010c;
		}
	}
	{
		return NULL;
	}

IL_010c:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_66 = { reinterpret_cast<intptr_t> (IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_67;
		L_67 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_66, /*hidden argument*/NULL);
		Type_t * L_68;
		L_68 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_67, /*hidden argument*/NULL);
		Type_t * L_69 = ___targetType0;
		Type_t * L_70;
		L_70 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_69, /*hidden argument*/NULL);
		NullCheck(L_68);
		bool L_71;
		L_71 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_68, L_70);
		if (!L_71)
		{
			goto IL_0153;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_72 = { reinterpret_cast<intptr_t> (IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_73;
		L_73 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_72, /*hidden argument*/NULL);
		Type_t * L_74;
		L_74 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_73, /*hidden argument*/NULL);
		Type_t * L_75 = V_2;
		Type_t * L_76;
		L_76 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_75, /*hidden argument*/NULL);
		NullCheck(L_74);
		bool L_77;
		L_77 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_74, L_76);
		if (!L_77)
		{
			goto IL_0153;
		}
	}
	{
		Type_t * L_78 = ___targetType0;
		Type_t * L_79 = V_2;
		RuntimeObject * L_80 = ___value1;
		RuntimeObject * L_81;
		L_81 = TypeCoercionUtility_CoerceList_mF2743227B51ED45F2639CFCE278C9A019C4A9C00(__this, L_78, L_79, ((RuntimeObject*)Castclass((RuntimeObject*)L_80, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_81;
	}

IL_0153:
	{
		RuntimeObject * L_82 = ___value1;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_82, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_022f;
		}
	}
	{
		Type_t * L_83 = ___targetType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_84 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_85;
		L_85 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_84, /*hidden argument*/NULL);
		bool L_86;
		L_86 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_83, L_85, /*hidden argument*/NULL);
		if (!L_86)
		{
			goto IL_0194;
		}
	}
	{
		RuntimeObject * L_87 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * L_88;
		L_88 = DateTimeFormatInfo_get_InvariantInfo_mF82BD33E66FDFBF82C9E9F58CDA7DDE568401F4B(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		bool L_89;
		L_89 = DateTime_TryParse_m355F24554F4721CBB8055BCD638DFFBCF2CE7641(((String_t*)CastclassSealed((RuntimeObject*)L_87, String_t_il2cpp_TypeInfo_var)), L_88, ((int32_t)143), (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)(&V_5), /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_0262;
		}
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_90 = V_5;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_91 = L_90;
		RuntimeObject * L_92 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_91);
		return L_92;
	}

IL_0194:
	{
		Type_t * L_93 = ___targetType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_94 = { reinterpret_cast<intptr_t> (Guid_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_95;
		L_95 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_94, /*hidden argument*/NULL);
		bool L_96;
		L_96 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_93, L_95, /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_01b7;
		}
	}
	{
		RuntimeObject * L_97 = ___value1;
		Guid_t  L_98;
		memset((&L_98), 0, sizeof(L_98));
		Guid__ctor_mF80313305B9CD2AD39B621E1CEC5C7DFDFFBDE66((&L_98), ((String_t*)CastclassSealed((RuntimeObject*)L_97, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Guid_t  L_99 = L_98;
		RuntimeObject * L_100 = Box(Guid_t_il2cpp_TypeInfo_var, &L_99);
		return L_100;
	}

IL_01b7:
	{
		Type_t * L_101 = ___targetType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_102 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_103;
		L_103 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_102, /*hidden argument*/NULL);
		bool L_104;
		L_104 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_101, L_103, /*hidden argument*/NULL);
		if (!L_104)
		{
			goto IL_01ec;
		}
	}
	{
		RuntimeObject * L_105 = ___value1;
		NullCheck(((String_t*)CastclassSealed((RuntimeObject*)L_105, String_t_il2cpp_TypeInfo_var)));
		int32_t L_106;
		L_106 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(((String_t*)CastclassSealed((RuntimeObject*)L_105, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_106) == ((uint32_t)1))))
		{
			goto IL_0262;
		}
	}
	{
		RuntimeObject * L_107 = ___value1;
		NullCheck(((String_t*)CastclassSealed((RuntimeObject*)L_107, String_t_il2cpp_TypeInfo_var)));
		Il2CppChar L_108;
		L_108 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(((String_t*)CastclassSealed((RuntimeObject*)L_107, String_t_il2cpp_TypeInfo_var)), 0, /*hidden argument*/NULL);
		Il2CppChar L_109 = L_108;
		RuntimeObject * L_110 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_109);
		return L_110;
	}

IL_01ec:
	{
		Type_t * L_111 = ___targetType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_112 = { reinterpret_cast<intptr_t> (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_113;
		L_113 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_112, /*hidden argument*/NULL);
		bool L_114;
		L_114 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_111, L_113, /*hidden argument*/NULL);
		if (!L_114)
		{
			goto IL_0211;
		}
	}
	{
		RuntimeObject * L_115 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		bool L_116;
		L_116 = Uri_TryCreate_m44277635BB8291BC0AADD85B9C9A015C1C21EF92(((String_t*)CastclassSealed((RuntimeObject*)L_115, String_t_il2cpp_TypeInfo_var)), 0, (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 **)(&V_6), /*hidden argument*/NULL);
		if (!L_116)
		{
			goto IL_0262;
		}
	}
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_117 = V_6;
		return L_117;
	}

IL_0211:
	{
		Type_t * L_118 = ___targetType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_119 = { reinterpret_cast<intptr_t> (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_120;
		L_120 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_119, /*hidden argument*/NULL);
		bool L_121;
		L_121 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_118, L_120, /*hidden argument*/NULL);
		if (!L_121)
		{
			goto IL_0262;
		}
	}
	{
		RuntimeObject * L_122 = ___value1;
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_123 = (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *)il2cpp_codegen_object_new(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		Version__ctor_mB484853E49F58F771DF106B7BDC92E49ACE3DAAE(L_123, ((String_t*)CastclassSealed((RuntimeObject*)L_122, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_123;
	}

IL_022f:
	{
		Type_t * L_124 = ___targetType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_125 = { reinterpret_cast<intptr_t> (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_126;
		L_126 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_125, /*hidden argument*/NULL);
		bool L_127;
		L_127 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_124, L_126, /*hidden argument*/NULL);
		if (!L_127)
		{
			goto IL_0262;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_128 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_129;
		L_129 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_128, /*hidden argument*/NULL);
		RuntimeObject * L_130 = ___value1;
		RuntimeObject * L_131;
		L_131 = TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E(__this, L_129, L_130, /*hidden argument*/NULL);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_132;
		memset((&L_132), 0, sizeof(L_132));
		TimeSpan__ctor_mC80FA729ECA3A7AF31D9F517A95E60FC23EB86B0_inline((&L_132), ((*(int64_t*)((int64_t*)UnBox(L_131, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_133 = L_132;
		RuntimeObject * L_134 = Box(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_il2cpp_TypeInfo_var, &L_133);
		return L_134;
	}

IL_0262:
	{
		Type_t * L_135 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var);
		TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * L_136;
		L_136 = TypeDescriptor_GetConverter_m4A087A264082284312079152F6E572EB7B92BDC3(L_135, /*hidden argument*/NULL);
		V_7 = L_136;
		TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * L_137 = V_7;
		Type_t * L_138 = V_2;
		NullCheck(L_137);
		bool L_139;
		L_139 = TypeConverter_CanConvertFrom_m47A801693EFD2D471DE7E5A76FD5D1FCDE604020(L_137, L_138, /*hidden argument*/NULL);
		if (!L_139)
		{
			goto IL_027d;
		}
	}
	{
		TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * L_140 = V_7;
		RuntimeObject * L_141 = ___value1;
		NullCheck(L_140);
		RuntimeObject * L_142;
		L_142 = TypeConverter_ConvertFrom_m1B97C37C09BAE614BF4468E84CF236EF99911CB9(L_140, L_141, /*hidden argument*/NULL);
		return L_142;
	}

IL_027d:
	{
		Type_t * L_143 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var);
		TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * L_144;
		L_144 = TypeDescriptor_GetConverter_m4A087A264082284312079152F6E572EB7B92BDC3(L_143, /*hidden argument*/NULL);
		V_7 = L_144;
		TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * L_145 = V_7;
		Type_t * L_146 = ___targetType0;
		NullCheck(L_145);
		bool L_147;
		L_147 = TypeConverter_CanConvertTo_m470B67B6EB76AFEF535E113FD300F4A03C525E98(L_145, L_146, /*hidden argument*/NULL);
		if (!L_147)
		{
			goto IL_0299;
		}
	}
	{
		TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * L_148 = V_7;
		RuntimeObject * L_149 = ___value1;
		Type_t * L_150 = ___targetType0;
		NullCheck(L_148);
		RuntimeObject * L_151;
		L_151 = TypeConverter_ConvertTo_m95C735EB3EA1A83FCAB12B5B1C457D4A92DE9931(L_148, L_149, L_150, /*hidden argument*/NULL);
		return L_151;
	}

IL_0299:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_152 = ___value1;
		Type_t * L_153 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		RuntimeObject * L_154;
		L_154 = Convert_ChangeType_mD726EC15920319382D858ECD7FD78339110D7FD4(L_152, L_153, /*hidden argument*/NULL);
		V_9 = L_154;
		goto IL_02db;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02a4;
		}
		throw e;
	}

CATCH_02a4:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_155 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)2);
		V_13 = L_155;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_156 = V_13;
		RuntimeObject * L_157 = ___value1;
		NullCheck(L_157);
		Type_t * L_158;
		L_158 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_157, /*hidden argument*/NULL);
		NullCheck(L_158);
		String_t* L_159;
		L_159 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_158);
		NullCheck(L_156);
		ArrayElementTypeCheck (L_156, L_159);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_159);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_160 = V_13;
		Type_t * L_161 = ___targetType0;
		NullCheck(L_161);
		String_t* L_162;
		L_162 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_161);
		NullCheck(L_160);
		ArrayElementTypeCheck (L_160, L_162);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_162);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_163 = V_13;
		String_t* L_164;
		L_164 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB62FEDE14B2DC6477B8036B35157240CE69CA5E8)), L_163, /*hidden argument*/NULL);
		Exception_t * L_165 = V_8;
		JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * L_166 = (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692_il2cpp_TypeInfo_var)));
		JsonTypeCoercionException__ctor_m23C329A29DF7997EE994DBBF100AADAA0260024A(L_166, L_164, L_165, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_166, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_02db:
	{
		RuntimeObject * L_167 = V_9;
		return L_167;
	}
}
// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceList(System.Type,System.Type,System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TypeCoercionUtility_CoerceList_mF2743227B51ED45F2639CFCE278C9A019C4A9C00 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___targetType0, Type_t * ___arrayType1, RuntimeObject* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral513431A61E5716B54D536064FFB2DD5BBEF0EBF3);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfoU5BU5D_t3AD132A16A05A15B043BE275A8822F1872770498* V_0 = NULL;
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_1 = NULL;
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_2 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * V_5 = NULL;
	MethodInfo_t * V_6 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_7 = NULL;
	Type_t * V_8 = NULL;
	TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * V_9 = NULL;
	RuntimeObject * V_10 = NULL;
	TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * V_11 = NULL;
	Exception_t * V_12 = NULL;
	RuntimeObject * V_13 = NULL;
	ConstructorInfoU5BU5D_t3AD132A16A05A15B043BE275A8822F1872770498* V_14 = NULL;
	int32_t V_15 = 0;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_16 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_17 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_18 = NULL;
	RuntimeObject* V_19 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_20 = NULL;
	RuntimeObject* V_21 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_22 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 7> __leave_targets;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* G_B20_0 = NULL;
	Type_t * G_B24_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* G_B34_0 = NULL;
	Type_t * G_B38_0 = NULL;
	{
		Type_t * L_0 = ___targetType0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		Type_t * L_2 = ___targetType0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(104 /* System.Type System.Type::GetElementType() */, L_2);
		RuntimeObject* L_4 = ___value2;
		RuntimeArray * L_5;
		L_5 = TypeCoercionUtility_CoerceArray_m18EC71BDFBD11E4A9C9D42B6CA3307C426704AA3(__this, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0016:
	{
		Type_t * L_6 = ___targetType0;
		NullCheck(L_6);
		ConstructorInfoU5BU5D_t3AD132A16A05A15B043BE275A8822F1872770498* L_7;
		L_7 = Type_GetConstructors_mEC149FCD78EA6555E262AD2FA1FB44A0441EA4DE(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B *)NULL;
		ConstructorInfoU5BU5D_t3AD132A16A05A15B043BE275A8822F1872770498* L_8 = V_0;
		V_14 = L_8;
		V_15 = 0;
		goto IL_0082;
	}

IL_0027:
	{
		ConstructorInfoU5BU5D_t3AD132A16A05A15B043BE275A8822F1872770498* L_9 = V_14;
		int32_t L_10 = V_15;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_13 = V_2;
		NullCheck(L_13);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_14;
		L_14 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_13);
		V_3 = L_14;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_15 = V_3;
		NullCheck(L_15);
		if (((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))
		{
			goto IL_003d;
		}
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_16 = V_2;
		V_1 = L_16;
		goto IL_007c;
	}

IL_003d:
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_17 = V_3;
		NullCheck(L_17);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_007c;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		Type_t * L_21;
		L_21 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_20);
		Type_t * L_22;
		L_22 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_21, /*hidden argument*/NULL);
		Type_t * L_23 = ___arrayType1;
		Type_t * L_24;
		L_24 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		bool L_25;
		L_25 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_22, L_24);
		if (!L_25)
		{
			goto IL_007c;
		}
	}

IL_005d:
	try
	{ // begin try (depth: 1)
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_26 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_27 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		V_16 = L_27;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_28 = V_16;
		RuntimeObject* L_29 = ___value2;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_29);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_30 = V_16;
		NullCheck(L_26);
		RuntimeObject * L_31;
		L_31 = ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906(L_26, L_30, /*hidden argument*/NULL);
		V_13 = L_31;
		goto IL_02dd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{ // begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007c;
	} // end catch (depth: 1)

IL_007c:
	{
		int32_t L_32 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0082:
	{
		int32_t L_33 = V_15;
		ConstructorInfoU5BU5D_t3AD132A16A05A15B043BE275A8822F1872770498* L_34 = V_14;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_35 = V_1;
		bool L_36;
		L_36 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_35, NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00b7;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_37 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)1);
		V_17 = L_37;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = V_17;
		Type_t * L_39 = ___targetType0;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_39);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_40);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_40);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_41 = V_17;
		String_t* L_42;
		L_42 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA18EE5A6DFA929F690B080887225A586A880DFEF)), L_41, /*hidden argument*/NULL);
		JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * L_43 = (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692_il2cpp_TypeInfo_var)));
		JsonTypeCoercionException__ctor_mB072274458278B3220CFDC25E3FB842E324ACBF3(L_43, L_42, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeCoercionUtility_CoerceList_mF2743227B51ED45F2639CFCE278C9A019C4A9C00_RuntimeMethod_var)));
	}

IL_00b7:
	try
	{ // begin try (depth: 1)
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_44 = V_1;
		NullCheck(L_44);
		RuntimeObject * L_45;
		L_45 = ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906(L_44, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
		V_4 = L_45;
		goto IL_00fe;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c2;
		}
		throw e;
	}

CATCH_00c2:
	{ // begin catch(System.Reflection.TargetInvocationException)
		{
			V_5 = ((TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C *)IL2CPP_GET_ACTIVE_EXCEPTION(TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C *));
			TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_46 = V_5;
			NullCheck(L_46);
			Exception_t * L_47;
			L_47 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_46, /*hidden argument*/NULL);
			if (!L_47)
			{
				goto IL_00e6;
			}
		}

IL_00cd:
		{
			TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_48 = V_5;
			NullCheck(L_48);
			Exception_t * L_49;
			L_49 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_48, /*hidden argument*/NULL);
			NullCheck(L_49);
			String_t* L_50;
			L_50 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_49);
			TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_51 = V_5;
			NullCheck(L_51);
			Exception_t * L_52;
			L_52 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_51, /*hidden argument*/NULL);
			JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * L_53 = (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692_il2cpp_TypeInfo_var)));
			JsonTypeCoercionException__ctor_m23C329A29DF7997EE994DBBF100AADAA0260024A(L_53, L_50, L_52, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeCoercionUtility_CoerceList_mF2743227B51ED45F2639CFCE278C9A019C4A9C00_RuntimeMethod_var)));
		}

IL_00e6:
		{
			Type_t * L_54 = ___targetType0;
			NullCheck(L_54);
			String_t* L_55;
			L_55 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_54);
			String_t* L_56;
			L_56 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9A8AA5BB97E61C8797A55EC92C5495F84F95A72)), L_55, /*hidden argument*/NULL);
			TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_57 = V_5;
			JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * L_58 = (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692_il2cpp_TypeInfo_var)));
			JsonTypeCoercionException__ctor_m23C329A29DF7997EE994DBBF100AADAA0260024A(L_58, L_56, L_57, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeCoercionUtility_CoerceList_mF2743227B51ED45F2639CFCE278C9A019C4A9C00_RuntimeMethod_var)));
		}
	} // end catch (depth: 1)

IL_00fe:
	{
		Type_t * L_59 = ___targetType0;
		Type_t * L_60;
		L_60 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		MethodInfo_t * L_61;
		L_61 = Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF(L_60, _stringLiteral513431A61E5716B54D536064FFB2DD5BBEF0EBF3, /*hidden argument*/NULL);
		V_6 = L_61;
		MethodInfo_t * L_62 = V_6;
		bool L_63;
		L_63 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_62, NULL, /*hidden argument*/NULL);
		if (L_63)
		{
			goto IL_0123;
		}
	}
	{
		MethodInfo_t * L_64 = V_6;
		NullCheck(L_64);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_65;
		L_65 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_64);
		G_B20_0 = L_65;
		goto IL_0124;
	}

IL_0123:
	{
		G_B20_0 = ((ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B*)(NULL));
	}

IL_0124:
	{
		V_7 = G_B20_0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_66 = V_7;
		if (!L_66)
		{
			goto IL_013c;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_67 = V_7;
		NullCheck(L_67);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_013c;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_68 = V_7;
		NullCheck(L_68);
		int32_t L_69 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		Type_t * L_71;
		L_71 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_70);
		G_B24_0 = L_71;
		goto IL_013d;
	}

IL_013c:
	{
		G_B24_0 = ((Type_t *)(NULL));
	}

IL_013d:
	{
		V_8 = G_B24_0;
		Type_t * L_72 = V_8;
		bool L_73;
		L_73 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_72, NULL, /*hidden argument*/NULL);
		if (L_73)
		{
			goto IL_01b7;
		}
	}
	{
		Type_t * L_74 = V_8;
		Type_t * L_75;
		L_75 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_74, /*hidden argument*/NULL);
		Type_t * L_76 = ___arrayType1;
		Type_t * L_77;
		L_77 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_76, /*hidden argument*/NULL);
		NullCheck(L_75);
		bool L_78;
		L_78 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_75, L_77);
		if (!L_78)
		{
			goto IL_01b7;
		}
	}

IL_015d:
	try
	{ // begin try (depth: 1)
		MethodInfo_t * L_79 = V_6;
		RuntimeObject * L_80 = V_4;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_81 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		V_18 = L_81;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_82 = V_18;
		RuntimeObject* L_83 = ___value2;
		NullCheck(L_82);
		ArrayElementTypeCheck (L_82, L_83);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_83);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_84 = V_18;
		NullCheck(L_79);
		RuntimeObject * L_85;
		L_85 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_79, L_80, L_84, /*hidden argument*/NULL);
		goto IL_01b4;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0178;
		}
		throw e;
	}

CATCH_0178:
	{ // begin catch(System.Reflection.TargetInvocationException)
		{
			V_9 = ((TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C *)IL2CPP_GET_ACTIVE_EXCEPTION(TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C *));
			TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_86 = V_9;
			NullCheck(L_86);
			Exception_t * L_87;
			L_87 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_86, /*hidden argument*/NULL);
			if (!L_87)
			{
				goto IL_019c;
			}
		}

IL_0183:
		{
			TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_88 = V_9;
			NullCheck(L_88);
			Exception_t * L_89;
			L_89 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_88, /*hidden argument*/NULL);
			NullCheck(L_89);
			String_t* L_90;
			L_90 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_89);
			TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_91 = V_9;
			NullCheck(L_91);
			Exception_t * L_92;
			L_92 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_91, /*hidden argument*/NULL);
			JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * L_93 = (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692_il2cpp_TypeInfo_var)));
			JsonTypeCoercionException__ctor_m23C329A29DF7997EE994DBBF100AADAA0260024A(L_93, L_90, L_92, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_93, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeCoercionUtility_CoerceList_mF2743227B51ED45F2639CFCE278C9A019C4A9C00_RuntimeMethod_var)));
		}

IL_019c:
		{
			Type_t * L_94 = ___targetType0;
			NullCheck(L_94);
			String_t* L_95;
			L_95 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_94);
			String_t* L_96;
			L_96 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11D4F4A02AA8E60E8A662F8F750F430A9AE56C04)), L_95, /*hidden argument*/NULL);
			TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_97 = V_9;
			JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * L_98 = (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692_il2cpp_TypeInfo_var)));
			JsonTypeCoercionException__ctor_m23C329A29DF7997EE994DBBF100AADAA0260024A(L_98, L_96, L_97, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_98, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeCoercionUtility_CoerceList_mF2743227B51ED45F2639CFCE278C9A019C4A9C00_RuntimeMethod_var)));
		}
	} // end catch (depth: 1)

IL_01b4:
	{
		RuntimeObject * L_99 = V_4;
		return L_99;
	}

IL_01b7:
	{
		Type_t * L_100 = ___targetType0;
		Type_t * L_101;
		L_101 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_100, /*hidden argument*/NULL);
		NullCheck(L_101);
		MethodInfo_t * L_102;
		L_102 = Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF(L_101, _stringLiteral107694947DB47644F8036602F63473486E1ED925, /*hidden argument*/NULL);
		V_6 = L_102;
		MethodInfo_t * L_103 = V_6;
		bool L_104;
		L_104 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_103, NULL, /*hidden argument*/NULL);
		if (L_104)
		{
			goto IL_01dc;
		}
	}
	{
		MethodInfo_t * L_105 = V_6;
		NullCheck(L_105);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_106;
		L_106 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_105);
		G_B34_0 = L_106;
		goto IL_01dd;
	}

IL_01dc:
	{
		G_B34_0 = ((ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B*)(NULL));
	}

IL_01dd:
	{
		V_7 = G_B34_0;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_107 = V_7;
		if (!L_107)
		{
			goto IL_01f5;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_108 = V_7;
		NullCheck(L_108);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_108)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_01f5;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_109 = V_7;
		NullCheck(L_109);
		int32_t L_110 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		Type_t * L_112;
		L_112 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_111);
		G_B38_0 = L_112;
		goto IL_01f6;
	}

IL_01f5:
	{
		G_B38_0 = ((Type_t *)(NULL));
	}

IL_01f6:
	{
		V_8 = G_B38_0;
		Type_t * L_113 = V_8;
		bool L_114;
		L_114 = Object_Equals_mBE334AF263BDADA1D0F1DE7E14456A63E47F8053(L_113, NULL, /*hidden argument*/NULL);
		if (L_114)
		{
			goto IL_029b;
		}
	}
	{
		RuntimeObject* L_115 = ___value2;
		NullCheck(L_115);
		RuntimeObject* L_116;
		L_116 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_115);
		V_19 = L_116;
	}

IL_020d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0278;
		}

IL_020f:
		{
			RuntimeObject* L_117 = V_19;
			NullCheck(L_117);
			RuntimeObject * L_118;
			L_118 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_117);
			V_10 = L_118;
		}

IL_0218:
		try
		{ // begin try (depth: 2)
			MethodInfo_t * L_119 = V_6;
			RuntimeObject * L_120 = V_4;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_121 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
			V_20 = L_121;
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_122 = V_20;
			Type_t * L_123 = V_8;
			RuntimeObject * L_124 = V_10;
			RuntimeObject * L_125;
			L_125 = TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E(__this, L_123, L_124, /*hidden argument*/NULL);
			NullCheck(L_122);
			ArrayElementTypeCheck (L_122, L_125);
			(L_122)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_125);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_126 = V_20;
			NullCheck(L_119);
			RuntimeObject * L_127;
			L_127 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_119, L_120, L_126, /*hidden argument*/NULL);
			goto IL_0278;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_023c;
			}
			throw e;
		}

CATCH_023c:
		{ // begin catch(System.Reflection.TargetInvocationException)
			{
				V_11 = ((TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C *)IL2CPP_GET_ACTIVE_EXCEPTION(TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C *));
				TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_128 = V_11;
				NullCheck(L_128);
				Exception_t * L_129;
				L_129 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_128, /*hidden argument*/NULL);
				if (!L_129)
				{
					goto IL_0260;
				}
			}

IL_0247:
			{
				TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_130 = V_11;
				NullCheck(L_130);
				Exception_t * L_131;
				L_131 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_130, /*hidden argument*/NULL);
				NullCheck(L_131);
				String_t* L_132;
				L_132 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_131);
				TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_133 = V_11;
				NullCheck(L_133);
				Exception_t * L_134;
				L_134 = Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline(L_133, /*hidden argument*/NULL);
				JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * L_135 = (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692_il2cpp_TypeInfo_var)));
				JsonTypeCoercionException__ctor_m23C329A29DF7997EE994DBBF100AADAA0260024A(L_135, L_132, L_134, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_135, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeCoercionUtility_CoerceList_mF2743227B51ED45F2639CFCE278C9A019C4A9C00_RuntimeMethod_var)));
			}

IL_0260:
			{
				Type_t * L_136 = ___targetType0;
				NullCheck(L_136);
				String_t* L_137;
				L_137 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_136);
				String_t* L_138;
				L_138 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE31198D813D1CE557B993E1B1107E6160E81320)), L_137, /*hidden argument*/NULL);
				TargetInvocationException_t30F4C50D323F448CD2E08BDB8F47694B08EB354C * L_139 = V_11;
				JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * L_140 = (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692_il2cpp_TypeInfo_var)));
				JsonTypeCoercionException__ctor_m23C329A29DF7997EE994DBBF100AADAA0260024A(L_140, L_138, L_139, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_140, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeCoercionUtility_CoerceList_mF2743227B51ED45F2639CFCE278C9A019C4A9C00_RuntimeMethod_var)));
			}
		} // end catch (depth: 2)

IL_0278:
		{
			RuntimeObject* L_141 = V_19;
			NullCheck(L_141);
			bool L_142;
			L_142 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_141);
			if (L_142)
			{
				goto IL_020f;
			}
		}

IL_0281:
		{
			IL2CPP_LEAVE(0x298, FINALLY_0283);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0283;
	}

FINALLY_0283:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_143 = V_19;
			V_21 = ((RuntimeObject*)IsInst((RuntimeObject*)L_143, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_144 = V_21;
			if (!L_144)
			{
				goto IL_0297;
			}
		}

IL_0290:
		{
			RuntimeObject* L_145 = V_21;
			NullCheck(L_145);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_145);
		}

IL_0297:
		{
			IL2CPP_END_FINALLY(643)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(643)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x298, IL_0298)
	}

IL_0298:
	{
		RuntimeObject * L_146 = V_4;
		return L_146;
	}

IL_029b:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_147 = ___value2;
		Type_t * L_148 = ___targetType0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		RuntimeObject * L_149;
		L_149 = Convert_ChangeType_mD726EC15920319382D858ECD7FD78339110D7FD4(L_147, L_148, /*hidden argument*/NULL);
		V_13 = L_149;
		goto IL_02dd;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02a6;
		}
		throw e;
	}

CATCH_02a6:
	{ // begin catch(System.Exception)
		V_12 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_150 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var)), (uint32_t)2);
		V_22 = L_150;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_151 = V_22;
		RuntimeObject* L_152 = ___value2;
		NullCheck(L_152);
		Type_t * L_153;
		L_153 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_152, /*hidden argument*/NULL);
		NullCheck(L_153);
		String_t* L_154;
		L_154 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_153);
		NullCheck(L_151);
		ArrayElementTypeCheck (L_151, L_154);
		(L_151)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_154);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_155 = V_22;
		Type_t * L_156 = ___targetType0;
		NullCheck(L_156);
		String_t* L_157;
		L_157 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_156);
		NullCheck(L_155);
		ArrayElementTypeCheck (L_155, L_157);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_157);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_158 = V_22;
		String_t* L_159;
		L_159 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB62FEDE14B2DC6477B8036B35157240CE69CA5E8)), L_158, /*hidden argument*/NULL);
		Exception_t * L_160 = V_12;
		JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 * L_161 = (JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonTypeCoercionException_tA3D6D5CC86E00715561EF0AB0D20DB3650CEE692_il2cpp_TypeInfo_var)));
		JsonTypeCoercionException__ctor_m23C329A29DF7997EE994DBBF100AADAA0260024A(L_161, L_159, L_160, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_161, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TypeCoercionUtility_CoerceList_mF2743227B51ED45F2639CFCE278C9A019C4A9C00_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_02dd:
	{
		RuntimeObject * L_162 = V_13;
		return L_162;
	}
}
// System.Array Pathfinding.Serialization.JsonFx.TypeCoercionUtility::CoerceArray(System.Type,System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * TypeCoercionUtility_CoerceArray_m18EC71BDFBD11E4A9C9D42B6CA3307C426704AA3 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, Type_t * ___elementType0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeArray * V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		V_0 = 0;
		RuntimeObject* L_0 = ___value1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_0);
		V_4 = L_1;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0018;
		}

IL_000c:
		{
			RuntimeObject* L_2 = V_4;
			NullCheck(L_2);
			RuntimeObject * L_3;
			L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_2);
			int32_t L_4 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		}

IL_0018:
		{
			RuntimeObject* L_5 = V_4;
			NullCheck(L_5);
			bool L_6;
			L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_000c;
			}
		}

IL_0021:
		{
			IL2CPP_LEAVE(0x38, FINALLY_0023);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_4;
			V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_8 = V_5;
			if (!L_8)
			{
				goto IL_0037;
			}
		}

IL_0030:
		{
			RuntimeObject* L_9 = V_5;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_0037:
		{
			IL2CPP_END_FINALLY(35)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x38, IL_0038)
	}

IL_0038:
	{
		Type_t * L_10 = ___elementType0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		V_6 = L_11;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = V_6;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_13);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = V_6;
		RuntimeArray * L_15;
		L_15 = Array_CreateInstance_mAC559A46842AAC4E4C08FAA69E60AA6CCFDEDA64(L_10, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		V_2 = 0;
		RuntimeObject* L_16 = ___value1;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_16);
		V_7 = L_17;
	}

IL_0058:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0083;
		}

IL_005a:
		{
			RuntimeObject* L_18 = V_7;
			NullCheck(L_18);
			RuntimeObject * L_19;
			L_19 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_18);
			V_3 = L_19;
			RuntimeArray * L_20 = V_1;
			Type_t * L_21 = ___elementType0;
			RuntimeObject * L_22 = V_3;
			RuntimeObject * L_23;
			L_23 = TypeCoercionUtility_CoerceType_m3EE29209B564F28487A504F07604193C7739FF0E(__this, L_21, L_22, /*hidden argument*/NULL);
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
			V_8 = L_24;
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = V_8;
			int32_t L_26 = V_2;
			NullCheck(L_25);
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_26);
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = V_8;
			NullCheck(L_20);
			Array_SetValue_m155453B293707C32AF61EB51F74A2381B91C2847(L_20, L_23, L_27, /*hidden argument*/NULL);
			int32_t L_28 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		}

IL_0083:
		{
			RuntimeObject* L_29 = V_7;
			NullCheck(L_29);
			bool L_30;
			L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_005a;
			}
		}

IL_008c:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_31 = V_7;
			V_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_31, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_32 = V_9;
			if (!L_32)
			{
				goto IL_00a2;
			}
		}

IL_009b:
		{
			RuntimeObject* L_33 = V_9;
			NullCheck(L_33);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_33);
		}

IL_00a2:
		{
			IL2CPP_END_FINALLY(142)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
	}

IL_00a3:
	{
		RuntimeArray * L_34 = V_1;
		return L_34;
	}
}
// System.Boolean Pathfinding.Serialization.JsonFx.TypeCoercionUtility::IsNullable(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeCoercionUtility_IsNullable_m8B902510D0DB53140D619B3162A159F56CA220BC (Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		Type_t * L_1;
		L_1 = TypeCoercionUtility_GetTypeInfo_mB9897152FA822BF5E8ECBCE02D138CF57A28A27C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtFuncInvoker0< bool >::Invoke(80 /* System.Boolean System.Type::get_IsGenericType() */, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (Nullable_1_t4EDBE007AFFA0315135B9A508DACA62D3C201867_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = ___type0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(107 /* System.Type System.Type::GetGenericTypeDefinition() */, L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = Type_Equals_m964C48F3CF76988005D74733AA272461E5062F3A(L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeCoercionUtility__ctor_mF0DC0E8046282F40CB1AA68D39DF24CD94006D45 (TypeCoercionUtility_t0AB510ED39FF9C8552352C660942851EADFF7324 * __this, const RuntimeMethod* method)
{
	{
		__this->set_allowNullValueTypes_1((bool)1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
IL2CPP_EXTERN_C void DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshal_pinvoke(const DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262& unmarshaled, DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshaled_pinvoke& marshaled)
{
	Exception_t* ___child_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'child' of type 'DeepLazySetter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___child_1Exception, NULL);
}
IL2CPP_EXTERN_C void DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshal_pinvoke_back(const DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshaled_pinvoke& marshaled, DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262& unmarshaled)
{
	Exception_t* ___child_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'child' of type 'DeepLazySetter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___child_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
IL2CPP_EXTERN_C void DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshal_pinvoke_cleanup(DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
IL2CPP_EXTERN_C void DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshal_com(const DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262& unmarshaled, DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshaled_com& marshaled)
{
	Exception_t* ___child_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'child' of type 'DeepLazySetter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___child_1Exception, NULL);
}
IL2CPP_EXTERN_C void DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshal_com_back(const DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshaled_com& marshaled, DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262& unmarshaled)
{
	Exception_t* ___child_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'child' of type 'DeepLazySetter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___child_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Pathfinding.Serialization.JsonFx.ReferenceHandlerReader/DeepLazySetter
IL2CPP_EXTERN_C void DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshal_com_cleanup(DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonDeserializationException_get_Index_m9F78803C4C42AB64C2FF59D6DB34128993BECCE4_inline (JsonDeserializationException_t9233692511B69DB69D8F9A5507E81A6718958E3B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_index_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonNameAttribute_get_Name_m686C7AFE52EACCC11E2FF91631B56FB49B1B3B4D_inline (JsonNameAttribute_t469704CD738B758BD119DF9B5FC9893E1D590D8E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_jsonName_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReaderSettings_get_HandleCyclicReferences_mAC59C18B565E5AE845F3F7969644F1066ADD1A93_inline (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHandleCyclicReferencesU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReaderSettings_get_AllowUnquotedObjectKeys_m95DD95963F70BA049021A14F6E253C7DCEF8284E_inline (JsonReaderSettings_t265891367CD626A49BE510B1F87F9F2944CD1161 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_allowUnquotedObjectKeys_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * StringComparer_get_Ordinal_mF3B6370BEBD77351DB5218C867DCD669C47B8812_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var);
		StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * L_0 = ((StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6_il2cpp_TypeInfo_var))->get__ordinal_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_mC80FA729ECA3A7AF31D9F517A95E60FC23EB86B0_inline (TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * __this, int64_t ___ticks0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___ticks0;
		__this->set__ticks_22(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * Exception_get_InnerException_m10D85773B6B191C7D4E7D3C2954B84F9BB195218_inline (Exception_t * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get__innerException_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  List_1_get_Item_mDC993CCCCBF573DB43919E8E91B927D76C22C99A_gshared_inline (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* L_2 = (KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48*)__this->get__items_1();
		int32_t L_3 = ___index0;
		KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48*)L_2, (int32_t)L_3);
		return (KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m40417D9B18D29FD4A072DABC1449DACEF8009C6A_gshared_inline (KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mE3B72B1BB3B8DD41788D39A3AF38E6A94B241400_gshared_inline (KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mAD480D06B9E19C3032AF3EE954FF7D4D869637F2_gshared_inline (List_1_t7705EABB5D2289DAADF64E7239C13A632256F4B4 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  List_1_get_Item_m16C9B3D5182FA75E03E959F90530F42790212E40_gshared_inline (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C* L_2 = (KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)__this->get__items_1();
		int32_t L_3 = ___index0;
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((KeyValuePair_2U5BU5D_tA780E964000F617CC6335A0DEC92B09FE0085E1C*)L_2, (int32_t)L_3);
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8D980F48BD10D1ECDCA5064945183932705711AB_gshared_inline (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  List_1_get_Item_m1156E4299EC1F90BDEEFC39BA8AB9A9E6D2B9476_gshared_inline (List_1_t995E93A35BC66C790862167E6D42B370113C7AF7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9* L_2 = (KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9*)__this->get__items_1();
		int32_t L_3 = ___index0;
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((KeyValuePair_2U5BU5D_t5E45801875EDB7AC8EE517B5CD941F08D7FAB1B9*)L_2, (int32_t)L_3);
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m995933BA842A2C5EA84DE1707BE162770A8148BF_gshared_inline (List_1_t995E93A35BC66C790862167E6D42B370113C7AF7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  List_1_get_Item_m4FB4BBD57DC08E95768992566FD7250B785F0470_gshared_inline (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123* L_2 = (DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123*)__this->get__items_1();
		int32_t L_3 = ___index0;
		DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((DeepLazySetterU5BU5D_t4BE1CF1FEC818EAC725AEB598A70CC6ECB6BA123*)L_2, (int32_t)L_3);
		return (DeepLazySetter_tAA7AD5767F802BB60218A3E846820F965AE7E262 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8994FFC7AE7DA2C1360413DBD15A4172FE89B39A_gshared_inline (List_1_tE23BEE1261360E7C1BB56C2C2FFF78E8A29BE9AC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
