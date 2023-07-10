#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.String,System.IO.Compression.ZipArchiveEntry>
struct Dictionary_2_t946375D6C048CF14C34175C4980A6D90A85F8EE2;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEnumerator`1<System.IO.Compression.ZipArchiveEntry>
struct IEnumerator_1_t8D1F2EB0BA136BE5DD8EF422140DC5B47832BD8F;
// System.Collections.Generic.IList`1<System.IO.Compression.ZipArchiveEntry>
struct IList_1_tAB22EDE1E2C50DA294054493E261D0A98F5B5B6F;
// System.Collections.Generic.List`1<System.IO.Compression.ZipArchiveEntry>
struct List_1_tAAC6FD08275AFFA79A8E7A9EB5E45A91C80106D0;
// System.Collections.Generic.List`1<System.IO.Compression.ZipGenericExtraField>
struct List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.IO.Compression.ZipArchiveEntry>
struct ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.IO.BinaryReader
struct BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.IO.Compression.ZipArchive
struct ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F;
// System.IO.Compression.ZipArchiveEntry
struct ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t8D1F2EB0BA136BE5DD8EF422140DC5B47832BD8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral168DFB0223A253D8C177CD2D6A0DBA1B0ECEFB96;
IL2CPP_EXTERN_C String_t* _stringLiteral42C85608AB661F2121C84F54255CBAFC5728CF77;
IL2CPP_EXTERN_C String_t* _stringLiteral525277D2F376C0B1449BE7FBA9294AC2AE03DFD7;
IL2CPP_EXTERN_C String_t* _stringLiteral6052AC80E29B425758A2997B53AC96858AD5CF27;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5;
IL2CPP_EXTERN_C String_t* _stringLiteral7E28E9DF3E4EBB1EFADEE524D7CE7A4F5B1DE1CA;
IL2CPP_EXTERN_C String_t* _stringLiteral977466E2B0BB387B2215E6C982AE462F2C9AB959;
IL2CPP_EXTERN_C String_t* _stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74;
IL2CPP_EXTERN_C String_t* _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m179A15802E5D437FDD7F72DEC83D3F00D257CA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipFileExtensions_ExtractToDirectory_m1700A974FC42D759B22466F3434EB13A78EFA77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipFileExtensions_ExtractToFile_m53E4D7ACB1C36B10794414C9C092256A150878F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipFile_ExtractToDirectory_mF87EC39E2EE8E183399569E564E4FD7D07919BDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBE47840DE5F980B73783F7AF7610CCDD42E893E7 
{
public:

public:
};


// System.Object


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.IO.Compression.ZipArchiveEntry>
struct ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.IO.PathInternal
struct PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A  : public RuntimeObject
{
public:

public:
};

struct PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A_StaticFields
{
public:
	// System.Boolean System.IO.PathInternal::s_isCaseSensitive
	bool ___s_isCaseSensitive_0;

public:
	inline static int32_t get_offset_of_s_isCaseSensitive_0() { return static_cast<int32_t>(offsetof(PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A_StaticFields, ___s_isCaseSensitive_0)); }
	inline bool get_s_isCaseSensitive_0() const { return ___s_isCaseSensitive_0; }
	inline bool* get_address_of_s_isCaseSensitive_0() { return &___s_isCaseSensitive_0; }
	inline void set_s_isCaseSensitive_0(bool value)
	{
		___s_isCaseSensitive_0 = value;
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

// System.IO.Compression.ZipFile
struct ZipFile_t40BBFE8C4812321EA27B212653C673CB2FB944D4  : public RuntimeObject
{
public:

public:
};


// System.IO.Compression.ZipFileExtensions
struct ZipFileExtensions_t2909AD89AC35AF88F3E52A8F5765EF129AA0FACE  : public RuntimeObject
{
public:

public:
};


// System.Nullable`1<System.Int64>
struct Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F 
{
public:
	// T System.Nullable`1::value
	int64_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___value_0)); }
	inline int64_t get_value_0() const { return ___value_0; }
	inline int64_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int64_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
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


// System.IO.Compression.CompressionLevel
struct CompressionLevel_t2AE1FC3232ACECDC676037FF80CD1679CC0601EF 
{
public:
	// System.Int32 System.IO.Compression.CompressionLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionLevel_t2AE1FC3232ACECDC676037FF80CD1679CC0601EF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
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

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileOptions
struct FileOptions_t83C5A0A606E5184DF8E5720503CA94E559A61330 
{
public:
	// System.Int32 System.IO.FileOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileOptions_t83C5A0A606E5184DF8E5720503CA94E559A61330, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileShare
struct FileShare_t335C3032B91F35BECF45855A61AF9FA5BB9C07BB 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileShare_t335C3032B91F35BECF45855A61AF9FA5BB9C07BB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Compression.ZipArchiveMode
struct ZipArchiveMode_t86EE6A498CC1EED9FC56F4A6AB15070A1DD37428 
{
public:
	// System.Int32 System.IO.Compression.ZipArchiveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipArchiveMode_t86EE6A498CC1EED9FC56F4A6AB15070A1DD37428, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Compression.ZipVersionMadeByPlatform
struct ZipVersionMadeByPlatform_t9054373220609B3912303C20801FFF3721F2330F 
{
public:
	// System.Byte System.IO.Compression.ZipVersionMadeByPlatform::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipVersionMadeByPlatform_t9054373220609B3912303C20801FFF3721F2330F, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Compression.ZipVersionNeededValues
struct ZipVersionNeededValues_tEAA82592B634DB47A1E2CBE1E60D66BA19D535E1 
{
public:
	// System.UInt16 System.IO.Compression.ZipVersionNeededValues::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ZipVersionNeededValues_tEAA82592B634DB47A1E2CBE1E60D66BA19D535E1, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Compression.ZipArchiveEntry/BitFlagValues
struct BitFlagValues_t1CA42A78F481D34BAC3DCE26396E51ACA586586E 
{
public:
	// System.UInt16 System.IO.Compression.ZipArchiveEntry/BitFlagValues::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BitFlagValues_t1CA42A78F481D34BAC3DCE26396E51ACA586586E, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.IO.Compression.ZipArchiveEntry/CompressionMethodValues
struct CompressionMethodValues_t4987D7EB9717BE3B88DADC626C14FBFDC5EA0CC5 
{
public:
	// System.UInt16 System.IO.Compression.ZipArchiveEntry/CompressionMethodValues::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompressionMethodValues_t4987D7EB9717BE3B88DADC626C14FBFDC5EA0CC5, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<System.IO.Compression.CompressionLevel>
struct Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// System.IO.MonoIOStat
struct MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.IO.Compression.ZipArchive
struct ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.Compression.ZipArchive::_archiveStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____archiveStream_0;
	// System.IO.Compression.ZipArchiveEntry System.IO.Compression.ZipArchive::_archiveStreamOwner
	ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * ____archiveStreamOwner_1;
	// System.IO.BinaryReader System.IO.Compression.ZipArchive::_archiveReader
	BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * ____archiveReader_2;
	// System.IO.Compression.ZipArchiveMode System.IO.Compression.ZipArchive::_mode
	int32_t ____mode_3;
	// System.Collections.Generic.List`1<System.IO.Compression.ZipArchiveEntry> System.IO.Compression.ZipArchive::_entries
	List_1_tAAC6FD08275AFFA79A8E7A9EB5E45A91C80106D0 * ____entries_4;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.IO.Compression.ZipArchiveEntry> System.IO.Compression.ZipArchive::_entriesCollection
	ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD * ____entriesCollection_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.IO.Compression.ZipArchiveEntry> System.IO.Compression.ZipArchive::_entriesDictionary
	Dictionary_2_t946375D6C048CF14C34175C4980A6D90A85F8EE2 * ____entriesDictionary_6;
	// System.Boolean System.IO.Compression.ZipArchive::_readEntries
	bool ____readEntries_7;
	// System.Boolean System.IO.Compression.ZipArchive::_leaveOpen
	bool ____leaveOpen_8;
	// System.Int64 System.IO.Compression.ZipArchive::_centralDirectoryStart
	int64_t ____centralDirectoryStart_9;
	// System.Boolean System.IO.Compression.ZipArchive::_isDisposed
	bool ____isDisposed_10;
	// System.UInt32 System.IO.Compression.ZipArchive::_numberOfThisDisk
	uint32_t ____numberOfThisDisk_11;
	// System.Int64 System.IO.Compression.ZipArchive::_expectedNumberOfEntries
	int64_t ____expectedNumberOfEntries_12;
	// System.IO.Stream System.IO.Compression.ZipArchive::_backingStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____backingStream_13;
	// System.Byte[] System.IO.Compression.ZipArchive::_archiveComment
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____archiveComment_14;
	// System.Text.Encoding System.IO.Compression.ZipArchive::_entryNameEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ____entryNameEncoding_15;

public:
	inline static int32_t get_offset_of__archiveStream_0() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____archiveStream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__archiveStream_0() const { return ____archiveStream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__archiveStream_0() { return &____archiveStream_0; }
	inline void set__archiveStream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____archiveStream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archiveStream_0), (void*)value);
	}

