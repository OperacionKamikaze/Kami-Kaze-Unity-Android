#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32Enum>>
struct Action_1_t3F33BA23F48680C33B0548529D71272BDA538F34;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Func_2_t0393892FBD85C10FC47EC181F7328EFB75BD7503;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>
struct IEnumerable_1_tA006192EAB3FEE2322641ABA9898F581A7C342AF;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<Firebase.Database.DataSnapshot>
struct TaskFactory_1_t78C20319940DEE85652CD85F7A86A0D885BA94C8;
// System.Threading.Tasks.TaskFactory`1<Firebase.DependencyStatus>
struct TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996;
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA;
// System.Threading.Tasks.Task`1<System.Int32Enum>
struct Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CharacterController2D
struct CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A;
// CircularProgressBar
struct CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7;
// ClassicProgressBar
struct ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Firebase.Database.DataSnapshot
struct DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37;
// DbManager
struct DbManager_t811CC0E27DC83B3E45451DB987CC3156828DA62C;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DynamicJoystick
struct DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// FireBaseInit
struct FireBaseInit_t2D0CD2585037CBB93BF957F7ED128FBB6D038179;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1;
// FixedJoystick
struct FixedJoystick_tDB74F76D3F9FBD9C43F508B2F306958915E6F5B2;
// FloatingJoystick
struct FloatingJoystick_tC4079BB6845C914906FF088E283633AFA9C93607;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563;
// Firebase.Database.InternalDataSnapshot
struct InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E;
// Firebase.Database.InternalDatabaseReference
struct InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F;
// Firebase.Database.InternalFirebaseDatabase
struct InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7;
// Firebase.Database.InternalQuery
struct InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// Joystick
struct Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873;
// JoystickPlayerExample
struct JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B;
// JoystickSetterExample
struct JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F;
// Jugador
struct Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MoveByTouch
struct MoveByTouch_tFC405C8A9997545AC639989D1EB7184BCF2C6021;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// PluginWrapper
struct PluginWrapper_t31A364B345CC609AACD99478DFAB5373021D6AB8;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Firebase.Database.Query
struct Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// SceneChange
struct SceneChange_t5358F7FEF1F1747A7DA8CA0D50F436D8DEFF92F3;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UIHealthBarEnemy
struct UIHealthBarEnemy_tD4403BCAD245F0CBF51972B6EDC8AD859354DAA3;
// UIHealthBarPlayer
struct UIHealthBarPlayer_t18C7111FB0E851735B8360D5B5C130EDD8DB6FEC;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// VariableJoystick
struct VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// buttonScript
struct buttonScript_t2A136D5645779252F49BB858B3838C872742EAFA;
// enemyController
struct enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE;
// hitBox
struct hitBox_tA9C9C5679D9125E164EBC0778601828034932553;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// CharacterController2D/BoolEvent
struct BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659;
// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842;
// DbManager/<>c
struct U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31;
// FireBaseInit/<>c
struct U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// UIHealthBarEnemy/<>c
struct U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E;
// UIHealthBarPlayer/<>c
struct U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAnalytics_t850C4D5212FDCBFDB95B7E1EF39666AB9A79EABC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA006192EAB3FEE2322641ABA9898F581A7C342AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t30CC244D1ACDD6D8E76AF1A6514B34C499405146_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t815A476B0A21E183042059E705F9E505478CD8AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral005F85E668EE9A80AC8B038BE44185B33D1E3235;
IL2CPP_EXTERN_C String_t* _stringLiteral0A52BB6DE2B25BA6342C7FAD8478E64D21F6FB01;
IL2CPP_EXTERN_C String_t* _stringLiteral12E606DDDBFD17795C7C744A284307DD8441C9E4;
IL2CPP_EXTERN_C String_t* _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011;
IL2CPP_EXTERN_C String_t* _stringLiteral2EE3FC5D7F457D3D9D03005D368AD3E13802364B;
IL2CPP_EXTERN_C String_t* _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79;
IL2CPP_EXTERN_C String_t* _stringLiteral38937A5A21B6F1FC908F7211CD231EB3D011D4F5;
IL2CPP_EXTERN_C String_t* _stringLiteral3B474947756CB58A0E67C9E6C58B18E4F7BEC7F8;
IL2CPP_EXTERN_C String_t* _stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6;
IL2CPP_EXTERN_C String_t* _stringLiteral53F2A840261F2148469A28764B1BB38A97D05D62;
IL2CPP_EXTERN_C String_t* _stringLiteral9B597551BD01532895566AC109649B585C9C54F6;
IL2CPP_EXTERN_C String_t* _stringLiteralB038375EFF9FC7F97C85D1F3701DEC1DD62D6714;
IL2CPP_EXTERN_C String_t* _stringLiteralBCF6F9607942EDB2056D1A284FE13A1DF5F876EF;
IL2CPP_EXTERN_C String_t* _stringLiteralBDB2271D6D45F31B6A9FD4D8C519BE08FF45362B;
IL2CPP_EXTERN_C String_t* _stringLiteralC2A330D30A614D1394D54E805D26369FFAA1FEF3;
IL2CPP_EXTERN_C String_t* _stringLiteralC7DB32F178FC555ED4BB8C6DCB8DDC92F621CE3D;
IL2CPP_EXTERN_C String_t* _stringLiteralCB74E0B8DD615D735984DC659AF75FDD3A2AD45F;
IL2CPP_EXTERN_C String_t* _stringLiteralD71592080F8FA14646D602F0C91D607CE6AFA79D;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralE9BC8412F7672BEDC75EB21FA08240175E04E871;
IL2CPP_EXTERN_C String_t* _stringLiteralE9FC4BE0C16364A3886B5A2ACFDD326ED85A447B;
IL2CPP_EXTERN_C String_t* _stringLiteralF141A52DC07A733E9B5FB6C65961B3C98F16F004;
IL2CPP_EXTERN_C String_t* _stringLiteralF25CB3BDB1130C60AFF878D56241A030982C1F63;
IL2CPP_EXTERN_C String_t* _stringLiteralF4CCC829B303A0016C291095865F2175C0C0A865;
IL2CPP_EXTERN_C String_t* _stringLiteralF7D7133A70256945FB5F818D0C0042FE97CA63B5;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E;
IL2CPP_EXTERN_C String_t* _stringLiteralFE84F93B86226579ADEF1FC23002651CE15E040B;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m00DD3ED646F26F8E3933FDC6EC188F7E769E1B5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m9FCBC7F226B662953885B20040A51C363F1B2643_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisJugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D_mDE52562A0A880A29B435F17DE9E4838FC67B2D72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC9E7CF6AA231509FB7187CD37AB65D44A127BF7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m72CF5F25159E3CDD552F7EDFE5EC78E11CC44ED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerMovement_U3CStartU3Eb__19_0_mE3C5930F2766D551D1658DE389AFE223CEB9B4FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SceneChange_U3CStartU3Eb__1_0_mB6A8F2AD2F56BCEED8E2B30AEB764AA494437FC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_mED3B21BD3DB3B1B396ED85A4007111AE42AC6571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m3DFCE1FF256DDED4A965FC1B5222E464AF7A8A7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_mF8709846EB76DCB02B5D666D68B03FE6A0028289_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m340C568FCD117E23EF7552E372CDFA3187A1DA3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__0_0_mD2B3F30B71C794301DE7CC7DC9F4D6A4F88031DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateU3Eb__6_0_m13D8FA934D844A87D564137569C3C05C6DE59C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateU3Eb__6_0_mBC26451AA3E7BDB17472A5D76ADF5E09288A2C4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CretrieveDataU3Eb__2_0_mC3CCA0C3E24696C1C7D41C9A8527276AF668BE7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t815A476B0A21E183042059E705F9E505478CD8AE, ____items_1)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get__items_1() const { return ____items_1; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t815A476B0A21E183042059E705F9E505478CD8AE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t815A476B0A21E183042059E705F9E505478CD8AE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t815A476B0A21E183042059E705F9E505478CD8AE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t815A476B0A21E183042059E705F9E505478CD8AE_StaticFields, ____emptyArray_5)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
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


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// Firebase.Database.DataSnapshot
struct DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256  : public RuntimeObject
{
public:
	// Firebase.Database.InternalDataSnapshot Firebase.Database.DataSnapshot::internalSnapshot
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * ___internalSnapshot_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot::database
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database_1;
	// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::parentSnapshot
	DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___parentSnapshot_2;
	// Firebase.Database.DataSnapshot/DataSnapshotList Firebase.Database.DataSnapshot::parentList
	DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * ___parentList_3;

public:
	inline static int32_t get_offset_of_internalSnapshot_0() { return static_cast<int32_t>(offsetof(DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256, ___internalSnapshot_0)); }
	inline InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * get_internalSnapshot_0() const { return ___internalSnapshot_0; }
	inline InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E ** get_address_of_internalSnapshot_0() { return &___internalSnapshot_0; }
	inline void set_internalSnapshot_0(InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * value)
	{
		___internalSnapshot_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalSnapshot_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256, ___database_1)); }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}

	inline static int32_t get_offset_of_parentSnapshot_2() { return static_cast<int32_t>(offsetof(DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256, ___parentSnapshot_2)); }
	inline DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * get_parentSnapshot_2() const { return ___parentSnapshot_2; }
	inline DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 ** get_address_of_parentSnapshot_2() { return &___parentSnapshot_2; }
	inline void set_parentSnapshot_2(DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * value)
	{
		___parentSnapshot_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentSnapshot_2), (void*)value);
	}

	inline static int32_t get_offset_of_parentList_3() { return static_cast<int32_t>(offsetof(DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256, ___parentList_3)); }
	inline DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * get_parentList_3() const { return ___parentList_3; }
	inline DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 ** get_address_of_parentList_3() { return &___parentList_3; }
	inline void set_parentList_3(DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * value)
	{
		___parentList_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentList_3), (void*)value);
	}
};


// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1  : public RuntimeObject
{
public:
	// Firebase.Database.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * ___internalDatabase_2;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_3;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___U3CAppU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_internalDatabase_2() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1, ___internalDatabase_2)); }
	inline InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * get_internalDatabase_2() const { return ___internalDatabase_2; }
	inline InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 ** get_address_of_internalDatabase_2() { return &___internalDatabase_2; }
	inline void set_internalDatabase_2(InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * value)
	{
		___internalDatabase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalDatabase_2), (void*)value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1, ___U3CAppU3Ek__BackingField_4)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_U3CAppU3Ek__BackingField_4() const { return ___U3CAppU3Ek__BackingField_4; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_U3CAppU3Ek__BackingField_4() { return &___U3CAppU3Ek__BackingField_4; }
	inline void set_U3CAppU3Ek__BackingField_4(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___U3CAppU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppU3Ek__BackingField_4), (void*)value);
	}
};

struct FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * ___databases_5;

public:
	inline static int32_t get_offset_of_databases_5() { return static_cast<int32_t>(offsetof(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_StaticFields, ___databases_5)); }
	inline Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * get_databases_5() const { return ___databases_5; }
	inline Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B ** get_address_of_databases_5() { return &___databases_5; }
	inline void set_databases_5(Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * value)
	{
		___databases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___databases_5), (void*)value);
	}
};


// Jugador
struct Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D  : public RuntimeObject
{
public:
	// System.Int32 Jugador::ataque
	int32_t ___ataque_0;
	// System.Int32 Jugador::defensa
	int32_t ___defensa_1;
	// System.Int32 Jugador::experiencia
	int32_t ___experiencia_2;
	// System.Int32 Jugador::oro
	int32_t ___oro_3;
	// System.Int32 Jugador::velocidad
	int32_t ___velocidad_4;
	// System.Int32 Jugador::vida
	int32_t ___vida_5;

public:
	inline static int32_t get_offset_of_ataque_0() { return static_cast<int32_t>(offsetof(Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D, ___ataque_0)); }
	inline int32_t get_ataque_0() const { return ___ataque_0; }
	inline int32_t* get_address_of_ataque_0() { return &___ataque_0; }
	inline void set_ataque_0(int32_t value)
	{
		___ataque_0 = value;
	}

	inline static int32_t get_offset_of_defensa_1() { return static_cast<int32_t>(offsetof(Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D, ___defensa_1)); }
	inline int32_t get_defensa_1() const { return ___defensa_1; }
	inline int32_t* get_address_of_defensa_1() { return &___defensa_1; }
	inline void set_defensa_1(int32_t value)
	{
		___defensa_1 = value;
	}

	inline static int32_t get_offset_of_experiencia_2() { return static_cast<int32_t>(offsetof(Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D, ___experiencia_2)); }
	inline int32_t get_experiencia_2() const { return ___experiencia_2; }
	inline int32_t* get_address_of_experiencia_2() { return &___experiencia_2; }
	inline void set_experiencia_2(int32_t value)
	{
		___experiencia_2 = value;
	}

	inline static int32_t get_offset_of_oro_3() { return static_cast<int32_t>(offsetof(Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D, ___oro_3)); }
	inline int32_t get_oro_3() const { return ___oro_3; }
	inline int32_t* get_address_of_oro_3() { return &___oro_3; }
	inline void set_oro_3(int32_t value)
	{
		___oro_3 = value;
	}

	inline static int32_t get_offset_of_velocidad_4() { return static_cast<int32_t>(offsetof(Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D, ___velocidad_4)); }
	inline int32_t get_velocidad_4() const { return ___velocidad_4; }
	inline int32_t* get_address_of_velocidad_4() { return &___velocidad_4; }
	inline void set_velocidad_4(int32_t value)
	{
		___velocidad_4 = value;
	}

	inline static int32_t get_offset_of_vida_5() { return static_cast<int32_t>(offsetof(Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D, ___vida_5)); }
	inline int32_t get_vida_5() const { return ___vida_5; }
	inline int32_t* get_address_of_vida_5() { return &___vida_5; }
	inline void set_vida_5(int32_t value)
	{
		___vida_5 = value;
	}
};


// Firebase.Database.Query
struct Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE  : public RuntimeObject
{
public:
	// Firebase.Database.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * ___childListener_3;

public:
	inline static int32_t get_offset_of_internalQuery_0() { return static_cast<int32_t>(offsetof(Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE, ___internalQuery_0)); }
	inline InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * get_internalQuery_0() const { return ___internalQuery_0; }
	inline InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 ** get_address_of_internalQuery_0() { return &___internalQuery_0; }
	inline void set_internalQuery_0(InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * value)
	{
		___internalQuery_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE, ___database_1)); }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}

	inline static int32_t get_offset_of_valueListener_2() { return static_cast<int32_t>(offsetof(Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE, ___valueListener_2)); }
	inline InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * get_valueListener_2() const { return ___valueListener_2; }
	inline InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D ** get_address_of_valueListener_2() { return &___valueListener_2; }
	inline void set_valueListener_2(InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * value)
	{
		___valueListener_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueListener_2), (void*)value);
	}

	inline static int32_t get_offset_of_childListener_3() { return static_cast<int32_t>(offsetof(Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE, ___childListener_3)); }
	inline InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * get_childListener_3() const { return ___childListener_3; }
	inline InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 ** get_address_of_childListener_3() { return &___childListener_3; }
	inline void set_childListener_3(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * value)
	{
		___childListener_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childListener_3), (void*)value);
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// DbManager/<>c
struct U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_StaticFields
{
public:
	// DbManager/<>c DbManager/<>c::<>9
	U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31 * ___U3CU3E9_0;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>> DbManager/<>c::<>9__2_0
	Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// FireBaseInit/<>c
struct U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_StaticFields
{
public:
	// FireBaseInit/<>c FireBaseInit/<>c::<>9
	U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB * ___U3CU3E9_0;
	// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> FireBaseInit/<>c::<>9__0_0
	Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// UIHealthBarEnemy/<>c
struct U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_StaticFields
{
public:
	// UIHealthBarEnemy/<>c UIHealthBarEnemy/<>c::<>9
	U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E * ___U3CU3E9_0;
	// System.Action`1<System.Threading.Tasks.Task> UIHealthBarEnemy/<>c::<>9__6_0
	Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// UIHealthBarPlayer/<>c
struct U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_StaticFields
{
public:
	// UIHealthBarPlayer/<>c UIHealthBarPlayer/<>c::<>9
	U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E * ___U3CU3E9_0;
	// System.Action`1<System.Threading.Tasks.Task> UIHealthBarPlayer/<>c::<>9__6_0
	Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * ___U3CU3E9__6_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__6_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_StaticFields, ___U3CU3E9__6_0_1)); }
	inline Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * get_U3CU3E9__6_0_1() const { return ___U3CU3E9__6_0_1; }
	inline Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 ** get_address_of_U3CU3E9__6_0_1() { return &___U3CU3E9__6_0_1; }
	inline void set_U3CU3E9__6_0_1(Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * value)
	{
		___U3CU3E9__6_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__6_0_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Firebase.Database.DatabaseReference
struct DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37  : public Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE
{
public:
	// Firebase.Database.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___U3CDatabaseU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_internalReference_4() { return static_cast<int32_t>(offsetof(DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37, ___internalReference_4)); }
	inline InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * get_internalReference_4() const { return ___internalReference_4; }
	inline InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F ** get_address_of_internalReference_4() { return &___internalReference_4; }
	inline void set_internalReference_4(InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * value)
	{
		___internalReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalReference_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37, ___U3CDatabaseU3Ek__BackingField_5)); }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * get_U3CDatabaseU3Ek__BackingField_5() const { return ___U3CDatabaseU3Ek__BackingField_5; }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 ** get_address_of_U3CDatabaseU3Ek__BackingField_5() { return &___U3CDatabaseU3Ek__BackingField_5; }
	inline void set_U3CDatabaseU3Ek__BackingField_5(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * value)
	{
		___U3CDatabaseU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseU3Ek__BackingField_5), (void*)value);
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// AxisOptions
struct AxisOptions_tBA55DF2DF082DD4057B8F9CF10A86CD579BE9582 
{
public:
	// System.Int32 AxisOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisOptions_tBA55DF2DF082DD4057B8F9CF10A86CD579BE9582, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Firebase.DependencyStatus
struct DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13 
{
public:
	// System.Int32 Firebase.DependencyStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DependencyStatus_tACD901DBAF4D8A07E6065D190F925BDED86C1A13, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ForceMode
struct ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode_t7778317A4C46140D50D98811D65A7B22E38163D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// JoystickType
struct JoystickType_tECFD3828A2B1A2D40861C9426AD88888B2C028F9 
{
public:
	// System.Int32 JoystickType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoystickType_tECFD3828A2B1A2D40861C9426AD88888B2C028F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.RenderMode
struct RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RuntimePlatform
struct RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tB8798C800FD9810C0FE2B7D2F2A0A3979D239065, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CharacterController2D/BoolEvent
struct BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659  : public UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996, ___m_result_22)); }
	inline DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * get_m_result_22() const { return ___m_result_22; }
	inline DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t78C20319940DEE85652CD85F7A86A0D885BA94C8 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t0393892FBD85C10FC47EC181F7328EFB75BD7503 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t78C20319940DEE85652CD85F7A86A0D885BA94C8 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t78C20319940DEE85652CD85F7A86A0D885BA94C8 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t78C20319940DEE85652CD85F7A86A0D885BA94C8 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t0393892FBD85C10FC47EC181F7328EFB75BD7503 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t0393892FBD85C10FC47EC181F7328EFB75BD7503 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t0393892FBD85C10FC47EC181F7328EFB75BD7503 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Firebase.DependencyStatus>
struct Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t66E24B593B42DF2E1AD254919B83940CCC686BBF * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t95F6FD39B7BF4872E43396B3659876CDAE209FB8 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// CharacterController2D
struct CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CharacterController2D::m_JumpForce
	float ___m_JumpForce_4;
	// System.Single CharacterController2D::m_CrouchSpeed
	float ___m_CrouchSpeed_5;
	// System.Single CharacterController2D::m_MovementSmoothing
	float ___m_MovementSmoothing_6;
	// System.Boolean CharacterController2D::m_AirControl
	bool ___m_AirControl_7;
	// UnityEngine.LayerMask CharacterController2D::m_WhatIsGround
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_WhatIsGround_8;
	// UnityEngine.Transform CharacterController2D::m_GroundCheck
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_GroundCheck_9;
	// UnityEngine.Transform CharacterController2D::m_CeilingCheck
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_CeilingCheck_10;
	// UnityEngine.Collider2D CharacterController2D::m_CrouchDisableCollider
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___m_CrouchDisableCollider_11;
	// System.Boolean CharacterController2D::m_Grounded
	bool ___m_Grounded_13;
	// UnityEngine.Rigidbody2D CharacterController2D::m_Rigidbody2D
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___m_Rigidbody2D_15;
	// System.Boolean CharacterController2D::m_FacingRight
	bool ___m_FacingRight_16;
	// UnityEngine.Vector3 CharacterController2D::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_17;
	// UnityEngine.Events.UnityEvent CharacterController2D::OnLandEvent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnLandEvent_18;
	// CharacterController2D/BoolEvent CharacterController2D::OnCrouchEvent
	BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * ___OnCrouchEvent_19;
	// System.Boolean CharacterController2D::m_wasCrouching
	bool ___m_wasCrouching_20;

