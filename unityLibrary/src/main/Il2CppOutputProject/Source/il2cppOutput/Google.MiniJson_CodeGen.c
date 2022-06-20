#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String MiniJSON.Json::Serialize(System.Object)
extern void Json_Serialize_m1BF1BE5E2D63FAEBD708DA286656B6B0CDB2914F (void);
// 0x00000002 System.Void MiniJSON.Json/Serializer::.ctor()
extern void Serializer__ctor_m922F1E8FD48B8EB1813BF0A4B676E2E0F8D4E9FD (void);
// 0x00000003 System.String MiniJSON.Json/Serializer::Serialize(System.Object)
extern void Serializer_Serialize_mC8D172676310E5FAD45481B3E2DDC4E5D8248777 (void);
// 0x00000004 System.Void MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern void Serializer_SerializeValue_m58315D71633171D405538DD5494A80D243459FD1 (void);
// 0x00000005 System.Void MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern void Serializer_SerializeObject_m2030AC5D4CA1441E073B2903C2E23B1BD4841C37 (void);
// 0x00000006 System.Void MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern void Serializer_SerializeArray_mBAD9B80E856D3F9180FB4ABB6B51EBCC9963D99C (void);
// 0x00000007 System.Void MiniJSON.Json/Serializer::SerializeString(System.String)
extern void Serializer_SerializeString_m6EBD578C42D329E389E0FB616373121EF981DFC9 (void);
// 0x00000008 System.Void MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern void Serializer_SerializeOther_mFF1B34575679CBE59D977BB439EE5097B037A708 (void);
static Il2CppMethodPointer s_methodPointers[8] = 
{
	Json_Serialize_m1BF1BE5E2D63FAEBD708DA286656B6B0CDB2914F,
	Serializer__ctor_m922F1E8FD48B8EB1813BF0A4B676E2E0F8D4E9FD,
	Serializer_Serialize_mC8D172676310E5FAD45481B3E2DDC4E5D8248777,
	Serializer_SerializeValue_m58315D71633171D405538DD5494A80D243459FD1,
	Serializer_SerializeObject_m2030AC5D4CA1441E073B2903C2E23B1BD4841C37,
	Serializer_SerializeArray_mBAD9B80E856D3F9180FB4ABB6B51EBCC9963D99C,
	Serializer_SerializeString_m6EBD578C42D329E389E0FB616373121EF981DFC9,
	Serializer_SerializeOther_mFF1B34575679CBE59D977BB439EE5097B037A708,
};
static const int32_t s_InvokerIndices[8] = 
{
	2426,
	1568,
	2426,
	1312,
	1312,
	1312,
	1312,
	1312,
};
extern const CustomAttributesCacheGenerator g_Google_MiniJson_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Google_MiniJson_CodeGenModule;
const Il2CppCodeGenModule g_Google_MiniJson_CodeGenModule = 
{
	"Google.MiniJson.dll",
	8,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_Google_MiniJson_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