	inline static int32_t get_offset_of__archiveStreamOwner_1() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____archiveStreamOwner_1)); }
	inline ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * get__archiveStreamOwner_1() const { return ____archiveStreamOwner_1; }
	inline ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 ** get_address_of__archiveStreamOwner_1() { return &____archiveStreamOwner_1; }
	inline void set__archiveStreamOwner_1(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * value)
	{
		____archiveStreamOwner_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archiveStreamOwner_1), (void*)value);
	}

	inline static int32_t get_offset_of__archiveReader_2() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____archiveReader_2)); }
	inline BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * get__archiveReader_2() const { return ____archiveReader_2; }
	inline BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 ** get_address_of__archiveReader_2() { return &____archiveReader_2; }
	inline void set__archiveReader_2(BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 * value)
	{
		____archiveReader_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archiveReader_2), (void*)value);
	}

	inline static int32_t get_offset_of__mode_3() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____mode_3)); }
	inline int32_t get__mode_3() const { return ____mode_3; }
	inline int32_t* get_address_of__mode_3() { return &____mode_3; }
	inline void set__mode_3(int32_t value)
	{
		____mode_3 = value;
	}

	inline static int32_t get_offset_of__entries_4() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____entries_4)); }
	inline List_1_tAAC6FD08275AFFA79A8E7A9EB5E45A91C80106D0 * get__entries_4() const { return ____entries_4; }
	inline List_1_tAAC6FD08275AFFA79A8E7A9EB5E45A91C80106D0 ** get_address_of__entries_4() { return &____entries_4; }
	inline void set__entries_4(List_1_tAAC6FD08275AFFA79A8E7A9EB5E45A91C80106D0 * value)
	{
		____entries_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entries_4), (void*)value);
	}

	inline static int32_t get_offset_of__entriesCollection_5() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____entriesCollection_5)); }
	inline ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD * get__entriesCollection_5() const { return ____entriesCollection_5; }
	inline ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD ** get_address_of__entriesCollection_5() { return &____entriesCollection_5; }
	inline void set__entriesCollection_5(ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD * value)
	{
		____entriesCollection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesCollection_5), (void*)value);
	}

	inline static int32_t get_offset_of__entriesDictionary_6() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____entriesDictionary_6)); }
	inline Dictionary_2_t946375D6C048CF14C34175C4980A6D90A85F8EE2 * get__entriesDictionary_6() const { return ____entriesDictionary_6; }
	inline Dictionary_2_t946375D6C048CF14C34175C4980A6D90A85F8EE2 ** get_address_of__entriesDictionary_6() { return &____entriesDictionary_6; }
	inline void set__entriesDictionary_6(Dictionary_2_t946375D6C048CF14C34175C4980A6D90A85F8EE2 * value)
	{
		____entriesDictionary_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesDictionary_6), (void*)value);
	}

	inline static int32_t get_offset_of__readEntries_7() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____readEntries_7)); }
	inline bool get__readEntries_7() const { return ____readEntries_7; }
	inline bool* get_address_of__readEntries_7() { return &____readEntries_7; }
	inline void set__readEntries_7(bool value)
	{
		____readEntries_7 = value;
	}

	inline static int32_t get_offset_of__leaveOpen_8() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____leaveOpen_8)); }
	inline bool get__leaveOpen_8() const { return ____leaveOpen_8; }
	inline bool* get_address_of__leaveOpen_8() { return &____leaveOpen_8; }
	inline void set__leaveOpen_8(bool value)
	{
		____leaveOpen_8 = value;
	}

	inline static int32_t get_offset_of__centralDirectoryStart_9() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____centralDirectoryStart_9)); }
	inline int64_t get__centralDirectoryStart_9() const { return ____centralDirectoryStart_9; }
	inline int64_t* get_address_of__centralDirectoryStart_9() { return &____centralDirectoryStart_9; }
	inline void set__centralDirectoryStart_9(int64_t value)
	{
		____centralDirectoryStart_9 = value;
	}

	inline static int32_t get_offset_of__isDisposed_10() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____isDisposed_10)); }
	inline bool get__isDisposed_10() const { return ____isDisposed_10; }
	inline bool* get_address_of__isDisposed_10() { return &____isDisposed_10; }
	inline void set__isDisposed_10(bool value)
	{
		____isDisposed_10 = value;
	}

	inline static int32_t get_offset_of__numberOfThisDisk_11() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____numberOfThisDisk_11)); }
	inline uint32_t get__numberOfThisDisk_11() const { return ____numberOfThisDisk_11; }
	inline uint32_t* get_address_of__numberOfThisDisk_11() { return &____numberOfThisDisk_11; }
	inline void set__numberOfThisDisk_11(uint32_t value)
	{
		____numberOfThisDisk_11 = value;
	}

	inline static int32_t get_offset_of__expectedNumberOfEntries_12() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____expectedNumberOfEntries_12)); }
	inline int64_t get__expectedNumberOfEntries_12() const { return ____expectedNumberOfEntries_12; }
	inline int64_t* get_address_of__expectedNumberOfEntries_12() { return &____expectedNumberOfEntries_12; }
	inline void set__expectedNumberOfEntries_12(int64_t value)
	{
		____expectedNumberOfEntries_12 = value;
	}

	inline static int32_t get_offset_of__backingStream_13() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____backingStream_13)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__backingStream_13() const { return ____backingStream_13; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__backingStream_13() { return &____backingStream_13; }
	inline void set__backingStream_13(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____backingStream_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____backingStream_13), (void*)value);
	}

	inline static int32_t get_offset_of__archiveComment_14() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____archiveComment_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__archiveComment_14() const { return ____archiveComment_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__archiveComment_14() { return &____archiveComment_14; }
	inline void set__archiveComment_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____archiveComment_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archiveComment_14), (void*)value);
	}

	inline static int32_t get_offset_of__entryNameEncoding_15() { return static_cast<int32_t>(offsetof(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F, ____entryNameEncoding_15)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get__entryNameEncoding_15() const { return ____entryNameEncoding_15; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of__entryNameEncoding_15() { return &____entryNameEncoding_15; }
	inline void set__entryNameEncoding_15(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		____entryNameEncoding_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entryNameEncoding_15), (void*)value);
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


// System.IO.FileSystemInfo
struct FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IO.Compression.ZipArchiveEntry
struct ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345  : public RuntimeObject
{
public:
	// System.IO.Compression.ZipArchive System.IO.Compression.ZipArchiveEntry::_archive
	ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * ____archive_0;
	// System.Boolean System.IO.Compression.ZipArchiveEntry::_originallyInArchive
	bool ____originallyInArchive_1;
	// System.Int32 System.IO.Compression.ZipArchiveEntry::_diskNumberStart
	int32_t ____diskNumberStart_2;
	// System.IO.Compression.ZipVersionMadeByPlatform System.IO.Compression.ZipArchiveEntry::_versionMadeByPlatform
	uint8_t ____versionMadeByPlatform_3;
	// System.IO.Compression.ZipVersionNeededValues System.IO.Compression.ZipArchiveEntry::_versionMadeBySpecification
	uint16_t ____versionMadeBySpecification_4;
	// System.IO.Compression.ZipVersionNeededValues System.IO.Compression.ZipArchiveEntry::_versionToExtract
	uint16_t ____versionToExtract_5;
	// System.IO.Compression.ZipArchiveEntry/BitFlagValues System.IO.Compression.ZipArchiveEntry::_generalPurposeBitFlag
	uint16_t ____generalPurposeBitFlag_6;
	// System.IO.Compression.ZipArchiveEntry/CompressionMethodValues System.IO.Compression.ZipArchiveEntry::_storedCompressionMethod
	uint16_t ____storedCompressionMethod_7;
	// System.DateTimeOffset System.IO.Compression.ZipArchiveEntry::_lastModified
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ____lastModified_8;
	// System.Int64 System.IO.Compression.ZipArchiveEntry::_compressedSize
	int64_t ____compressedSize_9;
	// System.Int64 System.IO.Compression.ZipArchiveEntry::_uncompressedSize
	int64_t ____uncompressedSize_10;
	// System.Int64 System.IO.Compression.ZipArchiveEntry::_offsetOfLocalHeader
	int64_t ____offsetOfLocalHeader_11;
	// System.Nullable`1<System.Int64> System.IO.Compression.ZipArchiveEntry::_storedOffsetOfCompressedData
	Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  ____storedOffsetOfCompressedData_12;
	// System.UInt32 System.IO.Compression.ZipArchiveEntry::_crc32
	uint32_t ____crc32_13;
	// System.Byte[][] System.IO.Compression.ZipArchiveEntry::_compressedBytes
	ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* ____compressedBytes_14;
	// System.IO.MemoryStream System.IO.Compression.ZipArchiveEntry::_storedUncompressedData
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * ____storedUncompressedData_15;
	// System.Boolean System.IO.Compression.ZipArchiveEntry::_currentlyOpenForWrite
	bool ____currentlyOpenForWrite_16;
	// System.Boolean System.IO.Compression.ZipArchiveEntry::_everOpenedForWrite
	bool ____everOpenedForWrite_17;
	// System.IO.Stream System.IO.Compression.ZipArchiveEntry::_outstandingWriteStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____outstandingWriteStream_18;
	// System.UInt32 System.IO.Compression.ZipArchiveEntry::_externalFileAttr
	uint32_t ____externalFileAttr_19;
	// System.String System.IO.Compression.ZipArchiveEntry::_storedEntryName
	String_t* ____storedEntryName_20;
	// System.Byte[] System.IO.Compression.ZipArchiveEntry::_storedEntryNameBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____storedEntryNameBytes_21;
	// System.Collections.Generic.List`1<System.IO.Compression.ZipGenericExtraField> System.IO.Compression.ZipArchiveEntry::_cdUnknownExtraFields
	List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 * ____cdUnknownExtraFields_22;
	// System.Collections.Generic.List`1<System.IO.Compression.ZipGenericExtraField> System.IO.Compression.ZipArchiveEntry::_lhUnknownExtraFields
	List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 * ____lhUnknownExtraFields_23;
	// System.Byte[] System.IO.Compression.ZipArchiveEntry::_fileComment
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____fileComment_24;
	// System.Nullable`1<System.IO.Compression.CompressionLevel> System.IO.Compression.ZipArchiveEntry::_compressionLevel
	Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  ____compressionLevel_25;

public:
	inline static int32_t get_offset_of__archive_0() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____archive_0)); }
	inline ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * get__archive_0() const { return ____archive_0; }
	inline ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F ** get_address_of__archive_0() { return &____archive_0; }
	inline void set__archive_0(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * value)
	{
		____archive_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____archive_0), (void*)value);
	}

	inline static int32_t get_offset_of__originallyInArchive_1() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____originallyInArchive_1)); }
	inline bool get__originallyInArchive_1() const { return ____originallyInArchive_1; }
	inline bool* get_address_of__originallyInArchive_1() { return &____originallyInArchive_1; }
	inline void set__originallyInArchive_1(bool value)
	{
		____originallyInArchive_1 = value;
	}

	inline static int32_t get_offset_of__diskNumberStart_2() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____diskNumberStart_2)); }
	inline int32_t get__diskNumberStart_2() const { return ____diskNumberStart_2; }
	inline int32_t* get_address_of__diskNumberStart_2() { return &____diskNumberStart_2; }
	inline void set__diskNumberStart_2(int32_t value)
	{
		____diskNumberStart_2 = value;
	}

	inline static int32_t get_offset_of__versionMadeByPlatform_3() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____versionMadeByPlatform_3)); }
	inline uint8_t get__versionMadeByPlatform_3() const { return ____versionMadeByPlatform_3; }
	inline uint8_t* get_address_of__versionMadeByPlatform_3() { return &____versionMadeByPlatform_3; }
	inline void set__versionMadeByPlatform_3(uint8_t value)
	{
		____versionMadeByPlatform_3 = value;
	}

	inline static int32_t get_offset_of__versionMadeBySpecification_4() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____versionMadeBySpecification_4)); }
	inline uint16_t get__versionMadeBySpecification_4() const { return ____versionMadeBySpecification_4; }
	inline uint16_t* get_address_of__versionMadeBySpecification_4() { return &____versionMadeBySpecification_4; }
	inline void set__versionMadeBySpecification_4(uint16_t value)
	{
		____versionMadeBySpecification_4 = value;
	}

	inline static int32_t get_offset_of__versionToExtract_5() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____versionToExtract_5)); }
	inline uint16_t get__versionToExtract_5() const { return ____versionToExtract_5; }
	inline uint16_t* get_address_of__versionToExtract_5() { return &____versionToExtract_5; }
	inline void set__versionToExtract_5(uint16_t value)
	{
		____versionToExtract_5 = value;
	}

	inline static int32_t get_offset_of__generalPurposeBitFlag_6() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____generalPurposeBitFlag_6)); }
	inline uint16_t get__generalPurposeBitFlag_6() const { return ____generalPurposeBitFlag_6; }
	inline uint16_t* get_address_of__generalPurposeBitFlag_6() { return &____generalPurposeBitFlag_6; }
	inline void set__generalPurposeBitFlag_6(uint16_t value)
	{
		____generalPurposeBitFlag_6 = value;
	}

	inline static int32_t get_offset_of__storedCompressionMethod_7() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____storedCompressionMethod_7)); }
	inline uint16_t get__storedCompressionMethod_7() const { return ____storedCompressionMethod_7; }
	inline uint16_t* get_address_of__storedCompressionMethod_7() { return &____storedCompressionMethod_7; }
	inline void set__storedCompressionMethod_7(uint16_t value)
	{
		____storedCompressionMethod_7 = value;
	}

	inline static int32_t get_offset_of__lastModified_8() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____lastModified_8)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get__lastModified_8() const { return ____lastModified_8; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of__lastModified_8() { return &____lastModified_8; }
	inline void set__lastModified_8(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		____lastModified_8 = value;
	}

	inline static int32_t get_offset_of__compressedSize_9() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____compressedSize_9)); }
	inline int64_t get__compressedSize_9() const { return ____compressedSize_9; }
	inline int64_t* get_address_of__compressedSize_9() { return &____compressedSize_9; }
	inline void set__compressedSize_9(int64_t value)
	{
		____compressedSize_9 = value;
	}

	inline static int32_t get_offset_of__uncompressedSize_10() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____uncompressedSize_10)); }
	inline int64_t get__uncompressedSize_10() const { return ____uncompressedSize_10; }
	inline int64_t* get_address_of__uncompressedSize_10() { return &____uncompressedSize_10; }
	inline void set__uncompressedSize_10(int64_t value)
	{
		____uncompressedSize_10 = value;
	}

	inline static int32_t get_offset_of__offsetOfLocalHeader_11() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____offsetOfLocalHeader_11)); }
	inline int64_t get__offsetOfLocalHeader_11() const { return ____offsetOfLocalHeader_11; }
	inline int64_t* get_address_of__offsetOfLocalHeader_11() { return &____offsetOfLocalHeader_11; }
	inline void set__offsetOfLocalHeader_11(int64_t value)
	{
		____offsetOfLocalHeader_11 = value;
	}

	inline static int32_t get_offset_of__storedOffsetOfCompressedData_12() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____storedOffsetOfCompressedData_12)); }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  get__storedOffsetOfCompressedData_12() const { return ____storedOffsetOfCompressedData_12; }
	inline Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F * get_address_of__storedOffsetOfCompressedData_12() { return &____storedOffsetOfCompressedData_12; }
	inline void set__storedOffsetOfCompressedData_12(Nullable_1_t340361C8134256120F5769AC5A3F743DB6C11D1F  value)
	{
		____storedOffsetOfCompressedData_12 = value;
	}

	inline static int32_t get_offset_of__crc32_13() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____crc32_13)); }
	inline uint32_t get__crc32_13() const { return ____crc32_13; }
	inline uint32_t* get_address_of__crc32_13() { return &____crc32_13; }
	inline void set__crc32_13(uint32_t value)
	{
		____crc32_13 = value;
	}

	inline static int32_t get_offset_of__compressedBytes_14() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____compressedBytes_14)); }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* get__compressedBytes_14() const { return ____compressedBytes_14; }
	inline ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D** get_address_of__compressedBytes_14() { return &____compressedBytes_14; }
	inline void set__compressedBytes_14(ByteU5BU5DU5BU5D_t95107DE217CCFA8CD77945AC2CB9492D4D01FE8D* value)
	{
		____compressedBytes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____compressedBytes_14), (void*)value);
	}

	inline static int32_t get_offset_of__storedUncompressedData_15() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____storedUncompressedData_15)); }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * get__storedUncompressedData_15() const { return ____storedUncompressedData_15; }
	inline MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** get_address_of__storedUncompressedData_15() { return &____storedUncompressedData_15; }
	inline void set__storedUncompressedData_15(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * value)
	{
		____storedUncompressedData_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storedUncompressedData_15), (void*)value);
	}

	inline static int32_t get_offset_of__currentlyOpenForWrite_16() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____currentlyOpenForWrite_16)); }
	inline bool get__currentlyOpenForWrite_16() const { return ____currentlyOpenForWrite_16; }
	inline bool* get_address_of__currentlyOpenForWrite_16() { return &____currentlyOpenForWrite_16; }
	inline void set__currentlyOpenForWrite_16(bool value)
	{
		____currentlyOpenForWrite_16 = value;
	}

	inline static int32_t get_offset_of__everOpenedForWrite_17() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____everOpenedForWrite_17)); }
	inline bool get__everOpenedForWrite_17() const { return ____everOpenedForWrite_17; }
	inline bool* get_address_of__everOpenedForWrite_17() { return &____everOpenedForWrite_17; }
	inline void set__everOpenedForWrite_17(bool value)
	{
		____everOpenedForWrite_17 = value;
	}

	inline static int32_t get_offset_of__outstandingWriteStream_18() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____outstandingWriteStream_18)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__outstandingWriteStream_18() const { return ____outstandingWriteStream_18; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__outstandingWriteStream_18() { return &____outstandingWriteStream_18; }
	inline void set__outstandingWriteStream_18(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____outstandingWriteStream_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____outstandingWriteStream_18), (void*)value);
	}

	inline static int32_t get_offset_of__externalFileAttr_19() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____externalFileAttr_19)); }
	inline uint32_t get__externalFileAttr_19() const { return ____externalFileAttr_19; }
	inline uint32_t* get_address_of__externalFileAttr_19() { return &____externalFileAttr_19; }
	inline void set__externalFileAttr_19(uint32_t value)
	{
		____externalFileAttr_19 = value;
	}

	inline static int32_t get_offset_of__storedEntryName_20() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____storedEntryName_20)); }
	inline String_t* get__storedEntryName_20() const { return ____storedEntryName_20; }
	inline String_t** get_address_of__storedEntryName_20() { return &____storedEntryName_20; }
	inline void set__storedEntryName_20(String_t* value)
	{
		____storedEntryName_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storedEntryName_20), (void*)value);
	}

	inline static int32_t get_offset_of__storedEntryNameBytes_21() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____storedEntryNameBytes_21)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__storedEntryNameBytes_21() const { return ____storedEntryNameBytes_21; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__storedEntryNameBytes_21() { return &____storedEntryNameBytes_21; }
	inline void set__storedEntryNameBytes_21(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____storedEntryNameBytes_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____storedEntryNameBytes_21), (void*)value);
	}

	inline static int32_t get_offset_of__cdUnknownExtraFields_22() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____cdUnknownExtraFields_22)); }
	inline List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 * get__cdUnknownExtraFields_22() const { return ____cdUnknownExtraFields_22; }
	inline List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 ** get_address_of__cdUnknownExtraFields_22() { return &____cdUnknownExtraFields_22; }
	inline void set__cdUnknownExtraFields_22(List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 * value)
	{
		____cdUnknownExtraFields_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cdUnknownExtraFields_22), (void*)value);
	}

	inline static int32_t get_offset_of__lhUnknownExtraFields_23() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____lhUnknownExtraFields_23)); }
	inline List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 * get__lhUnknownExtraFields_23() const { return ____lhUnknownExtraFields_23; }
	inline List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 ** get_address_of__lhUnknownExtraFields_23() { return &____lhUnknownExtraFields_23; }
	inline void set__lhUnknownExtraFields_23(List_1_t3457C3ECE324BFF60DCBF6E789A70B0F15706349 * value)
	{
		____lhUnknownExtraFields_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lhUnknownExtraFields_23), (void*)value);
	}

	inline static int32_t get_offset_of__fileComment_24() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____fileComment_24)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__fileComment_24() const { return ____fileComment_24; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__fileComment_24() { return &____fileComment_24; }
	inline void set__fileComment_24(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____fileComment_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileComment_24), (void*)value);
	}

	inline static int32_t get_offset_of__compressionLevel_25() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345, ____compressionLevel_25)); }
	inline Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  get__compressionLevel_25() const { return ____compressionLevel_25; }
	inline Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6 * get_address_of__compressionLevel_25() { return &____compressionLevel_25; }
	inline void set__compressionLevel_25(Nullable_1_tB35D31D08890EB3CC7969CC4FAE47625391FB7C6  value)
	{
		____compressionLevel_25 = value;
	}
};