public:
	inline static int32_t get_offset_of_m_JumpForce_4() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_JumpForce_4)); }
	inline float get_m_JumpForce_4() const { return ___m_JumpForce_4; }
	inline float* get_address_of_m_JumpForce_4() { return &___m_JumpForce_4; }
	inline void set_m_JumpForce_4(float value)
	{
		___m_JumpForce_4 = value;
	}

	inline static int32_t get_offset_of_m_CrouchSpeed_5() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_CrouchSpeed_5)); }
	inline float get_m_CrouchSpeed_5() const { return ___m_CrouchSpeed_5; }
	inline float* get_address_of_m_CrouchSpeed_5() { return &___m_CrouchSpeed_5; }
	inline void set_m_CrouchSpeed_5(float value)
	{
		___m_CrouchSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_MovementSmoothing_6() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_MovementSmoothing_6)); }
	inline float get_m_MovementSmoothing_6() const { return ___m_MovementSmoothing_6; }
	inline float* get_address_of_m_MovementSmoothing_6() { return &___m_MovementSmoothing_6; }
	inline void set_m_MovementSmoothing_6(float value)
	{
		___m_MovementSmoothing_6 = value;
	}

	inline static int32_t get_offset_of_m_AirControl_7() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_AirControl_7)); }
	inline bool get_m_AirControl_7() const { return ___m_AirControl_7; }
	inline bool* get_address_of_m_AirControl_7() { return &___m_AirControl_7; }
	inline void set_m_AirControl_7(bool value)
	{
		___m_AirControl_7 = value;
	}

	inline static int32_t get_offset_of_m_WhatIsGround_8() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_WhatIsGround_8)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_WhatIsGround_8() const { return ___m_WhatIsGround_8; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_WhatIsGround_8() { return &___m_WhatIsGround_8; }
	inline void set_m_WhatIsGround_8(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_WhatIsGround_8 = value;
	}

	inline static int32_t get_offset_of_m_GroundCheck_9() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_GroundCheck_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_GroundCheck_9() const { return ___m_GroundCheck_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_GroundCheck_9() { return &___m_GroundCheck_9; }
	inline void set_m_GroundCheck_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_GroundCheck_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GroundCheck_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_CeilingCheck_10() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_CeilingCheck_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_CeilingCheck_10() const { return ___m_CeilingCheck_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_CeilingCheck_10() { return &___m_CeilingCheck_10; }
	inline void set_m_CeilingCheck_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_CeilingCheck_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CeilingCheck_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CrouchDisableCollider_11() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_CrouchDisableCollider_11)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_m_CrouchDisableCollider_11() const { return ___m_CrouchDisableCollider_11; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_m_CrouchDisableCollider_11() { return &___m_CrouchDisableCollider_11; }
	inline void set_m_CrouchDisableCollider_11(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___m_CrouchDisableCollider_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CrouchDisableCollider_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Grounded_13() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_Grounded_13)); }
	inline bool get_m_Grounded_13() const { return ___m_Grounded_13; }
	inline bool* get_address_of_m_Grounded_13() { return &___m_Grounded_13; }
	inline void set_m_Grounded_13(bool value)
	{
		___m_Grounded_13 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody2D_15() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_Rigidbody2D_15)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_m_Rigidbody2D_15() const { return ___m_Rigidbody2D_15; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_m_Rigidbody2D_15() { return &___m_Rigidbody2D_15; }
	inline void set_m_Rigidbody2D_15(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___m_Rigidbody2D_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody2D_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_FacingRight_16() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_FacingRight_16)); }
	inline bool get_m_FacingRight_16() const { return ___m_FacingRight_16; }
	inline bool* get_address_of_m_FacingRight_16() { return &___m_FacingRight_16; }
	inline void set_m_FacingRight_16(bool value)
	{
		___m_FacingRight_16 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_17() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_Velocity_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_17() const { return ___m_Velocity_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_17() { return &___m_Velocity_17; }
	inline void set_m_Velocity_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_17 = value;
	}

	inline static int32_t get_offset_of_OnLandEvent_18() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___OnLandEvent_18)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnLandEvent_18() const { return ___OnLandEvent_18; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnLandEvent_18() { return &___OnLandEvent_18; }
	inline void set_OnLandEvent_18(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnLandEvent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLandEvent_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnCrouchEvent_19() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___OnCrouchEvent_19)); }
	inline BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * get_OnCrouchEvent_19() const { return ___OnCrouchEvent_19; }
	inline BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 ** get_address_of_OnCrouchEvent_19() { return &___OnCrouchEvent_19; }
	inline void set_OnCrouchEvent_19(BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * value)
	{
		___OnCrouchEvent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCrouchEvent_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_wasCrouching_20() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_wasCrouching_20)); }
	inline bool get_m_wasCrouching_20() const { return ___m_wasCrouching_20; }
	inline bool* get_address_of_m_wasCrouching_20() { return &___m_wasCrouching_20; }
	inline void set_m_wasCrouching_20(bool value)
	{
		___m_wasCrouching_20 = value;
	}
};


// CircularProgressBar
struct CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color CircularProgressBar::m_MainColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_MainColor_4;
	// UnityEngine.Color CircularProgressBar::m_FillColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_FillColor_5;
	// System.Int32 CircularProgressBar::m_NumberOfSegments
	int32_t ___m_NumberOfSegments_6;
	// System.Single CircularProgressBar::m_StartAngle
	float ___m_StartAngle_7;
	// System.Single CircularProgressBar::m_EndAngle
	float ___m_EndAngle_8;
	// System.Single CircularProgressBar::m_SizeOfNotch
	float ___m_SizeOfNotch_9;
	// System.Single CircularProgressBar::m_FillAmount
	float ___m_FillAmount_10;
	// UnityEngine.UI.Image CircularProgressBar::m_Image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_Image_11;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> CircularProgressBar::m_ProgressToFill
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_ProgressToFill_12;
	// System.Single CircularProgressBar::m_SizeOfSegment
	float ___m_SizeOfSegment_13;

public:
	inline static int32_t get_offset_of_m_MainColor_4() { return static_cast<int32_t>(offsetof(CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7, ___m_MainColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_MainColor_4() const { return ___m_MainColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_MainColor_4() { return &___m_MainColor_4; }
	inline void set_m_MainColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_MainColor_4 = value;
	}

	inline static int32_t get_offset_of_m_FillColor_5() { return static_cast<int32_t>(offsetof(CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7, ___m_FillColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_FillColor_5() const { return ___m_FillColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_FillColor_5() { return &___m_FillColor_5; }
	inline void set_m_FillColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_FillColor_5 = value;
	}

	inline static int32_t get_offset_of_m_NumberOfSegments_6() { return static_cast<int32_t>(offsetof(CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7, ___m_NumberOfSegments_6)); }
	inline int32_t get_m_NumberOfSegments_6() const { return ___m_NumberOfSegments_6; }
	inline int32_t* get_address_of_m_NumberOfSegments_6() { return &___m_NumberOfSegments_6; }
	inline void set_m_NumberOfSegments_6(int32_t value)
	{
		___m_NumberOfSegments_6 = value;
	}

	inline static int32_t get_offset_of_m_StartAngle_7() { return static_cast<int32_t>(offsetof(CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7, ___m_StartAngle_7)); }
	inline float get_m_StartAngle_7() const { return ___m_StartAngle_7; }
	inline float* get_address_of_m_StartAngle_7() { return &___m_StartAngle_7; }
	inline void set_m_StartAngle_7(float value)
	{
		___m_StartAngle_7 = value;
	}

	inline static int32_t get_offset_of_m_EndAngle_8() { return static_cast<int32_t>(offsetof(CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7, ___m_EndAngle_8)); }
	inline float get_m_EndAngle_8() const { return ___m_EndAngle_8; }
	inline float* get_address_of_m_EndAngle_8() { return &___m_EndAngle_8; }
	inline void set_m_EndAngle_8(float value)
	{
		___m_EndAngle_8 = value;
	}

	inline static int32_t get_offset_of_m_SizeOfNotch_9() { return static_cast<int32_t>(offsetof(CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7, ___m_SizeOfNotch_9)); }
	inline float get_m_SizeOfNotch_9() const { return ___m_SizeOfNotch_9; }
	inline float* get_address_of_m_SizeOfNotch_9() { return &___m_SizeOfNotch_9; }
	inline void set_m_SizeOfNotch_9(float value)
	{
		___m_SizeOfNotch_9 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_10() { return static_cast<int32_t>(offsetof(CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7, ___m_FillAmount_10)); }
	inline float get_m_FillAmount_10() const { return ___m_FillAmount_10; }
	inline float* get_address_of_m_FillAmount_10() { return &___m_FillAmount_10; }
	inline void set_m_FillAmount_10(float value)
	{
		___m_FillAmount_10 = value;
	}

	inline static int32_t get_offset_of_m_Image_11() { return static_cast<int32_t>(offsetof(CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7, ___m_Image_11)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_Image_11() const { return ___m_Image_11; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_Image_11() { return &___m_Image_11; }
	inline void set_m_Image_11(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_Image_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProgressToFill_12() { return static_cast<int32_t>(offsetof(CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7, ___m_ProgressToFill_12)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_ProgressToFill_12() const { return ___m_ProgressToFill_12; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_ProgressToFill_12() { return &___m_ProgressToFill_12; }
	inline void set_m_ProgressToFill_12(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_ProgressToFill_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProgressToFill_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_SizeOfSegment_13() { return static_cast<int32_t>(offsetof(CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7, ___m_SizeOfSegment_13)); }
	inline float get_m_SizeOfSegment_13() const { return ___m_SizeOfSegment_13; }
	inline float* get_address_of_m_SizeOfSegment_13() { return &___m_SizeOfSegment_13; }
	inline void set_m_SizeOfSegment_13(float value)
	{
		___m_SizeOfSegment_13 = value;
	}
};


// ClassicProgressBar
struct ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Color ClassicProgressBar::m_MainColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_MainColor_4;
	// UnityEngine.Color ClassicProgressBar::m_FillColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_FillColor_5;
	// System.Int32 ClassicProgressBar::m_NumberOfSegments
	int32_t ___m_NumberOfSegments_6;
	// System.Single ClassicProgressBar::m_SizeOfNotch
	float ___m_SizeOfNotch_7;
	// System.Single ClassicProgressBar::m_FillAmount
	float ___m_FillAmount_8;
	// UnityEngine.RectTransform ClassicProgressBar::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_9;
	// UnityEngine.UI.Image ClassicProgressBar::m_Image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_Image_10;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> ClassicProgressBar::m_ProgressToFill
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_ProgressToFill_11;
	// System.Single ClassicProgressBar::m_SizeOfSegment
	float ___m_SizeOfSegment_12;

public:
	inline static int32_t get_offset_of_m_MainColor_4() { return static_cast<int32_t>(offsetof(ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B, ___m_MainColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_MainColor_4() const { return ___m_MainColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_MainColor_4() { return &___m_MainColor_4; }
	inline void set_m_MainColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_MainColor_4 = value;
	}

	inline static int32_t get_offset_of_m_FillColor_5() { return static_cast<int32_t>(offsetof(ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B, ___m_FillColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_FillColor_5() const { return ___m_FillColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_FillColor_5() { return &___m_FillColor_5; }
	inline void set_m_FillColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_FillColor_5 = value;
	}

	inline static int32_t get_offset_of_m_NumberOfSegments_6() { return static_cast<int32_t>(offsetof(ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B, ___m_NumberOfSegments_6)); }
	inline int32_t get_m_NumberOfSegments_6() const { return ___m_NumberOfSegments_6; }
	inline int32_t* get_address_of_m_NumberOfSegments_6() { return &___m_NumberOfSegments_6; }
	inline void set_m_NumberOfSegments_6(int32_t value)
	{
		___m_NumberOfSegments_6 = value;
	}

	inline static int32_t get_offset_of_m_SizeOfNotch_7() { return static_cast<int32_t>(offsetof(ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B, ___m_SizeOfNotch_7)); }
	inline float get_m_SizeOfNotch_7() const { return ___m_SizeOfNotch_7; }
	inline float* get_address_of_m_SizeOfNotch_7() { return &___m_SizeOfNotch_7; }
	inline void set_m_SizeOfNotch_7(float value)
	{
		___m_SizeOfNotch_7 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_8() { return static_cast<int32_t>(offsetof(ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B, ___m_FillAmount_8)); }
	inline float get_m_FillAmount_8() const { return ___m_FillAmount_8; }
	inline float* get_address_of_m_FillAmount_8() { return &___m_FillAmount_8; }
	inline void set_m_FillAmount_8(float value)
	{
		___m_FillAmount_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B, ___m_RectTransform_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_10() { return static_cast<int32_t>(offsetof(ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B, ___m_Image_10)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_Image_10() const { return ___m_Image_10; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_Image_10() { return &___m_Image_10; }
	inline void set_m_Image_10(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_Image_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_ProgressToFill_11() { return static_cast<int32_t>(offsetof(ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B, ___m_ProgressToFill_11)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_ProgressToFill_11() const { return ___m_ProgressToFill_11; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_ProgressToFill_11() { return &___m_ProgressToFill_11; }
	inline void set_m_ProgressToFill_11(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_ProgressToFill_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ProgressToFill_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_SizeOfSegment_12() { return static_cast<int32_t>(offsetof(ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B, ___m_SizeOfSegment_12)); }
	inline float get_m_SizeOfSegment_12() const { return ___m_SizeOfSegment_12; }
	inline float* get_address_of_m_SizeOfSegment_12() { return &___m_SizeOfSegment_12; }
	inline void set_m_SizeOfSegment_12(float value)
	{
		___m_SizeOfSegment_12 = value;
	}
};


// DbManager
struct DbManager_t811CC0E27DC83B3E45451DB987CC3156828DA62C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Firebase.Database.DatabaseReference DbManager::reference
	DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * ___reference_4;

public:
	inline static int32_t get_offset_of_reference_4() { return static_cast<int32_t>(offsetof(DbManager_t811CC0E27DC83B3E45451DB987CC3156828DA62C, ___reference_4)); }
	inline DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * get_reference_4() const { return ___reference_4; }
	inline DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 ** get_address_of_reference_4() { return &___reference_4; }
	inline void set_reference_4(DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * value)
	{
		___reference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_4), (void*)value);
	}
};


// FireBaseInit
struct FireBaseInit_t2D0CD2585037CBB93BF957F7ED128FBB6D038179  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Joystick
struct Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___input_14;

public:
	inline static int32_t get_offset_of_handleRange_4() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___handleRange_4)); }
	inline float get_handleRange_4() const { return ___handleRange_4; }
	inline float* get_address_of_handleRange_4() { return &___handleRange_4; }
	inline void set_handleRange_4(float value)
	{
		___handleRange_4 = value;
	}

	inline static int32_t get_offset_of_deadZone_5() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___deadZone_5)); }
	inline float get_deadZone_5() const { return ___deadZone_5; }
	inline float* get_address_of_deadZone_5() { return &___deadZone_5; }
	inline void set_deadZone_5(float value)
	{
		___deadZone_5 = value;
	}

	inline static int32_t get_offset_of_axisOptions_6() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___axisOptions_6)); }
	inline int32_t get_axisOptions_6() const { return ___axisOptions_6; }
	inline int32_t* get_address_of_axisOptions_6() { return &___axisOptions_6; }
	inline void set_axisOptions_6(int32_t value)
	{
		___axisOptions_6 = value;
	}

	inline static int32_t get_offset_of_snapX_7() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___snapX_7)); }
	inline bool get_snapX_7() const { return ___snapX_7; }
	inline bool* get_address_of_snapX_7() { return &___snapX_7; }
	inline void set_snapX_7(bool value)
	{
		___snapX_7 = value;
	}

	inline static int32_t get_offset_of_snapY_8() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___snapY_8)); }
	inline bool get_snapY_8() const { return ___snapY_8; }
	inline bool* get_address_of_snapY_8() { return &___snapY_8; }
	inline void set_snapY_8(bool value)
	{
		___snapY_8 = value;
	}

	inline static int32_t get_offset_of_background_9() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___background_9)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_background_9() const { return ___background_9; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_background_9() { return &___background_9; }
	inline void set_background_9(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___background_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_9), (void*)value);
	}

	inline static int32_t get_offset_of_handle_10() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___handle_10)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_handle_10() const { return ___handle_10; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_handle_10() { return &___handle_10; }
	inline void set_handle_10(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___handle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_10), (void*)value);
	}

	inline static int32_t get_offset_of_baseRect_11() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___baseRect_11)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_baseRect_11() const { return ___baseRect_11; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_baseRect_11() { return &___baseRect_11; }
	inline void set_baseRect_11(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___baseRect_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseRect_11), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_12() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___canvas_12)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_canvas_12() const { return ___canvas_12; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_canvas_12() { return &___canvas_12; }
	inline void set_canvas_12(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___canvas_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_12), (void*)value);
	}

	inline static int32_t get_offset_of_cam_13() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___cam_13)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_cam_13() const { return ___cam_13; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_cam_13() { return &___cam_13; }
	inline void set_cam_13(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___cam_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_13), (void*)value);
	}

	inline static int32_t get_offset_of_input_14() { return static_cast<int32_t>(offsetof(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873, ___input_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_input_14() const { return ___input_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_input_14() { return &___input_14; }
	inline void set_input_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___input_14 = value;
	}
};


// JoystickPlayerExample
struct JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single JoystickPlayerExample::speed
	float ___speed_4;
	// VariableJoystick JoystickPlayerExample::variableJoystick
	VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * ___variableJoystick_5;
	// UnityEngine.Rigidbody JoystickPlayerExample::rb
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb_6;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_variableJoystick_5() { return static_cast<int32_t>(offsetof(JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B, ___variableJoystick_5)); }
	inline VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * get_variableJoystick_5() const { return ___variableJoystick_5; }
	inline VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B ** get_address_of_variableJoystick_5() { return &___variableJoystick_5; }
	inline void set_variableJoystick_5(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * value)
	{
		___variableJoystick_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variableJoystick_5), (void*)value);
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B, ___rb_6)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_rb_6() const { return ___rb_6; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}
};


// JoystickSetterExample
struct JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// VariableJoystick JoystickSetterExample::variableJoystick
	VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * ___variableJoystick_4;
	// UnityEngine.UI.Text JoystickSetterExample::valueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___valueText_5;
	// UnityEngine.UI.Image JoystickSetterExample::background
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___background_6;
	// UnityEngine.Sprite[] JoystickSetterExample::axisSprites
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___axisSprites_7;

public:
	inline static int32_t get_offset_of_variableJoystick_4() { return static_cast<int32_t>(offsetof(JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F, ___variableJoystick_4)); }
	inline VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * get_variableJoystick_4() const { return ___variableJoystick_4; }
	inline VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B ** get_address_of_variableJoystick_4() { return &___variableJoystick_4; }
	inline void set_variableJoystick_4(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * value)
	{
		___variableJoystick_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___variableJoystick_4), (void*)value);
	}

	inline static int32_t get_offset_of_valueText_5() { return static_cast<int32_t>(offsetof(JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F, ___valueText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_valueText_5() const { return ___valueText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_valueText_5() { return &___valueText_5; }
	inline void set_valueText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___valueText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueText_5), (void*)value);
	}

	inline static int32_t get_offset_of_background_6() { return static_cast<int32_t>(offsetof(JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F, ___background_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_background_6() const { return ___background_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_background_6() { return &___background_6; }
	inline void set_background_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___background_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___background_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisSprites_7() { return static_cast<int32_t>(offsetof(JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F, ___axisSprites_7)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_axisSprites_7() const { return ___axisSprites_7; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_axisSprites_7() { return &___axisSprites_7; }
	inline void set_axisSprites_7(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___axisSprites_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisSprites_7), (void*)value);
	}
};


// MoveByTouch
struct MoveByTouch_tFC405C8A9997545AC639989D1EB7184BCF2C6021  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// CharacterController2D PlayerMovement::controller
	CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * ___controller_4;
	// UnityEngine.Animator PlayerMovement::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_5;
	// Joystick PlayerMovement::joystick
	Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * ___joystick_6;
	// System.Single PlayerMovement::horizontalMove
	float ___horizontalMove_7;
	// System.Single PlayerMovement::speed
	float ___speed_8;
	// UnityEngine.GameObject PlayerMovement::hitBox
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitBox_9;
	// UnityEngine.Transform PlayerMovement::hitBoxPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___hitBoxPosition_10;
	// System.Single PlayerMovement::maxLife
	float ___maxLife_11;
	// System.Single PlayerMovement::currentLife
	float ___currentLife_12;
	// System.Int32 PlayerMovement::ataque
	int32_t ___ataque_13;
	// System.Int32 PlayerMovement::defensa
	int32_t ___defensa_14;
	// System.Int32 PlayerMovement::experiencia
	int32_t ___experiencia_15;
	// System.Int32 PlayerMovement::oro
	int32_t ___oro_16;
	// System.Int32 PlayerMovement::velocidad
	int32_t ___velocidad_17;
	// System.Int32 PlayerMovement::vida
	int32_t ___vida_18;
	// System.String PlayerMovement::username
	String_t* ___username_19;
	// UnityEngine.UI.Text PlayerMovement::usernameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___usernameText_20;
	// enemyController PlayerMovement::enemy
	enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * ___enemy_21;
	// Firebase.Database.DatabaseReference PlayerMovement::reference
	DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * ___reference_22;

public:
	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___controller_4)); }
	inline CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * get_controller_4() const { return ___controller_4; }
	inline CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_4), (void*)value);
	}

	inline static int32_t get_offset_of_animator_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___animator_5)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_5() const { return ___animator_5; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_5() { return &___animator_5; }
	inline void set_animator_5(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_5), (void*)value);
	}

	inline static int32_t get_offset_of_joystick_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___joystick_6)); }
	inline Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * get_joystick_6() const { return ___joystick_6; }
	inline Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 ** get_address_of_joystick_6() { return &___joystick_6; }
	inline void set_joystick_6(Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * value)
	{
		___joystick_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joystick_6), (void*)value);
	}

	inline static int32_t get_offset_of_horizontalMove_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___horizontalMove_7)); }
	inline float get_horizontalMove_7() const { return ___horizontalMove_7; }
	inline float* get_address_of_horizontalMove_7() { return &___horizontalMove_7; }
	inline void set_horizontalMove_7(float value)
	{
		___horizontalMove_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_hitBox_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___hitBox_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hitBox_9() const { return ___hitBox_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hitBox_9() { return &___hitBox_9; }
	inline void set_hitBox_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hitBox_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitBox_9), (void*)value);
	}

	inline static int32_t get_offset_of_hitBoxPosition_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___hitBoxPosition_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_hitBoxPosition_10() const { return ___hitBoxPosition_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_hitBoxPosition_10() { return &___hitBoxPosition_10; }
	inline void set_hitBoxPosition_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___hitBoxPosition_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitBoxPosition_10), (void*)value);
	}

	inline static int32_t get_offset_of_maxLife_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___maxLife_11)); }
	inline float get_maxLife_11() const { return ___maxLife_11; }
	inline float* get_address_of_maxLife_11() { return &___maxLife_11; }
	inline void set_maxLife_11(float value)
	{
		___maxLife_11 = value;
	}

	inline static int32_t get_offset_of_currentLife_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___currentLife_12)); }
	inline float get_currentLife_12() const { return ___currentLife_12; }
	inline float* get_address_of_currentLife_12() { return &___currentLife_12; }
	inline void set_currentLife_12(float value)
	{
		___currentLife_12 = value;
	}

	inline static int32_t get_offset_of_ataque_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___ataque_13)); }
	inline int32_t get_ataque_13() const { return ___ataque_13; }
	inline int32_t* get_address_of_ataque_13() { return &___ataque_13; }
	inline void set_ataque_13(int32_t value)
	{
		___ataque_13 = value;
	}

	inline static int32_t get_offset_of_defensa_14() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___defensa_14)); }
	inline int32_t get_defensa_14() const { return ___defensa_14; }
	inline int32_t* get_address_of_defensa_14() { return &___defensa_14; }
	inline void set_defensa_14(int32_t value)
	{
		___defensa_14 = value;
	}

	inline static int32_t get_offset_of_experiencia_15() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___experiencia_15)); }
	inline int32_t get_experiencia_15() const { return ___experiencia_15; }
	inline int32_t* get_address_of_experiencia_15() { return &___experiencia_15; }
	inline void set_experiencia_15(int32_t value)
	{
		___experiencia_15 = value;
	}

	inline static int32_t get_offset_of_oro_16() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___oro_16)); }
	inline int32_t get_oro_16() const { return ___oro_16; }
	inline int32_t* get_address_of_oro_16() { return &___oro_16; }
	inline void set_oro_16(int32_t value)
	{
		___oro_16 = value;
	}

	inline static int32_t get_offset_of_velocidad_17() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___velocidad_17)); }
	inline int32_t get_velocidad_17() const { return ___velocidad_17; }
	inline int32_t* get_address_of_velocidad_17() { return &___velocidad_17; }
	inline void set_velocidad_17(int32_t value)
	{
		___velocidad_17 = value;
	}

	inline static int32_t get_offset_of_vida_18() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___vida_18)); }
	inline int32_t get_vida_18() const { return ___vida_18; }
	inline int32_t* get_address_of_vida_18() { return &___vida_18; }
	inline void set_vida_18(int32_t value)
	{
		___vida_18 = value;
	}

	inline static int32_t get_offset_of_username_19() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___username_19)); }
	inline String_t* get_username_19() const { return ___username_19; }
	inline String_t** get_address_of_username_19() { return &___username_19; }
	inline void set_username_19(String_t* value)
	{
		___username_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___username_19), (void*)value);
	}

	inline static int32_t get_offset_of_usernameText_20() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___usernameText_20)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_usernameText_20() const { return ___usernameText_20; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_usernameText_20() { return &___usernameText_20; }
	inline void set_usernameText_20(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___usernameText_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usernameText_20), (void*)value);
	}

	inline static int32_t get_offset_of_enemy_21() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___enemy_21)); }
	inline enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * get_enemy_21() const { return ___enemy_21; }
	inline enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE ** get_address_of_enemy_21() { return &___enemy_21; }
	inline void set_enemy_21(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * value)
	{
		___enemy_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_21), (void*)value);
	}

	inline static int32_t get_offset_of_reference_22() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___reference_22)); }
	inline DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * get_reference_22() const { return ___reference_22; }
	inline DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 ** get_address_of_reference_22() { return &___reference_22; }
	inline void set_reference_22(DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * value)
	{
		___reference_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_22), (void*)value);
	}
};