struct ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345_StaticFields
{
public:
	// System.Boolean System.IO.Compression.ZipArchiveEntry::s_allowLargeZipArchiveEntriesInUpdateMode
	bool ___s_allowLargeZipArchiveEntriesInUpdateMode_26;
	// System.IO.Compression.ZipVersionMadeByPlatform System.IO.Compression.ZipArchiveEntry::CurrentZipPlatform
	uint8_t ___CurrentZipPlatform_27;

public:
	inline static int32_t get_offset_of_s_allowLargeZipArchiveEntriesInUpdateMode_26() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345_StaticFields, ___s_allowLargeZipArchiveEntriesInUpdateMode_26)); }
	inline bool get_s_allowLargeZipArchiveEntriesInUpdateMode_26() const { return ___s_allowLargeZipArchiveEntriesInUpdateMode_26; }
	inline bool* get_address_of_s_allowLargeZipArchiveEntriesInUpdateMode_26() { return &___s_allowLargeZipArchiveEntriesInUpdateMode_26; }
	inline void set_s_allowLargeZipArchiveEntriesInUpdateMode_26(bool value)
	{
		___s_allowLargeZipArchiveEntriesInUpdateMode_26 = value;
	}

	inline static int32_t get_offset_of_CurrentZipPlatform_27() { return static_cast<int32_t>(offsetof(ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345_StaticFields, ___CurrentZipPlatform_27)); }
	inline uint8_t get_CurrentZipPlatform_27() const { return ___CurrentZipPlatform_27; }
	inline uint8_t* get_address_of_CurrentZipPlatform_27() { return &___CurrentZipPlatform_27; }
	inline void set_CurrentZipPlatform_27(uint8_t value)
	{
		___CurrentZipPlatform_27 = value;
	}
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0CE931B041CCAD14563EF1808A3182A88EF2B812_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method);