// PluginWrapper
struct PluginWrapper_t31A364B345CC609AACD99478DFAB5373021D6AB8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AndroidJavaObject PluginWrapper::javaClass
	AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * ___javaClass_4;
	// System.Int32 PluginWrapper::playerID
	int32_t ___playerID_5;

public:
	inline static int32_t get_offset_of_javaClass_4() { return static_cast<int32_t>(offsetof(PluginWrapper_t31A364B345CC609AACD99478DFAB5373021D6AB8, ___javaClass_4)); }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * get_javaClass_4() const { return ___javaClass_4; }
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** get_address_of_javaClass_4() { return &___javaClass_4; }
	inline void set_javaClass_4(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		___javaClass_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___javaClass_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerID_5() { return static_cast<int32_t>(offsetof(PluginWrapper_t31A364B345CC609AACD99478DFAB5373021D6AB8, ___playerID_5)); }
	inline int32_t get_playerID_5() const { return ___playerID_5; }
	inline int32_t* get_address_of_playerID_5() { return &___playerID_5; }
	inline void set_playerID_5(int32_t value)
	{
		___playerID_5 = value;
	}
};


// SceneChange
struct SceneChange_t5358F7FEF1F1747A7DA8CA0D50F436D8DEFF92F3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Firebase.Database.DatabaseReference SceneChange::reference
	DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * ___reference_4;

public:
	inline static int32_t get_offset_of_reference_4() { return static_cast<int32_t>(offsetof(SceneChange_t5358F7FEF1F1747A7DA8CA0D50F436D8DEFF92F3, ___reference_4)); }
	inline DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * get_reference_4() const { return ___reference_4; }
	inline DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 ** get_address_of_reference_4() { return &___reference_4; }
	inline void set_reference_4(DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * value)
	{
		___reference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UIHealthBarEnemy
struct UIHealthBarEnemy_tD4403BCAD245F0CBF51972B6EDC8AD859354DAA3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image UIHealthBarEnemy::healthbar
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___healthbar_4;
	// enemyController UIHealthBarEnemy::enemy
	enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * ___enemy_5;
	// UnityEngine.UI.Text UIHealthBarEnemy::winText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___winText_6;
	// Firebase.Database.DatabaseReference UIHealthBarEnemy::reference
	DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * ___reference_7;
	// UnityEngine.UI.Text UIHealthBarEnemy::username
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___username_8;

public:
	inline static int32_t get_offset_of_healthbar_4() { return static_cast<int32_t>(offsetof(UIHealthBarEnemy_tD4403BCAD245F0CBF51972B6EDC8AD859354DAA3, ___healthbar_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_healthbar_4() const { return ___healthbar_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_healthbar_4() { return &___healthbar_4; }
	inline void set_healthbar_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___healthbar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthbar_4), (void*)value);
	}

	inline static int32_t get_offset_of_enemy_5() { return static_cast<int32_t>(offsetof(UIHealthBarEnemy_tD4403BCAD245F0CBF51972B6EDC8AD859354DAA3, ___enemy_5)); }
	inline enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * get_enemy_5() const { return ___enemy_5; }
	inline enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE ** get_address_of_enemy_5() { return &___enemy_5; }
	inline void set_enemy_5(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * value)
	{
		___enemy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_5), (void*)value);
	}

	inline static int32_t get_offset_of_winText_6() { return static_cast<int32_t>(offsetof(UIHealthBarEnemy_tD4403BCAD245F0CBF51972B6EDC8AD859354DAA3, ___winText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_winText_6() const { return ___winText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_winText_6() { return &___winText_6; }
	inline void set_winText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___winText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winText_6), (void*)value);
	}

	inline static int32_t get_offset_of_reference_7() { return static_cast<int32_t>(offsetof(UIHealthBarEnemy_tD4403BCAD245F0CBF51972B6EDC8AD859354DAA3, ___reference_7)); }
	inline DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * get_reference_7() const { return ___reference_7; }
	inline DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 ** get_address_of_reference_7() { return &___reference_7; }
	inline void set_reference_7(DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * value)
	{
		___reference_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_7), (void*)value);
	}

	inline static int32_t get_offset_of_username_8() { return static_cast<int32_t>(offsetof(UIHealthBarEnemy_tD4403BCAD245F0CBF51972B6EDC8AD859354DAA3, ___username_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_username_8() const { return ___username_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_username_8() { return &___username_8; }
	inline void set_username_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___username_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___username_8), (void*)value);
	}
};


// UIHealthBarPlayer
struct UIHealthBarPlayer_t18C7111FB0E851735B8360D5B5C130EDD8DB6FEC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image UIHealthBarPlayer::healthbar
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___healthbar_4;
	// PlayerMovement UIHealthBarPlayer::player
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___player_5;
	// UnityEngine.UI.Text UIHealthBarPlayer::winText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___winText_6;
	// Firebase.Database.DatabaseReference UIHealthBarPlayer::reference
	DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * ___reference_7;
	// UnityEngine.UI.Text UIHealthBarPlayer::username
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___username_8;

public:
	inline static int32_t get_offset_of_healthbar_4() { return static_cast<int32_t>(offsetof(UIHealthBarPlayer_t18C7111FB0E851735B8360D5B5C130EDD8DB6FEC, ___healthbar_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_healthbar_4() const { return ___healthbar_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_healthbar_4() { return &___healthbar_4; }
	inline void set_healthbar_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___healthbar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthbar_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(UIHealthBarPlayer_t18C7111FB0E851735B8360D5B5C130EDD8DB6FEC, ___player_5)); }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * get_player_5() const { return ___player_5; }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_winText_6() { return static_cast<int32_t>(offsetof(UIHealthBarPlayer_t18C7111FB0E851735B8360D5B5C130EDD8DB6FEC, ___winText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_winText_6() const { return ___winText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_winText_6() { return &___winText_6; }
	inline void set_winText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___winText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winText_6), (void*)value);
	}

	inline static int32_t get_offset_of_reference_7() { return static_cast<int32_t>(offsetof(UIHealthBarPlayer_t18C7111FB0E851735B8360D5B5C130EDD8DB6FEC, ___reference_7)); }
	inline DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * get_reference_7() const { return ___reference_7; }
	inline DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 ** get_address_of_reference_7() { return &___reference_7; }
	inline void set_reference_7(DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * value)
	{
		___reference_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reference_7), (void*)value);
	}

	inline static int32_t get_offset_of_username_8() { return static_cast<int32_t>(offsetof(UIHealthBarPlayer_t18C7111FB0E851735B8360D5B5C130EDD8DB6FEC, ___username_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_username_8() const { return ___username_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_username_8() { return &___username_8; }
	inline void set_username_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___username_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___username_8), (void*)value);
	}
};


// buttonScript
struct buttonScript_t2A136D5645779252F49BB858B3838C872742EAFA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// enemyController
struct enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator enemyController::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_4;
	// UnityEngine.GameObject enemyController::hitBox
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hitBox_5;
	// UnityEngine.Transform enemyController::hitBoxPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___hitBoxPosition_6;
	// System.Boolean enemyController::rightMovement
	bool ___rightMovement_7;
	// System.Single enemyController::countMovement
	float ___countMovement_8;
	// System.Single enemyController::countAttack
	float ___countAttack_9;
	// System.Single enemyController::speed
	float ___speed_10;
	// System.Single enemyController::maxLife
	float ___maxLife_11;
	// System.Single enemyController::currentLife
	float ___currentLife_12;
	// System.Int32 enemyController::ataque
	int32_t ___ataque_13;
	// System.Int32 enemyController::defensa
	int32_t ___defensa_14;
	// System.Int32 enemyController::experiencia
	int32_t ___experiencia_15;
	// System.Int32 enemyController::oro
	int32_t ___oro_16;
	// System.Int32 enemyController::velocidad
	int32_t ___velocidad_17;
	// PlayerMovement enemyController::player
	PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * ___player_18;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___animator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_4() const { return ___animator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_4), (void*)value);
	}

	inline static int32_t get_offset_of_hitBox_5() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___hitBox_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hitBox_5() const { return ___hitBox_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hitBox_5() { return &___hitBox_5; }
	inline void set_hitBox_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hitBox_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitBox_5), (void*)value);
	}

	inline static int32_t get_offset_of_hitBoxPosition_6() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___hitBoxPosition_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_hitBoxPosition_6() const { return ___hitBoxPosition_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_hitBoxPosition_6() { return &___hitBoxPosition_6; }
	inline void set_hitBoxPosition_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___hitBoxPosition_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hitBoxPosition_6), (void*)value);
	}

	inline static int32_t get_offset_of_rightMovement_7() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___rightMovement_7)); }
	inline bool get_rightMovement_7() const { return ___rightMovement_7; }
	inline bool* get_address_of_rightMovement_7() { return &___rightMovement_7; }
	inline void set_rightMovement_7(bool value)
	{
		___rightMovement_7 = value;
	}

	inline static int32_t get_offset_of_countMovement_8() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___countMovement_8)); }
	inline float get_countMovement_8() const { return ___countMovement_8; }
	inline float* get_address_of_countMovement_8() { return &___countMovement_8; }
	inline void set_countMovement_8(float value)
	{
		___countMovement_8 = value;
	}

	inline static int32_t get_offset_of_countAttack_9() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___countAttack_9)); }
	inline float get_countAttack_9() const { return ___countAttack_9; }
	inline float* get_address_of_countAttack_9() { return &___countAttack_9; }
	inline void set_countAttack_9(float value)
	{
		___countAttack_9 = value;
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_maxLife_11() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___maxLife_11)); }
	inline float get_maxLife_11() const { return ___maxLife_11; }
	inline float* get_address_of_maxLife_11() { return &___maxLife_11; }
	inline void set_maxLife_11(float value)
	{
		___maxLife_11 = value;
	}

	inline static int32_t get_offset_of_currentLife_12() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___currentLife_12)); }
	inline float get_currentLife_12() const { return ___currentLife_12; }
	inline float* get_address_of_currentLife_12() { return &___currentLife_12; }
	inline void set_currentLife_12(float value)
	{
		___currentLife_12 = value;
	}

	inline static int32_t get_offset_of_ataque_13() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___ataque_13)); }
	inline int32_t get_ataque_13() const { return ___ataque_13; }
	inline int32_t* get_address_of_ataque_13() { return &___ataque_13; }
	inline void set_ataque_13(int32_t value)
	{
		___ataque_13 = value;
	}

	inline static int32_t get_offset_of_defensa_14() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___defensa_14)); }
	inline int32_t get_defensa_14() const { return ___defensa_14; }
	inline int32_t* get_address_of_defensa_14() { return &___defensa_14; }
	inline void set_defensa_14(int32_t value)
	{
		___defensa_14 = value;
	}

	inline static int32_t get_offset_of_experiencia_15() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___experiencia_15)); }
	inline int32_t get_experiencia_15() const { return ___experiencia_15; }
	inline int32_t* get_address_of_experiencia_15() { return &___experiencia_15; }
	inline void set_experiencia_15(int32_t value)
	{
		___experiencia_15 = value;
	}

	inline static int32_t get_offset_of_oro_16() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___oro_16)); }
	inline int32_t get_oro_16() const { return ___oro_16; }
	inline int32_t* get_address_of_oro_16() { return &___oro_16; }
	inline void set_oro_16(int32_t value)
	{
		___oro_16 = value;
	}

	inline static int32_t get_offset_of_velocidad_17() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___velocidad_17)); }
	inline int32_t get_velocidad_17() const { return ___velocidad_17; }
	inline int32_t* get_address_of_velocidad_17() { return &___velocidad_17; }
	inline void set_velocidad_17(int32_t value)
	{
		___velocidad_17 = value;
	}

	inline static int32_t get_offset_of_player_18() { return static_cast<int32_t>(offsetof(enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE, ___player_18)); }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * get_player_18() const { return ___player_18; }
	inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 ** get_address_of_player_18() { return &___player_18; }
	inline void set_player_18(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * value)
	{
		___player_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_18), (void*)value);
	}
};


// hitBox
struct hitBox_tA9C9C5679D9125E164EBC0778601828034932553  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// DynamicJoystick
struct DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867  : public Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873
{
public:
	// System.Single DynamicJoystick::moveThreshold
	float ___moveThreshold_15;

public:
	inline static int32_t get_offset_of_moveThreshold_15() { return static_cast<int32_t>(offsetof(DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867, ___moveThreshold_15)); }
	inline float get_moveThreshold_15() const { return ___moveThreshold_15; }
	inline float* get_address_of_moveThreshold_15() { return &___moveThreshold_15; }
	inline void set_moveThreshold_15(float value)
	{
		___moveThreshold_15 = value;
	}
};


// FixedJoystick
struct FixedJoystick_tDB74F76D3F9FBD9C43F508B2F306958915E6F5B2  : public Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873
{
public:

public:
};


// FloatingJoystick
struct FloatingJoystick_tC4079BB6845C914906FF088E283633AFA9C93607  : public Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// VariableJoystick
struct VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B  : public Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873
{
public:
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___fixedPosition_17;

public:
	inline static int32_t get_offset_of_moveThreshold_15() { return static_cast<int32_t>(offsetof(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B, ___moveThreshold_15)); }
	inline float get_moveThreshold_15() const { return ___moveThreshold_15; }
	inline float* get_address_of_moveThreshold_15() { return &___moveThreshold_15; }
	inline void set_moveThreshold_15(float value)
	{
		___moveThreshold_15 = value;
	}

	inline static int32_t get_offset_of_joystickType_16() { return static_cast<int32_t>(offsetof(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B, ___joystickType_16)); }
	inline int32_t get_joystickType_16() const { return ___joystickType_16; }
	inline int32_t* get_address_of_joystickType_16() { return &___joystickType_16; }
	inline void set_joystickType_16(int32_t value)
	{
		___joystickType_16 = value;
	}