// System.String System.IO.Path::GetTempPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetTempPath_m3A0C2630133CA7FCD4BE0F2B5440A6C46DC53B83 (const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0 (const RuntimeMethod* method);
// System.String System.Guid::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_mB4CBA020EEFAC3F6E828BB8A15E813F3680CEFAB (Guid_t * __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.IO.FileOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m71AF8762985249C5A67CAA27908862E516E8537F (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, int32_t ___bufferSize4, int32_t ___options5, const RuntimeMethod* method);
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Boolean System.IO.PathInternal::GetIsCaseSensitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathInternal_GetIsCaseSensitive_m25B364D08D602A49B8C65C6D60CD9AE64FD7420D (const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m446168E332C8770748277DC4E83A92DFEFECCCFA (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, int32_t ___share3, int32_t ___bufferSize4, bool ___useAsync5, const RuntimeMethod* method);
// System.Void System.IO.Compression.ZipArchive::.ctor(System.IO.Stream,System.IO.Compression.ZipArchiveMode,System.Boolean,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipArchive__ctor_m6CDC7760E095929DC56243D9402EDFEDD707D473 (ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, int32_t ___mode1, bool ___leaveOpen2, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___entryNameEncoding3, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void System.IO.Compression.ZipFile::ExtractToDirectory(System.String,System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_ExtractToDirectory_mD6BFABE02E8E5032B46CC5A9E595C0F6FD4137B2 (String_t* ___sourceArchiveFileName0, String_t* ___destinationDirectoryName1, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___entryNameEncoding2, const RuntimeMethod* method);
// System.Void System.IO.Compression.ZipFile::ExtractToDirectory(System.String,System.String,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_ExtractToDirectory_mF87EC39E2EE8E183399569E564E4FD7D07919BDF (String_t* ___sourceArchiveFileName0, String_t* ___destinationDirectoryName1, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___entryNameEncoding2, bool ___overwrite3, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::Open(System.String,System.IO.Compression.ZipArchiveMode,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3 (String_t* ___archiveFileName0, int32_t ___mode1, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___entryNameEncoding2, const RuntimeMethod* method);
// System.Void System.IO.Compression.ZipFileExtensions::ExtractToDirectory(System.IO.Compression.ZipArchive,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFileExtensions_ExtractToDirectory_m1700A974FC42D759B22466F3434EB13A78EFA77F (ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * ___source0, String_t* ___destinationDirectoryName1, bool ___overwrite2, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.IO.Compression.ZipArchiveEntry> System.IO.Compression.ZipArchive::get_Entries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD * ZipArchive_get_Entries_m1277048C38D4BFFAF02E3A97CB1DA4C124DA3A10 (ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.IO.Compression.ZipArchiveEntry>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m179A15802E5D437FDD7F72DEC83D3F00D257CA4A (ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m0CE931B041CCAD14563EF1808A3182A88EF2B812_gshared)(__this, method);
}
// System.String System.IO.Compression.ZipArchiveEntry::get_FullName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ZipArchiveEntry_get_FullName_m11AAEE0686371277F1E458DE9BE5FB3447C74238_inline (ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetFullPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFullPath_m4AECE56CB0187AD8375137200EDA24AE4F317963 (String_t* ___path0, const RuntimeMethod* method);
// System.StringComparison System.IO.PathInternal::get_StringComparison()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PathInternal_get_StringComparison_m77CFA03489A3D526D575A9390823BBB810433EA8 (const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mEA750A0572C706249CDD826681741B7DD733381E (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A (String_t* ___path0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int64 System.IO.Compression.ZipArchiveEntry::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ZipArchiveEntry_get_Length_mE3151992663806E7E438D54DF9A709523E80BE47 (ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * __this, const RuntimeMethod* method);
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.Compression.ZipFileExtensions::ExtractToFile(System.IO.Compression.ZipArchiveEntry,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFileExtensions_ExtractToFile_m53E4D7ACB1C36B10794414C9C092256A150878F6 (ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * ___source0, String_t* ___destinationFileName1, bool ___overwrite2, const RuntimeMethod* method);
// System.IO.Stream System.IO.Compression.ZipArchiveEntry::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ZipArchiveEntry_Open_m9893B7B85795F12ECFAD160AECBE48D679D0D087 (ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * __this, const RuntimeMethod* method);
// System.Void System.IO.Stream::CopyTo(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_CopyTo_m18CA50971ACBE7880A8F4D0CA5CFA07B55760421 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___destination0, const RuntimeMethod* method);
// System.DateTimeOffset System.IO.Compression.ZipArchiveEntry::get_LastWriteTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ZipArchiveEntry_get_LastWriteTime_mCAD8E33C3851C534A2AA0C3DB731005E444C40D7_inline (ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTimeOffset::get_DateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  DateTimeOffset_get_DateTime_m4A77B8033E9824033156BE13362AC202590A4370 (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * __this, const RuntimeMethod* method);
// System.Void System.IO.File::SetLastWriteTime(System.String,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_SetLastWriteTime_mD1BA3B69A35CD0F271C2518AC3933E2D645AF9D3 (String_t* ___path0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___lastWriteTime1, const RuntimeMethod* method);
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
// System.StringComparison System.IO.PathInternal::get_StringComparison()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PathInternal_get_StringComparison_m77CFA03489A3D526D575A9390823BBB810433EA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A_il2cpp_TypeInfo_var);
		bool L_0 = ((PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A_StaticFields*)il2cpp_codegen_static_fields_for(PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A_il2cpp_TypeInfo_var))->get_s_isCaseSensitive_0();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (int32_t)(5);
	}

IL_0009:
	{
		return (int32_t)(4);
	}
}
// System.Boolean System.IO.PathInternal::GetIsCaseSensitive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PathInternal_GetIsCaseSensitive_m25B364D08D602A49B8C65C6D60CD9AE64FD7420D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral525277D2F376C0B1449BE7FBA9294AC2AE03DFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset((&V_1), 0, sizeof(V_1));
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_0;
			L_0 = Path_GetTempPath_m3A0C2630133CA7FCD4BE0F2B5440A6C46DC53B83(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
			Guid_t  L_1;
			L_1 = Guid_NewGuid_m5BD19325820690ED6ECA31D67BC2CD474DC4FDB0(/*hidden argument*/NULL);
			V_1 = L_1;
			String_t* L_2;
			L_2 = Guid_ToString_mB4CBA020EEFAC3F6E828BB8A15E813F3680CEFAB((Guid_t *)(&V_1), _stringLiteralE42E8BB820D4F7550A0F04619F4E15FDC56943B9, /*hidden argument*/NULL);
			String_t* L_3;
			L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral525277D2F376C0B1449BE7FBA9294AC2AE03DFD7, L_2, /*hidden argument*/NULL);
			String_t* L_4;
			L_4 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_0, L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			String_t* L_5 = V_0;
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
			FileStream__ctor_m71AF8762985249C5A67CAA27908862E516E8537F(L_6, L_5, 1, 3, 0, ((int32_t)4096), ((int32_t)67108864), /*hidden argument*/NULL);
			V_2 = L_6;
		}