	inline static int32_t get_offset_of_fixedPosition_17() { return static_cast<int32_t>(offsetof(VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B, ___fixedPosition_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_fixedPosition_17() const { return ___fixedPosition_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_fixedPosition_17() { return &___fixedPosition_17; }
	inline void set_fixedPosition_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___fixedPosition_17 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * m_Items[1];

public:
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, bool ___arg00, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<System.Object>(System.Threading.Tasks.Task`1<!!0>,System.Action`1<System.Threading.Tasks.Task`1<!!0>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_m07675A747CC5E698654C3ECBDA86BD021BC64284_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D * ___continuation1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32Enum>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_m51D0B58659F08BA98843FD542B3067BACA62879B_gshared (Task_1_t86B94DBC8071781438CF50D65B641E433B2E4C58 * __this, Action_1_t3F33BA23F48680C33B0548529D71272BDA538F34 * ___continuationAction0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D * ___continuationAction0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void CharacterController2D/BoolEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolEvent__ctor_mB1C4B8CED2296E60F44636855900EA1BDF1F393A (BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* Physics2D_OverlapCircleAll_m1D3E8E59627D524F35EF6C67940DD1121CEE6E7C (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
inline void UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void CharacterController2D::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_Flip_m8F1D0D7A87D7E507031BBCDF6C0DB095AFB21965 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single CircularProgressBar::NormalizeAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CircularProgressBar_NormalizeAngle_mC6F02CD9BB921FDDD2817BAAD75A66166F4F58D0 (CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7 * __this, float ___angle0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Image>::Add(!0)
inline void List_1_Add_mC9E7CF6AA231509FB7187CD37AB65D44A127BF7C (List_1_t815A476B0A21E183042059E705F9E505478CD8AE * __this, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t815A476B0A21E183042059E705F9E505478CD8AE *, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Single CircularProgressBar::ConvertCircleFragmentToAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CircularProgressBar_ConvertCircleFragmentToAngle_m8E1B18931ECB66BAEFBAE337DAC0561C8113BCB7 (CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7 * __this, float ___fragment0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Image>::get_Item(System.Int32)
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_inline (List_1_t815A476B0A21E183042059E705F9E505478CD8AE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (List_1_t815A476B0A21E183042059E705F9E505478CD8AE *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Image>::.ctor()
inline void List_1__ctor_m72CF5F25159E3CDD552F7EDFE5EC78E11CC44ED7 (List_1_t815A476B0A21E183042059E705F9E505478CD8AE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t815A476B0A21E183042059E705F9E505478CD8AE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * FirebaseDatabase_GetInstance_mF93FC30A2E04D9D4E4E9CDAE000B1AB850AD1836 (String_t* ___url0, const RuntimeMethod* method);
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * FirebaseDatabase_get_RootReference_mCC8D1B92BE50EB91C76705840BDBD2EF88B6D5FC (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, const RuntimeMethod* method);
// System.Void DbManager::retrieveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbManager_retrieveData_m1D78169E5CBFEFEA9618E3C6077D2DB6A985937A (DbManager_t811CC0E27DC83B3E45451DB987CC3156828DA62C * __this, const RuntimeMethod* method);
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * FirebaseDatabase_GetReference_mC7DE9BC4303079D78A8AEBC27518D94873B84F6F (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * Query_GetValueAsync_m98FE85A2E73CE53438B3AF3F1B7076C2469C25D1 (Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m00DD3ED646F26F8E3933FDC6EC188F7E769E1B5C (Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task Firebase.Extensions.TaskExtension::ContinueWithOnMainThread<Firebase.Database.DataSnapshot>(System.Threading.Tasks.Task`1<!!0>,System.Action`1<System.Threading.Tasks.Task`1<!!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_mED3B21BD3DB3B1B396ED85A4007111AE42AC6571 (Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * ___task0, Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * ___continuation1, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 *, Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 *, const RuntimeMethod*))TaskExtension_ContinueWithOnMainThread_TisRuntimeObject_m07675A747CC5E698654C3ECBDA86BD021BC64284_gshared)(___task0, ___continuation1, method);
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m5A53DE83993960EA2650FB12F596E8C48C561199 (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Joystick_ScreenPointToAnchoredPosition_mAD769BA610FABC0D9C47294736AB0832C558D3FD (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m38CE2907CF406D1F4B327F197E0CCED1C6DD8CC7 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___magnitude0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalised1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius2, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam3, const RuntimeMethod* method);
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.DependencyStatus> Firebase.FirebaseApp::CheckAndFixDependenciesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * FirebaseApp_CheckAndFixDependenciesAsync_m268BF2FC002D4D4CC247EF2636CDF7EBFF043009 (const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9FCBC7F226B662953885B20040A51C363F1B2643 (Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.DependencyStatus>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_mF8709846EB76DCB02B5D666D68B03FE6A0028289 (Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * __this, Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA *, Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 *, const RuntimeMethod*))Task_1_ContinueWith_m51D0B58659F08BA98843FD542B3067BACA62879B_gshared)(__this, ___continuationAction0, method);
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_m0A47278C9A57AC4A6696C0C13450F8F404580C19 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method);
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m1AE640531EE5E28A63A8D5AC757F9753DDA56321 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m56B4D1C75DABA23923EF2E9C20543858E90D23C2 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_m3098305D1A5F1F48444A1ADAEC7BD46E980E274B (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m7C2C550DE23BA7D39DD2015EFAC0DBB53087E0DD (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_m9A107FE7A8EF41E9FBEB6979B1B17FD79C3F127C (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m1127276AFCEF63DE869AC5156DE7712810B6C46D (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransformUtility_WorldToScreenPoint_m92E801861EE14D73219C34A6175847C4A46105E1 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPoint1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m3F0D7E3B97B0493F4E98B2BBCA7A57BC1E1CB710 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m63A593A281BC0B6C36FCFF399056E1DE9F4C01E0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_m6EAB109EE0C7D5EB1389E2277AD72335EF140826 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mEAAD1B809A8CF1CC22C54EF2ADC702B11DA704A9_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___from0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___to1, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rect0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPoint1, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam2, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___localPoint3, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_pivot_m146F0BB5D3873FCEF3606DAFB8994BFA978095EE (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  RectTransform_get_anchorMax_mC1577047A20870209C9A6801B75FE6930AE56F1E (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, int32_t ___joystickType0, const RuntimeMethod* method);
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m671D494CBF07962B24BF4024059715FA650BB9EF_inline (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_m710022BEA478442D17908F10F5BA53375705AC3B_inline (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_mAD4C6843FD698B99D23F21C3A15D9CE928289508_inline (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Joystick_get_Direction_mF002E7B698C393FF866864D4A552357C535D36C5 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * FirebaseDatabase_get_DefaultInstance_mDBCDC6415A3C87F065EE96C415A5D205C2C2BA0E (const RuntimeMethod* method);
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23 (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, String_t* ___pathString0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_m3DFCE1FF256DDED4A965FC1B5222E464AF7A8A7F (Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * __this, Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 *, Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 *, const RuntimeMethod*))Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared)(__this, ___continuationAction0, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void CharacterController2D::Move(System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_Move_mE541579D7B4A796A34C1E2AFF0DAD5DEADD475F9 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, float ___move0, bool ___crouch1, bool ___jump2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>::get_Result()
inline DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * Task_1_get_Result_m340C568FCD117E23EF7552E372CDFA3187A1DA3E (Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * __this, const RuntimeMethod* method)
{
	return ((  DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * (*) (Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 *, const RuntimeMethod*))Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot> Firebase.Database.DataSnapshot::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_get_Children_m2E3B643ECF42F6F08D38F2666E81E89F797489CC (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, const RuntimeMethod* method);
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_m3D591B0FB8ABFAC8E876D00D74E1E20CFA1EC4CA (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetValueAsync(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * DatabaseReference_SetValueAsync_m45554810BB0842F054C39C8B5A8FAA40176650E0 (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___className0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, String_t* ___methodName0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *, String_t*, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void Jugador::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jugador__ctor_mA3CB4E59167A3E1AA0342B3D65B33C7526169D49 (Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D * __this, int32_t ___ataque0, int32_t ___defensa1, int32_t ___experiencia2, int32_t ___oro3, int32_t ___velocidad4, int32_t ___vida5, const RuntimeMethod* method);
// System.Void SceneChange::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange_LoadScene_m7A669C91F7D05C40E47FD07274269CFFE6B7F4AA (SceneChange_t5358F7FEF1F1747A7DA8CA0D50F436D8DEFF92F3 * __this, String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_ContinueWith_m8540E40049DA1A53066538EBEBC69DE46859748F (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * ___continuationAction0, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void enemyController::randomMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController_randomMovement_m6369D6C3FE330AAF7C320BD6688259BD58666545 (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, const RuntimeMethod* method);
// System.Void enemyController::randomAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController_randomAttack_m594F5A0A6501B8F0133511ED617C64219B7C2DD9 (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void enemyController::attackEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController_attackEnemy_m509BD331659EAA734F3FF64F3FF5E4012CD9F749 (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, const RuntimeMethod* method);
// System.Void enemyController::attackFalseEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController_attackFalseEnemy_m241572B770EAC1B532D7259D596DE0EF390FF3FA (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7 (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, const RuntimeMethod*))UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared)(__this, method);
}
// System.Void DbManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6253DFB5B12FFDEDD858EE1B5245377BC47446A4 (U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.String Firebase.Database.DataSnapshot::GetRawJsonValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_GetRawJsonValue_mE0A3B5759191BD7947B7E8F25BEA7CDD7BB4D301 (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Jugador>(System.String)
inline Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D * JsonUtility_FromJson_TisJugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D_mDE52562A0A880A29B435F17DE9E4838FC67B2D72 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void FireBaseInit/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m20AB8119F4F28669E2411B68592AF7C1D05405D7 (U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB * __this, const RuntimeMethod* method);
// System.Void Firebase.Analytics.FirebaseAnalytics::SetAnalyticsCollectionEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAnalytics_SetAnalyticsCollectionEnabled_mCFDE419BF7367211DE94D17C4510C7E75A1BD7CE (bool ___enabled0, const RuntimeMethod* method);
// System.Void UIHealthBarEnemy/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7EBEE9ACE1B2FCCCE9B7AFCEDE1B76AE25118577 (U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E * __this, const RuntimeMethod* method);
// System.Void UIHealthBarPlayer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1BF662BEC7E5A907642A06D30DDB655862EFF337 (U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CharacterController2D::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_Awake_mFD21C000EE8097373F734648EAC2BFDB901197FA (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Rigidbody2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_m_Rigidbody2D_15(L_0);
		// if (OnLandEvent == null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_OnLandEvent_18();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OnLandEvent = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_2, /*hidden argument*/NULL);
		__this->set_OnLandEvent_18(L_2);
	}

IL_001f:
	{
		// if (OnCrouchEvent == null)
		BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * L_3 = __this->get_OnCrouchEvent_19();
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// OnCrouchEvent = new BoolEvent();
		BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * L_4 = (BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 *)il2cpp_codegen_object_new(BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659_il2cpp_TypeInfo_var);
		BoolEvent__ctor_mB1C4B8CED2296E60F44636855900EA1BDF1F393A(L_4, /*hidden argument*/NULL);
		__this->set_OnCrouchEvent_19(L_4);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void CharacterController2D::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_FixedUpdate_m00D8CBF2991777D0875EB1D13AF8222831A2F0E8 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// bool wasGrounded = m_Grounded;
		bool L_0 = __this->get_m_Grounded_13();
		V_0 = L_0;
		// m_Grounded = false;
		__this->set_m_Grounded_13((bool)0);
		// Collider2D[] colliders = Physics2D.OverlapCircleAll(m_GroundCheck.position, k_GroundedRadius, m_WhatIsGround);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_m_GroundCheck_9();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4 = __this->get_m_WhatIsGround_8();
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_6;
		L_6 = Physics2D_OverlapCircleAll_m1D3E8E59627D524F35EF6C67940DD1121CEE6E7C(L_3, (0.200000003f), L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (int i = 0; i < colliders.Length; i++)
		V_2 = 0;
		goto IL_0066;
	}

IL_0038:
	{
		// if (colliders[i].gameObject != gameObject)
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0062;
		}
	}
	{
		// m_Grounded = true;
		__this->set_m_Grounded_13((bool)1);
		// if (!wasGrounded)
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_0062;
		}
	}
	{
		// OnLandEvent.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_15 = __this->get_OnLandEvent_18();
		NullCheck(L_15);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_15, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// for (int i = 0; i < colliders.Length; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0066:
	{
		// for (int i = 0; i < colliders.Length; i++)
		int32_t L_17 = V_2;
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CharacterController2D::Move(System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_Move_mE541579D7B4A796A34C1E2AFF0DAD5DEADD475F9 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, float ___move0, bool ___crouch1, bool ___jump2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!crouch)
		bool L_0 = ___crouch1;
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		// if (Physics2D.OverlapCircle(m_CeilingCheck.position, k_CeilingRadius, m_WhatIsGround))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_m_CeilingCheck_10();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4 = __this->get_m_WhatIsGround_8();
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6;
		L_6 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_3, (0.200000003f), L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// crouch = true;
		___crouch1 = (bool)1;
	}

IL_0032:
	{
		// if (m_Grounded || m_AirControl)
		bool L_8 = __this->get_m_Grounded_13();
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		bool L_9 = __this->get_m_AirControl_7();
		if (!L_9)
		{
			goto IL_0140;
		}
	}

IL_0045:
	{
		// if (crouch)
		bool L_10 = ___crouch1;
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		// if (!m_wasCrouching)
		bool L_11 = __this->get_m_wasCrouching_20();
		if (L_11)
		{
			goto IL_0063;
		}
	}
	{
		// m_wasCrouching = true;
		__this->set_m_wasCrouching_20((bool)1);
		// OnCrouchEvent.Invoke(true);
		BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * L_12 = __this->get_OnCrouchEvent_19();
		NullCheck(L_12);
		UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F(L_12, (bool)1, /*hidden argument*/UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var);
	}

IL_0063:
	{
		// move *= m_CrouchSpeed;
		float L_13 = ___move0;
		float L_14 = __this->get_m_CrouchSpeed_5();
		___move0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14));
		// if (m_CrouchDisableCollider != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_15 = __this->get_m_CrouchDisableCollider_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00be;
		}
	}
	{
		// m_CrouchDisableCollider.enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_17 = __this->get_m_CrouchDisableCollider_11();
		NullCheck(L_17);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_17, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00be;
	}

IL_0089:
	{
		// if (m_CrouchDisableCollider != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_18 = __this->get_m_CrouchDisableCollider_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		// m_CrouchDisableCollider.enabled = true;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_20 = __this->get_m_CrouchDisableCollider_11();
		NullCheck(L_20);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_20, (bool)1, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// if (m_wasCrouching)
		bool L_21 = __this->get_m_wasCrouching_20();
		if (!L_21)
		{
			goto IL_00be;
		}
	}
	{
		// m_wasCrouching = false;
		__this->set_m_wasCrouching_20((bool)0);
		// OnCrouchEvent.Invoke(false);
		BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * L_22 = __this->get_OnCrouchEvent_19();
		NullCheck(L_22);
		UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F(L_22, (bool)0, /*hidden argument*/UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var);
	}

IL_00be:
	{
		// Vector3 targetVelocity = new Vector2(move * 10f, m_Rigidbody2D.velocity.y);
		float L_23 = ___move0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_24 = __this->get_m_Rigidbody2D_15();
		NullCheck(L_24);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_27), ((float)il2cpp_codegen_multiply((float)L_23, (float)(10.0f))), L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// m_Rigidbody2D.velocity = Vector3.SmoothDamp(m_Rigidbody2D.velocity, targetVelocity, ref m_Velocity, m_MovementSmoothing);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_29 = __this->get_m_Rigidbody2D_15();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_30 = __this->get_m_Rigidbody2D_15();
		NullCheck(L_30);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_34 = __this->get_address_of_m_Velocity_17();
		float L_35 = __this->get_m_MovementSmoothing_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_32, L_33, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_34, L_35, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_36, /*hidden argument*/NULL);
		NullCheck(L_29);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_29, L_37, /*hidden argument*/NULL);
		// if (move > 0 && !m_FacingRight)
		float L_38 = ___move0;
		if ((!(((float)L_38) > ((float)(0.0f)))))
		{
			goto IL_012a;
		}
	}
	{
		bool L_39 = __this->get_m_FacingRight_16();
		if (L_39)
		{
			goto IL_012a;
		}
	}
	{
		// Flip();
		CharacterController2D_Flip_m8F1D0D7A87D7E507031BBCDF6C0DB095AFB21965(__this, /*hidden argument*/NULL);
		// }
		goto IL_0140;
	}

IL_012a:
	{
		// else if (move < 0 && m_FacingRight)
		float L_40 = ___move0;
		if ((!(((float)L_40) < ((float)(0.0f)))))
		{
			goto IL_0140;
		}
	}
	{
		bool L_41 = __this->get_m_FacingRight_16();
		if (!L_41)
		{
			goto IL_0140;
		}
	}
	{
		// Flip();
		CharacterController2D_Flip_m8F1D0D7A87D7E507031BBCDF6C0DB095AFB21965(__this, /*hidden argument*/NULL);
	}

IL_0140:
	{
		// if (m_Grounded && jump)
		bool L_42 = __this->get_m_Grounded_13();
		bool L_43 = ___jump2;
		if (!((int32_t)((int32_t)L_42&(int32_t)L_43)))
		{
			goto IL_016c;
		}
	}
	{
		// m_Grounded = false;
		__this->set_m_Grounded_13((bool)0);
		// m_Rigidbody2D.AddForce(new Vector2(0f, m_JumpForce));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_44 = __this->get_m_Rigidbody2D_15();
		float L_45 = __this->get_m_JumpForce_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_46), (0.0f), L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_44, L_46, /*hidden argument*/NULL);
	}

IL_016c:
	{
		// }
		return;
	}
}
// System.Void CharacterController2D::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_Flip_m8F1D0D7A87D7E507031BBCDF6C0DB095AFB21965 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_FacingRight = !m_FacingRight;
		bool L_0 = __this->get_m_FacingRight_16();
		__this->set_m_FacingRight_16((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// Vector3 theScale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// theScale.x *= -1;
		float* L_3 = (&V_0)->get_address_of_x_2();
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_multiply((float)L_5, (float)(-1.0f)));
		// transform.localScale = theScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		NullCheck(L_6);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterController2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D__ctor_m5C93DA812470EF6163E25545DED6CA554BBA83F7 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float m_JumpForce = 400f;                          // Amount of force added when the player jumps.
		__this->set_m_JumpForce_4((400.0f));
		// [Range(0, 1)] [SerializeField] private float m_CrouchSpeed = .36f;          // Amount of maxSpeed applied to crouching movement. 1 = 100%
		__this->set_m_CrouchSpeed_5((0.360000014f));
		// [Range(0, .3f)] [SerializeField] private float m_MovementSmoothing = .05f;  // How much to smooth out the movement
		__this->set_m_MovementSmoothing_6((0.0500000007f));
		// private bool m_FacingRight = true;  // For determining which way the player is currently facing.
		__this->set_m_FacingRight_16((bool)1);
		// private Vector3 m_Velocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_m_Velocity_17(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CircularProgressBar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularProgressBar_Awake_mD9463815B13C8B9345F28253328DCD00C991F999 (CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC9E7CF6AA231509FB7187CD37AB65D44A127BF7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * V_5 = NULL;
	float V_6 = 0.0f;
	{
		// m_Image = GetComponentInChildren<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4(__this, /*hidden argument*/Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4_RuntimeMethod_var);
		__this->set_m_Image_11(L_0);
		// m_Image.color = m_MainColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_m_Image_11();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2 = __this->get_m_MainColor_4();
		NullCheck(L_1);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_2);
		// m_Image.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_m_Image_11();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// float startNormalAngle = NormalizeAngle(m_StartAngle);
		float L_5 = __this->get_m_StartAngle_7();
		float L_6;
		L_6 = CircularProgressBar_NormalizeAngle_mC6F02CD9BB921FDDD2817BAAD75A66166F4F58D0(__this, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// float endNormalAngle = NormalizeAngle(360 - m_EndAngle);
		float L_7 = __this->get_m_EndAngle_8();
		float L_8;
		L_8 = CircularProgressBar_NormalizeAngle_mC6F02CD9BB921FDDD2817BAAD75A66166F4F58D0(__this, ((float)il2cpp_codegen_subtract((float)(360.0f), (float)L_7)), /*hidden argument*/NULL);
		V_1 = L_8;
		// float notchesNormalAngle = (m_NumberOfSegments - 1) * NormalizeAngle(m_SizeOfNotch);
		int32_t L_9 = __this->get_m_NumberOfSegments_6();
		float L_10 = __this->get_m_SizeOfNotch_9();
		float L_11;
		L_11 = CircularProgressBar_NormalizeAngle_mC6F02CD9BB921FDDD2817BAAD75A66166F4F58D0(__this, L_10, /*hidden argument*/NULL);
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)))), (float)L_11));
		// float allSegmentsAngleArea = 1 - startNormalAngle - endNormalAngle - notchesNormalAngle;
		float L_12 = V_0;
		float L_13 = V_1;
		float L_14 = V_2;
		V_3 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_12)), (float)L_13)), (float)L_14));
		// m_SizeOfSegment = allSegmentsAngleArea / m_NumberOfSegments;
		float L_15 = V_3;
		int32_t L_16 = __this->get_m_NumberOfSegments_6();
		__this->set_m_SizeOfSegment_13(((float)((float)L_15/(float)((float)((float)L_16)))));
		// for (int i = 0; i < m_NumberOfSegments; i++) {
		V_4 = 0;
		goto IL_0139;
	}