IL_003b:
		try
		{ // begin try (depth: 2)
			String_t* L_7 = V_0;
			NullCheck(L_7);
			String_t* L_8;
			L_8 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_7, /*hidden argument*/NULL);
			bool L_9;
			L_9 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_8, /*hidden argument*/NULL);
			V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
			IL2CPP_LEAVE(0x5B, FINALLY_004c);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004c;
		}

FINALLY_004c:
		{ // begin finally (depth: 2)
			{
				FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_10 = V_2;
				if (!L_10)
				{
					goto IL_0055;
				}
			}

IL_004f:
			{
				FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_11 = V_2;
				NullCheck(L_11);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_11);
			}

IL_0055:
			{
				IL2CPP_END_FINALLY(76)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(76)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x5B, IL_005b)
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0056;
		}
		throw e;
	}

CATCH_0056:
	{ // begin catch(System.Exception)
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005b;
	} // end catch (depth: 1)

IL_005b:
	{
		bool L_12 = V_3;
		return L_12;
	}
}
// System.Void System.IO.PathInternal::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PathInternal__cctor_mC1A4739AB6AE71C084771B685FEC7EE74B4D73B0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = PathInternal_GetIsCaseSensitive_m25B364D08D602A49B8C65C6D60CD9AE64FD7420D(/*hidden argument*/NULL);
		((PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A_StaticFields*)il2cpp_codegen_static_fields_for(PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A_il2cpp_TypeInfo_var))->set_s_isCaseSensitive_0(L_0);
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
// System.IO.Compression.ZipArchive System.IO.Compression.ZipFile::Open(System.String,System.IO.Compression.ZipArchiveMode,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3 (String_t* ___archiveFileName0, int32_t ___mode1, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___entryNameEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_3 = NULL;
	ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = ___mode1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0014;
			}
			case 1:
			{
				goto IL_001c;
			}
			case 2:
			{
				goto IL_0024;
			}
		}
	}
	{
		goto IL_002c;
	}

IL_0014:
	{
		V_0 = 3;
		V_1 = 1;
		V_2 = 1;
		goto IL_0037;
	}

IL_001c:
	{
		V_0 = 1;
		V_1 = 2;
		V_2 = 0;
		goto IL_0037;
	}

IL_0024:
	{
		V_0 = 4;
		V_1 = 3;
		V_2 = 0;
		goto IL_0037;
	}

IL_002c:
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAF248E82BE9EBA1ADBF067429FAEE5A5B6E05A74)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3_RuntimeMethod_var)));
	}

IL_0037:
	{
		String_t* L_2 = ___archiveFileName0;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_m446168E332C8770748277DC4E83A92DFEFECCCFA(L_6, L_2, L_3, L_4, L_5, ((int32_t)4096), (bool)0, /*hidden argument*/NULL);
		V_3 = L_6;
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_7 = V_3;
		int32_t L_8 = ___mode1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_9 = ___entryNameEncoding2;
		ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_10 = (ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F *)il2cpp_codegen_object_new(ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F_il2cpp_TypeInfo_var);
		ZipArchive__ctor_m6CDC7760E095929DC56243D9402EDFEDD707D473(L_10, L_7, L_8, (bool)0, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		goto IL_005d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0054;
		}
		throw e;
	}

CATCH_0054:
	{ // begin catch(System.Object)
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_11 = V_3;
		NullCheck(L_11);
		Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_005d:
	{
		ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_12 = V_4;
		return L_12;
	}
}
// System.Void System.IO.Compression.ZipFile::ExtractToDirectory(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_ExtractToDirectory_mBFEE096D06187D79F70AC8B07187586FD0011CD5 (String_t* ___sourceArchiveFileName0, String_t* ___destinationDirectoryName1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___sourceArchiveFileName0;
		String_t* L_1 = ___destinationDirectoryName1;
		ZipFile_ExtractToDirectory_mD6BFABE02E8E5032B46CC5A9E595C0F6FD4137B2(L_0, L_1, (Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.Compression.ZipFile::ExtractToDirectory(System.String,System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_ExtractToDirectory_mD6BFABE02E8E5032B46CC5A9E595C0F6FD4137B2 (String_t* ___sourceArchiveFileName0, String_t* ___destinationDirectoryName1, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___entryNameEncoding2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___sourceArchiveFileName0;
		String_t* L_1 = ___destinationDirectoryName1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_2 = ___entryNameEncoding2;
		ZipFile_ExtractToDirectory_mF87EC39E2EE8E183399569E564E4FD7D07919BDF(L_0, L_1, L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.IO.Compression.ZipFile::ExtractToDirectory(System.String,System.String,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFile_ExtractToDirectory_mF87EC39E2EE8E183399569E564E4FD7D07919BDF (String_t* ___sourceArchiveFileName0, String_t* ___destinationDirectoryName1, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___entryNameEncoding2, bool ___overwrite3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		String_t* L_0 = ___sourceArchiveFileName0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6052AC80E29B425758A2997B53AC96858AD5CF27)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFile_ExtractToDirectory_mF87EC39E2EE8E183399569E564E4FD7D07919BDF_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___sourceArchiveFileName0;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_3 = ___entryNameEncoding2;
		ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_4;
		L_4 = ZipFile_Open_mA9CC237FA35DBB1F87A4FEF1345563CCE9135CB3(L_2, 0, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_5 = V_0;
		String_t* L_6 = ___destinationDirectoryName1;
		bool L_7 = ___overwrite3;
		ZipFileExtensions_ExtractToDirectory_m1700A974FC42D759B22466F3434EB13A78EFA77F(L_5, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2B, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_8 = V_0;
			if (!L_8)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_9);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
	}

IL_002b:
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
// System.Void System.IO.Compression.ZipFileExtensions::ExtractToDirectory(System.IO.Compression.ZipArchive,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFileExtensions_ExtractToDirectory_m1700A974FC42D759B22466F3434EB13A78EFA77F (ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * ___source0, String_t* ___destinationDirectoryName1, bool ___overwrite2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8D1F2EB0BA136BE5DD8EF422140DC5B47832BD8F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m179A15802E5D437FDD7F72DEC83D3F00D257CA4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_ExtractToDirectory_m1700A974FC42D759B22466F3434EB13A78EFA77F_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___destinationDirectoryName1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42C85608AB661F2121C84F54255CBAFC5728CF77)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_ExtractToDirectory_m1700A974FC42D759B22466F3434EB13A78EFA77F_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_4 = ___destinationDirectoryName1;
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_5;
		L_5 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_5);
		V_0 = L_6;
		ZipArchive_tB3BA01C9AC338F87911E1A29D7999739F30C809F * L_7 = ___source0;
		NullCheck(L_7);
		ReadOnlyCollection_1_tC889E676348BF39B1359964EC212FF1DBB4255BD * L_8;
		L_8 = ZipArchive_get_Entries_m1277048C38D4BFFAF02E3A97CB1DA4C124DA3A10(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ReadOnlyCollection_1_GetEnumerator_m179A15802E5D437FDD7F72DEC83D3F00D257CA4A(L_8, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_m179A15802E5D437FDD7F72DEC83D3F00D257CA4A_RuntimeMethod_var);
		V_1 = L_9;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a5;
		}

IL_0036:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_11;
			L_11 = InterfaceFuncInvoker0< ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.IO.Compression.ZipArchiveEntry>::get_Current() */, IEnumerator_1_t8D1F2EB0BA136BE5DD8EF422140DC5B47832BD8F_il2cpp_TypeInfo_var, L_10);
			V_2 = L_11;
			String_t* L_12 = V_0;
			ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_13 = V_2;
			NullCheck(L_13);
			String_t* L_14;
			L_14 = ZipArchiveEntry_get_FullName_m11AAEE0686371277F1E458DE9BE5FB3447C74238_inline(L_13, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_15;
			L_15 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_12, L_14, /*hidden argument*/NULL);
			String_t* L_16;
			L_16 = Path_GetFullPath_m4AECE56CB0187AD8375137200EDA24AE4F317963(L_15, /*hidden argument*/NULL);
			V_3 = L_16;
			String_t* L_17 = V_3;
			String_t* L_18 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(PathInternal_tF589DF2631168112B13EF0C81465D4FA8862A80A_il2cpp_TypeInfo_var);
			int32_t L_19;
			L_19 = PathInternal_get_StringComparison_m77CFA03489A3D526D575A9390823BBB810433EA8(/*hidden argument*/NULL);
			NullCheck(L_17);
			bool L_20;
			L_20 = String_StartsWith_mEA750A0572C706249CDD826681741B7DD733381E(L_17, L_18, L_19, /*hidden argument*/NULL);
			if (L_20)
			{
				goto IL_0068;
			}
		}

IL_005d:
		{
			IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_21 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)));
			IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7E28E9DF3E4EBB1EFADEE524D7CE7A4F5B1DE1CA)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_ExtractToDirectory_m1700A974FC42D759B22466F3434EB13A78EFA77F_RuntimeMethod_var)));
		}