IL_0088:
	{
		// GameObject currentSegment = Instantiate(m_Image.gameObject, transform.position, Quaternion.identity, transform);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17 = __this->get_m_Image_11();
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_18, L_20, L_21, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		// currentSegment.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = L_23;
		NullCheck(L_24);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_24, (bool)1, /*hidden argument*/NULL);
		// Image segmentImage = currentSegment.GetComponent<Image>();
		NullCheck(L_24);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25;
		L_25 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_24, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		// segmentImage.fillAmount = m_SizeOfSegment;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_26 = L_25;
		float L_27 = __this->get_m_SizeOfSegment_13();
		NullCheck(L_26);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_26, L_27, /*hidden argument*/NULL);
		// Image segmentFillImage = segmentImage.transform.GetChild (0).GetComponent<Image> ();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_28 = L_26;
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_29, 0, /*hidden argument*/NULL);
		NullCheck(L_30);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_31;
		L_31 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_30, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		V_5 = L_31;
		// segmentFillImage.color = m_FillColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_32 = V_5;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_33 = __this->get_m_FillColor_5();
		NullCheck(L_32);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_32, L_33);
		// m_ProgressToFill.Add (segmentFillImage);
		List_1_t815A476B0A21E183042059E705F9E505478CD8AE * L_34 = __this->get_m_ProgressToFill_12();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_35 = V_5;
		NullCheck(L_34);
		List_1_Add_mC9E7CF6AA231509FB7187CD37AB65D44A127BF7C(L_34, L_35, /*hidden argument*/List_1_Add_mC9E7CF6AA231509FB7187CD37AB65D44A127BF7C_RuntimeMethod_var);
		// float zRot = m_StartAngle + i * ConvertCircleFragmentToAngle(m_SizeOfSegment) + i * m_SizeOfNotch;
		float L_36 = __this->get_m_StartAngle_7();
		int32_t L_37 = V_4;
		float L_38 = __this->get_m_SizeOfSegment_13();
		float L_39;
		L_39 = CircularProgressBar_ConvertCircleFragmentToAngle_m8E1B18931ECB66BAEFBAE337DAC0561C8113BCB7(__this, L_38, /*hidden argument*/NULL);
		int32_t L_40 = V_4;
		float L_41 = __this->get_m_SizeOfNotch_9();
		V_6 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_36, (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_37)), (float)L_39)))), (float)((float)il2cpp_codegen_multiply((float)((float)((float)L_40)), (float)L_41))));
		// segmentImage.transform.rotation = Quaternion.Euler(0,0, -zRot);
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		float L_43 = V_6;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_44;
		L_44 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((-L_43)), /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_42, L_44, /*hidden argument*/NULL);
		// for (int i = 0; i < m_NumberOfSegments; i++) {
		int32_t L_45 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_0139:
	{
		// for (int i = 0; i < m_NumberOfSegments; i++) {
		int32_t L_46 = V_4;
		int32_t L_47 = __this->get_m_NumberOfSegments_6();
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0088;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CircularProgressBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularProgressBar_Update_mA53C9BB885A6D9D718E711C86C8AE622A79CCDF7 (CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_NumberOfSegments; i++) {
		V_0 = 0;
		goto IL_003d;
	}

IL_0004:
	{
		// m_ProgressToFill [i].fillAmount = (m_FillAmount * ((m_EndAngle-m_StartAngle)/360)) - m_SizeOfSegment * i;
		List_1_t815A476B0A21E183042059E705F9E505478CD8AE * L_0 = __this->get_m_ProgressToFill_12();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2;
		L_2 = List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_RuntimeMethod_var);
		float L_3 = __this->get_m_FillAmount_10();
		float L_4 = __this->get_m_EndAngle_8();
		float L_5 = __this->get_m_StartAngle_7();
		float L_6 = __this->get_m_SizeOfSegment_13();
		int32_t L_7 = V_0;
		NullCheck(L_2);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_2, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_3, (float)((float)((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_5))/(float)(360.0f))))), (float)((float)il2cpp_codegen_multiply((float)L_6, (float)((float)((float)L_7)))))), /*hidden argument*/NULL);
		// for (int i = 0; i < m_NumberOfSegments; i++) {
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_003d:
	{
		// for (int i = 0; i < m_NumberOfSegments; i++) {
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_m_NumberOfSegments_6();
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Single CircularProgressBar::NormalizeAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CircularProgressBar_NormalizeAngle_mC6F02CD9BB921FDDD2817BAAD75A66166F4F58D0 (CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7 * __this, float ___angle0, const RuntimeMethod* method)
{
	{
		// return Mathf.Clamp01(angle / 360f);
		float L_0 = ___angle0;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_0/(float)(360.0f))), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single CircularProgressBar::ConvertCircleFragmentToAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CircularProgressBar_ConvertCircleFragmentToAngle_m8E1B18931ECB66BAEFBAE337DAC0561C8113BCB7 (CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7 * __this, float ___fragment0, const RuntimeMethod* method)
{
	{
		// return 360 * fragment;
		float L_0 = ___fragment0;
		return ((float)il2cpp_codegen_multiply((float)(360.0f), (float)L_0));
	}
}
// System.Void CircularProgressBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularProgressBar__ctor_mD0992FC14749E85E7C53BBB4A7AD4A381D52A2D2 (CircularProgressBar_tC018BD2FEFBF6664A120ABCBB4D0F7EA89462FE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m72CF5F25159E3CDD552F7EDFE5EC78E11CC44ED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t815A476B0A21E183042059E705F9E505478CD8AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private Color m_MainColor = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_m_MainColor_4(L_0);
		// [SerializeField] private Color m_FillColor = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		__this->set_m_FillColor_5(L_1);
		// [SerializeField] private int m_NumberOfSegments = 5;
		__this->set_m_NumberOfSegments_6(5);
		// [Range(0, 360)] [SerializeField] private float m_StartAngle = 40;
		__this->set_m_StartAngle_7((40.0f));
		// [Range(0, 360)] [SerializeField] private float m_EndAngle = 320;
		__this->set_m_EndAngle_8((320.0f));
		// [SerializeField] private float m_SizeOfNotch = 5;
		__this->set_m_SizeOfNotch_9((5.0f));
		// private List<Image> m_ProgressToFill = new List<Image> ();
		List_1_t815A476B0A21E183042059E705F9E505478CD8AE * L_2 = (List_1_t815A476B0A21E183042059E705F9E505478CD8AE *)il2cpp_codegen_object_new(List_1_t815A476B0A21E183042059E705F9E505478CD8AE_il2cpp_TypeInfo_var);
		List_1__ctor_m72CF5F25159E3CDD552F7EDFE5EC78E11CC44ED7(L_2, /*hidden argument*/List_1__ctor_m72CF5F25159E3CDD552F7EDFE5EC78E11CC44ED7_RuntimeMethod_var);
		__this->set_m_ProgressToFill_12(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ClassicProgressBar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClassicProgressBar_Awake_mFF2074CA01333FEBD4E58674AC5409F86BA14462 (ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC9E7CF6AA231509FB7187CD37AB65D44A127BF7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * V_1 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * V_2 = NULL;
	{
		// m_RectTransform = GetComponent<RectTransform> ();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_m_RectTransform_9(L_0);
		// m_Image = GetComponentInChildren<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4(__this, /*hidden argument*/Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4_RuntimeMethod_var);
		__this->set_m_Image_10(L_1);
		// m_Image.color = m_MainColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_m_Image_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3 = __this->get_m_MainColor_4();
		NullCheck(L_2);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// m_Image.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_m_Image_10();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// m_SizeOfSegment = m_RectTransform.sizeDelta.x / m_NumberOfSegments;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = __this->get_m_RectTransform_9();
		NullCheck(L_6);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_0();
		int32_t L_9 = __this->get_m_NumberOfSegments_6();
		__this->set_m_SizeOfSegment_12(((float)((float)L_8/(float)((float)((float)L_9)))));
		// for (int i = 0; i < m_NumberOfSegments; i++) {
		V_0 = 0;
		goto IL_017f;
	}

IL_005f:
	{
		// GameObject currentSegment = Instantiate(m_Image.gameObject, transform.position, Quaternion.identity, transform);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = __this->get_m_Image_10();
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_11, L_13, L_14, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		// currentSegment.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = L_16;
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)1, /*hidden argument*/NULL);
		// Image segmentImage = currentSegment.GetComponent<Image>();
		NullCheck(L_17);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_18;
		L_18 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_17, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		// segmentImage.fillAmount = m_SizeOfSegment;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = L_18;
		float L_20 = __this->get_m_SizeOfSegment_12();
		NullCheck(L_19);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_19, L_20, /*hidden argument*/NULL);
		// RectTransform segmentRectTransform = segmentImage.GetComponent<RectTransform>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_21 = L_19;
		NullCheck(L_21);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_22;
		L_22 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_21, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		V_1 = L_22;
		// segmentRectTransform.sizeDelta = new Vector2(m_SizeOfSegment, segmentRectTransform.sizeDelta.y);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_23 = V_1;
		float L_24 = __this->get_m_SizeOfSegment_12();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_25 = V_1;
		NullCheck(L_25);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_28), L_24, L_27, /*hidden argument*/NULL);
		NullCheck(L_23);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_23, L_28, /*hidden argument*/NULL);
		// segmentRectTransform.position += (Vector3.right * i * m_SizeOfSegment) - (Vector3.right * m_SizeOfSegment * (m_NumberOfSegments / 2)) + (Vector3.right * i * m_SizeOfNotch);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_29 = V_1;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_30 = L_29;
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		int32_t L_33 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_32, ((float)((float)L_33)), /*hidden argument*/NULL);
		float L_35 = __this->get_m_SizeOfSegment_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_34, L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		float L_38 = __this->get_m_SizeOfSegment_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_37, L_38, /*hidden argument*/NULL);
		int32_t L_40 = __this->get_m_NumberOfSegments_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_39, ((float)((float)((int32_t)((int32_t)L_40/(int32_t)2)))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_36, L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		int32_t L_44 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_43, ((float)((float)L_44)), /*hidden argument*/NULL);
		float L_46 = __this->get_m_SizeOfNotch_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_45, L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_42, L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_31, L_48, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_30, L_49, /*hidden argument*/NULL);
		// Image segmentFillImage = segmentImage.transform.GetChild (0).GetComponent<Image> ();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_21, /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_50, 0, /*hidden argument*/NULL);
		NullCheck(L_51);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_52;
		L_52 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_51, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		V_2 = L_52;
		// segmentFillImage.color = m_FillColor;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_53 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_54 = __this->get_m_FillColor_5();
		NullCheck(L_53);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_53, L_54);
		// m_ProgressToFill.Add (segmentFillImage);
		List_1_t815A476B0A21E183042059E705F9E505478CD8AE * L_55 = __this->get_m_ProgressToFill_11();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_56 = V_2;
		NullCheck(L_55);
		List_1_Add_mC9E7CF6AA231509FB7187CD37AB65D44A127BF7C(L_55, L_56, /*hidden argument*/List_1_Add_mC9E7CF6AA231509FB7187CD37AB65D44A127BF7C_RuntimeMethod_var);
		// segmentFillImage.transform.GetComponent<RectTransform> ().sizeDelta = new Vector2(m_SizeOfSegment, segmentFillImage.GetComponent<RectTransform>().sizeDelta.y);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_57 = V_2;
		NullCheck(L_57);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_59;
		L_59 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_58, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		float L_60 = __this->get_m_SizeOfSegment_12();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_61 = V_2;
		NullCheck(L_61);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_62;
		L_62 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(L_61, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		NullCheck(L_62);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_63;
		L_63 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_62, /*hidden argument*/NULL);
		float L_64 = L_63.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_65), L_60, L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		RectTransform_set_sizeDelta_m61943618442E31C6FF0556CDFC70940AE7AD04D0(L_59, L_65, /*hidden argument*/NULL);
		// for (int i = 0; i < m_NumberOfSegments; i++) {
		int32_t L_66 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_017f:
	{
		// for (int i = 0; i < m_NumberOfSegments; i++) {
		int32_t L_67 = V_0;
		int32_t L_68 = __this->get_m_NumberOfSegments_6();
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_005f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ClassicProgressBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClassicProgressBar_Update_m079115200B19A5C374F794FC05442F9E19632AB0 (ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < m_NumberOfSegments; i++) {
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		// m_ProgressToFill[i].fillAmount = m_NumberOfSegments * m_FillAmount - i;
		List_1_t815A476B0A21E183042059E705F9E505478CD8AE * L_0 = __this->get_m_ProgressToFill_11();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2;
		L_2 = List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m7A4900D7FA7200437D9764FF2DF2F21936058AEA_RuntimeMethod_var);
		int32_t L_3 = __this->get_m_NumberOfSegments_6();
		float L_4 = __this->get_m_FillAmount_8();
		int32_t L_5 = V_0;
		NullCheck(L_2);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_2, ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_3)), (float)L_4)), (float)((float)((float)L_5)))), /*hidden argument*/NULL);
		// for (int i = 0; i < m_NumberOfSegments; i++) {
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002a:
	{
		// for (int i = 0; i < m_NumberOfSegments; i++) {
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_m_NumberOfSegments_6();
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Single ClassicProgressBar::ConvertFragmentToWidth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ClassicProgressBar_ConvertFragmentToWidth_m1C0386A61BCBCBD2AE962B67938C0879D185FEF1 (ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B * __this, float ___fragment0, const RuntimeMethod* method)
{
	{
		// return m_RectTransform.sizeDelta.x * fragment;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_m_RectTransform_9();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_0();
		float L_3 = ___fragment0;
		return ((float)il2cpp_codegen_multiply((float)L_2, (float)L_3));
	}
}
// System.Void ClassicProgressBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClassicProgressBar__ctor_m6B2D8CC4BCDA302E24E058CBDC5A5C566D4CFC30 (ClassicProgressBar_t92EC62618942A953709E737FEE6C8D234037B15B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m72CF5F25159E3CDD552F7EDFE5EC78E11CC44ED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t815A476B0A21E183042059E705F9E505478CD8AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private Color m_MainColor = Color.white;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		__this->set_m_MainColor_4(L_0);
		// [SerializeField] private Color m_FillColor = Color.green;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		__this->set_m_FillColor_5(L_1);
		// [SerializeField] private int m_NumberOfSegments = 5;
		__this->set_m_NumberOfSegments_6(5);
		// [SerializeField] private float m_SizeOfNotch = 5;
		__this->set_m_SizeOfNotch_7((5.0f));
		// private List<Image> m_ProgressToFill = new List<Image> ();
		List_1_t815A476B0A21E183042059E705F9E505478CD8AE * L_2 = (List_1_t815A476B0A21E183042059E705F9E505478CD8AE *)il2cpp_codegen_object_new(List_1_t815A476B0A21E183042059E705F9E505478CD8AE_il2cpp_TypeInfo_var);
		List_1__ctor_m72CF5F25159E3CDD552F7EDFE5EC78E11CC44ED7(L_2, /*hidden argument*/List_1__ctor_m72CF5F25159E3CDD552F7EDFE5EC78E11CC44ED7_RuntimeMethod_var);
		__this->set_m_ProgressToFill_11(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DbManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbManager_Start_m25FBA413E3F202671FC2D862267B4AC635239246 (DbManager_t811CC0E27DC83B3E45451DB987CC3156828DA62C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9FC4BE0C16364A3886B5A2ACFDD326ED85A447B);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * V_0 = NULL;
	{
		// FirebaseDatabase database = FirebaseDatabase.GetInstance("https://kami-kaze-347314-default-rtdb.firebaseio.com/");
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_0;
		L_0 = FirebaseDatabase_GetInstance_mF93FC30A2E04D9D4E4E9CDAE000B1AB850AD1836(_stringLiteralE9FC4BE0C16364A3886B5A2ACFDD326ED85A447B, /*hidden argument*/NULL);
		V_0 = L_0;
		// reference = database.RootReference;
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_1 = V_0;
		NullCheck(L_1);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_2;
		L_2 = FirebaseDatabase_get_RootReference_mCC8D1B92BE50EB91C76705840BDBD2EF88B6D5FC(L_1, /*hidden argument*/NULL);
		__this->set_reference_4(L_2);
		// retrieveData();
		DbManager_retrieveData_m1D78169E5CBFEFEA9618E3C6077D2DB6A985937A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DbManager::retrieveData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbManager_retrieveData_m1D78169E5CBFEFEA9618E3C6077D2DB6A985937A (DbManager_t811CC0E27DC83B3E45451DB987CC3156828DA62C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m00DD3ED646F26F8E3933FDC6EC188F7E769E1B5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_mED3B21BD3DB3B1B396ED85A4007111AE42AC6571_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CretrieveDataU3Eb__2_0_mC3CCA0C3E24696C1C7D41C9A8527276AF668BE7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9FC4BE0C16364A3886B5A2ACFDD326ED85A447B);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * G_B2_0 = NULL;
	Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * G_B2_1 = NULL;
	Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * G_B1_0 = NULL;
	Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * G_B1_1 = NULL;
	{
		// FirebaseDatabase.GetInstance("https://kami-kaze-347314-default-rtdb.firebaseio.com/").GetReference("users").GetValueAsync().ContinueWithOnMainThread(
		//     task => {
		//         if (task.IsFaulted)
		//         {
		//             // Handle the error...
		//             print("Error retrieving database");
		//         }
		//         else if (task.IsCompleted)
		//         {
		//             DataSnapshot snapshot = task.Result;
		// 
		//             foreach(var jugador in snapshot.Children)
		//             {
		//                 Jugador jugadorRetornado= JsonUtility.FromJson<Jugador>(jugador.GetRawJsonValue());
		//                 print(jugadorRetornado.ataque);
		//             }
		//         }
		//     }
		// );
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_0;
		L_0 = FirebaseDatabase_GetInstance_mF93FC30A2E04D9D4E4E9CDAE000B1AB850AD1836(_stringLiteralE9FC4BE0C16364A3886B5A2ACFDD326ED85A447B, /*hidden argument*/NULL);
		NullCheck(L_0);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_1;
		L_1 = FirebaseDatabase_GetReference_mC7DE9BC4303079D78A8AEBC27518D94873B84F6F(L_0, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, /*hidden argument*/NULL);
		NullCheck(L_1);
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_2;
		L_2 = Query_GetValueAsync_m98FE85A2E73CE53438B3AF3F1B7076C2469C25D1(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_il2cpp_TypeInfo_var);
		Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * L_3 = ((U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_il2cpp_TypeInfo_var))->get_U3CU3E9__2_0_1();
		Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_0038;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_il2cpp_TypeInfo_var);
		U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31 * L_5 = ((U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * L_6 = (Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 *)il2cpp_codegen_object_new(Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1_il2cpp_TypeInfo_var);
		Action_1__ctor_m00DD3ED646F26F8E3933FDC6EC188F7E769E1B5C(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CretrieveDataU3Eb__2_0_mC3CCA0C3E24696C1C7D41C9A8527276AF668BE7F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m00DD3ED646F26F8E3933FDC6EC188F7E769E1B5C_RuntimeMethod_var);
		Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * L_7 = L_6;
		((U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_il2cpp_TypeInfo_var))->set_U3CU3E9__2_0_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_0038:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
		L_8 = TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_mED3B21BD3DB3B1B396ED85A4007111AE42AC6571(G_B2_1, G_B2_0, /*hidden argument*/TaskExtension_ContinueWithOnMainThread_TisDataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_mED3B21BD3DB3B1B396ED85A4007111AE42AC6571_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DbManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbManager__ctor_mDCA240259C9FD884474268BE839A4FFCA1C011C4 (DbManager_t811CC0E27DC83B3E45451DB987CC3156828DA62C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Single DynamicJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DynamicJoystick_get_MoveThreshold_m58D7166511D10A9933A62403E6BD58A85A22FE11 (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, const RuntimeMethod* method)
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->get_moveThreshold_15();
		return L_0;
	}
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m5A53DE83993960EA2650FB12F596E8C48C561199 (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->set_moveThreshold_15(L_1);
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void DynamicJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_Start_mA61574C0A57F93B6604DFD076E6D2B8959637FF6 (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, const RuntimeMethod* method)
{
	{
		// MoveThreshold = moveThreshold;
		float L_0 = __this->get_moveThreshold_15();
		DynamicJoystick_set_MoveThreshold_m5A53DE83993960EA2650FB12F596E8C48C561199(__this, L_0, /*hidden argument*/NULL);
		// base.Start();
		Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275(__this, /*hidden argument*/NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerDown_m86184227C74C293693A120601730591FE892D477 (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mAD769BA610FABC0D9C47294736AB0832C558D3FD(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_3, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_6 = ___eventData0;
		Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerUp_m19326842BD55962349FA84108425A679F320166A (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_HandleInput_m9E141917F78D7887B05AEE4933F803D43F8A82AA (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, float ___magnitude0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalised1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius2, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam3, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (magnitude > moveThreshold)
		float L_0 = ___magnitude0;
		float L_1 = __this->get_moveThreshold_15();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___normalised1;
		float L_3 = ___magnitude0;
		float L_4 = __this->get_moveThreshold_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_2, ((float)il2cpp_codegen_subtract((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___radius2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// background.anchoredPosition += difference;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = L_8;
		NullCheck(L_9);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_9, L_12, /*hidden argument*/NULL);
	}

IL_0035:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_13 = ___magnitude0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = ___normalised1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = ___radius2;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_16 = ___cam3;
		Joystick_HandleInput_m38CE2907CF406D1F4B327F197E0CCED1C6DD8CC7(__this, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick__ctor_m30E27EBE028214E9F514F3788463A74511DC651D (DynamicJoystick_t675DA15D6A912CB9638176139FD810B7B051E867 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->set_moveThreshold_15((1.0f));
		Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08(__this, /*hidden argument*/NULL);
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
// System.Void FireBaseInit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseInit_Start_m7B6EA9D28EB2CBBC78D31C25D9836A6226B286DB (FireBaseInit_t2D0CD2585037CBB93BF957F7ED128FBB6D038179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m9FCBC7F226B662953885B20040A51C363F1B2643_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_mF8709846EB76DCB02B5D666D68B03FE6A0028289_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__0_0_mD2B3F30B71C794301DE7CC7DC9F4D6A4F88031DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * G_B2_0 = NULL;
	Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * G_B2_1 = NULL;
	Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * G_B1_0 = NULL;
	Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * G_B1_1 = NULL;
	{
		// Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
		//     FirebaseAnalytics.SetAnalyticsCollectionEnabled(true);
		//     DatabaseReference reference = FirebaseDatabase.DefaultInstance.RootReference;
		// });
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * L_0;
		L_0 = FirebaseApp_CheckAndFixDependenciesAsync_m268BF2FC002D4D4CC247EF2636CDF7EBFF043009(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_il2cpp_TypeInfo_var);
		Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * L_1 = ((U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_il2cpp_TypeInfo_var);
		U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB * L_3 = ((U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * L_4 = (Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 *)il2cpp_codegen_object_new(Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0_il2cpp_TypeInfo_var);
		Action_1__ctor_m9FCBC7F226B662953885B20040A51C363F1B2643(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__0_0_mD2B3F30B71C794301DE7CC7DC9F4D6A4F88031DF_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9FCBC7F226B662953885B20040A51C363F1B2643_RuntimeMethod_var);
		Action_1_t4D7EABC942ABB727E7FAC31F66ED5692A413AFF0 * L_5 = L_4;
		((U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0024:
	{
		NullCheck(G_B2_1);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6;
		L_6 = Task_1_ContinueWith_mF8709846EB76DCB02B5D666D68B03FE6A0028289(G_B2_1, G_B2_0, /*hidden argument*/Task_1_ContinueWith_mF8709846EB76DCB02B5D666D68B03FE6A0028289_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FireBaseInit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireBaseInit__ctor_mE292D130312957AF791950A1EA9A60B7688FF0F1 (FireBaseInit_t2D0CD2585037CBB93BF957F7ED128FBB6D038179 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FixedJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedJoystick__ctor_mC4A98EB3129E3091007AD83B5B93672E7E9151B6 (FixedJoystick_tDB74F76D3F9FBD9C43F508B2F306958915E6F5B2 * __this, const RuntimeMethod* method)
{
	{
		Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08(__this, /*hidden argument*/NULL);
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
// System.Void FloatingJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_Start_m290C93EC665E6DB28F837EE06CA2606EBA99C016 (FloatingJoystick_tC4079BB6845C914906FF088E283633AFA9C93607 * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275(__this, /*hidden argument*/NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_m8C00303A73289775A64DC879CCC9182B5BC849C5 (FloatingJoystick_tC4079BB6845C914906FF088E283633AFA9C93607 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = ___eventData0;
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mAD769BA610FABC0D9C47294736AB0832C558D3FD(__this, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_0, L_3, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_6 = ___eventData0;
		Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m26F0DEE158E1947EE053FE21B01ADA413FF3D4A2 (FloatingJoystick_tC4079BB6845C914906FF088E283633AFA9C93607 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_mA6F4B5F4A0C881759BFAD91256D5BE5E90399F8F (FloatingJoystick_tC4079BB6845C914906FF088E283633AFA9C93607 * __this, const RuntimeMethod* method)
{
	{
		Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08(__this, /*hidden argument*/NULL);
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
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m1AE640531EE5E28A63A8D5AC757F9753DDA56321 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		bool L_0 = __this->get_snapX_7();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_input_14();
		float L_2 = L_1->get_x_0();
		return L_2;
	}

IL_0014:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_input_14();
		float L_4 = L_3->get_x_0();
		float L_5;
		L_5 = Joystick_SnapFloat_m0A47278C9A57AC4A6696C0C13450F8F404580C19(__this, L_4, 1, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_m56B4D1C75DABA23923EF2E9C20543858E90D23C2 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		bool L_0 = __this->get_snapY_8();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_input_14();
		float L_2 = L_1->get_y_1();
		return L_2;
	}

IL_0014:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_3 = __this->get_address_of_input_14();
		float L_4 = L_3->get_y_1();
		float L_5;
		L_5 = Joystick_SnapFloat_m0A47278C9A57AC4A6696C0C13450F8F404580C19(__this, L_4, 2, /*hidden argument*/NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Joystick_get_Direction_mF002E7B698C393FF866864D4A552357C535D36C5 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		float L_0;
		L_0 = Joystick_get_Horizontal_m1AE640531EE5E28A63A8D5AC757F9753DDA56321(__this, /*hidden argument*/NULL);
		float L_1;
		L_1 = Joystick_get_Vertical_m56B4D1C75DABA23923EF2E9C20543858E90D23C2(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_mF0843B8C3E187FB08DD7EFF63F4AA4E9D30F4C99 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// get { return handleRange; }
		float L_0 = __this->get_handleRange_4();
		return L_0;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m7C2C550DE23BA7D39DD2015EFAC0DBB53087E0DD (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { handleRange = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->set_handleRange_4(L_1);
		// set { handleRange = Mathf.Abs(value); }
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_m9CFD309045AF6FC6F40430F2E84B04AF644A7355 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// get { return deadZone; }
		float L_0 = __this->get_deadZone_5();
		return L_0;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_m9A107FE7A8EF41E9FBEB6979B1B17FD79C3F127C (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { deadZone = Mathf.Abs(value); }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->set_deadZone_5(L_1);
		// set { deadZone = Mathf.Abs(value); }
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_m3098305D1A5F1F48444A1ADAEC7BD46E980E274B (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0;
		L_0 = Joystick_get_AxisOptions_m3098305D1A5F1F48444A1ADAEC7BD46E980E274B(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m671D494CBF07962B24BF4024059715FA650BB9EF (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->set_axisOptions_6(L_0);
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_mE645B0DB8C99081261ED3DF264B9AB41E92769E6 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = __this->get_snapX_7();
		return L_0;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_m710022BEA478442D17908F10F5BA53375705AC3B (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->set_snapX_7(L_0);
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_mF8086B253937812A6BF0BA6D0818313899CBA564 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = __this->get_snapY_8();
		return L_0;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_mAD4C6843FD698B99D23F21C3A15D9CE928289508 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->set_snapY_8(L_0);
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandleRange = handleRange;
		float L_0 = __this->get_handleRange_4();
		Joystick_set_HandleRange_m7C2C550DE23BA7D39DD2015EFAC0DBB53087E0DD(__this, L_0, /*hidden argument*/NULL);
		// DeadZone = deadZone;
		float L_1 = __this->get_deadZone_5();
		Joystick_set_DeadZone_m9A107FE7A8EF41E9FBEB6979B1B17FD79C3F127C(__this, L_1, /*hidden argument*/NULL);
		// baseRect = GetComponent<RectTransform>();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2;
		L_2 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		__this->set_baseRect_11(L_2);
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5(__this, /*hidden argument*/Component_GetComponentInParent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_m79D616348A09F5E2973F405F4F9D944744FAD6A5_RuntimeMethod_var);
		__this->set_canvas_12(L_3);
		// if (canvas == null)
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_4 = __this->get_canvas_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError("The Joystick is not placed inside a canvas");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// Vector2 center = new Vector2(0.5f, 0.5f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), (0.5f), (0.5f), /*hidden argument*/NULL);
		// background.pivot = center;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = __this->get_background_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		NullCheck(L_6);
		RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335(L_6, L_7, /*hidden argument*/NULL);
		// handle.anchorMin = center;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = __this->get_handle_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		NullCheck(L_8);
		RectTransform_set_anchorMin_mD9E6E95890B701A5190C12F5AE42E622246AF798(L_8, L_9, /*hidden argument*/NULL);
		// handle.anchorMax = center;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = __this->get_handle_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		NullCheck(L_10);
		RectTransform_set_anchorMax_m67E04F54B5122804E32019D5FAE50C21CC67651D(L_10, L_11, /*hidden argument*/NULL);
		// handle.pivot = center;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_12 = __this->get_handle_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		NullCheck(L_12);
		RectTransform_set_pivot_m94F32EF88DC4EC9CA96721F8EDD8BFBC4FD07335(L_12, L_13, /*hidden argument*/NULL);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_14 = __this->get_handle_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_14, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// OnDrag(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		Joystick_OnDrag_m1127276AFCEF63DE869AC5156DE7712810B6C46D(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m1127276AFCEF63DE869AC5156DE7712810B6C46D (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// cam = null;
		__this->set_cam_13((Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)NULL);
		// if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get_canvas_12();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// cam = canvas.worldCamera;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_2 = __this->get_canvas_12();
		NullCheck(L_2);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3;
		L_3 = Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51(L_2, /*hidden argument*/NULL);
		__this->set_cam_13(L_3);
	}

IL_0026:
	{
		// Vector2 position = RectTransformUtility.WorldToScreenPoint(cam, background.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_cam_13();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = __this->get_background_9();
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = RectTransformUtility_WorldToScreenPoint_m92E801861EE14D73219C34A6175847C4A46105E1(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Vector2 radius = background.sizeDelta / 2;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_8 = __this->get_background_9();
		NullCheck(L_8);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_8, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_9, (2.0f), /*hidden argument*/NULL);
		V_1 = L_10;
		// input = (eventData.position - position) / (radius * canvas.scaleFactor);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_11 = ___eventData0;
		NullCheck(L_11);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_11, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_12, L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_1;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_16 = __this->get_canvas_12();
		NullCheck(L_16);
		float L_17;
		L_17 = Canvas_get_scaleFactor_m3F0D7E3B97B0493F4E98B2BBCA7A57BC1E1CB710(L_16, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_15, L_17, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Division_m63A593A281BC0B6C36FCFF399056E1DE9F4C01E0_inline(L_14, L_18, /*hidden argument*/NULL);
		__this->set_input_14(L_19);
		// FormatInput();
		Joystick_FormatInput_m6EAB109EE0C7D5EB1389E2277AD72335EF140826(__this, /*hidden argument*/NULL);
		// HandleInput(input.magnitude, input.normalized, radius, cam);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_20 = __this->get_address_of_input_14();
		float L_21;
		L_21 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of_input_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_get_normalized_m1F7F7AA3B7AC2414F245395C3785880B847BF7F5((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_22, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24 = V_1;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_25 = __this->get_cam_13();
		VirtActionInvoker4< float, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 , Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_21, L_23, L_24, L_25);
		// handle.anchoredPosition = input * radius * handleRange;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_26 = __this->get_handle_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27 = __this->get_input_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29;
		L_29 = Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline(L_27, L_28, /*hidden argument*/NULL);
		float L_30 = __this->get_handleRange_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_26, L_31, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m38CE2907CF406D1F4B327F197E0CCED1C6DD8CC7 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___magnitude0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalised1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius2, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam3, const RuntimeMethod* method)
{
	{
		// if (magnitude > deadZone)
		float L_0 = ___magnitude0;
		float L_1 = __this->get_deadZone_5();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		// if (magnitude > 1)
		float L_2 = ___magnitude0;
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// input = normalised;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___normalised1;
		__this->set_input_14(L_3);
		// }
		return;
	}

IL_0019:
	{
		// input = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_input_14(L_4);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_m6EAB109EE0C7D5EB1389E2277AD72335EF140826 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// if (axisOptions == AxisOptions.Horizontal)
		int32_t L_0 = __this->get_axisOptions_6();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// input = new Vector2(input.x, 0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_input_14();
		float L_2 = L_1->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->set_input_14(L_3);
		return;
	}

IL_0025:
	{
		// else if (axisOptions == AxisOptions.Vertical)
		int32_t L_4 = __this->get_axisOptions_6();
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0049;
		}
	}
	{
		// input = new Vector2(0f, input.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_5 = __this->get_address_of_input_14();
		float L_6 = L_5->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->set_input_14(L_7);
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_m0A47278C9A57AC4A6696C0C13450F8F404580C19 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, float ___value0, int32_t ___snapAxis1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (value == 0)
		float L_0 = ___value0;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		// return value;
		float L_1 = ___value0;
		return L_1;
	}

IL_000a:
	{
		// if (axisOptions == AxisOptions.Both)
		int32_t L_2 = __this->get_axisOptions_6();
		if (L_2)
		{
			goto IL_0075;
		}
	}
	{
		// float angle = Vector2.Angle(input, Vector2.up);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_input_14();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_5;
		L_5 = Vector2_Angle_mEAAD1B809A8CF1CC22C54EF2ADC702B11DA704A9_inline(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// if (snapAxis == AxisOptions.Horizontal)
		int32_t L_6 = ___snapAxis1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// if (angle < 22.5f || angle > 157.5f)
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(22.5f))))
		{
			goto IL_0037;
		}
	}
	{
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(157.5f)))))
		{
			goto IL_003d;
		}
	}

IL_0037:
	{
		// return 0;
		return (0.0f);
	}

IL_003d:
	{
		// return (value > 0) ? 1 : -1;
		float L_9 = ___value0;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0048;
		}
	}
	{
		G_B10_0 = (-1);
		goto IL_0049;
	}

IL_0048:
	{
		G_B10_0 = 1;
	}

IL_0049:
	{
		return ((float)((float)G_B10_0));
	}

IL_004b:
	{
		// else if (snapAxis == AxisOptions.Vertical)
		int32_t L_10 = ___snapAxis1;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// if (angle > 67.5f && angle < 112.5f)
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(67.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		float L_12 = V_0;
		if ((!(((float)L_12) < ((float)(112.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0065:
	{
		// return (value > 0) ? 1 : -1;
		float L_13 = ___value0;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B18_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B18_0 = 1;
	}

IL_0071:
	{
		return ((float)((float)G_B18_0));
	}

IL_0073:
	{
		// return value;
		float L_14 = ___value0;
		return L_14;
	}

IL_0075:
	{
		// if (value > 0)
		float L_15 = ___value0;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_0083:
	{
		// if (value < 0)
		float L_16 = ___value0;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// return -1;
		return (-1.0f);
	}

IL_0091:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// input = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_input_14(L_0);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_handle_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Joystick_ScreenPointToAnchoredPosition_mAD769BA610FABC0D9C47294736AB0832C558D3FD (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 localPoint = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(baseRect, screenPosition, cam, out localPoint))
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = __this->get_baseRect_11();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___screenPosition0;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_3 = __this->get_cam_13();
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t829C94C0D38759683C2BED9FCE244D5EA9842396_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m9A7DB8DE3636CE91CDF6CE088A21B5DDF2678F03(L_1, L_2, L_3, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		// Vector2 pivotOffset = baseRect.pivot * baseRect.sizeDelta;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = __this->get_baseRect_11();
		NullCheck(L_5);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = RectTransform_get_pivot_m146F0BB5D3873FCEF3606DAFB8994BFA978095EE(L_5, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get_baseRect_11();
		NullCheck(L_7);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_7, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline(L_6, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// return localPoint - (background.anchorMax * baseRect.sizeDelta) + pivotOffset;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_11 = __this->get_background_9();
		NullCheck(L_11);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = RectTransform_get_anchorMax_mC1577047A20870209C9A6801B75FE6930AE56F1E(L_11, /*hidden argument*/NULL);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_13 = __this->get_baseRect_11();
		NullCheck(L_13);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = RectTransform_get_sizeDelta_mCFAE8C916280C173AB79BE32B910376E310D1C50(L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15;
		L_15 = Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline(L_12, L_14, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_10, L_15, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0060:
	{
		// return Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		return L_19;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08 (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float handleRange = 1;
		__this->set_handleRange_4((1.0f));
		// private Vector2 input = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_input_14(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void JoystickPlayerExample::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_FixedUpdate_m3D7D2B1BE8C20574423088EF0C338700444B04B2 (JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_1 = __this->get_variableJoystick_5();
		NullCheck(L_1);
		float L_2;
		L_2 = Joystick_get_Vertical_m56B4D1C75DABA23923EF2E9C20543858E90D23C2(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_0, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_5 = __this->get_variableJoystick_5();
		NullCheck(L_5);
		float L_6;
		L_6 = Joystick_get_Horizontal_m1AE640531EE5E28A63A8D5AC757F9753DDA56321(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// rb.AddForce(direction * speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9 = __this->get_rb_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_10, L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_m78B9D94F505E19F3C63461362AD6DE7EA0836700(L_9, L_14, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickPlayerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample__ctor_mEE8014E341485D43F0629DE22DB9F407E47FC49B (JoystickPlayerExample_t07673CB1C6FF2F83E4464AA7D01DE72B5DA8922B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void JoystickSetterExample::ModeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_ModeChanged_m79A8E404B1B30FAEECF0A21A55933659F664249B (JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.SetMode(JoystickType.Fixed);
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_1 = __this->get_variableJoystick_4();
		NullCheck(L_1);
		VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C(L_1, 0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0020:
	{
		// variableJoystick.SetMode(JoystickType.Floating);
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_2 = __this->get_variableJoystick_4();
		NullCheck(L_2);
		VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C(L_2, 1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_002d:
	{
		// variableJoystick.SetMode(JoystickType.Dynamic);
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_3 = __this->get_variableJoystick_4();
		NullCheck(L_3);
		VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C(L_3, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::AxisChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_AxisChanged_mE5DDF00D9E76A95282555A47E8789961A708642F (JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_0053;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.AxisOptions = AxisOptions.Both;
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_1 = __this->get_variableJoystick_4();
		NullCheck(L_1);
		Joystick_set_AxisOptions_m671D494CBF07962B24BF4024059715FA650BB9EF_inline(L_1, 0, /*hidden argument*/NULL);
		// background.sprite = axisSprites[index];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_background_6();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_3 = __this->get_axisSprites_7();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_2, L_6, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0033:
	{
		// variableJoystick.AxisOptions = AxisOptions.Horizontal;
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_7 = __this->get_variableJoystick_4();
		NullCheck(L_7);
		Joystick_set_AxisOptions_m671D494CBF07962B24BF4024059715FA650BB9EF_inline(L_7, 1, /*hidden argument*/NULL);
		// background.sprite = axisSprites[index];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = __this->get_background_6();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_9 = __this->get_axisSprites_7();
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_8, L_12, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0053:
	{
		// variableJoystick.AxisOptions = AxisOptions.Vertical;
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_13 = __this->get_variableJoystick_4();
		NullCheck(L_13);
		Joystick_set_AxisOptions_m671D494CBF07962B24BF4024059715FA650BB9EF_inline(L_13, 2, /*hidden argument*/NULL);
		// background.sprite = axisSprites[index];
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14 = __this->get_background_6();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_15 = __this->get_axisSprites_7();
		int32_t L_16 = ___index0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_14, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapX_mD9AF3A51530489B40CACB5C4CE390B7BB930D7C7 (JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// variableJoystick.SnapX = value;
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_0 = __this->get_variableJoystick_4();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapX_m710022BEA478442D17908F10F5BA53375705AC3B_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapY_m16DC4EBA6DAFCDDEF054FCF901169B33AB7B01BF (JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// variableJoystick.SnapY = value;
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_0 = __this->get_variableJoystick_4();
		bool L_1 = ___value0;
		NullCheck(L_0);
		Joystick_set_SnapY_mAD4C6843FD698B99D23F21C3A15D9CE928289508_inline(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_Update_m0DEB8289C3A0133C8FAE885C6698C6082C51E3F6 (JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// valueText.text = "Current Value: " + variableJoystick.Direction;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_valueText_5();
		VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * L_1 = __this->get_variableJoystick_4();
		NullCheck(L_1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Joystick_get_Direction_mF002E7B698C393FF866864D4A552357C535D36C5(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Vector2_ToString_mBD48EFCDB703ACCDC29E86AEB0D4D62FBA50F840((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample__ctor_m2E65CFF997EC9703B4049E1F3870FC0AB3739C84 (JoystickSetterExample_tCCF610BB8D883F911E3868499E334A258844B73F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Jugador::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jugador__ctor_mA3CB4E59167A3E1AA0342B3D65B33C7526169D49 (Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D * __this, int32_t ___ataque0, int32_t ___defensa1, int32_t ___experiencia2, int32_t ___oro3, int32_t ___velocidad4, int32_t ___vida5, const RuntimeMethod* method)
{
	{
		// public Jugador(int ataque, int defensa, int experiencia, int oro, int velocidad, int vida)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.ataque = ataque;
		int32_t L_0 = ___ataque0;
		__this->set_ataque_0(L_0);
		// this.defensa = defensa;
		int32_t L_1 = ___defensa1;
		__this->set_defensa_1(L_1);
		// this.experiencia = experiencia;
		int32_t L_2 = ___experiencia2;
		__this->set_experiencia_2(L_2);
		// this.oro = oro;
		int32_t L_3 = ___oro3;
		__this->set_oro_3(L_3);
		// this.velocidad = velocidad;
		int32_t L_4 = ___velocidad4;
		__this->set_velocidad_4(L_4);
		// this.vida = vida;
		int32_t L_5 = ___vida5;
		__this->set_vida_5(L_5);
		// }
		return;
	}
}
// System.Void Jugador::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Jugador__ctor_m52765554C1F328E6E31A5F36004E142B858EEA16 (Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D * __this, const RuntimeMethod* method)
{
	{
		// public Jugador()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
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
// System.Void MoveByTouch::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByTouch_Update_m7612138D53B75149757A49DDCC33853D30686ED9 (MoveByTouch_tFC405C8A9997545AC639989D1EB7184BCF2C6021 * __this, const RuntimeMethod* method)
{
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_1;
		L_1 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector3 touchPosition = Camera.main.ScreenToWorldPoint(touch.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_2, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// touchPosition.z = 0f;
		(&V_1)->set_z_4((0.0f));
		// transform.position = touchPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_1;
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_7, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void MoveByTouch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveByTouch__ctor_mEC3EA1D0A50BBEB9DAB919316BCC7FEFCE522F00 (MoveByTouch_tFC405C8A9997545AC639989D1EB7184BCF2C6021 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mB585552228B1908E44D3A69496598FB485F608B6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m00DD3ED646F26F8E3933FDC6EC188F7E769E1B5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerMovement_U3CStartU3Eb__19_0_mE3C5930F2766D551D1658DE389AFE223CEB9B4FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m3DFCE1FF256DDED4A965FC1B5222E464AF7A8A7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * V_0 = NULL;
	{
		// FirebaseDatabase database = FirebaseDatabase.DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_0;
		L_0 = FirebaseDatabase_get_DefaultInstance_mDBCDC6415A3C87F065EE96C415A5D205C2C2BA0E(/*hidden argument*/NULL);
		V_0 = L_0;
		// reference = database.RootReference;
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_1 = V_0;
		NullCheck(L_1);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_2;
		L_2 = FirebaseDatabase_get_RootReference_mCC8D1B92BE50EB91C76705840BDBD2EF88B6D5FC(L_1, /*hidden argument*/NULL);
		__this->set_reference_22(L_2);
		// maxLife = 5;
		__this->set_maxLife_11((5.0f));
		// currentLife = maxLife;
		float L_3 = __this->get_maxLife_11();
		__this->set_currentLife_12(L_3);
		// reference.Child("users").GetValueAsync().ContinueWith(task =>
		// {
		//     if(task.IsCompleted)
		//     {
		// 
		//         DataSnapshot snap = task.Result;
		//         foreach(DataSnapshot childSnap in snap.Children){
		//             if (childSnap.Child("juegoIniciado").Value.ToString().Equals("True")) {
		//                 ataque = int.Parse(childSnap.Child("ataque").Value.ToString());
		//                 defensa = int.Parse(childSnap.Child("defensa").Value.ToString());
		//                 experiencia = int.Parse(childSnap.Child("experiencia").Value.ToString());
		//                 oro = int.Parse(childSnap.Child("oro").Value.ToString());
		//                 velocidad = int.Parse(childSnap.Child("velocidad").Value.ToString());
		//                 vida = int.Parse(childSnap.Child("vida").Value.ToString());
		// 
		//                 username = childSnap.Key.ToString();
		// 
		//                 maxLife = (float)vida;
		//                 currentLife = maxLife;
		//                 reference.Child("users").Child(username).Child("juegoIniciado").SetValueAsync(false);
		//             }
		//         }
		//         usernameText.text = username;
		//     } else
		//     {
		//         print("Fallo la conexi�n");
		//     }
		// });
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_4 = __this->get_reference_22();
		NullCheck(L_4);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_5;
		L_5 = DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23(L_4, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, /*hidden argument*/NULL);
		NullCheck(L_5);
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_6;
		L_6 = Query_GetValueAsync_m98FE85A2E73CE53438B3AF3F1B7076C2469C25D1(L_5, /*hidden argument*/NULL);
		Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * L_7 = (Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 *)il2cpp_codegen_object_new(Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1_il2cpp_TypeInfo_var);
		Action_1__ctor_m00DD3ED646F26F8E3933FDC6EC188F7E769E1B5C(L_7, __this, (intptr_t)((intptr_t)PlayerMovement_U3CStartU3Eb__19_0_mE3C5930F2766D551D1658DE389AFE223CEB9B4FE_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m00DD3ED646F26F8E3933FDC6EC188F7E769E1B5C_RuntimeMethod_var);
		NullCheck(L_6);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
		L_8 = Task_1_ContinueWith_m3DFCE1FF256DDED4A965FC1B5222E464AF7A8A7F(L_6, L_7, /*hidden argument*/Task_1_ContinueWith_m3DFCE1FF256DDED4A965FC1B5222E464AF7A8A7F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral005F85E668EE9A80AC8B038BE44185B33D1E3235);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A52BB6DE2B25BA6342C7FAD8478E64D21F6FB01);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (joystick.Horizontal >= .2f)
		Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * L_0 = __this->get_joystick_6();
		NullCheck(L_0);
		float L_1;
		L_1 = Joystick_get_Horizontal_m1AE640531EE5E28A63A8D5AC757F9753DDA56321(L_0, /*hidden argument*/NULL);
		if ((!(((float)L_1) >= ((float)(0.200000003f)))))
		{
			goto IL_005e;
		}
	}
	{
		// transform.Translate(new Vector3(.02f, .0f) * speed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_3), (0.0199999996f), (0.0f), /*hidden argument*/NULL);
		float L_4 = __this->get_speed_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_2, L_5, /*hidden argument*/NULL);
		// animator.SetBool("moveRight", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6 = __this->get_animator_5();
		NullCheck(L_6);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_6, _stringLiteral0A52BB6DE2B25BA6342C7FAD8478E64D21F6FB01, (bool)1, /*hidden argument*/NULL);
		// animator.SetBool("moveLeft", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_animator_5();
		NullCheck(L_7);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_7, _stringLiteral005F85E668EE9A80AC8B038BE44185B33D1E3235, (bool)0, /*hidden argument*/NULL);
		// } else if (joystick.Horizontal <= -.2f)
		goto IL_00e6;
	}

IL_005e:
	{
		// } else if (joystick.Horizontal <= -.2f)
		Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * L_8 = __this->get_joystick_6();
		NullCheck(L_8);
		float L_9;
		L_9 = Joystick_get_Horizontal_m1AE640531EE5E28A63A8D5AC757F9753DDA56321(L_8, /*hidden argument*/NULL);
		if ((!(((float)L_9) <= ((float)(-0.200000003f)))))
		{
			goto IL_00b9;
		}
	}
	{
		// transform.Translate(new Vector3(-.02f, .0f) * speed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_11), (-0.0199999996f), (0.0f), /*hidden argument*/NULL);
		float L_12 = __this->get_speed_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_10, L_13, /*hidden argument*/NULL);
		// animator.SetBool("moveLeft", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_14 = __this->get_animator_5();
		NullCheck(L_14);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_14, _stringLiteral005F85E668EE9A80AC8B038BE44185B33D1E3235, (bool)1, /*hidden argument*/NULL);
		// animator.SetBool("moveRight", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_15 = __this->get_animator_5();
		NullCheck(L_15);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_15, _stringLiteral0A52BB6DE2B25BA6342C7FAD8478E64D21F6FB01, (bool)0, /*hidden argument*/NULL);
		// } else
		goto IL_00e6;
	}

IL_00b9:
	{
		// animator.SetBool("moveRight", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_16 = __this->get_animator_5();
		NullCheck(L_16);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_16, _stringLiteral0A52BB6DE2B25BA6342C7FAD8478E64D21F6FB01, (bool)0, /*hidden argument*/NULL);
		// animator.SetBool("moveLeft", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_17 = __this->get_animator_5();
		NullCheck(L_17);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_17, _stringLiteral005F85E668EE9A80AC8B038BE44185B33D1E3235, (bool)0, /*hidden argument*/NULL);
		// horizontalMove = 0f;
		__this->set_horizontalMove_7((0.0f));
	}

IL_00e6:
	{
		// Vector3 clampedPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		// clampedPosition.x = Mathf.Clamp(clampedPosition.x, -12, 12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_0;
		float L_21 = L_20.get_x_2();
		float L_22;
		L_22 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_21, (-12.0f), (12.0f), /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_22);
		// transform.position = clampedPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		NullCheck(L_23);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_23, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_OnTriggerEnter2D_mEC05BEC87379E7218259CD91E80BE607A30B6B08 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7DB32F178FC555ED4BB8C6DCB8DDC92F621CE3D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (collision.gameObject.tag == "HitBoxPlayer")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralC7DB32F178FC555ED4BB8C6DCB8DDC92F621CE3D, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		// float enemyDamage = enemy.ataque - enemy.defensa/2;
		enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * L_4 = __this->get_enemy_21();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_ataque_13();
		enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * L_6 = __this->get_enemy_21();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_defensa_14();
		V_0 = ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_7/(int32_t)2))))));
		// if(enemyDamage < 0) {
		float L_8 = V_0;
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_003d;
		}
	}
	{
		// enemyDamage = -enemyDamage;
		float L_9 = V_0;
		V_0 = ((-L_9));
	}

IL_003d:
	{
		// float auxLife = currentLife - enemyDamage;
		float L_10 = __this->get_currentLife_12();
		float L_11 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract((float)L_10, (float)L_11));
		// currentLife = auxLife;
		float L_12 = V_1;
		__this->set_currentLife_12(L_12);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_14, /*hidden argument*/NULL);
		// if (currentLife <= 0)
		float L_15 = __this->get_currentLife_12();
		if ((!(((float)L_15) <= ((float)(0.0f)))))
		{
			goto IL_0070;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_FixedUpdate_m774280268A537B6ED9D9171CEAE67E9A0C3A9499 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// usernameText.text = username;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_usernameText_20();
		String_t* L_1 = __this->get_username_19();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// controller.Move(horizontalMove * Time.fixedDeltaTime, false, false);
		CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * L_2 = __this->get_controller_4();
		float L_3 = __this->get_horizontalMove_7();
		float L_4;
		L_4 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		NullCheck(L_2);
		CharacterController2D_Move_mE541579D7B4A796A34C1E2AFF0DAD5DEADD475F9(L_2, ((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (bool)0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::attackPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_attackPlayer_m42F81368EF0621B3A5BBD8E76947246885724D15 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("attack", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_5();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::attackFalsePlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_attackFalsePlayer_mC47EAFE33A17A3A47F4C99FD56063DE4A745C3FD (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("attack", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_5();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::executeAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_executeAttack_m878DE868660DB8FCCCB11BA171E34E20E6D67DEF (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(hitBox, hitBoxPosition.position, hitBoxPosition.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_hitBox_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_hitBoxPosition_10();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_hitBoxPosition_10();
		NullCheck(L_3);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::<Start>b__19_0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_U3CStartU3Eb__19_0_mE3C5930F2766D551D1658DE389AFE223CEB9B4FE (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA006192EAB3FEE2322641ABA9898F581A7C342AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t30CC244D1ACDD6D8E76AF1A6514B34C499405146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m340C568FCD117E23EF7552E372CDFA3187A1DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E606DDDBFD17795C7C744A284307DD8441C9E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B474947756CB58A0E67C9E6C58B18E4F7BEC7F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B597551BD01532895566AC109649B585C9C54F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB038375EFF9FC7F97C85D1F3701DEC1DD62D6714);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCF6F9607942EDB2056D1A284FE13A1DF5F876EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB74E0B8DD615D735984DC659AF75FDD3A2AD45F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9BC8412F7672BEDC75EB21FA08240175E04E871);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF25CB3BDB1130C60AFF878D56241A030982C1F63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4CCC829B303A0016C291095865F2175C0C0A865);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if(task.IsCompleted)
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0190;
		}
	}
	{
		// DataSnapshot snap = task.Result;
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_2 = ___task0;
		NullCheck(L_2);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_3;
		L_3 = Task_1_get_Result_m340C568FCD117E23EF7552E372CDFA3187A1DA3E(L_2, /*hidden argument*/Task_1_get_Result_m340C568FCD117E23EF7552E372CDFA3187A1DA3E_RuntimeMethod_var);
		// foreach(DataSnapshot childSnap in snap.Children){
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = DataSnapshot_get_Children_m2E3B643ECF42F6F08D38F2666E81E89F797489CC(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>::GetEnumerator() */, IEnumerable_1_tA006192EAB3FEE2322641ABA9898F581A7C342AF_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0167;
		}

IL_0021:
		{
			// foreach(DataSnapshot childSnap in snap.Children){
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_7;
			L_7 = InterfaceFuncInvoker0< DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>::get_Current() */, IEnumerator_1_t30CC244D1ACDD6D8E76AF1A6514B34C499405146_il2cpp_TypeInfo_var, L_6);
			V_1 = L_7;
			// if (childSnap.Child("juegoIniciado").Value.ToString().Equals("True")) {
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_8 = V_1;
			NullCheck(L_8);
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_9;
			L_9 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_8, _stringLiteralB038375EFF9FC7F97C85D1F3701DEC1DD62D6714, /*hidden argument*/NULL);
			NullCheck(L_9);
			RuntimeObject * L_10;
			L_10 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			String_t* L_11;
			L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
			NullCheck(L_11);
			bool L_12;
			L_12 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_11, _stringLiteralE9BC8412F7672BEDC75EB21FA08240175E04E871, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0167;
			}
		}

IL_004c:
		{
			// ataque = int.Parse(childSnap.Child("ataque").Value.ToString());
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_13 = V_1;
			NullCheck(L_13);
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_14;
			L_14 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_13, _stringLiteralF4CCC829B303A0016C291095865F2175C0C0A865, /*hidden argument*/NULL);
			NullCheck(L_14);
			RuntimeObject * L_15;
			L_15 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_14, /*hidden argument*/NULL);
			NullCheck(L_15);
			String_t* L_16;
			L_16 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
			int32_t L_17;
			L_17 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_16, /*hidden argument*/NULL);
			__this->set_ataque_13(L_17);
			// defensa = int.Parse(childSnap.Child("defensa").Value.ToString());
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_18 = V_1;
			NullCheck(L_18);
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_19;
			L_19 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_18, _stringLiteral12E606DDDBFD17795C7C744A284307DD8441C9E4, /*hidden argument*/NULL);
			NullCheck(L_19);
			RuntimeObject * L_20;
			L_20 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			String_t* L_21;
			L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
			int32_t L_22;
			L_22 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_21, /*hidden argument*/NULL);
			__this->set_defensa_14(L_22);
			// experiencia = int.Parse(childSnap.Child("experiencia").Value.ToString());
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_23 = V_1;
			NullCheck(L_23);
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_24;
			L_24 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_23, _stringLiteralF25CB3BDB1130C60AFF878D56241A030982C1F63, /*hidden argument*/NULL);
			NullCheck(L_24);
			RuntimeObject * L_25;
			L_25 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_24, /*hidden argument*/NULL);
			NullCheck(L_25);
			String_t* L_26;
			L_26 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
			int32_t L_27;
			L_27 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_26, /*hidden argument*/NULL);
			__this->set_experiencia_15(L_27);
			// oro = int.Parse(childSnap.Child("oro").Value.ToString());
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_28 = V_1;
			NullCheck(L_28);
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_29;
			L_29 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_28, _stringLiteralBCF6F9607942EDB2056D1A284FE13A1DF5F876EF, /*hidden argument*/NULL);
			NullCheck(L_29);
			RuntimeObject * L_30;
			L_30 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_29, /*hidden argument*/NULL);
			NullCheck(L_30);
			String_t* L_31;
			L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
			int32_t L_32;
			L_32 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_31, /*hidden argument*/NULL);
			__this->set_oro_16(L_32);
			// velocidad = int.Parse(childSnap.Child("velocidad").Value.ToString());
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_33 = V_1;
			NullCheck(L_33);
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_34;
			L_34 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_33, _stringLiteral9B597551BD01532895566AC109649B585C9C54F6, /*hidden argument*/NULL);
			NullCheck(L_34);
			RuntimeObject * L_35;
			L_35 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_34, /*hidden argument*/NULL);
			NullCheck(L_35);
			String_t* L_36;
			L_36 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
			int32_t L_37;
			L_37 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_36, /*hidden argument*/NULL);
			__this->set_velocidad_17(L_37);
			// vida = int.Parse(childSnap.Child("vida").Value.ToString());
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_38 = V_1;
			NullCheck(L_38);
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_39;
			L_39 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_38, _stringLiteral3B474947756CB58A0E67C9E6C58B18E4F7BEC7F8, /*hidden argument*/NULL);
			NullCheck(L_39);
			RuntimeObject * L_40;
			L_40 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_39, /*hidden argument*/NULL);
			NullCheck(L_40);
			String_t* L_41;
			L_41 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
			int32_t L_42;
			L_42 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_41, /*hidden argument*/NULL);
			__this->set_vida_18(L_42);
			// username = childSnap.Key.ToString();
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_43 = V_1;
			NullCheck(L_43);
			String_t* L_44;
			L_44 = DataSnapshot_get_Key_m3D591B0FB8ABFAC8E876D00D74E1E20CFA1EC4CA(L_43, /*hidden argument*/NULL);
			NullCheck(L_44);
			String_t* L_45;
			L_45 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
			__this->set_username_19(L_45);
			// maxLife = (float)vida;
			int32_t L_46 = __this->get_vida_18();
			__this->set_maxLife_11(((float)((float)L_46)));
			// currentLife = maxLife;
			float L_47 = __this->get_maxLife_11();
			__this->set_currentLife_12(L_47);
			// reference.Child("users").Child(username).Child("juegoIniciado").SetValueAsync(false);
			DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_48 = __this->get_reference_22();
			NullCheck(L_48);
			DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_49;
			L_49 = DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23(L_48, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, /*hidden argument*/NULL);
			String_t* L_50 = __this->get_username_19();
			NullCheck(L_49);
			DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_51;
			L_51 = DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23(L_49, L_50, /*hidden argument*/NULL);
			NullCheck(L_51);
			DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_52;
			L_52 = DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23(L_51, _stringLiteralB038375EFF9FC7F97C85D1F3701DEC1DD62D6714, /*hidden argument*/NULL);
			bool L_53 = ((bool)0);
			RuntimeObject * L_54 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_53);
			NullCheck(L_52);
			Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_55;
			L_55 = DatabaseReference_SetValueAsync_m45554810BB0842F054C39C8B5A8FAA40176650E0(L_52, L_54, /*hidden argument*/NULL);
		}

IL_0167:
		{
			// foreach(DataSnapshot childSnap in snap.Children){
			RuntimeObject* L_56 = V_0;
			NullCheck(L_56);
			bool L_57;
			L_57 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_56);
			if (L_57)
			{
				goto IL_0021;
			}
		}

IL_0172:
		{
			IL2CPP_LEAVE(0x17E, FINALLY_0174);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0174;
	}

FINALLY_0174:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_58 = V_0;
			if (!L_58)
			{
				goto IL_017d;
			}
		}

IL_0177:
		{
			RuntimeObject* L_59 = V_0;
			NullCheck(L_59);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_59);
		}

IL_017d:
		{
			IL2CPP_END_FINALLY(372)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(372)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17E, IL_017e)
	}

IL_017e:
	{
		// usernameText.text = username;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_60 = __this->get_usernameText_20();
		String_t* L_61 = __this->get_username_19();
		NullCheck(L_60);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_60, L_61);
		// } else
		return;
	}

IL_0190:
	{
		// print("Fallo la conexi�n");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteralCB74E0B8DD615D735984DC659AF75FDD3A2AD45F, /*hidden argument*/NULL);
		// });
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
// System.Void PluginWrapper::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginWrapper_Start_m47DAFF329DC1923E1E6283DE426CBACFECCFC109 (PluginWrapper_t31A364B345CC609AACD99478DFAB5373021D6AB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53F2A840261F2148469A28764B1BB38A97D05D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD71592080F8FA14646D602F0C91D607CE6AFA79D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// javaClass = new AndroidJavaObject("paquete.nombre de la clase");
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0;
		L_0 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_1 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m6146DBD19BCFFDB3D4F42C8D38491F354B58B001(L_1, _stringLiteralD71592080F8FA14646D602F0C91D607CE6AFA79D, L_0, /*hidden argument*/NULL);
		__this->set_javaClass_4(L_1);
		// playerID = javaClass.Call<int>("funcion");
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_2 = __this->get_javaClass_4();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_4;
		L_4 = AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A(L_2, _stringLiteral53F2A840261F2148469A28764B1BB38A97D05D62, L_3, /*hidden argument*/AndroidJavaObject_Call_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m02A4D4C9FD8B15173829454766683BA424408A2A_RuntimeMethod_var);
		__this->set_playerID_5(L_4);
		// }
		return;
	}
}
// System.Void PluginWrapper::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginWrapper_Update_m3045A278BAE2F72111BEA3602ADD28986FE12D36 (PluginWrapper_t31A364B345CC609AACD99478DFAB5373021D6AB8 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PluginWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginWrapper__ctor_m2DCDE4C161F0D699B584BDFE2BA1B1F528853304 (PluginWrapper_t31A364B345CC609AACD99478DFAB5373021D6AB8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SceneChange::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange_Start_m66764F22E3191E068983473035BF6E9B270A9BB7 (SceneChange_t5358F7FEF1F1747A7DA8CA0D50F436D8DEFF92F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m00DD3ED646F26F8E3933FDC6EC188F7E769E1B5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneChange_U3CStartU3Eb__1_0_mB6A8F2AD2F56BCEED8E2B30AEB764AA494437FC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m3DFCE1FF256DDED4A965FC1B5222E464AF7A8A7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE84F93B86226579ADEF1FC23002651CE15E040B);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * V_0 = NULL;
	{
		// FirebaseDatabase database = FirebaseDatabase.DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_0;
		L_0 = FirebaseDatabase_get_DefaultInstance_mDBCDC6415A3C87F065EE96C415A5D205C2C2BA0E(/*hidden argument*/NULL);
		V_0 = L_0;
		// reference = database.RootReference;
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_1 = V_0;
		NullCheck(L_1);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_2;
		L_2 = FirebaseDatabase_get_RootReference_mCC8D1B92BE50EB91C76705840BDBD2EF88B6D5FC(L_1, /*hidden argument*/NULL);
		__this->set_reference_4(L_2);
		// reference.Child("users").Child("pepito").GetValueAsync().ContinueWith(task =>
		// {
		//     if (task.IsCompleted)
		//     {
		//         DataSnapshot snap = task.Result;
		//         Jugador retPlay = new Jugador((int)snap.Child("ataque").Value, (int)snap.Child("defensa").Value, (int)snap.Child("experiencia").Value, (int)snap.Child("oro").Value, (int)snap.Child("velocidad").Value, (int)snap.Child("vida").Value);
		//         print(snap.Child("vida").Value);
		//         LoadScene("SampleScene");
		//     }
		// });
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_3 = __this->get_reference_4();
		NullCheck(L_3);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_4;
		L_4 = DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23(L_3, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, /*hidden argument*/NULL);
		NullCheck(L_4);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_5;
		L_5 = DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23(L_4, _stringLiteralFE84F93B86226579ADEF1FC23002651CE15E040B, /*hidden argument*/NULL);
		NullCheck(L_5);
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_6;
		L_6 = Query_GetValueAsync_m98FE85A2E73CE53438B3AF3F1B7076C2469C25D1(L_5, /*hidden argument*/NULL);
		Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 * L_7 = (Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1 *)il2cpp_codegen_object_new(Action_1_tE70E1026D03560440B5C37EEACFD6553321C07B1_il2cpp_TypeInfo_var);
		Action_1__ctor_m00DD3ED646F26F8E3933FDC6EC188F7E769E1B5C(L_7, __this, (intptr_t)((intptr_t)SceneChange_U3CStartU3Eb__1_0_mB6A8F2AD2F56BCEED8E2B30AEB764AA494437FC3_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m00DD3ED646F26F8E3933FDC6EC188F7E769E1B5C_RuntimeMethod_var);
		NullCheck(L_6);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_8;
		L_8 = Task_1_ContinueWith_m3DFCE1FF256DDED4A965FC1B5222E464AF7A8A7F(L_6, L_7, /*hidden argument*/Task_1_ContinueWith_m3DFCE1FF256DDED4A965FC1B5222E464AF7A8A7F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void SceneChange::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange_LoadScene_m7A669C91F7D05C40E47FD07274269CFFE6B7F4AA (SceneChange_t5358F7FEF1F1747A7DA8CA0D50F436D8DEFF92F3 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = ___sceneName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneChange::exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange_exit_mF4F80162917599FCA1AB80D4D80FB3A4C090FAD5 (SceneChange_t5358F7FEF1F1747A7DA8CA0D50F436D8DEFF92F3 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange__ctor_mD18007CC3972FD36C1184F6394E968072FB82858 (SceneChange_t5358F7FEF1F1747A7DA8CA0D50F436D8DEFF92F3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneChange::<Start>b__1_0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneChange_U3CStartU3Eb__1_0_mB6A8F2AD2F56BCEED8E2B30AEB764AA494437FC3 (SceneChange_t5358F7FEF1F1747A7DA8CA0D50F436D8DEFF92F3 * __this, Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m340C568FCD117E23EF7552E372CDFA3187A1DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E606DDDBFD17795C7C744A284307DD8441C9E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B474947756CB58A0E67C9E6C58B18E4F7BEC7F8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B597551BD01532895566AC109649B585C9C54F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCF6F9607942EDB2056D1A284FE13A1DF5F876EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF25CB3BDB1130C60AFF878D56241A030982C1F63);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4CCC829B303A0016C291095865F2175C0C0A865);
		s_Il2CppMethodInitialized = true;
	}
	DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * V_0 = NULL;
	{
		// if (task.IsCompleted)
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00b6;
		}
	}
	{
		// DataSnapshot snap = task.Result;
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_2 = ___task0;
		NullCheck(L_2);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_3;
		L_3 = Task_1_get_Result_m340C568FCD117E23EF7552E372CDFA3187A1DA3E(L_2, /*hidden argument*/Task_1_get_Result_m340C568FCD117E23EF7552E372CDFA3187A1DA3E_RuntimeMethod_var);
		V_0 = L_3;
		// Jugador retPlay = new Jugador((int)snap.Child("ataque").Value, (int)snap.Child("defensa").Value, (int)snap.Child("experiencia").Value, (int)snap.Child("oro").Value, (int)snap.Child("velocidad").Value, (int)snap.Child("vida").Value);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_4 = V_0;
		NullCheck(L_4);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_5;
		L_5 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_4, _stringLiteralF4CCC829B303A0016C291095865F2175C0C0A865, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject * L_6;
		L_6 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_5, /*hidden argument*/NULL);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_7 = V_0;
		NullCheck(L_7);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_8;
		L_8 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_7, _stringLiteral12E606DDDBFD17795C7C744A284307DD8441C9E4, /*hidden argument*/NULL);
		NullCheck(L_8);
		RuntimeObject * L_9;
		L_9 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_8, /*hidden argument*/NULL);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_10 = V_0;
		NullCheck(L_10);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_11;
		L_11 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_10, _stringLiteralF25CB3BDB1130C60AFF878D56241A030982C1F63, /*hidden argument*/NULL);
		NullCheck(L_11);
		RuntimeObject * L_12;
		L_12 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_11, /*hidden argument*/NULL);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_13 = V_0;
		NullCheck(L_13);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_14;
		L_14 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_13, _stringLiteralBCF6F9607942EDB2056D1A284FE13A1DF5F876EF, /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject * L_15;
		L_15 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_14, /*hidden argument*/NULL);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_16 = V_0;
		NullCheck(L_16);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_17;
		L_17 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_16, _stringLiteral9B597551BD01532895566AC109649B585C9C54F6, /*hidden argument*/NULL);
		NullCheck(L_17);
		RuntimeObject * L_18;
		L_18 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_17, /*hidden argument*/NULL);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_19 = V_0;
		NullCheck(L_19);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_20;
		L_20 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_19, _stringLiteral3B474947756CB58A0E67C9E6C58B18E4F7BEC7F8, /*hidden argument*/NULL);
		NullCheck(L_20);
		RuntimeObject * L_21;
		L_21 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_20, /*hidden argument*/NULL);
		Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D * L_22 = (Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D *)il2cpp_codegen_object_new(Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D_il2cpp_TypeInfo_var);
		Jugador__ctor_mA3CB4E59167A3E1AA0342B3D65B33C7526169D49(L_22, ((*(int32_t*)((int32_t*)UnBox(L_6, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), ((*(int32_t*)((int32_t*)UnBox(L_9, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), ((*(int32_t*)((int32_t*)UnBox(L_12, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), ((*(int32_t*)((int32_t*)UnBox(L_15, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), ((*(int32_t*)((int32_t*)UnBox(L_18, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), ((*(int32_t*)((int32_t*)UnBox(L_21, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		// print(snap.Child("vida").Value);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_23 = V_0;
		NullCheck(L_23);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_24;
		L_24 = DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E(L_23, _stringLiteral3B474947756CB58A0E67C9E6C58B18E4F7BEC7F8, /*hidden argument*/NULL);
		NullCheck(L_24);
		RuntimeObject * L_25;
		L_25 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(L_24, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_25, /*hidden argument*/NULL);
		// LoadScene("SampleScene");
		SceneChange_LoadScene_m7A669C91F7D05C40E47FD07274269CFFE6B7F4AA(__this, _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		// });
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
// System.Void UIHealthBarEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthBarEnemy_Start_m4E29E4ABEC564F5FC2B89BB42EDAA8C8035AB1D0 (UIHealthBarEnemy_tD4403BCAD245F0CBF51972B6EDC8AD859354DAA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * V_0 = NULL;
	{
		// FirebaseDatabase database = FirebaseDatabase.DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_0;
		L_0 = FirebaseDatabase_get_DefaultInstance_mDBCDC6415A3C87F065EE96C415A5D205C2C2BA0E(/*hidden argument*/NULL);
		V_0 = L_0;
		// reference = database.RootReference;
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_1 = V_0;
		NullCheck(L_1);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_2;
		L_2 = FirebaseDatabase_get_RootReference_mCC8D1B92BE50EB91C76705840BDBD2EF88B6D5FC(L_1, /*hidden argument*/NULL);
		__this->set_reference_7(L_2);
		// }
		return;
	}
}
// System.Void UIHealthBarEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthBarEnemy_Update_m0E27D49B846A646656503A36AA71D1F3051F889F (UIHealthBarEnemy_tD4403BCAD245F0CBF51972B6EDC8AD859354DAA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateU3Eb__6_0_m13D8FA934D844A87D564137569C3C05C6DE59C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE3FC5D7F457D3D9D03005D368AD3E13802364B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7D7133A70256945FB5F818D0C0042FE97CA63B5);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * G_B3_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B3_1 = NULL;
	Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * G_B2_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B2_1 = NULL;
	{
		// healthbar.fillAmount = enemy.currentLife / enemy.maxLife;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_healthbar_4();
		enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * L_1 = __this->get_enemy_5();
		NullCheck(L_1);
		float L_2 = L_1->get_currentLife_12();
		enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * L_3 = __this->get_enemy_5();
		NullCheck(L_3);
		float L_4 = L_3->get_maxLife_11();
		NullCheck(L_0);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_0, ((float)((float)L_2/(float)L_4)), /*hidden argument*/NULL);
		// if (enemy.currentLife <= 0)
		enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * L_5 = __this->get_enemy_5();
		NullCheck(L_5);
		float L_6 = L_5->get_currentLife_12();
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_009e;
		}
	}
	{
		// winText.text = "YOU WIN";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_winText_6();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteralF7D7133A70256945FB5F818D0C0042FE97CA63B5);
		// reference.Child("users").Child(username.text).Child("ultimaBatalla").SetValueAsync(true).ContinueWith(task =>
		// {
		//     if (task.IsCompleted)
		//     {
		//         Application.Quit();
		//     }
		// });
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_8 = __this->get_reference_7();
		NullCheck(L_8);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_9;
		L_9 = DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23(L_8, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_username_8();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		NullCheck(L_9);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_12;
		L_12 = DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23(L_9, L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_13;
		L_13 = DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23(L_12, _stringLiteral2EE3FC5D7F457D3D9D03005D368AD3E13802364B, /*hidden argument*/NULL);
		bool L_14 = ((bool)1);
		RuntimeObject * L_15 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_13);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_16;
		L_16 = DatabaseReference_SetValueAsync_m45554810BB0842F054C39C8B5A8FAA40176650E0(L_13, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_il2cpp_TypeInfo_var);
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_17 = ((U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_il2cpp_TypeInfo_var))->get_U3CU3E9__6_0_1();
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_18 = L_17;
		G_B2_0 = L_18;
		G_B2_1 = L_16;
		if (L_18)
		{
			G_B3_0 = L_18;
			G_B3_1 = L_16;
			goto IL_0098;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_il2cpp_TypeInfo_var);
		U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E * L_19 = ((U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_20 = (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 *)il2cpp_codegen_object_new(Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var);
		Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C(L_20, L_19, (intptr_t)((intptr_t)U3CU3Ec_U3CUpdateU3Eb__6_0_m13D8FA934D844A87D564137569C3C05C6DE59C97_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var);
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_21 = L_20;
		((U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_il2cpp_TypeInfo_var))->set_U3CU3E9__6_0_1(L_21);
		G_B3_0 = L_21;
		G_B3_1 = G_B2_1;
	}

IL_0098:
	{
		NullCheck(G_B3_1);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_22;
		L_22 = Task_ContinueWith_m8540E40049DA1A53066538EBEBC69DE46859748F(G_B3_1, G_B3_0, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void UIHealthBarEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthBarEnemy__ctor_m0DB441FB72C30F9A5C1A65E5B15C1CDB86094FB2 (UIHealthBarEnemy_tD4403BCAD245F0CBF51972B6EDC8AD859354DAA3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIHealthBarPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthBarPlayer_Start_m9F18EBBDBA5AD427C7C48525D02E7FBB468AE134 (UIHealthBarPlayer_t18C7111FB0E851735B8360D5B5C130EDD8DB6FEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * V_0 = NULL;
	{
		// FirebaseDatabase database = FirebaseDatabase.DefaultInstance;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_0;
		L_0 = FirebaseDatabase_get_DefaultInstance_mDBCDC6415A3C87F065EE96C415A5D205C2C2BA0E(/*hidden argument*/NULL);
		V_0 = L_0;
		// reference = database.RootReference;
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_1 = V_0;
		NullCheck(L_1);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_2;
		L_2 = FirebaseDatabase_get_RootReference_mCC8D1B92BE50EB91C76705840BDBD2EF88B6D5FC(L_1, /*hidden argument*/NULL);
		__this->set_reference_7(L_2);
		// }
		return;
	}
}
// System.Void UIHealthBarPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthBarPlayer_Update_m9D47F247D060B2707AF8DD389FBF81831F1D2C5A (UIHealthBarPlayer_t18C7111FB0E851735B8360D5B5C130EDD8DB6FEC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateU3Eb__6_0_mBC26451AA3E7BDB17472A5D76ADF5E09288A2C4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2EE3FC5D7F457D3D9D03005D368AD3E13802364B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38937A5A21B6F1FC908F7211CD231EB3D011D4F5);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * G_B3_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B3_1 = NULL;
	Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * G_B2_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * G_B2_1 = NULL;
	{
		// healthbar.fillAmount = (player.currentLife / player.maxLife);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_healthbar_4();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1 = __this->get_player_5();
		NullCheck(L_1);
		float L_2 = L_1->get_currentLife_12();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_3 = __this->get_player_5();
		NullCheck(L_3);
		float L_4 = L_3->get_maxLife_11();
		NullCheck(L_0);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_0, ((float)((float)L_2/(float)L_4)), /*hidden argument*/NULL);
		// if (player.currentLife <= 0)
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_5 = __this->get_player_5();
		NullCheck(L_5);
		float L_6 = L_5->get_currentLife_12();
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_009e;
		}
	}
	{
		// winText.text = "YOU LOOSE";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_winText_6();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral38937A5A21B6F1FC908F7211CD231EB3D011D4F5);
		// reference.Child("users").Child(username.text).Child("ultimaBatalla").SetValueAsync(false).ContinueWith(task =>
		// {
		//     if (task.IsCompleted)
		//     {
		//         Application.Quit();
		//     }
		// });
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_8 = __this->get_reference_7();
		NullCheck(L_8);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_9;
		L_9 = DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23(L_8, _stringLiteral350B2E03F6B7193079F6F6DCE208EB7D98736C79, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_username_8();
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_10);
		NullCheck(L_9);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_12;
		L_12 = DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23(L_9, L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_13;
		L_13 = DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23(L_12, _stringLiteral2EE3FC5D7F457D3D9D03005D368AD3E13802364B, /*hidden argument*/NULL);
		bool L_14 = ((bool)0);
		RuntimeObject * L_15 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_13);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_16;
		L_16 = DatabaseReference_SetValueAsync_m45554810BB0842F054C39C8B5A8FAA40176650E0(L_13, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_il2cpp_TypeInfo_var);
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_17 = ((U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_il2cpp_TypeInfo_var))->get_U3CU3E9__6_0_1();
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_18 = L_17;
		G_B2_0 = L_18;
		G_B2_1 = L_16;
		if (L_18)
		{
			G_B3_0 = L_18;
			G_B3_1 = L_16;
			goto IL_0098;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_il2cpp_TypeInfo_var);
		U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E * L_19 = ((U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_20 = (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 *)il2cpp_codegen_object_new(Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var);
		Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C(L_20, L_19, (intptr_t)((intptr_t)U3CU3Ec_U3CUpdateU3Eb__6_0_mBC26451AA3E7BDB17472A5D76ADF5E09288A2C4E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var);
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_21 = L_20;
		((U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_il2cpp_TypeInfo_var))->set_U3CU3E9__6_0_1(L_21);
		G_B3_0 = L_21;
		G_B3_1 = G_B2_1;
	}

IL_0098:
	{
		NullCheck(G_B3_1);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_22;
		L_22 = Task_ContinueWith_m8540E40049DA1A53066538EBEBC69DE46859748F(G_B3_1, G_B3_0, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void UIHealthBarPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthBarPlayer__ctor_m9DAAEBF42BA6D985EA68FD462C7F709894F7C0DD (UIHealthBarPlayer_t18C7111FB0E851735B8360D5B5C130EDD8DB6FEC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m417DCAF09D8B811441FED64D4AE2854B00217EFA (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, const RuntimeMethod* method)
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->get_moveThreshold_15();
		return L_0;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_mBF85E683260C0609A921EE7A1AD636E34B8FF5A0 (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___value0;
		float L_1;
		L_1 = fabsf(L_0);
		__this->set_moveThreshold_15(L_1);
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, int32_t ___joystickType0, const RuntimeMethod* method)
{
	{
		// this.joystickType = joystickType;
		int32_t L_0 = ___joystickType0;
		__this->set_joystickType_16(L_0);
		// if(joystickType == JoystickType.Fixed)
		int32_t L_1 = ___joystickType0;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// background.anchoredPosition = fixedPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_2 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = __this->get_fixedPosition_17();
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_2, L_3, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_6 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m6BDC051D277BBFA7C373186E2825DE5429219169 (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		Joystick_Start_m3B4EEAA0389B5CCCA1479ACC4A167376E74BC275(__this, /*hidden argument*/NULL);
		// fixedPosition = background.anchoredPosition;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_0, /*hidden argument*/NULL);
		__this->set_fixedPosition_17(L_1);
		// SetMode(joystickType);
		int32_t L_2 = __this->get_joystickType_16();
		VariableJoystick_SetMode_m600C4C6E1FA830CF452EE33155AD60671BBEB04C(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m1C27A5FF5BB7149FB39CC27B69DCBF3FB4F45ADB (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->get_joystickType_16();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		NullCheck(L_2);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline(L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Joystick_ScreenPointToAnchoredPosition_mAD769BA610FABC0D9C47294736AB0832C558D3FD(__this, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_1, L_4, /*hidden argument*/NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// base.OnPointerDown(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_7 = ___eventData0;
		Joystick_OnPointerDown_mB2A665CAD2B74565B6A1ACE2CA5A98A66020CE18(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_mFD7BF52D93B0B573E9227D5E971778EC003A1AC2 (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->get_joystickType_16();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// background.gameObject.SetActive(false);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_1 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// base.OnPointerUp(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_3 = ___eventData0;
		Joystick_OnPointerUp_m84FA57FCD3325BDEE02FED329B1C963C4DA2A037(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_m868BD21C589C135310923B8C794AD5BA316C2D3A (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, float ___magnitude0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___normalised1, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___radius2, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___cam3, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (joystickType == JoystickType.Dynamic && magnitude > moveThreshold)
		int32_t L_0 = __this->get_joystickType_16();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003e;
		}
	}
	{
		float L_1 = ___magnitude0;
		float L_2 = __this->get_moveThreshold_15();
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___normalised1;
		float L_4 = ___magnitude0;
		float L_5 = __this->get_moveThreshold_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___radius2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// background.anchoredPosition += difference;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_9 = ((Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 *)__this)->get_background_9();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10 = L_9;
		NullCheck(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = RectTransform_get_anchoredPosition_mFDC4F160F99634B2FBC73FE5FB1F4F4127CDD975(L_10, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_m8143009B7D2B786DF8309D1D319F2212EFD24905(L_10, L_13, /*hidden argument*/NULL);
	}

IL_003e:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_14 = ___magnitude0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = ___normalised1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = ___radius2;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_17 = ___cam3;
		Joystick_HandleInput_m38CE2907CF406D1F4B327F197E0CCED1C6DD8CC7(__this, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m1E03B9859AAB8461C7A42706AE4E31606969C25F (VariableJoystick_tEA2A86D8EE903904A4F3D9FA53B8F4B065A9EB9B * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->set_moveThreshold_15((1.0f));
		// private Vector2 fixedPosition = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_fixedPosition_17(L_0);
		Joystick__ctor_mF7C14D62A9A6B3BD77F6365BB88DE406A9CE4E08(__this, /*hidden argument*/NULL);
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
// System.Void buttonScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void buttonScript_FixedUpdate_m5D5FA0B8E1B2C701BB85AF2B6F1981D349A97123 (buttonScript_t2A136D5645779252F49BB858B3838C872742EAFA * __this, const RuntimeMethod* method)
{
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_mB22F7F39CDD46667C3EF64507E55BB7DA18F66C4(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0017;
		}
	}
	{
		// if (Input.GetKey(KeyCode.Escape))
		bool L_1;
		L_1 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)27), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void buttonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void buttonScript__ctor_m81BA44FBF3B272B88FA65C403B39F15AF24C7C17 (buttonScript_t2A136D5645779252F49BB858B3838C872742EAFA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void enemyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController_Start_mAF5801C37275849274A323F652CBE21EB92AA12D (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, const RuntimeMethod* method)
{
	{
		// maxLife = (float)Random.Range(10, 30);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)30), /*hidden argument*/NULL);
		__this->set_maxLife_11(((float)((float)L_0)));
		// currentLife = maxLife;
		float L_1 = __this->get_maxLife_11();
		__this->set_currentLife_12(L_1);
		// ataque = Random.Range(2, 15);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(2, ((int32_t)15), /*hidden argument*/NULL);
		__this->set_ataque_13(L_2);
		// defensa = Random.Range(10, 30);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)30), /*hidden argument*/NULL);
		__this->set_defensa_14(L_3);
		// oro = Random.Range(1, 100);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)100), /*hidden argument*/NULL);
		__this->set_oro_16(L_4);
		// countMovement = Random.Range(1, 3);
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 3, /*hidden argument*/NULL);
		__this->set_countMovement_8(((float)((float)L_5)));
		// countAttack = Random.Range(1, 3);
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 3, /*hidden argument*/NULL);
		__this->set_countAttack_9(((float)((float)L_6)));
		// }
		return;
	}
}
// System.Void enemyController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController_Update_mB6AC6450C103D08898F92CB5FF8A06F5710DF8D2 (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, const RuntimeMethod* method)
{
	{
		// randomMovement();
		enemyController_randomMovement_m6369D6C3FE330AAF7C320BD6688259BD58666545(__this, /*hidden argument*/NULL);
		// randomAttack();
		enemyController_randomAttack_m594F5A0A6501B8F0133511ED617C64219B7C2DD9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void enemyController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController_OnTriggerEnter2D_mBC72DE65A74A69AB7DDA327A11453515C440E89F (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7DB32F178FC555ED4BB8C6DCB8DDC92F621CE3D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (collision.gameObject.tag == "HitBoxPlayer")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralC7DB32F178FC555ED4BB8C6DCB8DDC92F621CE3D, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0070;
		}
	}
	{
		// float playerDamage = player.ataque - player.defensa/2;
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_4 = __this->get_player_18();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_ataque_13();
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_6 = __this->get_player_18();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_defensa_14();
		V_0 = ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)((int32_t)((int32_t)L_7/(int32_t)2))))));
		// if(playerDamage < 0){
		float L_8 = V_0;
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_003d;
		}
	}
	{
		// playerDamage = -playerDamage;
		float L_9 = V_0;
		V_0 = ((-L_9));
	}

IL_003d:
	{
		// float auxLife = currentLife - playerDamage;
		float L_10 = __this->get_currentLife_12();
		float L_11 = V_0;
		V_1 = ((float)il2cpp_codegen_subtract((float)L_10, (float)L_11));
		// currentLife = auxLife;
		float L_12 = V_1;
		__this->set_currentLife_12(L_12);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_13 = ___collision0;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_14, /*hidden argument*/NULL);
		// if(currentLife <= 0)
		float L_15 = __this->get_currentLife_12();
		if ((!(((float)L_15) <= ((float)(0.0f)))))
		{
			goto IL_0070;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_16, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void enemyController::randomMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController_randomMovement_m6369D6C3FE330AAF7C320BD6688259BD58666545 (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral005F85E668EE9A80AC8B038BE44185B33D1E3235);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A52BB6DE2B25BA6342C7FAD8478E64D21F6FB01);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (rightMovement == true)
		bool L_0 = __this->get_rightMovement_7();
		if (!L_0)
		{
			goto IL_0062;
		}
	}
	{
		// transform.position += transform.right * Time.deltaTime * speed;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = L_1;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_5, L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_speed_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_9, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_10, /*hidden argument*/NULL);
		// animator.SetBool("moveRight", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_11 = __this->get_animator_4();
		NullCheck(L_11);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_11, _stringLiteral0A52BB6DE2B25BA6342C7FAD8478E64D21F6FB01, (bool)1, /*hidden argument*/NULL);
		// animator.SetBool("moveLeft", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = __this->get_animator_4();
		NullCheck(L_12);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_12, _stringLiteral005F85E668EE9A80AC8B038BE44185B33D1E3235, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00ba;
	}

IL_0062:
	{
		// transform.position -= transform.right * Time.deltaTime * speed;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = L_13;
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_16, /*hidden argument*/NULL);
		float L_18;
		L_18 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, L_18, /*hidden argument*/NULL);
		float L_20 = __this->get_speed_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_19, L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_15, L_21, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_14, L_22, /*hidden argument*/NULL);
		// animator.SetBool("moveLeft", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_23 = __this->get_animator_4();
		NullCheck(L_23);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_23, _stringLiteral005F85E668EE9A80AC8B038BE44185B33D1E3235, (bool)1, /*hidden argument*/NULL);
		// animator.SetBool("moveRight", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_24 = __this->get_animator_4();
		NullCheck(L_24);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_24, _stringLiteral0A52BB6DE2B25BA6342C7FAD8478E64D21F6FB01, (bool)0, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		// if (countMovement <= 0)
		float L_25 = __this->get_countMovement_8();
		if ((!(((float)L_25) <= ((float)(0.0f)))))
		{
			goto IL_00ed;
		}
	}
	{
		// rightMovement = !rightMovement;
		bool L_26 = __this->get_rightMovement_7();
		__this->set_rightMovement_7((bool)((((int32_t)L_26) == ((int32_t)0))? 1 : 0));
		// countMovement = Random.Range(1, 4.5f);
		float L_27;
		L_27 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (4.5f), /*hidden argument*/NULL);
		__this->set_countMovement_8(L_27);
		// }
		goto IL_00ff;
	}

IL_00ed:
	{
		// countMovement -= Time.deltaTime;
		float L_28 = __this->get_countMovement_8();
		float L_29;
		L_29 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_countMovement_8(((float)il2cpp_codegen_subtract((float)L_28, (float)L_29)));
	}

IL_00ff:
	{
		// Vector3 clampedPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		// clampedPosition.x = Mathf.Clamp(clampedPosition.x, -12, 12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_0;
		float L_33 = L_32.get_x_2();
		float L_34;
		L_34 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_33, (-12.0f), (12.0f), /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_34);
		// transform.position = clampedPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = V_0;
		NullCheck(L_35);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void enemyController::randomAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController_randomAttack_m594F5A0A6501B8F0133511ED617C64219B7C2DD9 (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, const RuntimeMethod* method)
{
	{
		// if (countAttack > 0)
		float L_0 = __this->get_countAttack_9();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0039;
		}
	}
	{
		// countAttack -= Time.deltaTime;
		float L_1 = __this->get_countAttack_9();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_countAttack_9(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// if (countAttack <= 0)
		float L_3 = __this->get_countAttack_9();
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// attackEnemy();
		enemyController_attackEnemy_m509BD331659EAA734F3FF64F3FF5E4012CD9F749(__this, /*hidden argument*/NULL);
		// attackFalseEnemy();
		enemyController_attackFalseEnemy_m241572B770EAC1B532D7259D596DE0EF390FF3FA(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0039:
	{
		// else if (countAttack <= 0)
		float L_4 = __this->get_countAttack_9();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// attackEnemy();
		enemyController_attackEnemy_m509BD331659EAA734F3FF64F3FF5E4012CD9F749(__this, /*hidden argument*/NULL);
		// attackFalseEnemy();
		enemyController_attackFalseEnemy_m241572B770EAC1B532D7259D596DE0EF390FF3FA(__this, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void enemyController::attackEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController_attackEnemy_m509BD331659EAA734F3FF64F3FF5E4012CD9F749 (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF141A52DC07A733E9B5FB6C65961B3C98F16F004);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.Play("StickmanAttackR");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_4();
		NullCheck(L_0);
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_0, _stringLiteralF141A52DC07A733E9B5FB6C65961B3C98F16F004, /*hidden argument*/NULL);
		// countAttack = Random.Range(1, 3);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 3, /*hidden argument*/NULL);
		__this->set_countAttack_9(((float)((float)L_1)));
		// }
		return;
	}
}
// System.Void enemyController::attackFalseEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController_attackFalseEnemy_m241572B770EAC1B532D7259D596DE0EF390FF3FA (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2A330D30A614D1394D54E805D26369FFAA1FEF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("attackEnemy", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_4();
		NullCheck(L_0);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteralC2A330D30A614D1394D54E805D26369FFAA1FEF3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void enemyController::executeAttackEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController_executeAttackEnemy_mA8CF32645A01F65BC118D6670DA73072D840F94F (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(hitBox, hitBoxPosition.position, hitBoxPosition.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_hitBox_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_hitBoxPosition_6();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_hitBoxPosition_6();
		NullCheck(L_3);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void enemyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void enemyController__ctor_m323840A687AB9C0352596CC61AD4448AABC0CC2A (enemyController_t95D7D64F5F56B41F0A6219872C355F136371F8BE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void hitBox::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hitBox_Start_mEB02D4A56A82C8EBAC39B7BCB1A7A0046C1F1519 (hitBox_tA9C9C5679D9125E164EBC0778601828034932553 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, 0.1f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_0, (0.100000001f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void hitBox::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hitBox_Update_m210D111D2F172E2D771EE6EB79022DC37B8458EE (hitBox_tA9C9C5679D9125E164EBC0778601828034932553 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void hitBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void hitBox__ctor_m8C38AC909D73101048883B2F4198D8CF09D8C950 (hitBox_tA9C9C5679D9125E164EBC0778601828034932553 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CharacterController2D/BoolEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolEvent__ctor_mB1C4B8CED2296E60F44636855900EA1BDF1F393A (BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7(__this, /*hidden argument*/UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
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
// System.Void DbManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4F34822A721663F5924CCBF44EB65215D4A66124 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31 * L_0 = (U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31 *)il2cpp_codegen_object_new(U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6253DFB5B12FFDEDD858EE1B5245377BC47446A4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void DbManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6253DFB5B12FFDEDD858EE1B5245377BC47446A4 (U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DbManager/<>c::<retrieveData>b__2_0(System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CretrieveDataU3Eb__2_0_mC3CCA0C3E24696C1C7D41C9A8527276AF668BE7F (U3CU3Ec_t0AAB193229B72C83971AB1788AE3B96A40CDFF31 * __this, Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tA006192EAB3FEE2322641ABA9898F581A7C342AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t30CC244D1ACDD6D8E76AF1A6514B34C499405146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisJugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D_mDE52562A0A880A29B435F17DE9E4838FC67B2D72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m340C568FCD117E23EF7552E372CDFA3187A1DA3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDB2271D6D45F31B6A9FD4D8C519BE08FF45362B);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (task.IsFaulted)
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// print("Error retrieving database");
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(_stringLiteralBDB2271D6D45F31B6A9FD4D8C519BE08FF45362B, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0013:
	{
		// else if (task.IsCompleted)
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_2 = ___task0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0061;
		}
	}
	{
		// DataSnapshot snapshot = task.Result;
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_4 = ___task0;
		NullCheck(L_4);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_5;
		L_5 = Task_1_get_Result_m340C568FCD117E23EF7552E372CDFA3187A1DA3E(L_4, /*hidden argument*/Task_1_get_Result_m340C568FCD117E23EF7552E372CDFA3187A1DA3E_RuntimeMethod_var);
		// foreach(var jugador in snapshot.Children)
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = DataSnapshot_get_Children_m2E3B643ECF42F6F08D38F2666E81E89F797489CC(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>::GetEnumerator() */, IEnumerable_1_tA006192EAB3FEE2322641ABA9898F581A7C342AF_il2cpp_TypeInfo_var, L_6);
		V_0 = L_7;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_002e:
		{
			// foreach(var jugador in snapshot.Children)
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_9;
			L_9 = InterfaceFuncInvoker0< DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>::get_Current() */, IEnumerator_1_t30CC244D1ACDD6D8E76AF1A6514B34C499405146_il2cpp_TypeInfo_var, L_8);
			// Jugador jugadorRetornado= JsonUtility.FromJson<Jugador>(jugador.GetRawJsonValue());
			NullCheck(L_9);
			String_t* L_10;
			L_10 = DataSnapshot_GetRawJsonValue_mE0A3B5759191BD7947B7E8F25BEA7CDD7BB4D301(L_9, /*hidden argument*/NULL);
			Jugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D * L_11;
			L_11 = JsonUtility_FromJson_TisJugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D_mDE52562A0A880A29B435F17DE9E4838FC67B2D72(L_10, /*hidden argument*/JsonUtility_FromJson_TisJugador_t2126CCF974544F6548117B3EA0B94CC25BFB374D_mDE52562A0A880A29B435F17DE9E4838FC67B2D72_RuntimeMethod_var);
			// print(jugadorRetornado.ataque);
			NullCheck(L_11);
			int32_t L_12 = L_11->get_ataque_0();
			int32_t L_13 = L_12;
			RuntimeObject * L_14 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_13);
			MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_14, /*hidden argument*/NULL);
		}

IL_004d:
		{
			// foreach(var jugador in snapshot.Children)
			RuntimeObject* L_15 = V_0;
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_002e;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_0;
			if (!L_17)
			{
				goto IL_0060;
			}
		}

IL_005a:
		{
			RuntimeObject* L_18 = V_0;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_0060:
		{
			IL2CPP_END_FINALLY(87)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x61, IL_0061)
	}

IL_0061:
	{
		// }
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
// System.Void FireBaseInit/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFAE8DCDE0B4748FA5D62DAB30C08E5E2207E3D01 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB * L_0 = (U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB *)il2cpp_codegen_object_new(U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m20AB8119F4F28669E2411B68592AF7C1D05405D7(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void FireBaseInit/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m20AB8119F4F28669E2411B68592AF7C1D05405D7 (U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FireBaseInit/<>c::<Start>b__0_0(System.Threading.Tasks.Task`1<Firebase.DependencyStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStartU3Eb__0_0_mD2B3F30B71C794301DE7CC7DC9F4D6A4F88031DF (U3CU3Ec_t0107928B0E059A1AC0BFAE9BB4A3CFE5E091E6FB * __this, Task_1_t9783472954F8EDF4FB26842464716EB5FF430CEA * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAnalytics_t850C4D5212FDCBFDB95B7E1EF39666AB9A79EABC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FirebaseAnalytics.SetAnalyticsCollectionEnabled(true);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseAnalytics_t850C4D5212FDCBFDB95B7E1EF39666AB9A79EABC_il2cpp_TypeInfo_var);
		FirebaseAnalytics_SetAnalyticsCollectionEnabled_mCFDE419BF7367211DE94D17C4510C7E75A1BD7CE((bool)1, /*hidden argument*/NULL);
		// DatabaseReference reference = FirebaseDatabase.DefaultInstance.RootReference;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_0;
		L_0 = FirebaseDatabase_get_DefaultInstance_mDBCDC6415A3C87F065EE96C415A5D205C2C2BA0E(/*hidden argument*/NULL);
		NullCheck(L_0);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_1;
		L_1 = FirebaseDatabase_get_RootReference_mCC8D1B92BE50EB91C76705840BDBD2EF88B6D5FC(L_0, /*hidden argument*/NULL);
		// });
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
// System.Void UIHealthBarEnemy/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6F894E9E1B172CEC9FC1CA52AE02B89A56451AF8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E * L_0 = (U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E *)il2cpp_codegen_object_new(U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7EBEE9ACE1B2FCCCE9B7AFCEDE1B76AE25118577(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UIHealthBarEnemy/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7EBEE9ACE1B2FCCCE9B7AFCEDE1B76AE25118577 (U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIHealthBarEnemy/<>c::<Update>b__6_0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CUpdateU3Eb__6_0_m13D8FA934D844A87D564137569C3C05C6DE59C97 (U3CU3Ec_tCDC2C3DF51CC53C347C5601BB75AEACE74C51A5E * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method)
{
	{
		// if (task.IsCompleted)
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_000d:
	{
		// });
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
// System.Void UIHealthBarPlayer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5C8026324D0FD6D8C0D91D79C4F6A8493D744148 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E * L_0 = (U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E *)il2cpp_codegen_object_new(U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m1BF662BEC7E5A907642A06D30DDB655862EFF337(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void UIHealthBarPlayer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1BF662BEC7E5A907642A06D30DDB655862EFF337 (U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UIHealthBarPlayer/<>c::<Update>b__6_0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CUpdateU3Eb__6_0_mBC26451AA3E7BDB17472A5D76ADF5E09288A2C4E (U3CU3Ec_t4405B7C9586313E34D0B3BAABF8026F36F71778E * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method)
{
	{
		// if (task.IsCompleted)
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_000d:
	{
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_position_mE65C1CF448C935678F7C2A6265B4F3906FD9D651_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CpositionU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_m98AA5AF174918812B6E0C201C850FABB4A526813_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m63A593A281BC0B6C36FCFF399056E1DE9F4C01E0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)((float)L_1/(float)L_3)), ((float)((float)L_5/(float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mEAAD1B809A8CF1CC22C54EF2ADC702B11DA704A9_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___from0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___to1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___from0), /*hidden argument*/NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&___to1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((double)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)))));
		V_0 = ((float)((float)L_2));
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = ___from0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___to1;
		float L_7;
		L_7 = Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48_inline(L_5, L_6, /*hidden argument*/NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)((float)L_7/(float)L_8)), (-1.0f), (1.0f), /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)((double)L_10)));
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_11)), (float)(57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m671D494CBF07962B24BF4024059715FA650BB9EF_inline (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___value0;
		__this->set_axisOptions_6(L_0);
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_m710022BEA478442D17908F10F5BA53375705AC3B_inline (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___value0;
		__this->set_snapX_7(L_0);
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_mAD4C6843FD698B99D23F21C3A15D9CE928289508_inline (Joystick_tE046BFA03A6D57182FE0E0EEC50F4B7BCF129873 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___value0;
		__this->set_snapY_8(L_0);
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mB2DFFDDA2881BA755F0B75CB530A39E8EBE70B48_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