IL_0068:
		{
			String_t* L_22 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_23;
			L_23 = Path_GetFileName_m4CCFEEE8CA42DE16FCAF05D765EFB88E7086744A(L_22, /*hidden argument*/NULL);
			NullCheck(L_23);
			int32_t L_24;
			L_24 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_23, /*hidden argument*/NULL);
			if (L_24)
			{
				goto IL_0091;
			}
		}

IL_0075:
		{
			ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_25 = V_2;
			NullCheck(L_25);
			int64_t L_26;
			L_26 = ZipArchiveEntry_get_Length_mE3151992663806E7E438D54DF9A709523E80BE47(L_25, /*hidden argument*/NULL);
			if (!L_26)
			{
				goto IL_0088;
			}
		}

IL_007d:
		{
			IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_27 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var)));
			IOException__ctor_m208E01C02FF2C1D6C5AA661A5816C744804E1690(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral977466E2B0BB387B2215E6C982AE462F2C9AB959)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_ExtractToDirectory_m1700A974FC42D759B22466F3434EB13A78EFA77F_RuntimeMethod_var)));
		}

IL_0088:
		{
			String_t* L_28 = V_3;
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_29;
			L_29 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_28, /*hidden argument*/NULL);
			goto IL_00a5;
		}

IL_0091:
		{
			String_t* L_30 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
			String_t* L_31;
			L_31 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE(L_30, /*hidden argument*/NULL);
			DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_32;
			L_32 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_31, /*hidden argument*/NULL);
			ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_33 = V_2;
			String_t* L_34 = V_3;
			bool L_35 = ___overwrite2;
			ZipFileExtensions_ExtractToFile_m53E4D7ACB1C36B10794414C9C092256A150878F6(L_33, L_34, L_35, /*hidden argument*/NULL);
		}

IL_00a5:
		{
			RuntimeObject* L_36 = V_1;
			NullCheck(L_36);
			bool L_37;
			L_37 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_36);
			if (L_37)
			{
				goto IL_0036;
			}
		}

IL_00ad:
		{
			IL2CPP_LEAVE(0xB9, FINALLY_00af);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00af;
	}

FINALLY_00af:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_38 = V_1;
			if (!L_38)
			{
				goto IL_00b8;
			}
		}

IL_00b2:
		{
			RuntimeObject* L_39 = V_1;
			NullCheck(L_39);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_39);
		}

IL_00b8:
		{
			IL2CPP_END_FINALLY(175)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(175)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB9, IL_00b9)
	}

IL_00b9:
	{
		return;
	}
}
// System.Void System.IO.Compression.ZipFileExtensions::ExtractToFile(System.IO.Compression.ZipArchiveEntry,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFileExtensions_ExtractToFile_m53E4D7ACB1C36B10794414C9C092256A150878F6 (ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * ___source0, String_t* ___destinationFileName1, bool ___overwrite2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_1 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_2 = NULL;
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B7_0 = 0;
	{
		ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_0 = ___source0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral66F9618FDA792CAB23AF2D7FFB50AB2D3E393DC5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_ExtractToFile_m53E4D7ACB1C36B10794414C9C092256A150878F6_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___destinationFileName1;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral168DFB0223A253D8C177CD2D6A0DBA1B0ECEFB96)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ZipFileExtensions_ExtractToFile_m53E4D7ACB1C36B10794414C9C092256A150878F6_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_4 = ___overwrite2;
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		G_B7_0 = 1;
		goto IL_0023;
	}

IL_0022:
	{
		G_B7_0 = 2;
	}

IL_0023:
	{
		V_0 = G_B7_0;
		String_t* L_5 = ___destinationFileName1;
		int32_t L_6 = V_0;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_7 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_m446168E332C8770748277DC4E83A92DFEFECCCFA(L_7, L_5, L_6, 2, 0, ((int32_t)4096), (bool)0, /*hidden argument*/NULL);
		V_1 = L_7;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_8 = ___source0;
			NullCheck(L_8);
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_9;
			L_9 = ZipArchiveEntry_Open_m9893B7B85795F12ECFAD160AECBE48D679D0D087(L_8, /*hidden argument*/NULL);
			V_2 = L_9;
		}

IL_003b:
		try
		{ // begin try (depth: 2)
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_10 = V_2;
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_11 = V_1;
			NullCheck(L_10);
			Stream_CopyTo_m18CA50971ACBE7880A8F4D0CA5CFA07B55760421(L_10, L_11, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x58, FINALLY_0044);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0044;
		}

FINALLY_0044:
		{ // begin finally (depth: 2)
			{
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_12 = V_2;
				if (!L_12)
				{
					goto IL_004d;
				}
			}

IL_0047:
			{
				Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_13 = V_2;
				NullCheck(L_13);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_13);
			}

IL_004d:
			{
				IL2CPP_END_FINALLY(68)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(68)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x58, FINALLY_004e);
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
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_14 = V_1;
			if (!L_14)
			{
				goto IL_0057;
			}
		}

IL_0051:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_0057:
		{
			IL2CPP_END_FINALLY(78)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x58, IL_0058)
	}

IL_0058:
	{
		String_t* L_16 = ___destinationFileName1;
		ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * L_17 = ___source0;
		NullCheck(L_17);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_18;
		L_18 = ZipArchiveEntry_get_LastWriteTime_mCAD8E33C3851C534A2AA0C3DB731005E444C40D7_inline(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_19;
		L_19 = DateTimeOffset_get_DateTime_m4A77B8033E9824033156BE13362AC202590A4370((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_3), /*hidden argument*/NULL);
		File_SetLastWriteTime_mD1BA3B69A35CD0F271C2518AC3933E2D645AF9D3(L_16, L_19, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ZipArchiveEntry_get_FullName_m11AAEE0686371277F1E458DE9BE5FB3447C74238_inline (ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__storedEntryName_20();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ZipArchiveEntry_get_LastWriteTime_mCAD8E33C3851C534A2AA0C3DB731005E444C40D7_inline (ZipArchiveEntry_tFC659831F69D22DB110F453BC3044B8C96A11345 * __this, const RuntimeMethod* method)
{
	{
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_0 = __this->get__lastModified_8();
		return L_0;
	}
}
