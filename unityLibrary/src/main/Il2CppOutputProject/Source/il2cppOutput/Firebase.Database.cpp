﻿#include "pch-cpp.hpp"

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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>>
struct Action_1_tCE1C19381DC6BEF31F7D71195D8B39F6C06AA3EA;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>
struct Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>
struct Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>>
struct Func_2_t0393892FBD85C10FC47EC181F7328EFB75BD7503;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>>
struct Func_2_t2D1DE00195DD21B665183B1AFF46E788FF395D01;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>
struct IEnumerable_1_tA006192EAB3FEE2322641ABA9898F581A7C342AF;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.InternalDataSnapshot>
struct IEnumerable_1_t031CE69231FC3DC893EBC83FF5A66C165EEAED51;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>
struct IEnumerator_1_t30CC244D1ACDD6D8E76AF1A6514B34C499405146;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.InternalDataSnapshot>
struct IEnumerator_1_t1E9AF05435B4D34B25AA3791C02C002FE564CB04;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Database.Internal.InternalListener>
struct KeyCollection_tE21668EA1C6E500AA3BFED03C776308664280C2E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>
struct KeyCollection_t475C46FDEEA5D2FD52168BC509175B6BF3F81440;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.Database.FirebaseDatabase>
struct KeyCollection_tDB2B4FAF6FD053C89EB22C3D9FC5AA2A4C569FE5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>
struct TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>
struct TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<Firebase.Database.DataSnapshot>
struct TaskFactory_1_t78C20319940DEE85652CD85F7A86A0D885BA94C8;
// System.Threading.Tasks.TaskFactory`1<Firebase.Database.InternalDataSnapshot>
struct TaskFactory_1_tC0DB035086E35FB29F13D5B7DA67BEDB17FADC80;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996;
// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>
struct Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Database.Internal.InternalListener>
struct ValueCollection_t02A1DEAF6562CB795DDD037A7E467F265C3885C9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>
struct ValueCollection_t4E7E49EDE271570324E117270E73F841D000611E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.Database.FirebaseDatabase>
struct ValueCollection_tA5A34BD705B26F9C08E054430145E86ED441AAE2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Database.Internal.InternalListener>[]
struct EntryU5BU5D_t07B9BEB289292CE22DE9216C5C18D5B5BDB79306;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.String>[]
struct EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>[]
struct EntryU5BU5D_tCAD70E3449EF11EFD0C55542773DFE50369E5DF4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.Database.FirebaseDatabase>[]
struct EntryU5BU5D_t384752BD78DD3654AAE70C899F08C18E559ADB90;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Firebase.Database.DataSnapshot
struct DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256;
// Firebase.Database.DatabaseError
struct DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2;
// Firebase.Database.DatabaseException
struct DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1;
// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47;
// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4;
// Firebase.FutureVoid
struct FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29;
// Firebase.Database.Future_InternalDataSnapshot
struct Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631;
// Firebase.Platform.IAppConfigExtensions
struct IAppConfigExtensions_tAF751AD5BD32E4587148715BFD93D3F2F85BBB7A;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Firebase.Platform.IClockService
struct IClockService_t73670E2711989DB3EB884D84BE9A79D303AC1D91;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// Firebase.Platform.ILoggingService
struct ILoggingService_tD55B1336E14C994826F5A52B0F362008247F1066;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563;
// Firebase.Database.InternalDataSnapshot
struct InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E;
// Firebase.Database.InternalDataSnapshotList
struct InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4;
// Firebase.Database.InternalDatabaseReference
struct InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F;
// Firebase.Database.InternalFirebaseDatabase
struct InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7;
// Firebase.Database.Internal.InternalListener
struct InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956;
// Firebase.Database.InternalQuery
struct InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// Firebase.Database.Query
struct Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043;
// Firebase.Variant
struct Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// Firebase.Database.DataSnapshot/DataSnapshotEnumerator
struct DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D;
// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD;
// Firebase.Database.DatabaseReference/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A;
// Firebase.FutureVoid/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72;
// Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6;
// Firebase.Database.Future_InternalDataSnapshot/Action
struct Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A;
// Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0;
// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D;
// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63;
// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1;
// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC;
// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092;
// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6;
// Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator
struct InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394;
// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3;
// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA;
// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct OnCancelledDelegate_tD2F9725361BFBCA4F0062E1ACA2070DD2139BC48;
// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E;
// Firebase.Database.Query/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF;
// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCE1C19381DC6BEF31F7D71195D8B39F6C06AA3EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChildChangeType_tC7CFB18EB19C698C73A6DBB787B6BF7EEE7E04E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Error_tB39068F6A2A7301F0F10A67554D08536E4E9E8A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppConfigExtensions_tAF751AD5BD32E4587148715BFD93D3F2F85BBB7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t031CE69231FC3DC893EBC83FF5A66C165EEAED51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t1E9AF05435B4D34B25AA3791C02C002FE564CB04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07F1E3DA016554FBC48202BBEF3B67E41B513EBA;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral0F6206E2208D9F6410179E3B8BEA2DB7DD451983;
IL2CPP_EXTERN_C String_t* _stringLiteral161BB2E376DAB7BB196FA3BA56AF5F032401EDD2;
IL2CPP_EXTERN_C String_t* _stringLiteral19709657F1A68406CA65F0C729F82F01A9E68B23;
IL2CPP_EXTERN_C String_t* _stringLiteral19F36D351EC83FFF1DD0BF540F6C887240DF749A;
IL2CPP_EXTERN_C String_t* _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102;
IL2CPP_EXTERN_C String_t* _stringLiteral25E3F07BC8A8E84E64CBFD59A39E44732195DF1B;
IL2CPP_EXTERN_C String_t* _stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F;
IL2CPP_EXTERN_C String_t* _stringLiteral3510EE6CB670F44AE899467FD7C9F95DEEAD6A2C;
IL2CPP_EXTERN_C String_t* _stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201;
IL2CPP_EXTERN_C String_t* _stringLiteral3A25CDFF086AD2E7778FDE479EEAF3DE21276E5C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C76C42E2293FDE8901D3D0BD00FBAEFFA8F224A;
IL2CPP_EXTERN_C String_t* _stringLiteral44786FF8D3D7A6BB34E47B8522E7CD903A39C81C;
IL2CPP_EXTERN_C String_t* _stringLiteral4D6EFB72BB23F4AB919B7E784E88CE1219260B7D;
IL2CPP_EXTERN_C String_t* _stringLiteral4FBD1DB26924C1F6A36CB8F2F4850DE51995B3F9;
IL2CPP_EXTERN_C String_t* _stringLiteral50384A583A192C06635CCD8BE23070E725470116;
IL2CPP_EXTERN_C String_t* _stringLiteral572FD223BFCEC6E8E552A7CC84FEDA3269F3A5F7;
IL2CPP_EXTERN_C String_t* _stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B52714C530B7F06A491E0453548C103378B3C0C;
IL2CPP_EXTERN_C String_t* _stringLiteral62C3AC56F06281AA1091C7F369E54BD4F40ABCAD;
IL2CPP_EXTERN_C String_t* _stringLiteral64D2CA5C491D2FD76E0C36ED2AFE1E4EF5CB4AC3;
IL2CPP_EXTERN_C String_t* _stringLiteral7E1C42D303CEBFBB8A6EE62A43AC623CFA8EF06A;
IL2CPP_EXTERN_C String_t* _stringLiteral8225BFBF19631D0C7DACACD3525BFCCACD852480;
IL2CPP_EXTERN_C String_t* _stringLiteral88B277217AED4CBAA42043A4D5CD8DB154680BFA;
IL2CPP_EXTERN_C String_t* _stringLiteral96BAF0A0FD737C639C25139F7FF80E71EF03CC92;
IL2CPP_EXTERN_C String_t* _stringLiteral96BD8930E546DA8CF5E3CC8102CFF21E735B8CE5;
IL2CPP_EXTERN_C String_t* _stringLiteralA430994825FFBD84C878DC4A3DE93644DAB6DC50;
IL2CPP_EXTERN_C String_t* _stringLiteralAFBF46A4D1C5554966D208EBCB0AC7CF2297C3F4;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E66B27E692259462C04D33AEF1271A6B5FC8D3;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18;
IL2CPP_EXTERN_C String_t* _stringLiteralC24BCEEB1EA72D694B1BED364734C5C838BE1FC9;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AFB5B2F4FF415E9A57A58EEFBA6C5E92E3529C;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83;
IL2CPP_EXTERN_C String_t* _stringLiteralD7D6709CAC9D8FCE4933C82CDA34EE45277DBD95;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
IL2CPP_EXTERN_C String_t* _stringLiteralDBF0B4029A0C9D8FAAC8C952057ED4B638E435A5;
IL2CPP_EXTERN_C String_t* _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralF2EE2E00A733D8F7B0857F92D87975D56CEE7145;
IL2CPP_EXTERN_C String_t* _stringLiteralFD3238FA21BFDF2546D17BB7E9E29EB72294946C;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2E2949322DD0B5CA09946453EDEA10FE26508B65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m29B028351E79C43BDDBFDC7E96C58A3D92185F82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mD5FEE5AC0648D2C302CCC39EF5BC7F90715AC902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mF823FE22604103577AE80A422166F179B07F542D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m337EBCDB85CE88EF9528F02A3765E19A781B144B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4CF117014933DCE17133BDFA19D4A2F8CAA9C8B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m5C3809989CBDFED551B7AD2AD4D51F8BA31CB424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m688704AB6A4B311C9E90E949D6E2C593E33EFA72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6BF2DE04A435D6BB1812DA65DD5CA9939D6358B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mBD99788D0A921C1C3E4A6063011577145AA8EDE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m808A2FE513DA758273FA263FC7C18E9BEDDFD695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mDE412531F889E98AD656803A3BCE6756259C6A5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m0A38C6E82462B13F17E7427AE3A31706196F0781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m404986A754EF91DBA5BAC3F22B924FD6C7C05A29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_GetInstance_m879569779EF2DCEDEE9A84D158F5612EE5178B92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_GetInstance_mF93FC30A2E04D9D4E4E9CDAE000B1AB850AD1836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_OnAppDisposed_mAEB3D694F18851C363E4076593DA196E361B751D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseDatabase_get_DefaultInstance_mDBCDC6415A3C87F065EE96C415A5D205C2C2BA0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_GetResult_m28E25B2824136D3A2EA1E2A4530B8012DF9E7721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mE19F622896665D389CA5F0FB04C218E30D432F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_SWIG_FreeCompletionData_mEB0B83F435DC864C3C6FEB430976423CC07C08DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_SWIG_OnCompletion_mF8218FC4ABF3C7CF392241C97E529986D469B7D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_InternalDataSnapshot_ThrowIfDisposed_m0E6A88C03BB5D72C91FFCB84CBB15887C3035CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnCancelledHandler_m912F895AD47CA722E893FF47649B69D546A01440_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnChildChangeHandler_mBDE792C73BF40FE6349AADD5E427AA19C2C3D912_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalChildListener_OnChildRemovedHandler_m6B40D10501F7EDF16427B90B4C2E8325E1BE09A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshotListEnumerator_Reset_m585ECE2841EDBC93C6862FFE7A669577E79B2C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshotListEnumerator_get_Current_mA325E4029226CDF1DA2F9052E59F77CFDCD63100_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshotList_getitem_m87D6F513938BB7CD1F1BEFDEA5FB8470964B9127_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshotList_size_mF348AF43BE83DE0F01DE69739890C0E6537DC890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_Child_m67F3A70FFC4277631497FC171098A789DA703F5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_children_m57AEDC00FE3AD8915510C9A3122815A192BD9A48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_exists_m5C218CA0135F3EE6E2C13A232AD181DB5F6D1A6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_key_string_m9C00367E7501B3C94A3158FDD5D8211A6341BE4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDataSnapshot_value_mFE8AAA20E79030AA3D385E55B6B222433C8B3D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_Child_m3E1DEA65BED90749680AD03C27306F4A365364CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_is_valid_m2927CF3C07D8879AC3B75FA79DB8DB9529EAF63D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalDatabaseReference_url_m29A5FBE8B3511B0D030ADE47187979BC2D493548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetInstanceInternal_mCCA92290B0FA73967F4644C26B94CA0B94F42060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetReference_m0E9DE5A3EB1BF2BA2041F243ED73CDAB074F82AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_GetReference_m26765A7909B10D714ACB13A2072C8958FF39A597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalFirebaseDatabase_ReleaseReferenceInternal_m1CCAB6A022685D1A343DC4DB53FF9249024D4CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_DestroyChildListener_m72B64E27AE128C47D1A92C2FA76CC715FC57F167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_DestroyValueListener_m190B2DBAB88DB56CB9422A0EB78C703A1A2FB463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_GetValueAsync_m67CCCD62C74D362D9821C2BF3EF66F724FD2C3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_RegisterChildListenerCallbacks_m7E198D69EF4A1B0800C04DAE1A38E3B111BF589F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_RegisterValueListenerCallbacks_m994FF83CBBDAB548707F22662D6A579E550D5214_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalQuery_is_valid_mD5D39FB3063E7E05C8C0877F4046ECF092006318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalValueListener_OnCancelledHandler_m55900F903CEB556A46B6EE6CE80815EDBD859E42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InternalValueListener_OnValueChangedHandler_m571D69CFF81F3FA73F99FEEAA6182A5B4FECB764_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query_CheckTaskStatus_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m43FFEDD0E87791905E584A039D5425D07C3A9A16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query_CheckTaskStatus_TisDataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_mF5820C37BB0F183F642971D1E8B8199CE4DE85DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Query__ctor_mF30B6DED883447335B2E5C109A12FF34131F50E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m377BB2DE45F30DA21083EE753BDEC79D9212FDF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m70A9D4FE95EB40ED67FA3871D2793E5A4161B2E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m42C6E4D09BA80136DE63B08F1E82540A4E06A2FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m560F02541BE4AA13B7F181EDC45D7EAFDD9EA2FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m73E8A430BD4C1D04462AE032F1C323AEE1457E05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m91D8C7C04B791E2E1EECBCE2ECCC8939D0225D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m836485F3142C00D31F0A6788A244F9F18020633C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFC1CF3FCDF68EE5E1E89CCD3518D487C8B23477F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m6014336D1D32DC06743EFA93E791111E0642DA29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m72F773E470EC582CFF080D0C9B82FD34577C184F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m487720C91262230563DC3EEFF69447A5A1A01B9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_mDC148D80E05DB75259C36706BBCA8AA7160B1971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m1B13BAED239B9E719AB2DDFD018F0BDD7F0E702F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m1DD3FFA06F12A427AB91DC9E0AA0FE12FB041A3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mD7B98AEEC7A5A719A8BB07FEE5C67BE34F619E27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m6CC6A7E5B7DB013A630F6BEB56AB8A005E8F5E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_m8FC2983816DD9AE5209C39BA24146BF78D2E8EEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_m67B5A56DA662996813023DC1BAA8AB7C175A1D6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mBC013C4BFE7F83CEB4DC24476C87B3F5073A00BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mEC988034F1874D898632EF3B350F4BD850C2A7E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m1A727AEB2E921734E1AF6583C14D39811A88AD86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mD2690383B5E12BFCFC8D7ACFB946E0EBC62C595C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m34FF0C1859AD5931B3C7C5C95E321E34664D84EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m670317C332B7F3BF1C2645DD4AE0FF160B5EE11E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_mECEBF9332ADD0020C97831C5FB5314D05D0B795B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m5FC15BDAA9347B29157C9422BDDB82367633B1B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CWrapInternalDataSnapshotTaskU3Eb__0_m3D4CB618D00212B8F4D3000EF3BC152CFC04E634_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_0_U3CWrapInternalDefaultTaskU3Eb__0_m2200E784F791DFE5CC9CEC7CD9064814ED8C542E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m43BA96A9CFC989BC690C72F6449CF754F2AAA118_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CGetTaskU3Eb__0_m2960C3BE91912BFB5995EC3E8BF2F64D94885AF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m9E0F92219FAFF5C237B0BE9BEB665DB678E1D5AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_m99ADD76E5FE255790179C6507277310B6A73E62C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m450B8B9A2E58E9FB9B64BA0199B387EE83AB36A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_mD232DD9AF8B4B57640FA71DD84D343D48BC963BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utilities_MakeVariant_m78FD4C678C3062393C277EF8DAC3E6E53488DC15_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t313E29CDF0EE3F24AD6D4CA746FEBA0C5E433886 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t07B9BEB289292CE22DE9216C5C18D5B5BDB79306* ___entries_1;
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
	KeyCollection_tE21668EA1C6E500AA3BFED03C776308664280C2E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t02A1DEAF6562CB795DDD037A7E467F265C3885C9 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA, ___entries_1)); }
	inline EntryU5BU5D_t07B9BEB289292CE22DE9216C5C18D5B5BDB79306* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t07B9BEB289292CE22DE9216C5C18D5B5BDB79306** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t07B9BEB289292CE22DE9216C5C18D5B5BDB79306* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA, ___keys_7)); }
	inline KeyCollection_tE21668EA1C6E500AA3BFED03C776308664280C2E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE21668EA1C6E500AA3BFED03C776308664280C2E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE21668EA1C6E500AA3BFED03C776308664280C2E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA, ___values_8)); }
	inline ValueCollection_t02A1DEAF6562CB795DDD037A7E467F265C3885C9 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t02A1DEAF6562CB795DDD037A7E467F265C3885C9 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t02A1DEAF6562CB795DDD037A7E467F265C3885C9 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED* ___entries_1;
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
	KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___entries_1)); }
	inline EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0760EF54F1EA7070181C04D5D34118DC91F943ED* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___keys_7)); }
	inline KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t95CEC57CA04600603C7E9067D11E724EE99AD7D1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ___values_8)); }
	inline ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t5C221D6474B57B05A1EF91C1C6A7B1FA1CF361BF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>
struct Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCAD70E3449EF11EFD0C55542773DFE50369E5DF4* ___entries_1;
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
	KeyCollection_t475C46FDEEA5D2FD52168BC509175B6BF3F81440 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4E7E49EDE271570324E117270E73F841D000611E * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27, ___entries_1)); }
	inline EntryU5BU5D_tCAD70E3449EF11EFD0C55542773DFE50369E5DF4* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCAD70E3449EF11EFD0C55542773DFE50369E5DF4** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCAD70E3449EF11EFD0C55542773DFE50369E5DF4* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27, ___keys_7)); }
	inline KeyCollection_t475C46FDEEA5D2FD52168BC509175B6BF3F81440 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t475C46FDEEA5D2FD52168BC509175B6BF3F81440 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t475C46FDEEA5D2FD52168BC509175B6BF3F81440 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27, ___values_8)); }
	inline ValueCollection_t4E7E49EDE271570324E117270E73F841D000611E * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4E7E49EDE271570324E117270E73F841D000611E ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4E7E49EDE271570324E117270E73F841D000611E * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>
struct Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t384752BD78DD3654AAE70C899F08C18E559ADB90* ___entries_1;
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
	KeyCollection_tDB2B4FAF6FD053C89EB22C3D9FC5AA2A4C569FE5 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA5A34BD705B26F9C08E054430145E86ED441AAE2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B, ___entries_1)); }
	inline EntryU5BU5D_t384752BD78DD3654AAE70C899F08C18E559ADB90* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t384752BD78DD3654AAE70C899F08C18E559ADB90** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t384752BD78DD3654AAE70C899F08C18E559ADB90* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B, ___keys_7)); }
	inline KeyCollection_tDB2B4FAF6FD053C89EB22C3D9FC5AA2A4C569FE5 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDB2B4FAF6FD053C89EB22C3D9FC5AA2A4C569FE5 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDB2B4FAF6FD053C89EB22C3D9FC5AA2A4C569FE5 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B, ___values_8)); }
	inline ValueCollection_tA5A34BD705B26F9C08E054430145E86ED441AAE2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA5A34BD705B26F9C08E054430145E86ED441AAE2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA5A34BD705B26F9C08E054430145E86ED441AAE2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE* ___entries_1;
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
	KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___entries_1)); }
	inline EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___keys_7)); }
	inline KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___values_8)); }
	inline ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3, ___m_task_0)); }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>
struct TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5, ___m_task_0)); }
	inline Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>
struct TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223, ___m_task_0)); }
	inline Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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


// Firebase.Database.DatabaseError
struct DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.DatabaseError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_15;
	// System.String Firebase.Database.DatabaseError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_16;
	// System.String Firebase.Database.DatabaseError::<Details>k__BackingField
	String_t* ___U3CDetailsU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2, ___U3CCodeU3Ek__BackingField_15)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_15() const { return ___U3CCodeU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_15() { return &___U3CCodeU3Ek__BackingField_15; }
	inline void set_U3CCodeU3Ek__BackingField_15(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2, ___U3CMessageU3Ek__BackingField_16)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_16() const { return ___U3CMessageU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_16() { return &___U3CMessageU3Ek__BackingField_16; }
	inline void set_U3CMessageU3Ek__BackingField_16(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDetailsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2, ___U3CDetailsU3Ek__BackingField_17)); }
	inline String_t* get_U3CDetailsU3Ek__BackingField_17() const { return ___U3CDetailsU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CDetailsU3Ek__BackingField_17() { return &___U3CDetailsU3Ek__BackingField_17; }
	inline void set_U3CDetailsU3Ek__BackingField_17(String_t* value)
	{
		___U3CDetailsU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDetailsU3Ek__BackingField_17), (void*)value);
	}
};

struct DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.String> Firebase.Database.DatabaseError::ErrorReasons
	RuntimeObject* ___ErrorReasons_13;
	// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Firebase.Database.DatabaseError::ErrorCodes
	RuntimeObject* ___ErrorCodes_14;

public:
	inline static int32_t get_offset_of_ErrorReasons_13() { return static_cast<int32_t>(offsetof(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields, ___ErrorReasons_13)); }
	inline RuntimeObject* get_ErrorReasons_13() const { return ___ErrorReasons_13; }
	inline RuntimeObject** get_address_of_ErrorReasons_13() { return &___ErrorReasons_13; }
	inline void set_ErrorReasons_13(RuntimeObject* value)
	{
		___ErrorReasons_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorReasons_13), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorCodes_14() { return static_cast<int32_t>(offsetof(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields, ___ErrorCodes_14)); }
	inline RuntimeObject* get_ErrorCodes_14() const { return ___ErrorCodes_14; }
	inline RuntimeObject** get_address_of_ErrorCodes_14() { return &___ErrorCodes_14; }
	inline void set_ErrorCodes_14(RuntimeObject* value)
	{
		___ErrorCodes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorCodes_14), (void*)value);
	}
};


// Firebase.Database.DatabaseInternalPINVOKE
struct DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8  : public RuntimeObject
{
public:

public:
};

struct DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_StaticFields
{
public:
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper Firebase.Database.DatabaseInternalPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3 * ___swigExceptionHelper_0;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper Firebase.Database.DatabaseInternalPINVOKE::swigStringHelper
	SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3 * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3 ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3 * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5  : public RuntimeObject
{
public:
	// System.WeakReference Firebase.Platform.FirebaseAppPlatform::<app>k__BackingField
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___U3CappU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CappU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5, ___U3CappU3Ek__BackingField_0)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_U3CappU3Ek__BackingField_0() const { return ___U3CappU3Ek__BackingField_0; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_U3CappU3Ek__BackingField_0() { return &___U3CappU3Ek__BackingField_0; }
	inline void set_U3CappU3Ek__BackingField_0(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___U3CappU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CappU3Ek__BackingField_0), (void*)value);
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


// Firebase.Database.Internal.InternalListener
struct InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalListener::uid
	int32_t ___uid_2;

public:
	inline static int32_t get_offset_of_uid_2() { return static_cast<int32_t>(offsetof(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956, ___uid_2)); }
	inline int32_t get_uid_2() const { return ___uid_2; }
	inline int32_t* get_address_of_uid_2() { return &___uid_2; }
	inline void set_uid_2(int32_t value)
	{
		___uid_2 = value;
	}
};

struct InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_StaticFields
{
public:
	// System.Int32 Firebase.Database.Internal.InternalListener::uidGenerator
	int32_t ___uidGenerator_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener> Firebase.Database.Internal.InternalListener::databaseCallbacks
	Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * ___databaseCallbacks_1;

public:
	inline static int32_t get_offset_of_uidGenerator_0() { return static_cast<int32_t>(offsetof(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_StaticFields, ___uidGenerator_0)); }
	inline int32_t get_uidGenerator_0() const { return ___uidGenerator_0; }
	inline int32_t* get_address_of_uidGenerator_0() { return &___uidGenerator_0; }
	inline void set_uidGenerator_0(int32_t value)
	{
		___uidGenerator_0 = value;
	}

	inline static int32_t get_offset_of_databaseCallbacks_1() { return static_cast<int32_t>(offsetof(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_StaticFields, ___databaseCallbacks_1)); }
	inline Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * get_databaseCallbacks_1() const { return ___databaseCallbacks_1; }
	inline Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA ** get_address_of_databaseCallbacks_1() { return &___databaseCallbacks_1; }
	inline void set_databaseCallbacks_1(Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * value)
	{
		___databaseCallbacks_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___databaseCallbacks_1), (void*)value);
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


// Firebase.Platform.Services
struct Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861  : public RuntimeObject
{
public:

public:
};

struct Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields
{
public:
	// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::<AppConfig>k__BackingField
	RuntimeObject* ___U3CAppConfigU3Ek__BackingField_0;
	// Firebase.Platform.IClockService Firebase.Platform.Services::<Clock>k__BackingField
	RuntimeObject* ___U3CClockU3Ek__BackingField_1;
	// Firebase.Platform.ILoggingService Firebase.Platform.Services::<Logging>k__BackingField
	RuntimeObject* ___U3CLoggingU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CAppConfigU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields, ___U3CAppConfigU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CAppConfigU3Ek__BackingField_0() const { return ___U3CAppConfigU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CAppConfigU3Ek__BackingField_0() { return &___U3CAppConfigU3Ek__BackingField_0; }
	inline void set_U3CAppConfigU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CAppConfigU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppConfigU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CClockU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields, ___U3CClockU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CClockU3Ek__BackingField_1() const { return ___U3CClockU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CClockU3Ek__BackingField_1() { return &___U3CClockU3Ek__BackingField_1; }
	inline void set_U3CClockU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CClockU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CClockU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLoggingU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields, ___U3CLoggingU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CLoggingU3Ek__BackingField_2() const { return ___U3CLoggingU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CLoggingU3Ek__BackingField_2() { return &___U3CLoggingU3Ek__BackingField_2; }
	inline void set_U3CLoggingU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CLoggingU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoggingU3Ek__BackingField_2), (void*)value);
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


// Firebase.Database.Internal.Utilities
struct Utilities_tFCCCDE74AACECA783F8C76651F70341F461DD3F7  : public RuntimeObject
{
public:

public:
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

// Firebase.Database.DataSnapshot/DataSnapshotEnumerator
struct DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.DataSnapshot/DataSnapshotEnumerator::internalEnumerator
	RuntimeObject* ___internalEnumerator_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot/DataSnapshotEnumerator::database
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database_1;
	// Firebase.Database.DataSnapshot/DataSnapshotList Firebase.Database.DataSnapshot/DataSnapshotEnumerator::parentList
	DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * ___parentList_2;

public:
	inline static int32_t get_offset_of_internalEnumerator_0() { return static_cast<int32_t>(offsetof(DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D, ___internalEnumerator_0)); }
	inline RuntimeObject* get_internalEnumerator_0() const { return ___internalEnumerator_0; }
	inline RuntimeObject** get_address_of_internalEnumerator_0() { return &___internalEnumerator_0; }
	inline void set_internalEnumerator_0(RuntimeObject* value)
	{
		___internalEnumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalEnumerator_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D, ___database_1)); }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}

	inline static int32_t get_offset_of_parentList_2() { return static_cast<int32_t>(offsetof(DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D, ___parentList_2)); }
	inline DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * get_parentList_2() const { return ___parentList_2; }
	inline DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 ** get_address_of_parentList_2() { return &___parentList_2; }
	inline void set_parentList_2(DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * value)
	{
		___parentList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentList_2), (void*)value);
	}
};


// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerable`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.DataSnapshot/DataSnapshotList::internalList
	RuntimeObject* ___internalList_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot/DataSnapshotList::database
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database_1;

public:
	inline static int32_t get_offset_of_internalList_0() { return static_cast<int32_t>(offsetof(DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842, ___internalList_0)); }
	inline RuntimeObject* get_internalList_0() const { return ___internalList_0; }
	inline RuntimeObject** get_address_of_internalList_0() { return &___internalList_0; }
	inline void set_internalList_0(RuntimeObject* value)
	{
		___internalList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalList_0), (void*)value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842, ___database_1)); }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_1), (void*)value);
	}
};


// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields
{
public:
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___applicationDelegate_0;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___arithmeticDelegate_1;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___divideByZeroDelegate_2;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___indexOutOfRangeDelegate_3;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___invalidCastDelegate_4;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___invalidOperationDelegate_5;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___ioDelegate_6;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___nullReferenceDelegate_7;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___outOfMemoryDelegate_8;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___overflowDelegate_9;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___systemDelegate_10;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * ___argumentDelegate_11;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * ___argumentNullDelegate_12;
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException
struct SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields
{
public:
	// System.Int32 Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;
	// System.Object Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::exceptionsLock
	RuntimeObject * ___exceptionsLock_2;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}

	inline static int32_t get_offset_of_exceptionsLock_2() { return static_cast<int32_t>(offsetof(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields, ___exceptionsLock_2)); }
	inline RuntimeObject * get_exceptionsLock_2() const { return ___exceptionsLock_2; }
	inline RuntimeObject ** get_address_of_exceptionsLock_2() { return &___exceptionsLock_2; }
	inline void set_exceptionsLock_2(RuntimeObject * value)
	{
		___exceptionsLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exceptionsLock_2), (void*)value);
	}
};

struct SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_ThreadStaticFields
{
public:
	// System.Exception Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD_StaticFields
{
public:
	// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Database.DatabaseReference/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A  : public RuntimeObject
{
public:
	// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference/<>c__DisplayClass29_0::<>4__this
	DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> Firebase.Database.DatabaseReference/<>c__DisplayClass29_0::tcs
	TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * ___tcs_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A, ___U3CU3E4__this_0)); }
	inline DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A, ___tcs_1)); }
	inline TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
	}
};


// Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6  : public RuntimeObject
{
public:
	// Firebase.Database.Future_InternalDataSnapshot Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass4_0::fu
	Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass4_0::tcs
	TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6, ___fu_0)); }
	inline Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * get_fu_0() const { return ___fu_0; }
	inline Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fu_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6, ___tcs_1)); }
	inline TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
	}
};


// Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator
struct InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394  : public RuntimeObject
{
public:
	// Firebase.Database.InternalDataSnapshotList Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::collectionRef
	InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * ___collectionRef_0;
	// System.Int32 Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::currentIndex
	int32_t ___currentIndex_1;
	// System.Object Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::currentObject
	RuntimeObject * ___currentObject_2;
	// System.Int32 Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::currentSize
	int32_t ___currentSize_3;

public:
	inline static int32_t get_offset_of_collectionRef_0() { return static_cast<int32_t>(offsetof(InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394, ___collectionRef_0)); }
	inline InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * get_collectionRef_0() const { return ___collectionRef_0; }
	inline InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 ** get_address_of_collectionRef_0() { return &___collectionRef_0; }
	inline void set_collectionRef_0(InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * value)
	{
		___collectionRef_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectionRef_0), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}

	inline static int32_t get_offset_of_currentObject_2() { return static_cast<int32_t>(offsetof(InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394, ___currentObject_2)); }
	inline RuntimeObject * get_currentObject_2() const { return ___currentObject_2; }
	inline RuntimeObject ** get_address_of_currentObject_2() { return &___currentObject_2; }
	inline void set_currentObject_2(RuntimeObject * value)
	{
		___currentObject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentObject_2), (void*)value);
	}

	inline static int32_t get_offset_of_currentSize_3() { return static_cast<int32_t>(offsetof(InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394, ___currentSize_3)); }
	inline int32_t get_currentSize_3() const { return ___currentSize_3; }
	inline int32_t* get_address_of_currentSize_3() { return &___currentSize_3; }
	inline void set_currentSize_3(int32_t value)
	{
		___currentSize_3 = value;
	}
};


// Firebase.Database.Query/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47  : public RuntimeObject
{
public:
	// Firebase.Database.Query Firebase.Database.Query/<>c__DisplayClass21_0::<>4__this
	Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * ___U3CU3E4__this_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot> Firebase.Database.Query/<>c__DisplayClass21_0::tcs
	TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 * ___tcs_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47, ___U3CU3E4__this_0)); }
	inline Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47, ___tcs_1)); }
	inline TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
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


// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.ChildChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ChildChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * ___U3CDatabaseErrorU3Ek__BackingField_2;
	// System.String Firebase.Database.ChildChangedEventArgs::<PreviousChildName>k__BackingField
	String_t* ___U3CPreviousChildNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSnapshotU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50, ___U3CSnapshotU3Ek__BackingField_1)); }
	inline DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * get_U3CSnapshotU3Ek__BackingField_1() const { return ___U3CSnapshotU3Ek__BackingField_1; }
	inline DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 ** get_address_of_U3CSnapshotU3Ek__BackingField_1() { return &___U3CSnapshotU3Ek__BackingField_1; }
	inline void set_U3CSnapshotU3Ek__BackingField_1(DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * value)
	{
		___U3CSnapshotU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSnapshotU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50, ___U3CDatabaseErrorU3Ek__BackingField_2)); }
	inline DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * get_U3CDatabaseErrorU3Ek__BackingField_2() const { return ___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 ** get_address_of_U3CDatabaseErrorU3Ek__BackingField_2() { return &___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline void set_U3CDatabaseErrorU3Ek__BackingField_2(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * value)
	{
		___U3CDatabaseErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseErrorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPreviousChildNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50, ___U3CPreviousChildNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CPreviousChildNameU3Ek__BackingField_3() const { return ___U3CPreviousChildNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CPreviousChildNameU3Ek__BackingField_3() { return &___U3CPreviousChildNameU3Ek__BackingField_3; }
	inline void set_U3CPreviousChildNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CPreviousChildNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPreviousChildNameU3Ek__BackingField_3), (void*)value);
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


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.ValueChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ValueChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * ___U3CDatabaseErrorU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSnapshotU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043, ___U3CSnapshotU3Ek__BackingField_1)); }
	inline DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * get_U3CSnapshotU3Ek__BackingField_1() const { return ___U3CSnapshotU3Ek__BackingField_1; }
	inline DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 ** get_address_of_U3CSnapshotU3Ek__BackingField_1() { return &___U3CSnapshotU3Ek__BackingField_1; }
	inline void set_U3CSnapshotU3Ek__BackingField_1(DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * value)
	{
		___U3CSnapshotU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSnapshotU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDatabaseErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043, ___U3CDatabaseErrorU3Ek__BackingField_2)); }
	inline DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * get_U3CDatabaseErrorU3Ek__BackingField_2() const { return ___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 ** get_address_of_U3CDatabaseErrorU3Ek__BackingField_2() { return &___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline void set_U3CDatabaseErrorU3Ek__BackingField_2(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * value)
	{
		___U3CDatabaseErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseErrorU3Ek__BackingField_2), (void*)value);
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


// Firebase.Database.ChildChangeType
struct ChildChangeType_tC7CFB18EB19C698C73A6DBB787B6BF7EEE7E04E0 
{
public:
	// System.Int32 Firebase.Database.ChildChangeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChildChangeType_tC7CFB18EB19C698C73A6DBB787B6BF7EEE7E04E0, ___value___2)); }
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

// Firebase.Database.Error
struct Error_tB39068F6A2A7301F0F10A67554D08536E4E9E8A3 
{
public:
	// System.Int32 Firebase.Database.Error::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Error_tB39068F6A2A7301F0F10A67554D08536E4E9E8A3, ___value___2)); }
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

// Firebase.FutureStatus
struct FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215 
{
public:
	// System.Int32 Firebase.FutureStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.HandleRef
struct HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
	}
};


// Firebase.InitResult
struct InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194 
{
public:
	// System.Int32 Firebase.InitResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563  : public InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956
{
public:
	// System.Object Firebase.Database.Internal.InternalChildListener::eventLock
	RuntimeObject * ___eventLock_3;
	// Firebase.Database.InternalQuery Firebase.Database.Internal.InternalChildListener::internalQuery
	InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalChildListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalChildListener::database
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database_6;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::cancelledImpl
	EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * ___cancelledImpl_7;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childAddedImpl
	EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * ___childAddedImpl_8;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childChangedImpl
	EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * ___childChangedImpl_9;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childMovedImpl
	EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * ___childMovedImpl_10;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childRemovedImpl
	EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * ___childRemovedImpl_11;

public:
	inline static int32_t get_offset_of_eventLock_3() { return static_cast<int32_t>(offsetof(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563, ___eventLock_3)); }
	inline RuntimeObject * get_eventLock_3() const { return ___eventLock_3; }
	inline RuntimeObject ** get_address_of_eventLock_3() { return &___eventLock_3; }
	inline void set_eventLock_3(RuntimeObject * value)
	{
		___eventLock_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventLock_3), (void*)value);
	}

	inline static int32_t get_offset_of_internalQuery_4() { return static_cast<int32_t>(offsetof(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563, ___internalQuery_4)); }
	inline InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * get_internalQuery_4() const { return ___internalQuery_4; }
	inline InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 ** get_address_of_internalQuery_4() { return &___internalQuery_4; }
	inline void set_internalQuery_4(InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * value)
	{
		___internalQuery_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_4), (void*)value);
	}

	inline static int32_t get_offset_of_cppListener_5() { return static_cast<int32_t>(offsetof(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563, ___cppListener_5)); }
	inline intptr_t get_cppListener_5() const { return ___cppListener_5; }
	inline intptr_t* get_address_of_cppListener_5() { return &___cppListener_5; }
	inline void set_cppListener_5(intptr_t value)
	{
		___cppListener_5 = value;
	}

	inline static int32_t get_offset_of_database_6() { return static_cast<int32_t>(offsetof(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563, ___database_6)); }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * get_database_6() const { return ___database_6; }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 ** get_address_of_database_6() { return &___database_6; }
	inline void set_database_6(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * value)
	{
		___database_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_6), (void*)value);
	}

	inline static int32_t get_offset_of_cancelledImpl_7() { return static_cast<int32_t>(offsetof(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563, ___cancelledImpl_7)); }
	inline EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * get_cancelledImpl_7() const { return ___cancelledImpl_7; }
	inline EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 ** get_address_of_cancelledImpl_7() { return &___cancelledImpl_7; }
	inline void set_cancelledImpl_7(EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * value)
	{
		___cancelledImpl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancelledImpl_7), (void*)value);
	}

	inline static int32_t get_offset_of_childAddedImpl_8() { return static_cast<int32_t>(offsetof(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563, ___childAddedImpl_8)); }
	inline EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * get_childAddedImpl_8() const { return ___childAddedImpl_8; }
	inline EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 ** get_address_of_childAddedImpl_8() { return &___childAddedImpl_8; }
	inline void set_childAddedImpl_8(EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * value)
	{
		___childAddedImpl_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childAddedImpl_8), (void*)value);
	}

	inline static int32_t get_offset_of_childChangedImpl_9() { return static_cast<int32_t>(offsetof(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563, ___childChangedImpl_9)); }
	inline EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * get_childChangedImpl_9() const { return ___childChangedImpl_9; }
	inline EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 ** get_address_of_childChangedImpl_9() { return &___childChangedImpl_9; }
	inline void set_childChangedImpl_9(EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * value)
	{
		___childChangedImpl_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childChangedImpl_9), (void*)value);
	}

	inline static int32_t get_offset_of_childMovedImpl_10() { return static_cast<int32_t>(offsetof(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563, ___childMovedImpl_10)); }
	inline EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * get_childMovedImpl_10() const { return ___childMovedImpl_10; }
	inline EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 ** get_address_of_childMovedImpl_10() { return &___childMovedImpl_10; }
	inline void set_childMovedImpl_10(EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * value)
	{
		___childMovedImpl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childMovedImpl_10), (void*)value);
	}

	inline static int32_t get_offset_of_childRemovedImpl_11() { return static_cast<int32_t>(offsetof(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563, ___childRemovedImpl_11)); }
	inline EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * get_childRemovedImpl_11() const { return ___childRemovedImpl_11; }
	inline EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 ** get_address_of_childRemovedImpl_11() { return &___childRemovedImpl_11; }
	inline void set_childRemovedImpl_11(EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * value)
	{
		___childRemovedImpl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___childRemovedImpl_11), (void*)value);
	}
};


// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D  : public InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956
{
public:
	// System.Object Firebase.Database.Internal.InternalValueListener::eventLock
	RuntimeObject * ___eventLock_3;
	// Firebase.Database.InternalQuery Firebase.Database.Internal.InternalValueListener::internalQuery
	InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalValueListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalValueListener::database
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database_6;
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Internal.InternalValueListener::valueChangedImpl
	EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D * ___valueChangedImpl_7;

public:
	inline static int32_t get_offset_of_eventLock_3() { return static_cast<int32_t>(offsetof(InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D, ___eventLock_3)); }
	inline RuntimeObject * get_eventLock_3() const { return ___eventLock_3; }
	inline RuntimeObject ** get_address_of_eventLock_3() { return &___eventLock_3; }
	inline void set_eventLock_3(RuntimeObject * value)
	{
		___eventLock_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventLock_3), (void*)value);
	}

	inline static int32_t get_offset_of_internalQuery_4() { return static_cast<int32_t>(offsetof(InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D, ___internalQuery_4)); }
	inline InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * get_internalQuery_4() const { return ___internalQuery_4; }
	inline InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 ** get_address_of_internalQuery_4() { return &___internalQuery_4; }
	inline void set_internalQuery_4(InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * value)
	{
		___internalQuery_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalQuery_4), (void*)value);
	}

	inline static int32_t get_offset_of_cppListener_5() { return static_cast<int32_t>(offsetof(InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D, ___cppListener_5)); }
	inline intptr_t get_cppListener_5() const { return ___cppListener_5; }
	inline intptr_t* get_address_of_cppListener_5() { return &___cppListener_5; }
	inline void set_cppListener_5(intptr_t value)
	{
		___cppListener_5 = value;
	}

	inline static int32_t get_offset_of_database_6() { return static_cast<int32_t>(offsetof(InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D, ___database_6)); }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * get_database_6() const { return ___database_6; }
	inline FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 ** get_address_of_database_6() { return &___database_6; }
	inline void set_database_6(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * value)
	{
		___database_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___database_6), (void*)value);
	}

	inline static int32_t get_offset_of_valueChangedImpl_7() { return static_cast<int32_t>(offsetof(InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D, ___valueChangedImpl_7)); }
	inline EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D * get_valueChangedImpl_7() const { return ___valueChangedImpl_7; }
	inline EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D ** get_address_of_valueChangedImpl_7() { return &___valueChangedImpl_7; }
	inline void set_valueChangedImpl_7(EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D * value)
	{
		___valueChangedImpl_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueChangedImpl_7), (void*)value);
	}
};


// Firebase.LogLevel
struct LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200 
{
public:
	// System.Int32 Firebase.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200, ___value___2)); }
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


// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::callbackId
	int32_t ___callbackId_1;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63, ___snapshot_0)); }
	inline intptr_t get_snapshot_0() const { return ___snapshot_0; }
	inline intptr_t* get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(intptr_t value)
	{
		___snapshot_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}
};


// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::callbackId
	int32_t ___callbackId_1;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3, ___snapshot_0)); }
	inline intptr_t get_snapshot_0() const { return ___snapshot_0; }
	inline intptr_t* get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(intptr_t value)
	{
		___snapshot_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}
};


// Firebase.VariantExtension/KeyOptions
struct KeyOptions_tC3DA83A90A6537206BDE298E41A5FA0752D50643 
{
public:
	// System.Int32 Firebase.VariantExtension/KeyOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyOptions_tC3DA83A90A6537206BDE298E41A5FA0752D50643, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
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


// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>
struct Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8, ___m_result_22)); }
	inline InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * get_m_result_22() const { return ___m_result_22; }
	inline InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tC0DB035086E35FB29F13D5B7DA67BEDB17FADC80 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2D1DE00195DD21B665183B1AFF46E788FF395D01 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tC0DB035086E35FB29F13D5B7DA67BEDB17FADC80 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tC0DB035086E35FB29F13D5B7DA67BEDB17FADC80 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tC0DB035086E35FB29F13D5B7DA67BEDB17FADC80 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t2D1DE00195DD21B665183B1AFF46E788FF395D01 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t2D1DE00195DD21B665183B1AFF46E788FF395D01 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t2D1DE00195DD21B665183B1AFF46E788FF395D01 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// Firebase.Database.DatabaseException
struct DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5  : public Exception_t
{
public:

public:
};


// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * ___appPlatform_15;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___AppDisposed_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}

	inline static int32_t get_offset_of_appPlatform_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___appPlatform_15)); }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * get_appPlatform_15() const { return ___appPlatform_15; }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 ** get_address_of_appPlatform_15() { return &___appPlatform_15; }
	inline void set_appPlatform_15(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * value)
	{
		___appPlatform_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appPlatform_15), (void*)value);
	}
};

struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_13;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_14;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThread_13)); }
	inline int32_t get_CheckDependenciesThread_13() const { return ___CheckDependenciesThread_13; }
	inline int32_t* get_address_of_CheckDependenciesThread_13() { return &___CheckDependenciesThread_13; }
	inline void set_CheckDependenciesThread_13(int32_t value)
	{
		___CheckDependenciesThread_13 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThreadLock_14)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_14() const { return ___CheckDependenciesThreadLock_14; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_14() { return &___CheckDependenciesThreadLock_14; }
	inline void set_CheckDependenciesThreadLock_14(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_14), (void*)value);
	}
};


// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47  : public Exception_t
{
public:
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47, ___U3CErrorCodeU3Ek__BackingField_17)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_17() const { return ___U3CErrorCodeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_17() { return &___U3CErrorCodeU3Ek__BackingField_17; }
	inline void set_U3CErrorCodeU3Ek__BackingField_17(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_17 = value;
	}
};


// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.InternalDataSnapshot
struct InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalDataSnapshot::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Database.InternalDataSnapshot::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.InternalDataSnapshotList
struct InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalDataSnapshotList::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Database.InternalDataSnapshotList::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.InternalFirebaseDatabase
struct InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalFirebaseDatabase::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Database.InternalFirebaseDatabase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.InternalQuery
struct InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalQuery::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Database.InternalQuery::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
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

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// Firebase.Variant
struct Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Variant::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Variant::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::snapshot
	intptr_t ___snapshot_0;
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::callbackId
	int32_t ___callbackId_1;
	// Firebase.Database.ChildChangeType Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::changeType
	int32_t ___changeType_2;
	// System.String Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::previousChildName
	String_t* ___previousChildName_3;

public:
	inline static int32_t get_offset_of_snapshot_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D, ___snapshot_0)); }
	inline intptr_t get_snapshot_0() const { return ___snapshot_0; }
	inline intptr_t* get_address_of_snapshot_0() { return &___snapshot_0; }
	inline void set_snapshot_0(intptr_t value)
	{
		___snapshot_0 = value;
	}

	inline static int32_t get_offset_of_callbackId_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D, ___callbackId_1)); }
	inline int32_t get_callbackId_1() const { return ___callbackId_1; }
	inline int32_t* get_address_of_callbackId_1() { return &___callbackId_1; }
	inline void set_callbackId_1(int32_t value)
	{
		___callbackId_1 = value;
	}

	inline static int32_t get_offset_of_changeType_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D, ___changeType_2)); }
	inline int32_t get_changeType_2() const { return ___changeType_2; }
	inline int32_t* get_address_of_changeType_2() { return &___changeType_2; }
	inline void set_changeType_2(int32_t value)
	{
		___changeType_2 = value;
	}

	inline static int32_t get_offset_of_previousChildName_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D, ___previousChildName_3)); }
	inline String_t* get_previousChildName_3() const { return ___previousChildName_3; }
	inline String_t** get_address_of_previousChildName_3() { return &___previousChildName_3; }
	inline void set_previousChildName_3(String_t* value)
	{
		___previousChildName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousChildName_3), (void*)value);
	}
};


// Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::callbackId
	int32_t ___callbackId_0;
	// Firebase.Database.Error Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::error
	int32_t ___error_1;
	// System.String Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_callbackId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1, ___callbackId_0)); }
	inline int32_t get_callbackId_0() const { return ___callbackId_0; }
	inline int32_t* get_address_of_callbackId_0() { return &___callbackId_0; }
	inline void set_callbackId_0(int32_t value)
	{
		___callbackId_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1, ___error_1)); }
	inline int32_t get_error_1() const { return ___error_1; }
	inline int32_t* get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(int32_t value)
	{
		___error_1 = value;
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_2), (void*)value);
	}
};


// Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::callbackId
	int32_t ___callbackId_0;
	// Firebase.Database.Error Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::error
	int32_t ___error_1;
	// System.String Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::msg
	String_t* ___msg_2;

public:
	inline static int32_t get_offset_of_callbackId_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA, ___callbackId_0)); }
	inline int32_t get_callbackId_0() const { return ___callbackId_0; }
	inline int32_t* get_address_of_callbackId_0() { return &___callbackId_0; }
	inline void set_callbackId_0(int32_t value)
	{
		___callbackId_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA, ___error_1)); }
	inline int32_t get_error_1() const { return ___error_1; }
	inline int32_t* get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(int32_t value)
	{
		___error_1 = value;
	}

	inline static int32_t get_offset_of_msg_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA, ___msg_2)); }
	inline String_t* get_msg_2() const { return ___msg_2; }
	inline String_t** get_address_of_msg_2() { return &___msg_2; }
	inline void set_msg_2(String_t* value)
	{
		___msg_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msg_2), (void*)value);
	}
};


// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>>
struct Action_1_tCE1C19381DC6BEF31F7D71195D8B39F6C06AA3EA  : public MulticastDelegate_t
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


// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
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


// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.FutureVoid
struct FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29  : public FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureVoid::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;
	// System.IntPtr Firebase.FutureVoid::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureVoid/SWIG_CompletionDelegate Firebase.FutureVoid::SWIG_CompletionCB
	SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_tB2D099DCC04B71228A5C8BF73BC0D5114A6ACF72 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action> Firebase.FutureVoid::Callbacks
	Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * ___Callbacks_3;
	// System.Int32 Firebase.FutureVoid::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureVoid::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t557E8C31BC4DE893520F2646206D119E00AB340D * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
};


// Firebase.Database.Future_InternalDataSnapshot
struct Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631  : public FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Future_InternalDataSnapshot::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;
	// System.IntPtr Firebase.Database.Future_InternalDataSnapshot::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate Firebase.Database.Future_InternalDataSnapshot::SWIG_CompletionCB
	SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action> Firebase.Database.Future_InternalDataSnapshot::Callbacks
	Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * ___Callbacks_3;
	// System.Int32 Firebase.Database.Future_InternalDataSnapshot::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Database.Future_InternalDataSnapshot::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
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


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Firebase.Database.InternalDatabaseReference
struct InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F  : public InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalDatabaseReference::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}
};


// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Firebase.Database.Future_InternalDataSnapshot/Action
struct Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct OnCancelledDelegate_tD2F9725361BFBCA4F0062E1ACA2070DD2139BC48  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE  : public MulticastDelegate_t
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


// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};


// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_gshared (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_gshared_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D * ___continuationAction0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Query::CheckTaskStatus<System.Boolean>(System.Threading.Tasks.Task,System.Threading.Tasks.TaskCompletionSource`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Query_CheckTaskStatus_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m43FFEDD0E87791905E584A039D5425D07C3A9A16_gshared (Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * ___tcs1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_mBC013C4BFE7F83CEB4DC24476C87B3F5073A00BE_gshared (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, bool ___result0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Query::CheckTaskStatus<System.Object>(System.Threading.Tasks.Task,System.Threading.Tasks.TaskCompletionSource`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool Query_CheckTaskStatus_TisRuntimeObject_m4E4B1B880E63585A3F037040CEC8A151770A4725_gshared (Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * ___tcs1, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);

// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571 (EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_m49315889215BF6BAAAB015D6498A1C5520B5FCB7_inline (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_m695CD84928AEA3ECCD479809D78E1815A907AEBF_inline (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_m58F6B34C441C16D3E00BBF6CC4D7CFF902032A24_inline (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase,Firebase.Database.DataSnapshot,Firebase.Database.DataSnapshot/DataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshot__ctor_mB660250DB002D851FBD983ADA6C1F1DC6A6756DA (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * ___internalSnapshot0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___parentSnapshot2, DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * ___parentList3, const RuntimeMethod* method);
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_GetValue_m125D223DB09656C0DF8AE5EA3D32131583B7C4CB (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, bool ___useExportFormat0, const RuntimeMethod* method);
// System.String Firebase.Database.InternalDataSnapshot::key_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDataSnapshot_key_string_m9C00367E7501B3C94A3158FDD5D8211A6341BE4E (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, const RuntimeMethod* method);
// Firebase.Database.InternalDataSnapshotList Firebase.Database.InternalDataSnapshot::children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * InternalDataSnapshot_children_m57AEDC00FE3AD8915510C9A3122815A192BD9A48 (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.DataSnapshot/DataSnapshotList::.ctor(System.Collections.Generic.IEnumerable`1<Firebase.Database.InternalDataSnapshot>,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshotList__ctor_mA06F4A56E6987296779AE0B4EAFD601E6C0EF265 (DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * __this, RuntimeObject* ___internalList0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, const RuntimeMethod* method);
// Firebase.Database.InternalDataSnapshot Firebase.Database.InternalDataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * InternalDataSnapshot_Child_m67F3A70FFC4277631497FC171098A789DA703F5E (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.InternalDataSnapshot::exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDataSnapshot_exists_m5C218CA0135F3EE6E2C13A232AD181DB5F6D1A6D (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, const RuntimeMethod* method);
// Firebase.Variant Firebase.Database.InternalDataSnapshot::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * InternalDataSnapshot_value_mFE8AAA20E79030AA3D385E55B6B222433C8B3D90 (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, const RuntimeMethod* method);
// System.Object Firebase.VariantExtension::ToObject(Firebase.Variant,Firebase.VariantExtension/KeyOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VariantExtension_ToObject_m977B0559C06BBAC95FA4CDE4B9773A23FDA967C6 (Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * ___variant0, int32_t ___options1, const RuntimeMethod* method);
// System.String MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m1BF1BE5E2D63FAEBD708DA286656B6B0CDB2914F (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_m3D591B0FB8ABFAC8E876D00D74E1E20CFA1EC4CA (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, const RuntimeMethod* method);
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
inline void Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912 (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *, const RuntimeMethod*))Dictionary_2__ctor_mC9E7381F0B0B82E0320B2523835DAFC9CB3D1C8D_gshared)(__this, method);
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Code_mE2894AEF5C0FFC49431C93AEA528795027A32CBC_inline (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Message_m6FAD520028268298D62ED10F2EE7AD88E632EF31_inline (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m61CD1F0F07229466C7FE6E6F28EDEB2E4D969146_inline (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseError_ErrorToCode_m09095DBC82FF8AC41446763671BFF4FA6A7B871E (int32_t ___error0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__ctor_m2B3DA71D81EDDEF7DB85FEA9B3938635F3FF9604 (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const RuntimeMethod* method);
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_mC49A845945958AFFC3DA96E8CBB40E25A42CDB0F_inline (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m0639E25E7CE996689DB5AC51AF59B433BE541E5D (SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m49B52E862F51CA8CC07C4C19427C9752BAF524D4 (SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_mF30B6DED883447335B2E5C109A12FF34131F50E8 (Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * __this, InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * ___internalQuery0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_mC86C9524EBE1CA3A1476D96AE97A273674FDDA86_inline (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___value0, const RuntimeMethod* method);
// Firebase.Database.InternalDatabaseReference Firebase.Database.InternalDatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * InternalDatabaseReference_Child_m3E1DEA65BED90749680AD03C27306F4A365364CB (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * __this, String_t* ___path0, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::get_Database()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * DatabaseReference_get_Database_m50FCB15345968BB0302C9BEBE9BC6F0F2E7A2B2A_inline (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference__ctor_mBA7E76F2D16A878AFC69FCE7BBF0990E0B298936 (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * ___internalRef0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, const RuntimeMethod* method);
// Firebase.Variant Firebase.Database.Internal.Utilities::MakeVariant(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * Utilities_MakeVariant_m78FD4C678C3062393C277EF8DAC3E6E53488DC15 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.Database.InternalDatabaseReference::SetValueAsync(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * InternalDatabaseReference_SetValueAsync_mA52C079A6EAE623FCF32751F3B0CF3FDAEB82321 (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * __this, Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * ___value0, const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::WrapInternalDefaultTask(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * DatabaseReference_WrapInternalDefaultTask_m9FE07D958B3B2F3D7DFFE78F3AA502FA78E75E0B (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___it0, const RuntimeMethod* method);
// System.String Firebase.Database.InternalDatabaseReference::url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDatabaseReference_url_m29A5FBE8B3511B0D030ADE47187979BC2D493548 (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseReference/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_m77AA0DF46DEB7CC95DDB189AE00A6232F54315D3 (U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
inline void TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_gshared)(__this, method);
}
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_ContinueWith_m8540E40049DA1A53066538EBEBC69DE46859748F (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * ___continuationAction0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * (*) (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_gshared_inline)(__this, method);
}
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_mD2C513B185F9D95A2BAE970DE4E5320CF429BDEE_inline (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___value0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::get_App()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseDatabase_get_App_mD2B9084C041946615D4F6451262B6A605308CE1A_inline (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Dispose_mFEC0A2E1F5B49B3BE710B3768AB86FC25640C8A7 (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::Remove(!0)
inline bool Dictionary_2_Remove_mD5FEE5AC0648D2C302CCC39EF5BC7F90715AC902 (Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalFirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Dispose_m9E4C97208FB3BF1CD184D5274E7E83E936D81F03 (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * __this, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_mCB6553E29931B5786C84117FD1DF1ED5A96997A7 (DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 * __this, String_t* ___message0, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * FirebaseDatabase_GetInstance_mA517447881766805100EA0D857F934B440F17BF7 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method);
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::get_AppConfig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_mAE84F30BF7A0A0D522CC280712623B53961FB98D_inline (const RuntimeMethod* method);
// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::get_AppPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * FirebaseApp_get_AppPlatform_m95A32F1D4ECE2C65F4691EE17E4BDF1A57FAED9D (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * FirebaseDatabase_GetInstance_m879569779EF2DCEDEE9A84D158F5612EE5178B92 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___url1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m5C3809989CBDFED551B7AD2AD4D51F8BA31CB424 (Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * __this, String_t* ___key0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B *, String_t*, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Database.InternalFirebaseDatabase Firebase.Database.InternalFirebaseDatabase::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * InternalFirebaseDatabase_GetInstanceInternal_mCCA92290B0FA73967F4644C26B94CA0B94F42060 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method);
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__ctor_m19BE60A6DDA2AA85A1B104AE959EDF39A210590D (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * ___internalDB1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m808A2FE513DA758273FA263FC7C18E9BEDDFD695 (Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * __this, String_t* ___key0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B *, String_t*, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Database.InternalDatabaseReference Firebase.Database.InternalFirebaseDatabase::GetReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * InternalFirebaseDatabase_GetReference_m26765A7909B10D714ACB13A2072C8958FF39A597 (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * __this, const RuntimeMethod* method);
// Firebase.Database.InternalDatabaseReference Firebase.Database.InternalFirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * InternalFirebaseDatabase_GetReference_m0E9DE5A3EB1BF2BA2041F243ED73CDAB074F82AE (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Database.FirebaseDatabase>::.ctor()
inline void Dictionary_2__ctor_m688704AB6A4B311C9E90E949D6E2C593E33EFA72 (Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mE19F622896665D389CA5F0FB04C218E30D432F20 (int32_t ___key0, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIGUpcast_mB53428F0AE01E467306CB9DF5E50E7F9D959F7A5 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Database.Future_InternalDataSnapshot::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetCompletionData_m6F2EE8EF2B403FD0BE336DD4AA32A06D67DDFCA3 (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_Future_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_Future_InternalDataSnapshot_mBBF22882907C49D69048D844FA4B7E1A852BD25E (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_mD92D3FE1E216E3FFBE40723A1F3871452931B2AB (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mBCEF4FC4931F7BDE54FDD0DFDDFF7216042EB73E (U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>::.ctor()
inline void TaskCompletionSource_1__ctor_m1A727AEB2E921734E1AF6583C14D39811A88AD86 (TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m568EEEC2A6E279C708D238BB1040DFDB7883B542 (const RuntimeMethod* method);
// System.Exception Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B (const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_m8FC2983816DD9AE5209C39BA24146BF78D2E8EEC (TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared)(__this, ___exception0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>::get_Task()
inline Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * TaskCompletionSource_1_get_Task_m34FF0C1859AD5931B3C7C5C95E321E34664D84EC_inline (TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * (*) (TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.Database.Future_InternalDataSnapshot/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m62A16BA9085412AE20F03B92D82C7E0762297A77 (Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Future_InternalDataSnapshot::SetOnCompletionCallback(Firebase.Database.Future_InternalDataSnapshot/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetOnCompletionCallback_m1C93B7113C007CE403759ED8BA50161C7EC51647 (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * ___userCompletionCallback0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Firebase.Database.Future_InternalDataSnapshot::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_ThrowIfDisposed_m0E6A88C03BB5D72C91FFCB84CBB15887C3035CC3 (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m3F7B6EC23D0B2484DAF5B6FCF95F7AEEB0332548 (SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>::.ctor()
inline void Dictionary_2__ctor_m6BF2DE04A435D6BB1812DA65DD5CA9939D6358B7 (Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mDE412531F889E98AD656803A3BCE6756259C6A5E (Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * __this, int32_t ___key0, Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 *, int32_t, Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr Firebase.Database.Future_InternalDataSnapshot::SWIG_OnCompletion(Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_InternalDataSnapshot_SWIG_OnCompletion_mF8218FC4ABF3C7CF392241C97E529986D469B7D9 (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method);
// System.Void Firebase.Database.Future_InternalDataSnapshot::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_FreeCompletionData_mEB0B83F435DC864C3C6FEB430976423CC07C08DA (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m4CF117014933DCE17133BDFA19D4A2F8CAA9C8B1 (Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * __this, int32_t ___key0, Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 *, int32_t, Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Future_InternalDataSnapshot/Action>::Remove(!0)
inline bool Dictionary_2_Remove_m29B028351E79C43BDDBFDC7E96C58A3D92185F82 (Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Database.Future_InternalDataSnapshot/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mA76524B80991F76146ACEA8DBC2DF726FEB8725E (Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_OnCompletion_mE078264A3BDE2FE79B834248670F9F9368F6B79D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m39A4FBD546060EFBE93F27BA07BC8D0DC13AB73C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_GetResult_m41A99185E328E879CCB7FE458743FEE9EB63B42B (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot__ctor_mF92765D4F94244010A55F45A200EBF265575ED14 (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildChangeHandler_mBDE792C73BF40FE6349AADD5E427AA19C2C3D912 (int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildRemovedHandler_m6B40D10501F7EDF16427B90B4C2E8325E1BE09A0 (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnCancelledHandler_m912F895AD47CA722E893FF47649B69D546A01440 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalListener_TryGetListener_mBFEF5388C1F3B4C2ACF7F69B3A811FDE2D7CC6DD (int32_t ___uid0, InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 ** ___listener1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m9A6163BC7096A98347E630D88F6818A36EDE99DB (U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m5CA59F064721FFB79E2F9A4D626442836E5DAD35 (U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m356938F37B1BCF2E8A646328A348821F899B0890 (U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_m248FED25D7FF60944702A3F9AA5B7CF1A0C8CB80 (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate__ctor_m9BFDE1F969A02B54181D9A9C1D8380FF6DAC6B6A (OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate__ctor_m7EF292CFC57F57696207C784EB273C31A2A3BC5C (OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterChildListenerCallbacks_m7E198D69EF4A1B0800C04DAE1A38E3B111BF589F (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * ___cancelledCallback0, OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 * ___childChangeCallback1, OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 * ___childRemovedCallback2, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__ctor_m423FF85A9DED9045BD433F9F106EFD58908EA9A8 (InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalQuery::DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyChildListener_m72B64E27AE128C47D1A92C2FA76CC715FC57F167 (intptr_t ___listener0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDataSnapshot_mAF8AD4EAF5489FED98965240C94AE76903B62D72 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_exists(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalDataSnapshot_exists_mDD65B2AAE7FF8FAC4D98F46101B6E41F08846E99 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_Child__SWIG_0_m46F91FA24EB39FF959D08571C895C25DB862CBDD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_children(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_children_m135DB174B5595D2F330D5CD426E1439FEDD5237A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalDataSnapshotList::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshotList__ctor_m7255E5BE3A50B598E8D86850E2AC1DF7DE551AEC (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.String Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDataSnapshot_key_string_m84050AA32B784B87CA324F10EE271ED637B9B7C7 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_value_mDD29D0B6F0CA0A74BF1DDC1C61D0776282D4365A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Variant::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Variant__ctor_mDE4F4CD06BFEFA94C7B3757DAF5EB3F4E10DAD8E (Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDataSnapshotList(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDataSnapshotList_mB428902BF20F0B85DDDF1A45264BF9428DF4B768 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// Firebase.Database.InternalDataSnapshot Firebase.Database.InternalDataSnapshotList::getitem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * InternalDataSnapshotList_getitem_m87D6F513938BB7CD1F1BEFDEA5FB8470964B9127 (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.UInt32 Firebase.Database.InternalDataSnapshotList::size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InternalDataSnapshotList_size_mF348AF43BE83DE0F01DE69739890C0E6537DC890 (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::.ctor(Firebase.Database.InternalDataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshotListEnumerator__ctor_m6E402F6D73419DF654150B8AFA9D7524FF45661C (InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394 * __this, InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * ___collection0, const RuntimeMethod* method);
// System.UInt32 Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshotList_size(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DatabaseInternalPINVOKE_InternalDataSnapshotList_size_m2B0CC2BBB77465488E20139B72AF1D095AD44D4D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshotList_getitem(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshotList_getitem_m54EC61FED9CDAE78D623107D819AEE66FD9B1D9C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, int32_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_SWIGUpcast_m8AB835D2371DDFC216D5EA63DDD8558F0EC547DC (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalQuery::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery__ctor_m06E7FC52DFC486674D05083E2F2919CACDEF1864 (InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDatabaseReference_m26A58A38A119EC7AE51BCCAF7F8F95DA65D8C44D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalQuery::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_m4B5EA38A73AAF8E85A798AF67A0AC7B441689708 (InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalDatabaseReference_is_valid_mA27EC3468769FBD2D9E012E5E1F8A5F0853EC59A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_Child__SWIG_0_mB802C69790EAF96F7C260BF10C80315CB5D54468 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference__ctor_m15DFA4010F4B3D1EE1527AE2816B69E3B72B4AC3 (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Variant::getCPtr(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  Variant_getCPtr_m54D63420C815303499DE5265A30EEE92981C55B3 (Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_SetValue(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_SetValue_mCC77EFCA38107F6F382BDDB90AA50C3CCE62472B (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.FutureVoid::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureVoid__ctor_m1360132BEDC4A7668F93C0D1EB79CE3E28E94597 (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task Firebase.FutureVoid::GetTask(Firebase.FutureVoid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * FutureVoid_GetTask_m99313F8ED4D21B3440FA37F24EDE6206F6B0E3BF (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * ___fu0, const RuntimeMethod* method);
// System.String Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDatabaseReference_url_m7308016C6BD301F03984A1EC35C071A56EB724AD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalFirebaseDatabase::ReleaseReferenceInternal(Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_ReleaseReferenceInternal_m1CCAB6A022685D1A343DC4DB53FF9249024D4CA1 (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * ___instance0, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetReference__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_0_mE8BE3451442CB2AF0E1E208FA7EDE43CE33EA681 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetReference__SWIG_1(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_1_m46AA0EF84954A6E1462A4F373FAD214A6755CF09 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetInstanceInternal_mA864C44E7225756A7C15EF04A2FA5A58E1B904CC (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase__ctor_mC9AA4A14AA26B368210978BCB1D6045D7ACDFE94 (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalFirebaseDatabase::getCPtr(Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  InternalFirebaseDatabase_getCPtr_m1291635A65CCFE4DA1C669C53AAD347E374BBA49 (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalFirebaseDatabase_ReleaseReferenceInternal_m4A5FAD14A1A05211F0DE6BF2B1C9262CC1758CBD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m337EBCDB85CE88EF9528F02A3765E19A781B144B (Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * __this, int32_t ___key0, InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA *, int32_t, InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Dispose_m461C92FFF5573DCE1B525B25F95B097132C190C5 (InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::Remove(!0)
inline bool Dictionary_2_Remove_mF823FE22604103577AE80A422166F179B07F542D (Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::.ctor()
inline void Dictionary_2__ctor_mBD99788D0A921C1C3E4A6063011577145AA8EDE6 (Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalQuery_mAFB106C34F2B9E9C060EB86861A23752E2EE40AE (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_GetValue(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalQuery_GetValue_m3F87843DE884FC353F505FFF72B3766DDD2F74B4 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.Future_InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot__ctor_mED1759432412B6F3DD5369D40C464347800F1C4F (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.Future_InternalDataSnapshot::GetTask(Firebase.Database.Future_InternalDataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * Future_InternalDataSnapshot_GetTask_m43A778E41DB7CF8D9F4DAA62EE52D4009729AD19 (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * ___fu0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalQuery_is_valid_mCBD29015D6DF9C30D2750CC96B30F29FEFE48D91 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyValueListener_m0C20252139C28B18457DFCB40125AF319F3B6346 (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterValueListenerCallbacks_mC055AC1D6F89D25ED5EF36BD8DF883788669B038 (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * ___jarg10, OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E * ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyChildListener_mB4E35A3FF0146121DFE9A85DE1B572E35F20B0DB (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterChildListenerCallbacks_m5E29CDB66C38DA668E956A8BCA26C5431D07712B (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * ___jarg10, OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 * ___jarg21, OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 * ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnValueChangedHandler_m571D69CFF81F3FA73F99FEEAA6182A5B4FECB764 (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnCancelledHandler_m55900F903CEB556A46B6EE6CE80815EDBD859E42 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m05666CC59A24AF23CA045FD875166DB8435A4B12 (U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3 * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m5DF749C18F8CEAF293473504E5BEBAF21A1D85F9 (U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA * __this, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m66B488EAEA1427C813122ABAAE8DEB737CD915D8 (OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterValueListenerCallbacks_m994FF83CBBDAB548707F22662D6A579E550D5214 (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * ___cancelledCallback0, OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E * ___valueChangedCallback1, const RuntimeMethod* method);
// System.Void Firebase.Database.InternalQuery::DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyValueListener_m190B2DBAB88DB56CB9422A0EB78C703A1A2FB463 (intptr_t ___listener0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__ctor_mE3B7A89FB687412C8E175BD047C98E285E2AA919 (InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * __this, InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * ___internalQuery0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__ctor_m967B83F56D03CCF9485ACD1D0E31C6136BB9BA48 (InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * __this, InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * ___internalQuery0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.Query/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m2AB5A229989D6FAE0040C9AEA8617EC5AAC64293 (U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::.ctor()
inline void TaskCompletionSource_1__ctor_mD2690383B5E12BFCFC8D7ACFB946E0EBC62C595C (TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E2949322DD0B5CA09946453EDEA10FE26508B65 (Action_1_tCE1C19381DC6BEF31F7D71195D8B39F6C06AA3EA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE1C19381DC6BEF31F7D71195D8B39F6C06AA3EA *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_mECEBF9332ADD0020C97831C5FB5314D05D0B795B (Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * __this, Action_1_tCE1C19381DC6BEF31F7D71195D8B39F6C06AA3EA * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 *, Action_1_tCE1C19381DC6BEF31F7D71195D8B39F6C06AA3EA *, const RuntimeMethod*))Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared)(__this, ___continuationAction0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::get_Task()
inline Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * TaskCompletionSource_1_get_Task_m670317C332B7F3BF1C2645DD4AE0FF160B5EE11E_inline (TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * (*) (TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.InternalQuery::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * InternalQuery_GetValueAsync_m67CCCD62C74D362D9821C2BF3EF66F724FD2C3D2 (InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::WrapInternalDataSnapshotTask(System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * Query_WrapInternalDataSnapshotTask_mE907B66BA90C5E64B5662C87DAD23575C9A09F66 (Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * __this, Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * ___it0, const RuntimeMethod* method);
// Firebase.Variant Firebase.Variant::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * Variant_FromObject_mE58A1F66819C8CD004C2BF52AFE4F19985597EF7 (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_m781AE6C22FF3B1DA68B293ABE9A6F948C3AB7FF9 (DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 * __this, String_t* ___message0, Exception_t * ___cause1, const RuntimeMethod* method);
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_mF61362820ACDD111A1ABA52AA9D13A44868405D3_inline (ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * __this, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_mB5FB47A69517C6163CB9B6206394D3339DA19DCA_inline (ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * __this, DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * ___value0, const RuntimeMethod* method);
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase,Firebase.Database.DataSnapshot/DataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * DataSnapshot_CreateSnapshot_mB241FF440F36F65554C9648FC2BF22F2967E5D5F (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * ___internalSnapshot0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * ___list2, const RuntimeMethod* method);
// System.Void Firebase.Database.DataSnapshot/DataSnapshotEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<Firebase.Database.InternalDataSnapshot>,Firebase.Database.FirebaseDatabase,Firebase.Database.DataSnapshot/DataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshotEnumerator__ctor_mDFDADE3FA29C564B9A79E9F787E2642047909B9D (DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D * __this, RuntimeObject* ___internalEnumerator0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * ___parentList2, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m377BB2DE45F30DA21083EE753BDEC79D9212FDF4 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m73E8A430BD4C1D04462AE032F1C323AEE1457E05 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m91D8C7C04B791E2E1EECBCE2ECCC8939D0225D8E (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFC1CF3FCDF68EE5E1E89CCD3518D487C8B23477F (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m6014336D1D32DC06743EFA93E791111E0642DA29 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m72F773E470EC582CFF080D0C9B82FD34577C184F (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m836485F3142C00D31F0A6788A244F9F18020633C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m487720C91262230563DC3EEFF69447A5A1A01B9D (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mDC148D80E05DB75259C36706BBCA8AA7160B1971 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m1B13BAED239B9E719AB2DDFD018F0BDD7F0E702F (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m1DD3FFA06F12A427AB91DC9E0AA0FE12FB041A3C (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m70A9D4FE95EB40ED67FA3871D2793E5A4161B2E9 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m42C6E4D09BA80136DE63B08F1E82540A4E06A2FC (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m560F02541BE4AA13B7F181EDC45D7EAFDD9EA2FE (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17 (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918 (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0 (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14 (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94 (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80 (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m678EE07B2B9CA7EF0472BCF865AB33613DF6908D (ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_mB9E7871FCEEA2634DB32B29C7517B5235E2B1E6A (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___applicationDelegate0, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___arithmeticDelegate1, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___divideByZeroDelegate2, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___indexOutOfRangeDelegate3, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___invalidCastDelegate4, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___invalidOperationDelegate5, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___ioDelegate6, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___nullReferenceDelegate7, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___outOfMemoryDelegate8, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___overflowDelegate9, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m62724F93E01C642A503F9A4185AAE5DB4EC5844D (ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * ___argumentDelegate0, ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * ___argumentNullDelegate1, ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.String Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mD7B98AEEC7A5A719A8BB07FEE5C67BE34F619E27 (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mF891F49ADA609183011C8467F08CF8021FFDC873 (SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m6377EAA3A11812D564076D229291FF7D9A4670EB (SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * ___stringDelegate0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Query::CheckTaskStatus<System.Boolean>(System.Threading.Tasks.Task,System.Threading.Tasks.TaskCompletionSource`1<TResult>)
inline bool Query_CheckTaskStatus_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m43FFEDD0E87791905E584A039D5425D07C3A9A16 (Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * ___tcs1, const RuntimeMethod* method)
{
	return ((  bool (*) (Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, const RuntimeMethod*))Query_CheckTaskStatus_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m43FFEDD0E87791905E584A039D5425D07C3A9A16_gshared)(__this, ___task0, ___tcs1, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_mBC013C4BFE7F83CEB4DC24476C87B3F5073A00BE (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, bool ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *, bool, const RuntimeMethod*))TaskCompletionSource_1_SetResult_mBC013C4BFE7F83CEB4DC24476C87B3F5073A00BE_gshared)(__this, ___result0, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_m6CC6A7E5B7DB013A630F6BEB56AB8A005E8F5E70 (TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared)(__this, method);
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// Firebase.Database.InternalDataSnapshot Firebase.Database.Future_InternalDataSnapshot::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * Future_InternalDataSnapshot_GetResult_m28E25B2824136D3A2EA1E2A4530B8012DF9E7721 (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.InternalDataSnapshot>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_m67B5A56DA662996813023DC1BAA8AB7C175A1D6B (TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * __this, InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 *, InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared)(__this, ___result0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_TryGetListener_m10931CAF61F39B1466F678431424C6008E05E54B (int32_t ___callbackId0, InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 ** ___childListener1, const RuntimeMethod* method);
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * DataSnapshot_CreateSnapshot_mFBA4A179D82E0F8BB52717D8BA89784729C65607 (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * ___internalSnapshot0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m64AE25C26D39720A7BCDAEB75EAC125A0E8AA723 (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___snapshot0, String_t* ___previousChildName1, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m404986A754EF91DBA5BAC3F22B924FD6C7C05A29 (EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * __this, RuntimeObject * ___sender0, ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 *, RuntimeObject *, ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Database.InternalDataSnapshot::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Dispose_mE9F953EAF050A4B713E2A518924BA6B58091AE9F (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, const RuntimeMethod* method);
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * DatabaseError_FromError_m4715BD4DE9F080CA1E87153311CABA2EC11D24D8 (int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method);
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m81FF0736EFD59D579A701F63E11B7B16A026C059 (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * ___error0, const RuntimeMethod* method);
// System.Int32 Firebase.Database.InternalDataSnapshotList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalDataSnapshotList_get_Count_mAACCA81021AC06F88E30F7D58D4D1F54DD8733C4 (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// Firebase.Database.InternalDataSnapshot Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * InternalDataSnapshotListEnumerator_get_Current_mA325E4029226CDF1DA2F9052E59F77CFDCD63100 (InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394 * __this, const RuntimeMethod* method);
// Firebase.Database.InternalDataSnapshot Firebase.Database.InternalDataSnapshotList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * InternalDataSnapshotList_get_Item_mCB4A1EA3BA4CADBBE3F7B58F5E7D833773F00CFE (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_TryGetListener_m738D37323C40BE7FCFE4BA9148AC752C8FCD053A (int32_t ___callbackId0, InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D ** ___valueListener1, const RuntimeMethod* method);
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m1198F269D02216F4D7E807302458CE7409A8D65F (ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * __this, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___snapshot0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m0A38C6E82462B13F17E7427AE3A31706196F0781 (EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D * __this, RuntimeObject * ___sender0, ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D *, RuntimeObject *, ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_mD23C8AE84228CF5D3EDFCE06DFD2C5C8D1B1A9EE (ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * __this, DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * ___error0, const RuntimeMethod* method);
// System.Boolean Firebase.Database.Query::CheckTaskStatus<Firebase.Database.DataSnapshot>(System.Threading.Tasks.Task,System.Threading.Tasks.TaskCompletionSource`1<TResult>)
inline bool Query_CheckTaskStatus_TisDataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_mF5820C37BB0F183F642971D1E8B8199CE4DE85DD (Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 * ___tcs1, const RuntimeMethod* method)
{
	return ((  bool (*) (Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE *, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 *, const RuntimeMethod*))Query_CheckTaskStatus_TisRuntimeObject_m4E4B1B880E63585A3F037040CEC8A151770A4725_gshared)(__this, ___task0, ___tcs1, method);
}
// !0 System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>::get_Result()
inline InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * Task_1_get_Result_m5FC15BDAA9347B29157C9422BDDB82367633B1B6 (Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * __this, const RuntimeMethod* method)
{
	return ((  InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * (*) (Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 *, const RuntimeMethod*))Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_mEC988034F1874D898632EF3B350F4BD850C2A7E1 (TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 * __this, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 *, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared)(__this, ___result0, method);
}
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_FreeCompletionData(void*, intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_Future_InternalDataSnapshot_GetResult(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_Future_InternalDataSnapshot(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C uint32_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshotList_size(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshotList_getitem(void*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalDataSnapshotList(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_0(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_1(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_GetInstanceInternal(void*, char*, int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalFirebaseDatabase_ReleaseReferenceInternal(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalDataSnapshot(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_exists(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_Child__SWIG_0(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_children(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_key_string(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDataSnapshot_value(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalQuery(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_GetValue(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_is_valid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_DestroyValueListener(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_RegisterValueListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_DestroyChildListener(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_InternalQuery_RegisterChildListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Database_CSharp_delete_InternalDatabaseReference(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_is_valid(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_Child__SWIG_0(void*, char*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_SetValue(void*, void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_url(void*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Database_CSharp_InternalDatabaseReference_SWIGUpcast(intptr_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionArgumentCallbacks_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_DatabaseInternal(Il2CppMethodPointer);
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
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m64AE25C26D39720A7BCDAEB75EAC125A0E8AA723 (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___snapshot0, String_t* ___previousChildName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___previousChildName1;
		ChildChangedEventArgs_set_PreviousChildName_m49315889215BF6BAAAB015D6498A1C5520B5FCB7_inline(__this, L_0, /*hidden argument*/NULL);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_1 = ___snapshot0;
		ChildChangedEventArgs_set_Snapshot_m695CD84928AEA3ECCD479809D78E1815A907AEBF_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs__ctor_m81FF0736EFD59D579A701F63E11B7B16A026C059 (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * L_0 = ___error0;
		ChildChangedEventArgs_set_DatabaseError_m58F6B34C441C16D3E00BBF6CC4D7CFF902032A24_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_m695CD84928AEA3ECCD479809D78E1815A907AEBF (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_m58F6B34C441C16D3E00BBF6CC4D7CFF902032A24 (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_m49315889215BF6BAAAB015D6498A1C5520B5FCB7 (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPreviousChildNameU3Ek__BackingField_3(L_0);
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
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase,Firebase.Database.DataSnapshot,Firebase.Database.DataSnapshot/DataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshot__ctor_mB660250DB002D851FBD983ADA6C1F1DC6A6756DA (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * ___internalSnapshot0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___parentSnapshot2, DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * ___parentList3, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_0 = ___internalSnapshot0;
		__this->set_internalSnapshot_0(L_0);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_1 = ___database1;
		__this->set_database_1(L_1);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_2 = ___parentSnapshot2;
		__this->set_parentSnapshot_2(L_2);
		DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * L_3 = ___parentList3;
		__this->set_parentList_3(L_3);
		return;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * DataSnapshot_CreateSnapshot_mFBA4A179D82E0F8BB52717D8BA89784729C65607 (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * ___internalSnapshot0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * V_0 = NULL;
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_0 = ___internalSnapshot0;
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_1 = ___database1;
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_2 = (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 *)il2cpp_codegen_object_new(DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_il2cpp_TypeInfo_var);
		DataSnapshot__ctor_mB660250DB002D851FBD983ADA6C1F1DC6A6756DA(L_2, L_0, L_1, (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 *)NULL, (DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_3 = V_0;
		return L_3;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.InternalDataSnapshot,Firebase.Database.FirebaseDatabase,Firebase.Database.DataSnapshot/DataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * DataSnapshot_CreateSnapshot_mB241FF440F36F65554C9648FC2BF22F2967E5D5F (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * ___internalSnapshot0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * ___list2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * V_0 = NULL;
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_0 = ___internalSnapshot0;
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_1 = ___database1;
		DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * L_2 = ___list2;
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_3 = (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 *)il2cpp_codegen_object_new(DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_il2cpp_TypeInfo_var);
		DataSnapshot__ctor_mB660250DB002D851FBD983ADA6C1F1DC6A6756DA(L_3, L_0, L_1, (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 *)NULL, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_4 = V_0;
		return L_4;
	}
}
// System.Object Firebase.Database.DataSnapshot::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0;
		L_0 = DataSnapshot_GetValue_m125D223DB09656C0DF8AE5EA3D32131583B7C4CB(__this, (bool)0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.String Firebase.Database.DataSnapshot::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_get_Key_m3D591B0FB8ABFAC8E876D00D74E1E20CFA1EC4CA (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InternalDataSnapshot_key_string_m9C00367E7501B3C94A3158FDD5D8211A6341BE4E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot> Firebase.Database.DataSnapshot::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshot_get_Children_m2E3B643ECF42F6F08D38F2666E81E89F797489CC (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * L_1;
		L_1 = InternalDataSnapshot_children_m57AEDC00FE3AD8915510C9A3122815A192BD9A48(L_0, /*hidden argument*/NULL);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_2 = __this->get_database_1();
		DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * L_3 = (DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 *)il2cpp_codegen_object_new(DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842_il2cpp_TypeInfo_var);
		DataSnapshotList__ctor_mA06F4A56E6987296779AE0B4EAFD601E6C0EF265(L_3, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * DataSnapshot_Child_mB06DEF2F4B31DA864DE9D422B28CDAE7F666034E (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * V_0 = NULL;
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_0 = __this->get_internalSnapshot_0();
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_2;
		L_2 = InternalDataSnapshot_Child_m67F3A70FFC4277631497FC171098A789DA703F5E(L_0, L_1, /*hidden argument*/NULL);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_3 = __this->get_database_1();
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_4 = (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 *)il2cpp_codegen_object_new(DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_il2cpp_TypeInfo_var);
		DataSnapshot__ctor_mB660250DB002D851FBD983ADA6C1F1DC6A6756DA(L_4, L_2, L_3, __this, (DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 *)NULL, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_5 = V_0;
		return L_5;
	}
}
// System.String Firebase.Database.DataSnapshot::GetRawJsonValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_GetRawJsonValue_mE0A3B5759191BD7947B7E8F25BEA7CDD7BB4D301 (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InternalDataSnapshot_exists_m5C218CA0135F3EE6E2C13A232AD181DB5F6D1A6D(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		V_1 = (String_t*)NULL;
		goto IL_0031;
	}

IL_0018:
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_3 = __this->get_internalSnapshot_0();
		NullCheck(L_3);
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_4;
		L_4 = InternalDataSnapshot_value_mFE8AAA20E79030AA3D385E55B6B222433C8B3D90(L_3, /*hidden argument*/NULL);
		RuntimeObject * L_5;
		L_5 = VariantExtension_ToObject_m977B0559C06BBAC95FA4CDE4B9773A23FDA967C6(L_4, 1, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = Json_Serialize_m1BF1BE5E2D63FAEBD708DA286656B6B0CDB2914F(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		goto IL_0031;
	}

IL_0031:
	{
		String_t* L_7 = V_1;
		return L_7;
	}
}
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshot_GetValue_m125D223DB09656C0DF8AE5EA3D32131583B7C4CB (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, bool ___useExportFormat0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_1;
		L_1 = InternalDataSnapshot_value_mFE8AAA20E79030AA3D385E55B6B222433C8B3D90(L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2;
		L_2 = VariantExtension_ToObject_m977B0559C06BBAC95FA4CDE4B9773A23FDA967C6(L_1, 1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject * L_3 = V_0;
		return L_3;
	}
}
// System.String Firebase.Database.DataSnapshot::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataSnapshot_ToString_m659A7C390246A5E4055FD1ED1BA254C8B03234B0 (DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject * G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	RuntimeObject * G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral574D4F4FA47FACD0AB8D24AF1E018B029160B79D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		String_t* L_3;
		L_3 = DataSnapshot_get_Key_m3D591B0FB8ABFAC8E876D00D74E1E20CFA1EC4CA(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral39CDEA6B946A8A860CA9A58EB2AEF44708FC2201);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_5 = L_4;
		RuntimeObject * L_6;
		L_6 = DataSnapshot_get_Value_m7F7C1E83D513F3E537030B4ACA0BFC4BF1E9BC2D(__this, /*hidden argument*/NULL);
		RuntimeObject * L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = 3;
		G_B1_2 = L_5;
		G_B1_3 = L_5;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = 3;
			G_B2_2 = L_5;
			G_B2_3 = L_5;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0034;
	}

IL_002f:
	{
		NullCheck(G_B2_0);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0034:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = G_B3_3;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralCB9DEC4BB422E4FB7D60AF8B79864395C4E9AF83);
		String_t* L_10;
		L_10 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		goto IL_0045;
	}

IL_0045:
	{
		String_t* L_11 = V_0;
		return L_11;
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
// System.Void Firebase.Database.DatabaseError::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__cctor_m4D09773599D6A8AAF2BB7449B17B310763E02C07 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F6206E2208D9F6410179E3B8BEA2DB7DD451983);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral161BB2E376DAB7BB196FA3BA56AF5F032401EDD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19F36D351EC83FFF1DD0BF540F6C887240DF749A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25E3F07BC8A8E84E64CBFD59A39E44732195DF1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3510EE6CB670F44AE899467FD7C9F95DEEAD6A2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A25CDFF086AD2E7778FDE479EEAF3DE21276E5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C76C42E2293FDE8901D3D0BD00FBAEFFA8F224A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44786FF8D3D7A6BB34E47B8522E7CD903A39C81C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D6EFB72BB23F4AB919B7E784E88CE1219260B7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B52714C530B7F06A491E0453548C103378B3C0C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62C3AC56F06281AA1091C7F369E54BD4F40ABCAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64D2CA5C491D2FD76E0C36ED2AFE1E4EF5CB4AC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8225BFBF19631D0C7DACACD3525BFCCACD852480);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96BAF0A0FD737C639C25139F7FF80E71EF03CC92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96BD8930E546DA8CF5E3CC8102CFF21E735B8CE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA430994825FFBD84C878DC4A3DE93644DAB6DC50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFBF46A4D1C5554966D208EBCB0AC7CF2297C3F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5E66B27E692259462C04D33AEF1271A6B5FC8D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC24BCEEB1EA72D694B1BED364734C5C838BE1FC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBF0B4029A0C9D8FAAC8C952057ED4B638E435A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2EE2E00A733D8F7B0857F92D87975D56CEE7145);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD3238FA21BFDF2546D17BB7E9E29EB72294946C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB * L_0 = (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB *)il2cpp_codegen_object_new(Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E(L_0, /*hidden argument*/Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E_RuntimeMethod_var);
		((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->set_ErrorReasons_13(L_0);
		Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * L_1 = (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *)il2cpp_codegen_object_new(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912(L_1, /*hidden argument*/Dictionary_2__ctor_mE1EA1831B6EF3BA9C2F807622B58DA3A0605B912_RuntimeMethod_var);
		((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->set_ErrorCodes_14(L_1);
		RuntimeObject* L_2 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_2, (-1), _stringLiteralC24BCEEB1EA72D694B1BED364734C5C838BE1FC9);
		RuntimeObject* L_3 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_3);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_3, ((int32_t)-2), _stringLiteral64D2CA5C491D2FD76E0C36ED2AFE1E4EF5CB4AC3);
		RuntimeObject* L_4 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_4);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_4, ((int32_t)-3), _stringLiteral161BB2E376DAB7BB196FA3BA56AF5F032401EDD2);
		RuntimeObject* L_5 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_5);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_5, ((int32_t)-4), _stringLiteralF2EE2E00A733D8F7B0857F92D87975D56CEE7145);
		RuntimeObject* L_6 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_6);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_6, ((int32_t)-6), _stringLiteralFD3238FA21BFDF2546D17BB7E9E29EB72294946C);
		RuntimeObject* L_7 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_7);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_7, ((int32_t)-7), _stringLiteral96BD8930E546DA8CF5E3CC8102CFF21E735B8CE5);
		RuntimeObject* L_8 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_8);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_8, ((int32_t)-8), _stringLiteral3A25CDFF086AD2E7778FDE479EEAF3DE21276E5C);
		RuntimeObject* L_9 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_9, ((int32_t)-9), _stringLiteral4D6EFB72BB23F4AB919B7E784E88CE1219260B7D);
		RuntimeObject* L_10 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_10, ((int32_t)-10), _stringLiteral8225BFBF19631D0C7DACACD3525BFCCACD852480);
		RuntimeObject* L_11 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_11, ((int32_t)-11), _stringLiteral62C3AC56F06281AA1091C7F369E54BD4F40ABCAD);
		RuntimeObject* L_12 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_12, ((int32_t)-24), _stringLiteralAFBF46A4D1C5554966D208EBCB0AC7CF2297C3F4);
		RuntimeObject* L_13 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_13);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_13, ((int32_t)-25), _stringLiteral25E3F07BC8A8E84E64CBFD59A39E44732195DF1B);
		RuntimeObject* L_14 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_14);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_14, ((int32_t)-999), _stringLiteral44786FF8D3D7A6BB34E47B8522E7CD903A39C81C);
		RuntimeObject* L_15 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_15);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_15, _stringLiteral3510EE6CB670F44AE899467FD7C9F95DEEAD6A2C, (-1));
		RuntimeObject* L_16 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_16, _stringLiteral1E3DB61522C4E7AA1D5A216FFA2CA92BAFA2EBF1, ((int32_t)-2));
		RuntimeObject* L_17 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_17);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_17, _stringLiteral19F36D351EC83FFF1DD0BF540F6C887240DF749A, ((int32_t)-3));
		RuntimeObject* L_18 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_18, _stringLiteral5B52714C530B7F06A491E0453548C103378B3C0C, ((int32_t)-4));
		RuntimeObject* L_19 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_19, _stringLiteral0F6206E2208D9F6410179E3B8BEA2DB7DD451983, ((int32_t)-6));
		RuntimeObject* L_20 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_20, _stringLiteralDBF0B4029A0C9D8FAAC8C952057ED4B638E435A5, ((int32_t)-7));
		RuntimeObject* L_21 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_21, _stringLiteralA430994825FFBD84C878DC4A3DE93644DAB6DC50, ((int32_t)-8));
		RuntimeObject* L_22 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_22, _stringLiteral3C76C42E2293FDE8901D3D0BD00FBAEFFA8F224A, ((int32_t)-9));
		RuntimeObject* L_23 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_23);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_23, _stringLiteral25A6C8E3033AB7B31F1A36176973EBF46D6AA102, ((int32_t)-10));
		RuntimeObject* L_24 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_24);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_24, _stringLiteral96BAF0A0FD737C639C25139F7FF80E71EF03CC92, ((int32_t)-24));
		RuntimeObject* L_25 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_25);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_tB2BA32920A64A34C26C09922B355F2ED14D11205_il2cpp_TypeInfo_var, L_25, _stringLiteralB5E66B27E692259462C04D33AEF1271A6B5FC8D3, ((int32_t)-25));
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError__ctor_m2B3DA71D81EDDEF7DB85FEA9B3938635F3FF9604 (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * G_B2_0 = NULL;
	DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * G_B3_1 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___code0;
		DatabaseError_set_Code_mE2894AEF5C0FFC49431C93AEA528795027A32CBC_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		DatabaseError_set_Message_m6FAD520028268298D62ED10F2EE7AD88E632EF31_inline(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___details2;
		G_B1_0 = __this;
		if (!L_2)
		{
			G_B2_0 = __this;
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = ___details2;
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0024;
	}

IL_001f:
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0024:
	{
		NullCheck(G_B3_1);
		DatabaseError_set_Details_m61CD1F0F07229466C7FE6E6F28EDEB2E4D969146_inline(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Code_mE2894AEF5C0FFC49431C93AEA528795027A32CBC (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.String Firebase.Database.DatabaseError::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_mC49A845945958AFFC3DA96E8CBB40E25A42CDB0F (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Message_m6FAD520028268298D62ED10F2EE7AD88E632EF31 (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m61CD1F0F07229466C7FE6E6F28EDEB2E4D969146 (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDetailsU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Error)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseError_ErrorToCode_m09095DBC82FF8AC41446763671BFF4FA6A7B871E (int32_t ___error0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___error0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_004c;
			}
			case 2:
			{
				goto IL_0051;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_005b;
			}
			case 5:
			{
				goto IL_0060;
			}
			case 6:
			{
				goto IL_0065;
			}
			case 7:
			{
				goto IL_006a;
			}
			case 8:
			{
				goto IL_006f;
			}
			case 9:
			{
				goto IL_0074;
			}
			case 10:
			{
				goto IL_007c;
			}
			case 11:
			{
				goto IL_0081;
			}
			case 12:
			{
				goto IL_0081;
			}
			case 13:
			{
				goto IL_0081;
			}
		}
	}
	{
		goto IL_0081;
	}

IL_0047:
	{
		V_2 = ((int32_t)-4);
		goto IL_0089;
	}

IL_004c:
	{
		V_2 = ((int32_t)-6);
		goto IL_0089;
	}

IL_0051:
	{
		V_2 = ((int32_t)-7);
		goto IL_0089;
	}

IL_0056:
	{
		V_2 = ((int32_t)-8);
		goto IL_0089;
	}

IL_005b:
	{
		V_2 = ((int32_t)-24);
		goto IL_0089;
	}

IL_0060:
	{
		V_2 = ((int32_t)-2);
		goto IL_0089;
	}

IL_0065:
	{
		V_2 = ((int32_t)-9);
		goto IL_0089;
	}

IL_006a:
	{
		V_2 = ((int32_t)-3);
		goto IL_0089;
	}

IL_006f:
	{
		V_2 = ((int32_t)-10);
		goto IL_0089;
	}

IL_0074:
	{
		V_2 = ((int32_t)-999);
		goto IL_0089;
	}

IL_007c:
	{
		V_2 = ((int32_t)-25);
		goto IL_0089;
	}

IL_0081:
	{
		V_2 = ((int32_t)-999);
		goto IL_0089;
	}

IL_0089:
	{
		int32_t L_3 = V_2;
		return L_3;
	}
}
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * DatabaseError_FromError_m4715BD4DE9F080CA1E87153311CABA2EC11D24D8 (int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * V_2 = NULL;
	String_t* G_B4_0 = NULL;
	{
		int32_t L_0 = ___error0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DatabaseError_ErrorToCode_m09095DBC82FF8AC41446763671BFF4FA6A7B871E(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___msg1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_3 = ___msg1;
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_5 = ___msg1;
		G_B4_0 = L_5;
		goto IL_0026;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.String>::get_Item(!0) */, IDictionary_2_tB4E97D5B9CF7274B9297433145AC382F20ACCF14_il2cpp_TypeInfo_var, L_6, L_7);
		G_B4_0 = L_8;
	}

IL_0026:
	{
		V_1 = G_B4_0;
		int32_t L_9 = V_0;
		String_t* L_10 = V_1;
		DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * L_11 = (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 *)il2cpp_codegen_object_new(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var);
		DatabaseError__ctor_m2B3DA71D81EDDEF7DB85FEA9B3938635F3FF9604(L_11, L_9, L_10, (String_t*)NULL, /*hidden argument*/NULL);
		V_2 = L_11;
		goto IL_0032;
	}

IL_0032:
	{
		DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * L_12 = V_2;
		return L_12;
	}
}
// System.String Firebase.Database.DatabaseError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseError_ToString_m6C49B9744293A2632FF46BDACAD295808F689762 (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E1C42D303CEBFBB8A6EE62A43AC623CFA8EF06A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = DatabaseError_get_Message_mC49A845945958AFFC3DA96E8CBB40E25A42CDB0F_inline(__this, /*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral7E1C42D303CEBFBB8A6EE62A43AC623CFA8EF06A, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0014;
	}

IL_0014:
	{
		String_t* L_2 = V_0;
		return L_2;
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
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_mCB6553E29931B5786C84117FD1DF1ED5A96997A7 (DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseException__ctor_m781AE6C22FF3B1DA68B293ABE9A6F948C3AB7FF9 (DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 * __this, String_t* ___message0, Exception_t * ___cause1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___cause1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.DatabaseInternalPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE__cctor_m626BE7A8DAA25F5DE4AF15FFE231046CFBE9D62A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3 * L_0 = (SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3 *)il2cpp_codegen_object_new(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m0639E25E7CE996689DB5AC51AF59B433BE541E5D(L_0, /*hidden argument*/NULL);
		((DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD * L_1 = (SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD *)il2cpp_codegen_object_new(SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m49B52E862F51CA8CC07C4C19427C9752BAF524D4(L_1, /*hidden argument*/NULL);
		((DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_OnCompletion_mE078264A3BDE2FE79B834248670F9F9368F6B79D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_OnCompletion", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#endif

	return returnValue;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m39A4FBD546060EFBE93F27BA07BC8D0DC13AB73C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_FreeCompletionData", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_GetResult_m41A99185E328E879CCB7FE458743FEE9EB63B42B (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_Future_InternalDataSnapshot_GetResult", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_Future_InternalDataSnapshot_GetResult)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_Future_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_Future_InternalDataSnapshot_mBBF22882907C49D69048D844FA4B7E1A852BD25E (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_delete_Future_InternalDataSnapshot", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_Future_InternalDataSnapshot)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.UInt32 Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshotList_size(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t DatabaseInternalPINVOKE_InternalDataSnapshotList_size_m2B0CC2BBB77465488E20139B72AF1D095AD44D4D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalDataSnapshotList_size", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshotList_size)(____jarg10_marshaled);
	#else
	uint32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshotList_getitem(System.Runtime.InteropServices.HandleRef,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshotList_getitem_m54EC61FED9CDAE78D623107D819AEE66FD9B1D9C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, int32_t ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalDataSnapshotList_getitem", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshotList_getitem)(____jarg10_marshaled, ___jarg21);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ___jarg21);
	#endif

	return returnValue;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDataSnapshotList(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDataSnapshotList_mB428902BF20F0B85DDDF1A45264BF9428DF4B768 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_delete_InternalDataSnapshotList", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalDataSnapshotList)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetReference__SWIG_0(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_0_mE8BE3451442CB2AF0E1E208FA7EDE43CE33EA681 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_0)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetReference__SWIG_1(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_1_m46AA0EF84954A6E1462A4F373FAD214A6755CF09 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_1", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_GetReference__SWIG_1)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetInstanceInternal_mA864C44E7225756A7C15EF04A2FA5A58E1B904CC (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_GetInstanceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_GetInstanceInternal)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalFirebaseDatabase_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalFirebaseDatabase_ReleaseReferenceInternal_m4A5FAD14A1A05211F0DE6BF2B1C9262CC1758CBD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalFirebaseDatabase_ReleaseReferenceInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalFirebaseDatabase_ReleaseReferenceInternal)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDataSnapshot_mAF8AD4EAF5489FED98965240C94AE76903B62D72 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_delete_InternalDataSnapshot", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalDataSnapshot)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_exists(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalDataSnapshot_exists_mDD65B2AAE7FF8FAC4D98F46101B6E41F08846E99 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalDataSnapshot_exists", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_exists)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_Child__SWIG_0_m46F91FA24EB39FF959D08571C895C25DB862CBDD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalDataSnapshot_Child__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_Child__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_children(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_children_m135DB174B5595D2F330D5CD426E1439FEDD5237A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalDataSnapshot_children", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_children)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.String Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDataSnapshot_key_string_m84050AA32B784B87CA324F10EE271ED637B9B7C7 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalDataSnapshot_key_string", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_key_string)(____jarg10_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDataSnapshot_value_mDD29D0B6F0CA0A74BF1DDC1C61D0776282D4365A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalDataSnapshot_value", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDataSnapshot_value)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalQuery_mAFB106C34F2B9E9C060EB86861A23752E2EE40AE (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_delete_InternalQuery", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalQuery)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_GetValue(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalQuery_GetValue_m3F87843DE884FC353F505FFF72B3766DDD2F74B4 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalQuery_GetValue", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_GetValue)(____jarg10_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return returnValue;
}
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalQuery_is_valid_mCBD29015D6DF9C30D2750CC96B30F29FEFE48D91 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalQuery_is_valid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_is_valid)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyValueListener_m0C20252139C28B18457DFCB40125AF319F3B6346 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalQuery_DestroyValueListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_DestroyValueListener)(___jarg10);
	#else
	il2cppPInvokeFunc(___jarg10);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterValueListenerCallbacks_mC055AC1D6F89D25ED5EF36BD8DF883788669B038 (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * ___jarg10, OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E * ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalQuery_RegisterValueListenerCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_RegisterValueListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_DestroyChildListener_mB4E35A3FF0146121DFE9A85DE1B572E35F20B0DB (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalQuery_DestroyChildListener", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_DestroyChildListener)(___jarg10);
	#else
	il2cppPInvokeFunc(___jarg10);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_InternalQuery_RegisterChildListenerCallbacks_m5E29CDB66C38DA668E956A8BCA26C5431D07712B (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * ___jarg10, OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 * ___jarg21, OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 * ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalQuery_RegisterChildListenerCallbacks", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Marshaling of parameter '___jarg32' to native representation
	Il2CppMethodPointer ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg32));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalQuery_RegisterChildListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE::delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInternalPINVOKE_delete_InternalDatabaseReference_m26A58A38A119EC7AE51BCCAF7F8F95DA65D8C44D (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_delete_InternalDatabaseReference", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_delete_InternalDatabaseReference)(____jarg10_marshaled);
	#else
	il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

}
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseInternalPINVOKE_InternalDatabaseReference_is_valid_mA27EC3468769FBD2D9E012E5E1F8A5F0853EC59A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalDatabaseReference_is_valid", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_is_valid)(____jarg10_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	return static_cast<bool>(returnValue);
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_Child__SWIG_0_mB802C69790EAF96F7C260BF10C80315CB5D54468 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalDatabaseReference_Child__SWIG_0", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_Child__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_SetValue(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_SetValue_mCC77EFCA38107F6F382BDDB90AA50C3CCE62472B (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalDatabaseReference_SetValue", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	void* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = (void*)___jarg21.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_SetValue)(____jarg10_marshaled, ____jarg21_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____jarg10_marshaled, ____jarg21_marshaled);
	#endif

	return returnValue;
}
// System.String Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseInternalPINVOKE_InternalDatabaseReference_url_m7308016C6BD301F03984A1EC35C071A56EB724AD (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalDatabaseReference_url", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_url)(____jarg10_marshaled);
	#else
	char* returnValue = il2cppPInvokeFunc(____jarg10_marshaled);
	#endif

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::Future_InternalDataSnapshot_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIGUpcast_mB53428F0AE01E467306CB9DF5E50E7F9D959F7A5 (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_Future_InternalDataSnapshot_SWIGUpcast)(___jarg10);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___jarg10);
	#endif

	return returnValue;
}
// System.IntPtr Firebase.Database.DatabaseInternalPINVOKE::InternalDatabaseReference_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DatabaseInternalPINVOKE_InternalDatabaseReference_SWIGUpcast_m8AB835D2371DDFC216D5EA63DDD8558F0EC547DC (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "Firebase_Database_CSharp_InternalDatabaseReference_SWIGUpcast", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_CSharp_InternalDatabaseReference_SWIGUpcast)(___jarg10);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___jarg10);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference__ctor_mBA7E76F2D16A878AFC69FCE7BBF0990E0B298936 (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * ___internalRef0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, const RuntimeMethod* method)
{
	{
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_0 = ___internalRef0;
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_1 = ___database1;
		Query__ctor_mF30B6DED883447335B2E5C109A12FF34131F50E8(__this, L_0, L_1, /*hidden argument*/NULL);
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_2 = ___internalRef0;
		__this->set_internalReference_4(L_2);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_3 = ___database1;
		DatabaseReference_set_Database_mC86C9524EBE1CA3A1476D96AE97A273674FDDA86_inline(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::get_Database()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * DatabaseReference_get_Database_m50FCB15345968BB0302C9BEBE9BC6F0F2E7A2B2A (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_0 = __this->get_U3CDatabaseU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_mC86C9524EBE1CA3A1476D96AE97A273674FDDA86 (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_0 = ___value0;
		__this->set_U3CDatabaseU3Ek__BackingField_5(L_0);
		return;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * DatabaseReference_Child_m3C3D83649F6C8CF7E32DBD4FB58505BC43F11B23 (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, String_t* ___pathString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * V_0 = NULL;
	{
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_0 = __this->get_internalReference_4();
		String_t* L_1 = ___pathString0;
		NullCheck(L_0);
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_2;
		L_2 = InternalDatabaseReference_Child_m3E1DEA65BED90749680AD03C27306F4A365364CB(L_0, L_1, /*hidden argument*/NULL);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_3;
		L_3 = DatabaseReference_get_Database_m50FCB15345968BB0302C9BEBE9BC6F0F2E7A2B2A_inline(__this, /*hidden argument*/NULL);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_4 = (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 *)il2cpp_codegen_object_new(DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37_il2cpp_TypeInfo_var);
		DatabaseReference__ctor_mBA7E76F2D16A878AFC69FCE7BBF0990E0B298936(L_4, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_5 = V_0;
		return L_5;
	}
}
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetValueAsync(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * DatabaseReference_SetValueAsync_m45554810BB0842F054C39C8B5A8FAA40176650E0 (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_0 = NULL;
	{
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_0 = __this->get_internalReference_4();
		RuntimeObject * L_1 = ___value0;
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_2;
		L_2 = Utilities_MakeVariant_m78FD4C678C3062393C277EF8DAC3E6E53488DC15(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3;
		L_3 = InternalDatabaseReference_SetValueAsync_mA52C079A6EAE623FCF32751F3B0CF3FDAEB82321(L_0, L_2, /*hidden argument*/NULL);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4;
		L_4 = DatabaseReference_WrapInternalDefaultTask_m9FE07D958B3B2F3D7DFFE78F3AA502FA78E75E0B(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5 = V_0;
		return L_5;
	}
}
// System.String Firebase.Database.DatabaseReference::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DatabaseReference_ToString_mCA080DAC93F2B90DEE675E0F642B0FF66B4F303A (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_0 = __this->get_internalReference_4();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InternalDatabaseReference_url_m29A5FBE8B3511B0D030ADE47187979BC2D493548(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		String_t* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Firebase.Database.DatabaseReference::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DatabaseReference_Equals_mEE5B0AA3C4875654FBB440BB0F22B9A222DBC679 (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (!((DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 *)IsInstSealed((RuntimeObject*)L_0, DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		RuntimeObject * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Int32 Firebase.Database.DatabaseReference::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DatabaseReference_GetHashCode_m08216659CCFA48431B857B6E6D3E7F4F8E765886 (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0;
		L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::WrapInternalDefaultTask(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * DatabaseReference_WrapInternalDefaultTask_m9FE07D958B3B2F3D7DFFE78F3AA502FA78E75E0B (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___it0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_U3CWrapInternalDefaultTaskU3Eb__0_m2200E784F791DFE5CC9CEC7CD9064814ED8C542E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A * V_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A * L_0 = (U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass29_0__ctor_m77AA0DF46DEB7CC95DDB189AE00A6232F54315D3(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A * L_2 = V_0;
		TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * L_3 = (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_mCDC4A69051FEB9C577554605EA9320AE9C7AF4DD_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_tcs_1(L_3);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = ___it0;
		U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A * L_5 = V_0;
		Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 * L_6 = (Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142 *)il2cpp_codegen_object_new(Action_1_t20BA0CE0E9D07FB477BD3515213CA9F8C35EF142_il2cpp_TypeInfo_var);
		Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass29_0_U3CWrapInternalDefaultTaskU3Eb__0_m2200E784F791DFE5CC9CEC7CD9064814ED8C542E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mFA74ADE24B5F0A9ECC18BC57D04B9C0B3EDD7E4C_RuntimeMethod_var);
		NullCheck(L_4);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = Task_ContinueWith_m8540E40049DA1A53066538EBEBC69DE46859748F(L_4, L_6, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * L_9 = L_8->get_tcs_1();
		NullCheck(L_9);
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_10;
		L_10 = TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_inline(L_9, /*hidden argument*/TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_RuntimeMethod_var);
		V_1 = L_10;
		goto IL_003a;
	}

IL_003a:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11 = V_1;
		return L_11;
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
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__ctor_m19BE60A6DDA2AA85A1B104AE959EDF39A210590D (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * ___internalDB1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_OnAppDisposed_mAEB3D694F18851C363E4076593DA196E361B751D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
		FirebaseDatabase_set_App_mD2C513B185F9D95A2BAE970DE4E5320CF429BDEE_inline(__this, L_0, /*hidden argument*/NULL);
		InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_1 = ___internalDB1;
		__this->set_internalDatabase_2(L_1);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2;
		L_2 = FirebaseDatabase_get_App_mD2B9084C041946615D4F6451262B6A605308CE1A_inline(__this, /*hidden argument*/NULL);
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_3 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_3, __this, (intptr_t)((intptr_t)FirebaseDatabase_OnAppDisposed_mAEB3D694F18851C363E4076593DA196E361B751D_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Finalize_m833EB54BE517353AE8523DCE4E0CBDF140539C79 (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		FirebaseDatabase_Dispose_mFEC0A2E1F5B49B3BE710B3768AB86FC25640C8A7(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_OnAppDisposed_mAEB3D694F18851C363E4076593DA196E361B751D (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___eventArgs1, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_Dispose_mFEC0A2E1F5B49B3BE710B3768AB86FC25640C8A7(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_Dispose_mFEC0A2E1F5B49B3BE710B3768AB86FC25640C8A7 (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mD5FEE5AC0648D2C302CCC39EF5BC7F90715AC902_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_OnAppDisposed_mAEB3D694F18851C363E4076593DA196E361B751D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * V_0 = NULL;
	bool V_1 = false;
	Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		V_0 = __this;
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_0 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_0, /*hidden argument*/NULL);
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_1 = __this->get_internalDatabase_2();
			V_1 = (bool)((((RuntimeObject*)(InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_2 = V_1;
			if (!L_2)
			{
				goto IL_0021;
			}
		}

IL_001f:
		{
			IL2CPP_LEAVE(0x89, FINALLY_0081);
		}

IL_0021:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
			Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * L_3 = ((FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var))->get_databases_5();
			V_2 = L_3;
			Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * L_4 = V_2;
			Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
		}

IL_002e:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
			Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * L_5 = ((FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var))->get_databases_5();
			String_t* L_6 = __this->get_name_3();
			NullCheck(L_5);
			bool L_7;
			L_7 = Dictionary_2_Remove_mD5FEE5AC0648D2C302CCC39EF5BC7F90715AC902(L_5, L_6, /*hidden argument*/Dictionary_2_Remove_mD5FEE5AC0648D2C302CCC39EF5BC7F90715AC902_RuntimeMethod_var);
			IL2CPP_LEAVE(0x4B, FINALLY_0043);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0043;
		}

FINALLY_0043:
		{ // begin finally (depth: 2)
			Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * L_8 = V_2;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(67)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(67)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x4B, IL_004b)
		}

IL_004b:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_9;
			L_9 = FirebaseDatabase_get_App_mD2B9084C041946615D4F6451262B6A605308CE1A_inline(__this, /*hidden argument*/NULL);
			EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_10 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
			EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_10, __this, (intptr_t)((intptr_t)FirebaseDatabase_OnAppDisposed_mAEB3D694F18851C363E4076593DA196E361B751D_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_9);
			FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812(L_9, L_10, /*hidden argument*/NULL);
			FirebaseDatabase_set_App_mD2C513B185F9D95A2BAE970DE4E5320CF429BDEE_inline(__this, (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)NULL, /*hidden argument*/NULL);
			InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_11 = __this->get_internalDatabase_2();
			NullCheck(L_11);
			InternalFirebaseDatabase_Dispose_m9E4C97208FB3BF1CD184D5274E7E83E936D81F03(L_11, /*hidden argument*/NULL);
			__this->set_internalDatabase_2((InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 *)NULL);
			IL2CPP_LEAVE(0x89, FINALLY_0081);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0081;
	}

FINALLY_0081:
	{ // begin finally (depth: 1)
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_12 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(129)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(129)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x89, IL_0089)
	}

IL_0089:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseDatabase_get_App_mD2B9084C041946615D4F6451262B6A605308CE1A (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = __this->get_U3CAppU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_mD2C513B185F9D95A2BAE970DE4E5320CF429BDEE (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___value0;
		__this->set_U3CAppU3Ek__BackingField_4(L_0);
		return;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * FirebaseDatabase_get_DefaultInstance_mDBCDC6415A3C87F065EE96C415A5D205C2C2BA0E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_0 = NULL;
	bool V_1 = false;
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0;
		L_0 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		V_0 = L_0;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_1 = V_0;
		V_1 = (bool)((((RuntimeObject*)(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 * L_3 = (DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5_il2cpp_TypeInfo_var)));
		DatabaseException__ctor_mCB6553E29931B5786C84117FD1DF1ED5A96997A7(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50384A583A192C06635CCD8BE23070E725470116)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_get_DefaultInstance_mDBCDC6415A3C87F065EE96C415A5D205C2C2BA0E_RuntimeMethod_var)));
	}

IL_001b:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_5;
		L_5 = FirebaseDatabase_GetInstance_mA517447881766805100EA0D857F934B440F17BF7(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_6 = V_2;
		return L_6;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * FirebaseDatabase_GetInstance_mA517447881766805100EA0D857F934B440F17BF7 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppConfigExtensions_tAF751AD5BD32E4587148715BFD93D3F2F85BBB7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * V_0 = NULL;
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = Services_get_AppConfig_mAE84F30BF7A0A0D522CC280712623B53961FB98D_inline(/*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2 = ___app0;
		NullCheck(L_2);
		FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * L_3;
		L_3 = FirebaseApp_get_AppPlatform_m95A32F1D4ECE2C65F4691EE17E4BDF1A57FAED9D(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(0 /* System.String Firebase.Platform.IAppConfigExtensions::GetDatabaseUrl(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_tAF751AD5BD32E4587148715BFD93D3F2F85BBB7A_il2cpp_TypeInfo_var, L_1, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_5;
		L_5 = FirebaseDatabase_GetInstance_m879569779EF2DCEDEE9A84D158F5612EE5178B92(L_0, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_6 = V_0;
		return L_6;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * FirebaseDatabase_GetInstance_mF93FC30A2E04D9D4E4E9CDAE000B1AB850AD1836 (String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_0 = NULL;
	bool V_1 = false;
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0;
		L_0 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		V_0 = L_0;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_1 = V_0;
		V_1 = (bool)((((RuntimeObject*)(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 * L_3 = (DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5_il2cpp_TypeInfo_var)));
		DatabaseException__ctor_mCB6553E29931B5786C84117FD1DF1ED5A96997A7(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50384A583A192C06635CCD8BE23070E725470116)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_GetInstance_mF93FC30A2E04D9D4E4E9CDAE000B1AB850AD1836_RuntimeMethod_var)));
	}

IL_001b:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_4 = V_0;
		String_t* L_5 = ___url0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_6;
		L_6 = FirebaseDatabase_GetInstance_m879569779EF2DCEDEE9A84D158F5612EE5178B92(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_7 = V_2;
		return L_7;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * FirebaseDatabase_GetInstance_m879569779EF2DCEDEE9A84D158F5612EE5178B92 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___url1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m5C3809989CBDFED551B7AD2AD4D51F8BA31CB424_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m808A2FE513DA758273FA263FC7C18E9BEDDFD695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * V_6 = NULL;
	bool V_7 = false;
	FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B7_0 = 0;
	{
		String_t* L_0 = ___url1;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 * L_3 = (DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5_il2cpp_TypeInfo_var)));
		DatabaseException__ctor_mCB6553E29931B5786C84117FD1DF1ED5A96997A7(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FBD1DB26924C1F6A36CB8F2F4850DE51995B3F9)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_GetInstance_m879569779EF2DCEDEE9A84D158F5612EE5178B92_RuntimeMethod_var)));
	}

IL_0017:
	{
		V_0 = (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 *)NULL;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_4 = ___app0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8(L_4, /*hidden argument*/NULL);
		String_t* L_6 = ___url1;
		String_t* L_7;
		L_7 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * L_8 = ((FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var))->get_databases_5();
		V_3 = L_8;
		Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * L_9 = V_3;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_9, /*hidden argument*/NULL);
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
			Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * L_10 = ((FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var))->get_databases_5();
			String_t* L_11 = V_1;
			NullCheck(L_10);
			bool L_12;
			L_12 = Dictionary_2_TryGetValue_m5C3809989CBDFED551B7AD2AD4D51F8BA31CB424(L_10, L_11, (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5C3809989CBDFED551B7AD2AD4D51F8BA31CB424_RuntimeMethod_var);
			V_4 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
			bool L_13 = V_4;
			if (!L_13)
			{
				goto IL_0097;
			}
		}

IL_004f:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_14 = ___app0;
			String_t* L_15 = ___url1;
			InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_16;
			L_16 = InternalFirebaseDatabase_GetInstanceInternal_mCCA92290B0FA73967F4644C26B94CA0B94F42060(L_14, L_15, (int32_t*)(&V_5), /*hidden argument*/NULL);
			V_6 = L_16;
			InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_17 = V_6;
			if (!L_17)
			{
				goto IL_0066;
			}
		}

IL_005f:
		{
			int32_t L_18 = V_5;
			G_B7_0 = ((!(((uint32_t)L_18) <= ((uint32_t)0)))? 1 : 0);
			goto IL_0067;
		}

IL_0066:
		{
			G_B7_0 = 1;
		}

IL_0067:
		{
			V_7 = (bool)G_B7_0;
			bool L_19 = V_7;
			if (!L_19)
			{
				goto IL_0079;
			}
		}

IL_006d:
		{
			DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 * L_20 = (DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5_il2cpp_TypeInfo_var)));
			DatabaseException__ctor_mCB6553E29931B5786C84117FD1DF1ED5A96997A7(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7AFB5B2F4FF415E9A57A58EEFBA6C5E92E3529C)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FirebaseDatabase_GetInstance_m879569779EF2DCEDEE9A84D158F5612EE5178B92_RuntimeMethod_var)));
		}

IL_0079:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_21 = ___app0;
			InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_22 = V_6;
			FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_23 = (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 *)il2cpp_codegen_object_new(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
			FirebaseDatabase__ctor_m19BE60A6DDA2AA85A1B104AE959EDF39A210590D(L_23, L_21, L_22, /*hidden argument*/NULL);
			V_0 = L_23;
			FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_24 = V_0;
			String_t* L_25 = V_1;
			NullCheck(L_24);
			L_24->set_name_3(L_25);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
			Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * L_26 = ((FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var))->get_databases_5();
			String_t* L_27 = V_1;
			FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_28 = V_0;
			NullCheck(L_26);
			Dictionary_2_set_Item_m808A2FE513DA758273FA263FC7C18E9BEDDFD695(L_26, L_27, L_28, /*hidden argument*/Dictionary_2_set_Item_m808A2FE513DA758273FA263FC7C18E9BEDDFD695_RuntimeMethod_var);
		}

IL_0097:
		{
			IL2CPP_LEAVE(0xA2, FINALLY_009a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009a;
	}

FINALLY_009a:
	{ // begin finally (depth: 1)
		Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * L_29 = V_3;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_29, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(154)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(154)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA2, IL_00a2)
	}

IL_00a2:
	{
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_30 = V_0;
		V_8 = L_30;
		goto IL_00a7;
	}

IL_00a7:
	{
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_31 = V_8;
		return L_31;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * FirebaseDatabase_get_RootReference_mCC8D1B92BE50EB91C76705840BDBD2EF88B6D5FC (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * V_0 = NULL;
	{
		InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_0 = __this->get_internalDatabase_2();
		NullCheck(L_0);
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_1;
		L_1 = InternalFirebaseDatabase_GetReference_m26765A7909B10D714ACB13A2072C8958FF39A597(L_0, /*hidden argument*/NULL);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_2 = (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 *)il2cpp_codegen_object_new(DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37_il2cpp_TypeInfo_var);
		DatabaseReference__ctor_mBA7E76F2D16A878AFC69FCE7BBF0990E0B298936(L_2, L_1, __this, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_3 = V_0;
		return L_3;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * FirebaseDatabase_GetReference_mC7DE9BC4303079D78A8AEBC27518D94873B84F6F (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * V_0 = NULL;
	{
		InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_0 = __this->get_internalDatabase_2();
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_2;
		L_2 = InternalFirebaseDatabase_GetReference_m0E9DE5A3EB1BF2BA2041F243ED73CDAB074F82AE(L_0, L_1, /*hidden argument*/NULL);
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_3 = (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 *)il2cpp_codegen_object_new(DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37_il2cpp_TypeInfo_var);
		DatabaseReference__ctor_mBA7E76F2D16A878AFC69FCE7BBF0990E0B298936(L_3, L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseDatabase__cctor_m2EBA08A18EF77C691A1A1BD3080DF38CFE168762 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m688704AB6A4B311C9E90E949D6E2C593E33EFA72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B * L_0 = (Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B *)il2cpp_codegen_object_new(Dictionary_2_t1A67CB6A5AD53A2D60A753151A25BD6AE45CA58B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m688704AB6A4B311C9E90E949D6E2C593E33EFA72(L_0, /*hidden argument*/Dictionary_2__ctor_m688704AB6A4B311C9E90E949D6E2C593E33EFA72_RuntimeMethod_var);
		((FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1_il2cpp_TypeInfo_var))->set_databases_5(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mE19F622896665D389CA5F0FB04C218E30D432F20(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mE19F622896665D389CA5F0FB04C218E30D432F20(___key0, NULL);

}
// System.Void Firebase.Database.Future_InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot__ctor_mED1759432412B6F3DD5369D40C464347800F1C4F (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		__this->set_SWIG_CompletionCB_7((SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 *)NULL);
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIGUpcast_mB53428F0AE01E467306CB9DF5E50E7F9D959F7A5((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC(__this, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_4), __this, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_Dispose_m27AD21EF869BFCC6A30A29F6F37B4CE6812A736B (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_2();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0066;
			}
		}

IL_0028:
		{
			Future_InternalDataSnapshot_SetCompletionData_m6F2EE8EF2B403FD0BE336DD4AA32A06D67DDFCA3(__this, (intptr_t)(0), /*hidden argument*/NULL);
			bool L_6 = ((FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 *)__this)->get_swigCMemOwn_1();
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0054;
			}
		}

IL_003f:
		{
			((FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_delete_Future_InternalDataSnapshot_mBBF22882907C49D69048D844FA4B7E1A852BD25E(L_8, /*hidden argument*/NULL);
		}

IL_0054:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_9);
		}

IL_0066:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			bool L_10 = ___disposing0;
			FutureBase_Dispose_mD92D3FE1E216E3FFBE40723A1F3871452931B2AB(__this, L_10, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x80, FINALLY_0078);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0078;
	}

FINALLY_0078:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(120)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(120)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x80, IL_0080)
	}

IL_0080:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.Future_InternalDataSnapshot::GetTask(Firebase.Database.Future_InternalDataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * Future_InternalDataSnapshot_GetTask_m43A778E41DB7CF8D9F4DAA62EE52D4009729AD19 (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m8FC2983816DD9AE5209C39BA24146BF78D2E8EEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m1A727AEB2E921734E1AF6583C14D39811A88AD86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m34FF0C1859AD5931B3C7C5C95E321E34664D84EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CGetTaskU3Eb__0_m2960C3BE91912BFB5995EC3E8BF2F64D94885AF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * V_0 = NULL;
	bool V_1 = false;
	Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * V_2 = NULL;
	bool V_3 = false;
	{
		U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * L_0 = (U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_mBCEF4FC4931F7BDE54FDD0DFDDFF7216042EB73E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * L_1 = V_0;
		Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * L_3 = V_0;
		TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * L_4 = (TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 *)il2cpp_codegen_object_new(TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m1A727AEB2E921734E1AF6583C14D39811A88AD86(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m1A727AEB2E921734E1AF6583C14D39811A88AD86_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = SWIGPendingException_get_Pending_m568EEEC2A6E279C708D238BB1040DFDB7883B542(/*hidden argument*/NULL);
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * L_7 = V_0;
		NullCheck(L_7);
		TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * L_8 = L_7->get_tcs_1();
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_9;
		L_9 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		NullCheck(L_8);
		TaskCompletionSource_1_SetException_m8FC2983816DD9AE5209C39BA24146BF78D2E8EEC(L_8, L_9, /*hidden argument*/TaskCompletionSource_1_SetException_m8FC2983816DD9AE5209C39BA24146BF78D2E8EEC_RuntimeMethod_var);
		U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * L_10 = V_0;
		NullCheck(L_10);
		TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * L_11 = L_10->get_tcs_1();
		NullCheck(L_11);
		Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * L_12;
		L_12 = TaskCompletionSource_1_get_Task_m34FF0C1859AD5931B3C7C5C95E321E34664D84EC_inline(L_11, /*hidden argument*/TaskCompletionSource_1_get_Task_m34FF0C1859AD5931B3C7C5C95E321E34664D84EC_RuntimeMethod_var);
		V_2 = L_12;
		goto IL_00a0;
	}

IL_0042:
	{
		U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * L_13 = V_0;
		NullCheck(L_13);
		Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * L_14 = L_13->get_fu_0();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_14, /*hidden argument*/NULL);
		V_3 = (bool)((((int32_t)L_15) == ((int32_t)2))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * L_17 = V_0;
		NullCheck(L_17);
		TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * L_18 = L_17->get_tcs_1();
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_19 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_19, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, /*hidden argument*/NULL);
		NullCheck(L_18);
		TaskCompletionSource_1_SetException_m8FC2983816DD9AE5209C39BA24146BF78D2E8EEC(L_18, L_19, /*hidden argument*/TaskCompletionSource_1_SetException_m8FC2983816DD9AE5209C39BA24146BF78D2E8EEC_RuntimeMethod_var);
		U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * L_20 = V_0;
		NullCheck(L_20);
		TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * L_21 = L_20->get_tcs_1();
		NullCheck(L_21);
		Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * L_22;
		L_22 = TaskCompletionSource_1_get_Task_m34FF0C1859AD5931B3C7C5C95E321E34664D84EC_inline(L_21, /*hidden argument*/TaskCompletionSource_1_get_Task_m34FF0C1859AD5931B3C7C5C95E321E34664D84EC_RuntimeMethod_var);
		V_2 = L_22;
		goto IL_00a0;
	}

IL_007a:
	{
		U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * L_23 = V_0;
		NullCheck(L_23);
		Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * L_24 = L_23->get_fu_0();
		U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * L_25 = V_0;
		Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * L_26 = (Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A *)il2cpp_codegen_object_new(Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A_il2cpp_TypeInfo_var);
		Action__ctor_m62A16BA9085412AE20F03B92D82C7E0762297A77(L_26, L_25, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CGetTaskU3Eb__0_m2960C3BE91912BFB5995EC3E8BF2F64D94885AF9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_24);
		Future_InternalDataSnapshot_SetOnCompletionCallback_m1C93B7113C007CE403759ED8BA50161C7EC51647(L_24, L_26, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * L_27 = V_0;
		NullCheck(L_27);
		TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * L_28 = L_27->get_tcs_1();
		NullCheck(L_28);
		Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * L_29;
		L_29 = TaskCompletionSource_1_get_Task_m34FF0C1859AD5931B3C7C5C95E321E34664D84EC_inline(L_28, /*hidden argument*/TaskCompletionSource_1_get_Task_m34FF0C1859AD5931B3C7C5C95E321E34664D84EC_RuntimeMethod_var);
		V_2 = L_29;
		goto IL_00a0;
	}

IL_00a0:
	{
		Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * L_30 = V_2;
		return L_30;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_ThrowIfDisposed_m0E6A88C03BB5D72C91FFCB84CBB15887C3035CC3 (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_0 = __this->get_address_of_swigCPtr_2();
		intptr_t L_1;
		L_1 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_4 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_ThrowIfDisposed_m0E6A88C03BB5D72C91FFCB84CBB15887C3035CC3_RuntimeMethod_var)));
	}

IL_0026:
	{
		return;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::SetOnCompletionCallback(Firebase.Database.Future_InternalDataSnapshot/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetOnCompletionCallback_m1C93B7113C007CE403759ED8BA50161C7EC51647 (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6BF2DE04A435D6BB1812DA65DD5CA9939D6358B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mDE412531F889E98AD656803A3BCE6756259C6A5E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mE19F622896665D389CA5F0FB04C218E30D432F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Future_InternalDataSnapshot_ThrowIfDisposed_m0E6A88C03BB5D72C91FFCB84CBB15887C3035CC3(__this, /*hidden argument*/NULL);
		SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * L_0 = __this->get_SWIG_CompletionCB_7();
		V_1 = (bool)((((RuntimeObject*)(SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * L_2 = (SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_m3F7B6EC23D0B2484DAF5B6FCF95F7AEEB0332548(L_2, NULL, (intptr_t)((intptr_t)Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mE19F622896665D389CA5F0FB04C218E30D432F20_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_2);
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = ((Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_2 = L_3;
		RuntimeObject * L_4 = V_2;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_4, /*hidden argument*/NULL);
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
			Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * L_5 = ((Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var))->get_Callbacks_3();
			V_3 = (bool)((((RuntimeObject*)(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 *)L_5) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_004f;
			}
		}

IL_0043:
		{
			Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * L_7 = (Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 *)il2cpp_codegen_object_new(Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m6BF2DE04A435D6BB1812DA65DD5CA9939D6358B7(L_7, /*hidden argument*/Dictionary_2__ctor_m6BF2DE04A435D6BB1812DA65DD5CA9939D6358B7_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
			((Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var))->set_Callbacks_3(L_7);
		}

IL_004f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
			int32_t L_8 = ((Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
			((Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_9);
			V_0 = L_9;
			Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * L_10 = ((Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_11 = V_0;
			Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * L_12 = ___userCompletionCallback0;
			NullCheck(L_10);
			Dictionary_2_set_Item_mDE412531F889E98AD656803A3BCE6756259C6A5E(L_10, L_11, L_12, /*hidden argument*/Dictionary_2_set_Item_mDE412531F889E98AD656803A3BCE6756259C6A5E_RuntimeMethod_var);
			IL2CPP_LEAVE(0x75, FINALLY_006d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006d;
	}

FINALLY_006d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_13 = V_2;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_13, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(109)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(109)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x75, IL_0075)
	}

IL_0075:
	{
		SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * L_14 = __this->get_SWIG_CompletionCB_7();
		int32_t L_15 = V_0;
		intptr_t L_16;
		L_16 = Future_InternalDataSnapshot_SWIG_OnCompletion_mF8218FC4ABF3C7CF392241C97E529986D469B7D9(__this, L_14, L_15, /*hidden argument*/NULL);
		Future_InternalDataSnapshot_SetCompletionData_m6F2EE8EF2B403FD0BE336DD4AA32A06D67DDFCA3(__this, (intptr_t)L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SetCompletionData_m6F2EE8EF2B403FD0BE336DD4AA32A06D67DDFCA3 (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	{
		Future_InternalDataSnapshot_ThrowIfDisposed_m0E6A88C03BB5D72C91FFCB84CBB15887C3035CC3(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_callbackData_6();
		Future_InternalDataSnapshot_SWIG_FreeCompletionData_mEB0B83F435DC864C3C6FEB430976423CC07C08DA(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___data0;
		__this->set_callbackData_6((intptr_t)L_1);
		return;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_CompletionDispatcher_mE19F622896665D389CA5F0FB04C218E30D432F20 (int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m29B028351E79C43BDDBFDC7E96C58A3D92185F82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4CF117014933DCE17133BDFA19D4A2F8CAA9C8B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	{
		V_0 = (Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
			Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * L_2 = ((Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0027;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
			Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * L_3 = ((Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5;
			L_5 = Dictionary_2_TryGetValue_m4CF117014933DCE17133BDFA19D4A2F8CAA9C8B1(L_3, L_4, (Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m4CF117014933DCE17133BDFA19D4A2F8CAA9C8B1_RuntimeMethod_var);
			G_B4_0 = ((int32_t)(L_5));
			goto IL_0028;
		}

IL_0027:
		{
			G_B4_0 = 0;
		}

IL_0028:
		{
			V_2 = (bool)G_B4_0;
			bool L_6 = V_2;
			if (!L_6)
			{
				goto IL_003a;
			}
		}

IL_002c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
			Dictionary_2_tB637DAA9904515982D9D9A45AD0C950DDCA21D27 * L_7 = ((Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_8 = ___key0;
			NullCheck(L_7);
			bool L_9;
			L_9 = Dictionary_2_Remove_m29B028351E79C43BDDBFDC7E96C58A3D92185F82(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m29B028351E79C43BDDBFDC7E96C58A3D92185F82_RuntimeMethod_var);
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x45, FINALLY_003d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003d;
	}

FINALLY_003d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(61)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(61)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * L_11 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A *)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * L_13 = V_0;
		NullCheck(L_13);
		Action_Invoke_mA76524B80991F76146ACEA8DBC2DF726FEB8725E(L_13, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return;
	}
}
// System.IntPtr Firebase.Database.Future_InternalDataSnapshot::SWIG_OnCompletion(Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_InternalDataSnapshot_SWIG_OnCompletion_mF8218FC4ABF3C7CF392241C97E529986D469B7D9 (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_OnCompletion_mE078264A3BDE2FE79B834248670F9F9368F6B79D(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_6;
		L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_SWIG_OnCompletion_mF8218FC4ABF3C7CF392241C97E529986D469B7D9_RuntimeMethod_var)));
	}

IL_001e:
	{
		intptr_t L_7 = V_0;
		V_2 = (intptr_t)L_7;
		goto IL_0022;
	}

IL_0022:
	{
		intptr_t L_8 = V_2;
		return (intptr_t)L_8;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot_SWIG_FreeCompletionData_mEB0B83F435DC864C3C6FEB430976423CC07C08DA (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m39A4FBD546060EFBE93F27BA07BC8D0DC13AB73C(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_SWIG_FreeCompletionData_mEB0B83F435DC864C3C6FEB430976423CC07C08DA_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
// Firebase.Database.InternalDataSnapshot Firebase.Database.Future_InternalDataSnapshot::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * Future_InternalDataSnapshot_GetResult_m28E25B2824136D3A2EA1E2A4530B8012DF9E7721 (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * V_0 = NULL;
	bool V_1 = false;
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_Future_InternalDataSnapshot_GetResult_m41A99185E328E879CCB7FE458743FEE9EB63B42B(L_0, /*hidden argument*/NULL);
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_2 = (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E *)il2cpp_codegen_object_new(InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_mF92765D4F94244010A55F45A200EBF265575ED14(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Future_InternalDataSnapshot_GetResult_m28E25B2824136D3A2EA1E2A4530B8012DF9E7721_RuntimeMethod_var)));
	}

IL_0022:
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_7 = V_2;
		return L_7;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_InternalDataSnapshot__cctor_mDD060AB7DB697F386A75E48E85A3B9C18C5A4633 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildChangeHandler_mBDE792C73BF40FE6349AADD5E427AA19C2C3D912(int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, char* ___previousChildName3)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___previousChildName3' to managed representation
	String_t* ____previousChildName3_unmarshaled = NULL;
	____previousChildName3_unmarshaled = il2cpp_codegen_marshal_string_result(___previousChildName3);

	// Managed method invocation
	InternalChildListener_OnChildChangeHandler_mBDE792C73BF40FE6349AADD5E427AA19C2C3D912(___callbackId0, ___changeType1, ___snapshot2, ____previousChildName3_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildRemovedHandler_m6B40D10501F7EDF16427B90B4C2E8325E1BE09A0(int32_t ___callbackId0, intptr_t ___snapshot1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	InternalChildListener_OnChildRemovedHandler_m6B40D10501F7EDF16427B90B4C2E8325E1BE09A0(___callbackId0, ___snapshot1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnCancelledHandler_m912F895AD47CA722E893FF47649B69D546A01440(int32_t ___callbackId0, int32_t ___error1, char* ___msg2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	InternalChildListener_OnCancelledHandler_m912F895AD47CA722E893FF47649B69D546A01440(___callbackId0, ___error1, ____msg2_unmarshaled, NULL);

}
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalChildListener_TryGetListener_m10931CAF61F39B1466F678431424C6008E05E54B (int32_t ___callbackId0, InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 ** ___childListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = (InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 *)NULL;
		int32_t L_0 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalListener_TryGetListener_mBFEF5388C1F3B4C2ACF7F69B3A811FDE2D7CC6DD(L_0, (InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 **)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 ** L_3 = ___childListener1;
		InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 * L_4 = V_0;
		*((RuntimeObject **)L_3) = (RuntimeObject *)((InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 *)IsInstSealed((RuntimeObject*)L_4, InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)((InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 *)IsInstSealed((RuntimeObject*)L_4, InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563_il2cpp_TypeInfo_var)));
		InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 ** L_5 = ___childListener1;
		InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * L_6 = *((InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 **)L_5);
		V_2 = (bool)((!(((RuntimeObject*)(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0028;
	}

IL_0020:
	{
		InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 ** L_7 = ___childListener1;
		*((RuntimeObject **)L_7) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)NULL);
		V_2 = (bool)0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildChangeHandler_mBDE792C73BF40FE6349AADD5E427AA19C2C3D912 (int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_m99ADD76E5FE255790179C6507277310B6A73E62C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D * L_0 = (U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m9A6163BC7096A98347E630D88F6818A36EDE99DB(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D * L_1 = V_0;
		intptr_t L_2 = ___snapshot2;
		NullCheck(L_1);
		L_1->set_snapshot_0((intptr_t)L_2);
		U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D * L_5 = V_0;
		int32_t L_6 = ___changeType1;
		NullCheck(L_5);
		L_5->set_changeType_2(L_6);
		U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D * L_7 = V_0;
		String_t* L_8 = ___previousChildName3;
		NullCheck(L_7);
		L_7->set_previousChildName_3(L_8);
		U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_m99ADD76E5FE255790179C6507277310B6A73E62C_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnChildRemovedHandler_m6B40D10501F7EDF16427B90B4C2E8325E1BE09A0 (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m450B8B9A2E58E9FB9B64BA0199B387EE83AB36A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63 * L_0 = (U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_m5CA59F064721FFB79E2F9A4D626442836E5DAD35(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63 * L_1 = V_0;
		intptr_t L_2 = ___snapshot1;
		NullCheck(L_1);
		L_1->set_snapshot_0((intptr_t)L_2);
		U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63 * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m450B8B9A2E58E9FB9B64BA0199B387EE83AB36A8_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_OnCancelledHandler_m912F895AD47CA722E893FF47649B69D546A01440 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_mD232DD9AF8B4B57640FA71DD84D343D48BC963BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1 * L_0 = (U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_m356938F37B1BCF2E8A646328A348821F899B0890(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1 * L_1 = V_0;
		int32_t L_2 = ___callbackId0;
		NullCheck(L_1);
		L_1->set_callbackId_0(L_2);
		U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1 * L_3 = V_0;
		int32_t L_4 = ___error1;
		NullCheck(L_3);
		L_3->set_error_1(L_4);
		U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1 * L_5 = V_0;
		String_t* L_6 = ___msg2;
		NullCheck(L_5);
		L_5->set_msg_2(L_6);
		U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1 * L_7 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_mD232DD9AF8B4B57640FA71DD84D343D48BC963BC_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__cctor_mD00D173681FFE7AED88F765A881F84B64DFBFE7F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_OnCancelledHandler_m912F895AD47CA722E893FF47649B69D546A01440_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_OnChildChangeHandler_mBDE792C73BF40FE6349AADD5E427AA19C2C3D912_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_OnChildRemovedHandler_m6B40D10501F7EDF16427B90B4C2E8325E1BE09A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * L_0 = (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC *)il2cpp_codegen_object_new(OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC_il2cpp_TypeInfo_var);
		OnCancelledDelegate__ctor_m248FED25D7FF60944702A3F9AA5B7CF1A0C8CB80(L_0, NULL, (intptr_t)((intptr_t)InternalChildListener_OnCancelledHandler_m912F895AD47CA722E893FF47649B69D546A01440_RuntimeMethod_var), /*hidden argument*/NULL);
		OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 * L_1 = (OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 *)il2cpp_codegen_object_new(OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092_il2cpp_TypeInfo_var);
		OnChildChangeDelegate__ctor_m9BFDE1F969A02B54181D9A9C1D8380FF6DAC6B6A(L_1, NULL, (intptr_t)((intptr_t)InternalChildListener_OnChildChangeHandler_mBDE792C73BF40FE6349AADD5E427AA19C2C3D912_RuntimeMethod_var), /*hidden argument*/NULL);
		OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 * L_2 = (OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 *)il2cpp_codegen_object_new(OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6_il2cpp_TypeInfo_var);
		OnChildRemovedDelegate__ctor_m7EF292CFC57F57696207C784EB273C31A2A3BC5C(L_2, NULL, (intptr_t)((intptr_t)InternalChildListener_OnChildRemovedHandler_m6B40D10501F7EDF16427B90B4C2E8325E1BE09A0_RuntimeMethod_var), /*hidden argument*/NULL);
		InternalQuery_RegisterChildListenerCallbacks_m7E198D69EF4A1B0800C04DAE1A38E3B111BF589F(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener__ctor_m967B83F56D03CCF9485ACD1D0E31C6136BB9BA48 (InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * __this, InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * ___internalQuery0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_eventLock_3(L_0);
		__this->set_cppListener_5((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		InternalListener__ctor_m423FF85A9DED9045BD433F9F106EFD58908EA9A8(__this, /*hidden argument*/NULL);
		InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * L_1 = ___internalQuery0;
		__this->set_internalQuery_4(L_1);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_2 = ___database1;
		__this->set_database_6(L_2);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::DestroyCppListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalChildListener_DestroyCppListener_mE0EF0929162185644F7998E71A86AD8C45A20B21 (InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_cppListener_5();
		InternalQuery_DestroyChildListener_m72B64E27AE128C47D1A92C2FA76CC715FC57F167((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)(0));
	}

IL_002e:
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
// System.Void Firebase.Database.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot__ctor_mF92765D4F94244010A55F45A200EBF265575ED14 (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Database.InternalDataSnapshot::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Finalize_mDE958D2145F287297DBC8426C1DB83E940E3FE96 (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalDataSnapshot::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalDataSnapshot::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Dispose_mE9F953EAF050A4B713E2A518924BA6B58091AE9F (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalDataSnapshot::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.InternalDataSnapshot::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshot_Dispose_m8DEBD5596D7202DB1473FED109E963823A8240B8 (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_005a;
			}
		}

IL_0028:
		{
			bool L_6 = __this->get_swigCMemOwn_1();
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0048;
			}
		}

IL_0033:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_delete_InternalDataSnapshot_mAF8AD4EAF5489FED98965240C94AE76903B62D72(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_9);
		}

IL_005a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x6C, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		return;
	}
}
// System.Boolean Firebase.Database.InternalDataSnapshot::exists()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDataSnapshot_exists_m5C218CA0135F3EE6E2C13A232AD181DB5F6D1A6D (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDataSnapshot_exists_mDD65B2AAE7FF8FAC4D98F46101B6E41F08846E99(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_exists_m5C218CA0135F3EE6E2C13A232AD181DB5F6D1A6D_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// Firebase.Database.InternalDataSnapshot Firebase.Database.InternalDataSnapshot::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * InternalDataSnapshot_Child_m67F3A70FFC4277631497FC171098A789DA703F5E (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * V_0 = NULL;
	bool V_1 = false;
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = DatabaseInternalPINVOKE_InternalDataSnapshot_Child__SWIG_0_m46F91FA24EB39FF959D08571C895C25DB862CBDD(L_0, L_1, /*hidden argument*/NULL);
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_3 = (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E *)il2cpp_codegen_object_new(InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_mF92765D4F94244010A55F45A200EBF265575ED14(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_6;
		L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_Child_m67F3A70FFC4277631497FC171098A789DA703F5E_RuntimeMethod_var)));
	}

IL_0023:
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_8 = V_2;
		return L_8;
	}
}
// Firebase.Database.InternalDataSnapshotList Firebase.Database.InternalDataSnapshot::children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * InternalDataSnapshot_children_m57AEDC00FE3AD8915510C9A3122815A192BD9A48 (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * V_0 = NULL;
	bool V_1 = false;
	InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDataSnapshot_children_m135DB174B5595D2F330D5CD426E1439FEDD5237A(L_0, /*hidden argument*/NULL);
		InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * L_2 = (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 *)il2cpp_codegen_object_new(InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4_il2cpp_TypeInfo_var);
		InternalDataSnapshotList__ctor_m7255E5BE3A50B598E8D86850E2AC1DF7DE551AEC(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_children_m57AEDC00FE3AD8915510C9A3122815A192BD9A48_RuntimeMethod_var)));
	}

IL_0022:
	{
		InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * L_7 = V_2;
		return L_7;
	}
}
// System.String Firebase.Database.InternalDataSnapshot::key_string()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDataSnapshot_key_string_m9C00367E7501B3C94A3158FDD5D8211A6341BE4E (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDataSnapshot_key_string_m84050AA32B784B87CA324F10EE271ED637B9B7C7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_key_string_m9C00367E7501B3C94A3158FDD5D8211A6341BE4E_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
	}
}
// Firebase.Variant Firebase.Database.InternalDataSnapshot::value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * InternalDataSnapshot_value_mFE8AAA20E79030AA3D385E55B6B222433C8B3D90 (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * V_0 = NULL;
	bool V_1 = false;
	Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDataSnapshot_value_mDD29D0B6F0CA0A74BF1DDC1C61D0776282D4365A(L_0, /*hidden argument*/NULL);
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_2 = (Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 *)il2cpp_codegen_object_new(Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068_il2cpp_TypeInfo_var);
		Variant__ctor_mDE4F4CD06BFEFA94C7B3757DAF5EB3F4E10DAD8E(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshot_value_mFE8AAA20E79030AA3D385E55B6B222433C8B3D90_RuntimeMethod_var)));
	}

IL_0022:
	{
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_7 = V_2;
		return L_7;
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
// System.Void Firebase.Database.InternalDataSnapshotList::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshotList__ctor_m7255E5BE3A50B598E8D86850E2AC1DF7DE551AEC (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Database.InternalDataSnapshotList::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshotList_Finalize_m4AC6B12747D6FB1809C95621CF9E6D2583C6D7BF (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(7 /* System.Void Firebase.Database.InternalDataSnapshotList::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalDataSnapshotList::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshotList_Dispose_m45671998FB50F62808228FA3BE5B59B0F3DD748E (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(7 /* System.Void Firebase.Database.InternalDataSnapshotList::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.InternalDataSnapshotList::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshotList_Dispose_m09F07936ECF370E79588E2D29E9AF82EB6BBD803 (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_005a;
			}
		}

IL_0028:
		{
			bool L_6 = __this->get_swigCMemOwn_1();
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0048;
			}
		}

IL_0033:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_delete_InternalDataSnapshotList_mB428902BF20F0B85DDDF1A45264BF9428DF4B768(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_9);
		}

IL_005a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x6C, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		return;
	}
}
// Firebase.Database.InternalDataSnapshot Firebase.Database.InternalDataSnapshotList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * InternalDataSnapshotList_get_Item_mCB4A1EA3BA4CADBBE3F7B58F5E7D833773F00CFE (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * V_0 = NULL;
	{
		int32_t L_0 = ___index0;
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_1;
		L_1 = InternalDataSnapshotList_getitem_m87D6F513938BB7CD1F1BEFDEA5FB8470964B9127(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Firebase.Database.InternalDataSnapshotList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalDataSnapshotList_get_Count_mAACCA81021AC06F88E30F7D58D4D1F54DD8733C4 (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		uint32_t L_0;
		L_0 = InternalDataSnapshotList_size_mF348AF43BE83DE0F01DE69739890C0E6537DC890(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Collections.Generic.IEnumerator`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.InternalDataSnapshotList::global::System.Collections.Generic.IEnumerable<Firebase.Database.InternalDataSnapshot>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalDataSnapshotList_globalU3AU3ASystem_Collections_Generic_IEnumerableU3CFirebase_Database_InternalDataSnapshotU3E_GetEnumerator_m538D39C1D75B565221EF69EA5E7B042290BC8F08 (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394 * L_0 = (InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394 *)il2cpp_codegen_object_new(InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394_il2cpp_TypeInfo_var);
		InternalDataSnapshotListEnumerator__ctor_m6E402F6D73419DF654150B8AFA9D7524FF45661C(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator Firebase.Database.InternalDataSnapshotList::global::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InternalDataSnapshotList_globalU3AU3ASystem_Collections_IEnumerable_GetEnumerator_m9A9216A78B63F4C5207E3D8FEFACCEAA22C2682E (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394 * L_0 = (InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394 *)il2cpp_codegen_object_new(InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394_il2cpp_TypeInfo_var);
		InternalDataSnapshotListEnumerator__ctor_m6E402F6D73419DF654150B8AFA9D7524FF45661C(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.UInt32 Firebase.Database.InternalDataSnapshotList::size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InternalDataSnapshotList_size_mF348AF43BE83DE0F01DE69739890C0E6537DC890 (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	uint32_t V_2 = 0;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDataSnapshotList_size_m2B0CC2BBB77465488E20139B72AF1D095AD44D4D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshotList_size_mF348AF43BE83DE0F01DE69739890C0E6537DC890_RuntimeMethod_var)));
	}

IL_001c:
	{
		uint32_t L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		uint32_t L_6 = V_2;
		return L_6;
	}
}
// Firebase.Database.InternalDataSnapshot Firebase.Database.InternalDataSnapshotList::getitem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * InternalDataSnapshotList_getitem_m87D6F513938BB7CD1F1BEFDEA5FB8470964B9127 (InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * V_0 = NULL;
	bool V_1 = false;
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		int32_t L_1 = ___index0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = DatabaseInternalPINVOKE_InternalDataSnapshotList_getitem_m54EC61FED9CDAE78D623107D819AEE66FD9B1D9C(L_0, L_1, /*hidden argument*/NULL);
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_3 = (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E *)il2cpp_codegen_object_new(InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_mF92765D4F94244010A55F45A200EBF265575ED14(L_3, (intptr_t)L_2, (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_6;
		L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshotList_getitem_m87D6F513938BB7CD1F1BEFDEA5FB8470964B9127_RuntimeMethod_var)));
	}

IL_0023:
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_8 = V_2;
		return L_8;
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
// System.Void Firebase.Database.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference__ctor_m15DFA4010F4B3D1EE1527AE2816B69E3B72B4AC3 (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDatabaseReference_SWIGUpcast_m8AB835D2371DDFC216D5EA63DDD8558F0EC547DC((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		InternalQuery__ctor_m06E7FC52DFC486674D05083E2F2919CACDEF1864(__this, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_4), __this, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Database.InternalDatabaseReference::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDatabaseReference_Dispose_m5D563A8DABD3ECAEA0052002AAA49D718A231D75 (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_2();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_005a;
			}
		}

IL_0028:
		{
			bool L_6 = ((InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 *)__this)->get_swigCMemOwn_1();
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0048;
			}
		}

IL_0033:
		{
			((InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_delete_InternalDatabaseReference_m26A58A38A119EC7AE51BCCAF7F8F95DA65D8C44D(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_9);
		}

IL_005a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			bool L_10 = ___disposing0;
			InternalQuery_Dispose_m4B5EA38A73AAF8E85A798AF67A0AC7B441689708(__this, L_10, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x74, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(108)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x74, IL_0074)
	}

IL_0074:
	{
		return;
	}
}
// System.Boolean Firebase.Database.InternalDatabaseReference::is_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDatabaseReference_is_valid_m2927CF3C07D8879AC3B75FA79DB8DB9529EAF63D (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDatabaseReference_is_valid_mA27EC3468769FBD2D9E012E5E1F8A5F0853EC59A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDatabaseReference_is_valid_m2927CF3C07D8879AC3B75FA79DB8DB9529EAF63D_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// Firebase.Database.InternalDatabaseReference Firebase.Database.InternalDatabaseReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * InternalDatabaseReference_Child_m3E1DEA65BED90749680AD03C27306F4A365364CB (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * V_0 = NULL;
	bool V_1 = false;
	InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = DatabaseInternalPINVOKE_InternalDatabaseReference_Child__SWIG_0_mB802C69790EAF96F7C260BF10C80315CB5D54468(L_0, L_1, /*hidden argument*/NULL);
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_3 = (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F *)il2cpp_codegen_object_new(InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F_il2cpp_TypeInfo_var);
		InternalDatabaseReference__ctor_m15DFA4010F4B3D1EE1527AE2816B69E3B72B4AC3(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_6;
		L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDatabaseReference_Child_m3E1DEA65BED90749680AD03C27306F4A365364CB_RuntimeMethod_var)));
	}

IL_0023:
	{
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_8 = V_2;
		return L_8;
	}
}
// System.Threading.Tasks.Task Firebase.Database.InternalDatabaseReference::SetValueAsync(Firebase.Variant)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * InternalDatabaseReference_SetValueAsync_mA52C079A6EAE623FCF32751F3B0CF3FDAEB82321 (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * __this, Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_0 = NULL;
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * V_1 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_1 = ___value0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		L_2 = Variant_getCPtr_m54D63420C815303499DE5265A30EEE92981C55B3(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_3;
		L_3 = DatabaseInternalPINVOKE_InternalDatabaseReference_SetValue_mCC77EFCA38107F6F382BDDB90AA50C3CCE62472B(L_0, L_2, /*hidden argument*/NULL);
		FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 * L_4 = (FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29 *)il2cpp_codegen_object_new(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
		FutureVoid__ctor_m1360132BEDC4A7668F93C0D1EB79CE3E28E94597(L_4, (intptr_t)L_3, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t04BD035498A9875EA1D6F629741C9D1ED31EFE29_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_5;
		L_5 = FutureVoid_GetTask_m99313F8ED4D21B3440FA37F24EDE6206F6B0E3BF(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_6 = V_0;
		V_1 = L_6;
		goto IL_0022;
	}

IL_0022:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7 = V_1;
		return L_7;
	}
}
// System.String Firebase.Database.InternalDatabaseReference::url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InternalDatabaseReference_url_m29A5FBE8B3511B0D030ADE47187979BC2D493548 (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = DatabaseInternalPINVOKE_InternalDatabaseReference_url_m7308016C6BD301F03984A1EC35C071A56EB724AD(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDatabaseReference_url_m29A5FBE8B3511B0D030ADE47187979BC2D493548_RuntimeMethod_var)));
	}

IL_001c:
	{
		String_t* L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		String_t* L_6 = V_2;
		return L_6;
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
// System.Void Firebase.Database.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase__ctor_mC9AA4A14AA26B368210978BCB1D6045D7ACDFE94 (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Database.InternalFirebaseDatabase::getCPtr(Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  InternalFirebaseDatabase_getCPtr_m1291635A65CCFE4DA1C669C53AAD347E374BBA49 (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_0 = ___obj0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_1 = ___obj0;
		NullCheck(L_1);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2 = L_1->get_swigCPtr_0();
		G_B3_0 = L_2;
		goto IL_0017;
	}

IL_000c:
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3;
		memset((&L_3), 0, sizeof(L_3));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_3), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0017:
	{
		V_0 = G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Database.InternalFirebaseDatabase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Finalize_m3630073387D806E2754F2D4570A4C0D855A46B4F (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalFirebaseDatabase::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalFirebaseDatabase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Dispose_m9E4C97208FB3BF1CD184D5274E7E83E936D81F03 (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalFirebaseDatabase::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.InternalFirebaseDatabase::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_Dispose_m526E95C615E29D4087C480944500BC99584816AD (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		InternalFirebaseDatabase_ReleaseReferenceInternal_m1CCAB6A022685D1A343DC4DB53FF9249024D4CA1(__this, /*hidden argument*/NULL);
		__this->set_swigCMemOwn_1((bool)0);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x40, FINALLY_0038);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x40, IL_0040)
	}

IL_0040:
	{
		return;
	}
}
// Firebase.Database.InternalDatabaseReference Firebase.Database.InternalFirebaseDatabase::GetReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * InternalFirebaseDatabase_GetReference_m26765A7909B10D714ACB13A2072C8958FF39A597 (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * V_0 = NULL;
	bool V_1 = false;
	InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_0_mE8BE3451442CB2AF0E1E208FA7EDE43CE33EA681(L_0, /*hidden argument*/NULL);
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_2 = (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F *)il2cpp_codegen_object_new(InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F_il2cpp_TypeInfo_var);
		InternalDatabaseReference__ctor_m15DFA4010F4B3D1EE1527AE2816B69E3B72B4AC3(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_GetReference_m26765A7909B10D714ACB13A2072C8958FF39A597_RuntimeMethod_var)));
	}

IL_0022:
	{
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_6 = V_0;
		V_2 = L_6;
		goto IL_0026;
	}

IL_0026:
	{
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_7 = V_2;
		return L_7;
	}
}
// Firebase.Database.InternalDatabaseReference Firebase.Database.InternalFirebaseDatabase::GetReference(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * InternalFirebaseDatabase_GetReference_m0E9DE5A3EB1BF2BA2041F243ED73CDAB074F82AE (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * V_0 = NULL;
	bool V_1 = false;
	InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_2;
		L_2 = DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetReference__SWIG_1_m46AA0EF84954A6E1462A4F373FAD214A6755CF09(L_0, L_1, /*hidden argument*/NULL);
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_3 = (InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F *)il2cpp_codegen_object_new(InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F_il2cpp_TypeInfo_var);
		InternalDatabaseReference__ctor_m15DFA4010F4B3D1EE1527AE2816B69E3B72B4AC3(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_6;
		L_6 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_GetReference_m0E9DE5A3EB1BF2BA2041F243ED73CDAB074F82AE_RuntimeMethod_var)));
	}

IL_0023:
	{
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_7 = V_0;
		V_2 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		InternalDatabaseReference_t341113BF697D6FA8E53A30FDFA4727F1264B6E6F * L_8 = V_2;
		return L_8;
	}
}
// Firebase.Database.InternalFirebaseDatabase Firebase.Database.InternalFirebaseDatabase::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * InternalFirebaseDatabase_GetInstanceInternal_mCCA92290B0FA73967F4644C26B94CA0B94F42060 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * V_2 = NULL;
	bool V_3 = false;
	InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * G_B4_0 = NULL;
	{
		V_0 = 0;
	}

IL_0003:
	try
	{ // begin try (depth: 1)
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
			L_1 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_0, /*hidden argument*/NULL);
			String_t* L_2 = ___url1;
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
			intptr_t L_3;
			L_3 = DatabaseInternalPINVOKE_InternalFirebaseDatabase_GetInstanceInternal_mA864C44E7225756A7C15EF04A2FA5A58E1B904CC(L_1, L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_3;
			intptr_t L_4 = V_1;
			bool L_5;
			L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_0029;
			}
		}

IL_0020:
		{
			intptr_t L_6 = V_1;
			InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_7 = (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 *)il2cpp_codegen_object_new(InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7_il2cpp_TypeInfo_var);
			InternalFirebaseDatabase__ctor_mC9AA4A14AA26B368210978BCB1D6045D7ACDFE94(L_7, (intptr_t)L_6, (bool)0, /*hidden argument*/NULL);
			G_B4_0 = L_7;
			goto IL_002a;
		}

IL_0029:
		{
			G_B4_0 = ((InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 *)(NULL));
		}

IL_002a:
		{
			V_2 = G_B4_0;
			IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
			bool L_8;
			L_8 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
			V_3 = L_8;
			bool L_9 = V_3;
			if (!L_9)
			{
				goto IL_003a;
			}
		}

IL_0034:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
			Exception_t * L_10;
			L_10 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_GetInstanceInternal_mCCA92290B0FA73967F4644C26B94CA0B94F42060_RuntimeMethod_var)));
		}

IL_003a:
		{
			InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_11 = V_2;
			V_4 = L_11;
			IL2CPP_LEAVE(0x45, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		int32_t* L_12 = ___init_result_out2;
		int32_t L_13 = V_0;
		*((int32_t*)L_12) = (int32_t)L_13;
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_14 = V_4;
		return L_14;
	}
}
// System.Void Firebase.Database.InternalFirebaseDatabase::ReleaseReferenceInternal(Firebase.Database.InternalFirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalFirebaseDatabase_ReleaseReferenceInternal_m1CCAB6A022685D1A343DC4DB53FF9249024D4CA1 (InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		InternalFirebaseDatabase_tFAAF24C9236BF282CD4FDEDD40D70CCF697AC4E7 * L_0 = ___instance0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		L_1 = InternalFirebaseDatabase_getCPtr_m1291635A65CCFE4DA1C669C53AAD347E374BBA49(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalFirebaseDatabase_ReleaseReferenceInternal_m4A5FAD14A1A05211F0DE6BF2B1C9262CC1758CBD(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalFirebaseDatabase_ReleaseReferenceInternal_m1CCAB6A022685D1A343DC4DB53FF9249024D4CA1_RuntimeMethod_var)));
	}

IL_001c:
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
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalListener_TryGetListener_mBFEF5388C1F3B4C2ACF7F69B3A811FDE2D7CC6DD (int32_t ___uid0, InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 ** ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m337EBCDB85CE88EF9528F02A3765E19A781B144B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * L_0 = ((InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * L_2 = ((InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_3 = ___uid0;
		InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 ** L_4 = ___listener1;
		NullCheck(L_2);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_m337EBCDB85CE88EF9528F02A3765E19A781B144B(L_2, L_3, (InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 **)L_4, /*hidden argument*/Dictionary_2_TryGetValue_m337EBCDB85CE88EF9528F02A3765E19A781B144B_RuntimeMethod_var);
		V_1 = L_5;
		IL2CPP_LEAVE(0x26, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * L_6 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x26, IL_0026)
	}

IL_0026:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__ctor_m423FF85A9DED9045BD433F9F106EFD58908EA9A8 (InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * L_0 = ((InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		int32_t L_2 = ((InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var))->get_uidGenerator_0();
		int32_t L_3 = L_2;
		((InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var))->set_uidGenerator_0(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		__this->set_uid_2(L_3);
		IL2CPP_LEAVE(0x34, FINALLY_002c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * L_4 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x34, IL_0034)
	}

IL_0034:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Finalize_mB7CA53EEFA266F1E07CAB96CCE52C37FDE9306A3 (InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		InternalListener_Dispose_m461C92FFF5573DCE1B525B25F95B097132C190C5(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x13, IL_0013)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener_Dispose_m461C92FFF5573DCE1B525B25F95B097132C190C5 (InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mF823FE22604103577AE80A422166F179B07F542D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalListener::DestroyCppListener() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * L_0 = ((InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * L_2 = ((InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_3 = __this->get_uid_2();
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_Remove_mF823FE22604103577AE80A422166F179B07F542D(L_2, L_3, /*hidden argument*/Dictionary_2_Remove_mF823FE22604103577AE80A422166F179B07F542D_RuntimeMethod_var);
		IL2CPP_LEAVE(0x32, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * L_5 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalListener__cctor_m6952A2DC685A9BF9A76B6601345EB9B9B0652003 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mBD99788D0A921C1C3E4A6063011577145AA8EDE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var))->set_uidGenerator_0(0);
		Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA * L_0 = (Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA *)il2cpp_codegen_object_new(Dictionary_2_t101A6960C3201F3DCA3EB98A0263D2408DBA56BA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mBD99788D0A921C1C3E4A6063011577145AA8EDE6(L_0, /*hidden argument*/Dictionary_2__ctor_mBD99788D0A921C1C3E4A6063011577145AA8EDE6_RuntimeMethod_var);
		((InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var))->set_databaseCallbacks_1(L_0);
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
// System.Void Firebase.Database.InternalQuery::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery__ctor_m06E7FC52DFC486674D05083E2F2919CACDEF1864 (InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Finalize_m238C884773DD3CFA8B31502742A3ED2B4064F2AA (InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalQuery::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x14, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_mF17EC42B777FFAEF00E73D6A2B5CCC8EE12DED86 (InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Firebase.Database.InternalQuery::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_Dispose_m4B5EA38A73AAF8E85A798AF67A0AC7B441689708 (InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3;
			L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4;
			L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			V_1 = L_4;
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_005a;
			}
		}

IL_0028:
		{
			bool L_6 = __this->get_swigCMemOwn_1();
			V_2 = L_6;
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_0048;
			}
		}

IL_0033:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_8 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_delete_InternalQuery_mAFB106C34F2B9E9C060EB86861A23752E2EE40AE(L_8, /*hidden argument*/NULL);
		}

IL_0048:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9;
			memset((&L_9), 0, sizeof(L_9));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_9), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_9);
		}

IL_005a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x6C, FINALLY_0064);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0064;
	}

FINALLY_0064:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(100)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(100)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6C, IL_006c)
	}

IL_006c:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot> Firebase.Database.InternalQuery::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * InternalQuery_GetValueAsync_m67CCCD62C74D362D9821C2BF3EF66F724FD2C3D2 (InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * V_2 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = DatabaseInternalPINVOKE_InternalQuery_GetValue_m3F87843DE884FC353F505FFF72B3766DDD2F74B4(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_GetValueAsync_m67CCCD62C74D362D9821C2BF3EF66F724FD2C3D2_RuntimeMethod_var)));
	}

IL_001c:
	{
		intptr_t L_5 = V_0;
		Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * L_6 = (Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 *)il2cpp_codegen_object_new(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
		Future_InternalDataSnapshot__ctor_mED1759432412B6F3DD5369D40C464347800F1C4F(L_6, (intptr_t)L_5, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631_il2cpp_TypeInfo_var);
		Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * L_7;
		L_7 = Future_InternalDataSnapshot_GetTask_m43A778E41DB7CF8D9F4DAA62EE52D4009729AD19(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		goto IL_002b;
	}

IL_002b:
	{
		Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * L_8 = V_2;
		return L_8;
	}
}
// System.Boolean Firebase.Database.InternalQuery::is_valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalQuery_is_valid_mD5D39FB3063E7E05C8C0877F4046ECF092006318 (InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = DatabaseInternalPINVOKE_InternalQuery_is_valid_mCBD29015D6DF9C30D2750CC96B30F29FEFE48D91(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_is_valid_mD5D39FB3063E7E05C8C0877F4046ECF092006318_RuntimeMethod_var)));
	}

IL_001c:
	{
		bool L_5 = V_0;
		V_2 = L_5;
		goto IL_0020;
	}

IL_0020:
	{
		bool L_6 = V_2;
		return L_6;
	}
}
// System.Void Firebase.Database.InternalQuery::DestroyValueListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyValueListener_m190B2DBAB88DB56CB9422A0EB78C703A1A2FB463 (intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_DestroyValueListener_m0C20252139C28B18457DFCB40125AF319F3B6346((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_DestroyValueListener_m190B2DBAB88DB56CB9422A0EB78C703A1A2FB463_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterValueListenerCallbacks_m994FF83CBBDAB548707F22662D6A579E550D5214 (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * ___cancelledCallback0, OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E * ___valueChangedCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * L_0 = ___cancelledCallback0;
		OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E * L_1 = ___valueChangedCallback1;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_RegisterValueListenerCallbacks_mC055AC1D6F89D25ED5EF36BD8DF883788669B038(L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_4;
		L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_RegisterValueListenerCallbacks_m994FF83CBBDAB548707F22662D6A579E550D5214_RuntimeMethod_var)));
	}

IL_0018:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::DestroyChildListener(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_DestroyChildListener_m72B64E27AE128C47D1A92C2FA76CC715FC57F167 (intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_DestroyChildListener_mB4E35A3FF0146121DFE9A85DE1B572E35F20B0DB((intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_3;
		L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_DestroyChildListener_m72B64E27AE128C47D1A92C2FA76CC715FC57F167_RuntimeMethod_var)));
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalQuery_RegisterChildListenerCallbacks_m7E198D69EF4A1B0800C04DAE1A38E3B111BF589F (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * ___cancelledCallback0, OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 * ___childChangeCallback1, OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 * ___childRemovedCallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * L_0 = ___cancelledCallback0;
		OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 * L_1 = ___childChangeCallback1;
		OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 * L_2 = ___childRemovedCallback2;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t12D95092846A3EBCD62DE3E05B78F58CDA4714F8_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_InternalQuery_RegisterChildListenerCallbacks_m5E29CDB66C38DA668E956A8BCA26C5431D07712B(L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_t5DEFD4B5D2CCA710BA73D5391DC8984813D8BE25_il2cpp_TypeInfo_var)));
		Exception_t * L_5;
		L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalQuery_RegisterChildListenerCallbacks_m7E198D69EF4A1B0800C04DAE1A38E3B111BF589F_RuntimeMethod_var)));
	}

IL_0019:
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnValueChangedHandler_m571D69CFF81F3FA73F99FEEAA6182A5B4FECB764(int32_t ___callbackId0, intptr_t ___snapshot1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	InternalValueListener_OnValueChangedHandler_m571D69CFF81F3FA73F99FEEAA6182A5B4FECB764(___callbackId0, ___snapshot1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnCancelledHandler_m55900F903CEB556A46B6EE6CE80815EDBD859E42(int32_t ___callbackId0, int32_t ___error1, char* ___msg2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	InternalValueListener_OnCancelledHandler_m55900F903CEB556A46B6EE6CE80815EDBD859E42(___callbackId0, ___error1, ____msg2_unmarshaled, NULL);

}
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalValueListener_TryGetListener_m738D37323C40BE7FCFE4BA9148AC752C8FCD053A (int32_t ___callbackId0, InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D ** ___valueListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		V_0 = (InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 *)NULL;
		int32_t L_0 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalListener_TryGetListener_mBFEF5388C1F3B4C2ACF7F69B3A811FDE2D7CC6DD(L_0, (InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 **)(&V_0), /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D ** L_3 = ___valueListener1;
		InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956 * L_4 = V_0;
		*((RuntimeObject **)L_3) = (RuntimeObject *)((InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D *)IsInstSealed((RuntimeObject*)L_4, InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)((InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D *)IsInstSealed((RuntimeObject*)L_4, InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D_il2cpp_TypeInfo_var)));
		InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D ** L_5 = ___valueListener1;
		InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * L_6 = *((InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D **)L_5);
		V_2 = (bool)((!(((RuntimeObject*)(InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D *)L_6) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_0028;
	}

IL_0020:
	{
		InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D ** L_7 = ___valueListener1;
		*((RuntimeObject **)L_7) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_7, (void*)(RuntimeObject *)NULL);
		V_2 = (bool)0;
		goto IL_0028;
	}

IL_0028:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnValueChangedHandler_m571D69CFF81F3FA73F99FEEAA6182A5B4FECB764 (int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m43BA96A9CFC989BC690C72F6449CF754F2AAA118_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3 * L_0 = (U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass3_0__ctor_m05666CC59A24AF23CA045FD875166DB8435A4B12(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3 * L_1 = V_0;
		intptr_t L_2 = ___snapshot1;
		NullCheck(L_1);
		L_1->set_snapshot_0((intptr_t)L_2);
		U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3 * L_3 = V_0;
		int32_t L_4 = ___callbackId0;
		NullCheck(L_3);
		L_3->set_callbackId_1(L_4);
		U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3 * L_5 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m43BA96A9CFC989BC690C72F6449CF754F2AAA118_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_OnCancelledHandler_m55900F903CEB556A46B6EE6CE80815EDBD859E42 (int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m9E0F92219FAFF5C237B0BE9BEB665DB678E1D5AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA * L_0 = (U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m5DF749C18F8CEAF293473504E5BEBAF21A1D85F9(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA * L_1 = V_0;
		int32_t L_2 = ___callbackId0;
		NullCheck(L_1);
		L_1->set_callbackId_0(L_2);
		U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA * L_3 = V_0;
		int32_t L_4 = ___error1;
		NullCheck(L_3);
		L_3->set_error_1(L_4);
		U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA * L_5 = V_0;
		String_t* L_6 = ___msg2;
		NullCheck(L_5);
		L_5->set_msg_2(L_6);
		U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA * L_7 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m9E0F92219FAFF5C237B0BE9BEB665DB678E1D5AD_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__cctor_m2C5287C94F0CA751959AF19048AAF1A1AE21A44A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_OnCancelledHandler_m55900F903CEB556A46B6EE6CE80815EDBD859E42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_OnValueChangedHandler_m571D69CFF81F3FA73F99FEEAA6182A5B4FECB764_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * L_0 = (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC *)il2cpp_codegen_object_new(OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC_il2cpp_TypeInfo_var);
		OnCancelledDelegate__ctor_m248FED25D7FF60944702A3F9AA5B7CF1A0C8CB80(L_0, NULL, (intptr_t)((intptr_t)InternalValueListener_OnCancelledHandler_m55900F903CEB556A46B6EE6CE80815EDBD859E42_RuntimeMethod_var), /*hidden argument*/NULL);
		OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E * L_1 = (OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E *)il2cpp_codegen_object_new(OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E_il2cpp_TypeInfo_var);
		OnValueChangedDelegate__ctor_m66B488EAEA1427C813122ABAAE8DEB737CD915D8(L_1, NULL, (intptr_t)((intptr_t)InternalValueListener_OnValueChangedHandler_m571D69CFF81F3FA73F99FEEAA6182A5B4FECB764_RuntimeMethod_var), /*hidden argument*/NULL);
		InternalQuery_RegisterValueListenerCallbacks_m994FF83CBBDAB548707F22662D6A579E550D5214(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener__ctor_mE3B7A89FB687412C8E175BD047C98E285E2AA919 (InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * __this, InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * ___internalQuery0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_eventLock_3(L_0);
		__this->set_cppListener_5((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_tA82BD08FABBF57FEA2300594A0375FDA45BE6956_il2cpp_TypeInfo_var);
		InternalListener__ctor_m423FF85A9DED9045BD433F9F106EFD58908EA9A8(__this, /*hidden argument*/NULL);
		InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * L_1 = ___internalQuery0;
		__this->set_internalQuery_4(L_1);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_2 = ___database1;
		__this->set_database_6(L_2);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::DestroyCppListener()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalValueListener_DestroyCppListener_mDFD583FD8DE8E6282FFA149360569EB9C28EDD6F (InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1;
		L_1 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		intptr_t L_3 = __this->get_cppListener_5();
		InternalQuery_DestroyValueListener_m190B2DBAB88DB56CB9422A0EB78C703A1A2FB463((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)(0));
	}

IL_002e:
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
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.InternalQuery,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Query__ctor_mF30B6DED883447335B2E5C109A12FF34131F50E8 (Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * __this, InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * ___internalQuery0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * L_0 = ___internalQuery0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Firebase.Database.InternalQuery::is_valid() */, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07F1E3DA016554FBC48202BBEF3B67E41B513EBA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Query__ctor_mF30B6DED883447335B2E5C109A12FF34131F50E8_RuntimeMethod_var)));
	}

IL_0021:
	{
		InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * L_4 = ___internalQuery0;
		__this->set_internalQuery_0(L_4);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_5 = ___database1;
		__this->set_database_1(L_5);
		InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * L_6 = ___internalQuery0;
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_7 = ___database1;
		InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * L_8 = (InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D *)il2cpp_codegen_object_new(InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D_il2cpp_TypeInfo_var);
		InternalValueListener__ctor_mE3B7A89FB687412C8E175BD047C98E285E2AA919(L_8, L_6, L_7, /*hidden argument*/NULL);
		__this->set_valueListener_2(L_8);
		InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * L_9 = ___internalQuery0;
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_10 = ___database1;
		InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * L_11 = (InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 *)il2cpp_codegen_object_new(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563_il2cpp_TypeInfo_var);
		InternalChildListener__ctor_m967B83F56D03CCF9485ACD1D0E31C6136BB9BA48(L_11, L_9, L_10, /*hidden argument*/NULL);
		__this->set_childListener_3(L_11);
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::WrapInternalDataSnapshotTask(System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * Query_WrapInternalDataSnapshotTask_mE907B66BA90C5E64B5662C87DAD23575C9A09F66 (Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * __this, Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * ___it0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2E2949322DD0B5CA09946453EDEA10FE26508B65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tCE1C19381DC6BEF31F7D71195D8B39F6C06AA3EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mD2690383B5E12BFCFC8D7ACFB946E0EBC62C595C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m670317C332B7F3BF1C2645DD4AE0FF160B5EE11E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_mECEBF9332ADD0020C97831C5FB5314D05D0B795B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CWrapInternalDataSnapshotTaskU3Eb__0_m3D4CB618D00212B8F4D3000EF3BC152CFC04E634_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47 * V_0 = NULL;
	Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47 * L_0 = (U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass21_0__ctor_m2AB5A229989D6FAE0040C9AEA8617EC5AAC64293(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_0(__this);
		U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47 * L_2 = V_0;
		TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 * L_3 = (TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_mD2690383B5E12BFCFC8D7ACFB946E0EBC62C595C(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_mD2690383B5E12BFCFC8D7ACFB946E0EBC62C595C_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_tcs_1(L_3);
		Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * L_4 = ___it0;
		U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47 * L_5 = V_0;
		Action_1_tCE1C19381DC6BEF31F7D71195D8B39F6C06AA3EA * L_6 = (Action_1_tCE1C19381DC6BEF31F7D71195D8B39F6C06AA3EA *)il2cpp_codegen_object_new(Action_1_tCE1C19381DC6BEF31F7D71195D8B39F6C06AA3EA_il2cpp_TypeInfo_var);
		Action_1__ctor_m2E2949322DD0B5CA09946453EDEA10FE26508B65(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass21_0_U3CWrapInternalDataSnapshotTaskU3Eb__0_m3D4CB618D00212B8F4D3000EF3BC152CFC04E634_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2E2949322DD0B5CA09946453EDEA10FE26508B65_RuntimeMethod_var);
		NullCheck(L_4);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_7;
		L_7 = Task_1_ContinueWith_mECEBF9332ADD0020C97831C5FB5314D05D0B795B(L_4, L_6, /*hidden argument*/Task_1_ContinueWith_mECEBF9332ADD0020C97831C5FB5314D05D0B795B_RuntimeMethod_var);
		U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47 * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 * L_9 = L_8->get_tcs_1();
		NullCheck(L_9);
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_10;
		L_10 = TaskCompletionSource_1_get_Task_m670317C332B7F3BF1C2645DD4AE0FF160B5EE11E_inline(L_9, /*hidden argument*/TaskCompletionSource_1_get_Task_m670317C332B7F3BF1C2645DD4AE0FF160B5EE11E_RuntimeMethod_var);
		V_1 = L_10;
		goto IL_003a;
	}

IL_003a:
	{
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_11 = V_1;
		return L_11;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * Query_GetValueAsync_m98FE85A2E73CE53438B3AF3F1B7076C2469C25D1 (Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * __this, const RuntimeMethod* method)
{
	Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * V_0 = NULL;
	{
		InternalQuery_t5CEE504F3A98E10124818F7D89E9B9F9D86A81D0 * L_0 = __this->get_internalQuery_0();
		NullCheck(L_0);
		Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * L_1;
		L_1 = InternalQuery_GetValueAsync_m67CCCD62C74D362D9821C2BF3EF66F724FD2C3D2(L_0, /*hidden argument*/NULL);
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_2;
		L_2 = Query_WrapInternalDataSnapshotTask_mE907B66BA90C5E64B5662C87DAD23575C9A09F66(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		Task_1_t60D3143D2C575CF686E2B74C8A870C77F012D996 * L_3 = V_0;
		return L_3;
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
// Firebase.Variant Firebase.Database.Internal.Utilities::MakeVariant(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * Utilities_MakeVariant_m78FD4C678C3062393C277EF8DAC3E6E53488DC15 (RuntimeObject * ___value0, const RuntimeMethod* method)
{
	Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * V_0 = NULL;
	ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	String_t* G_B4_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_0 = ___value0;
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_1;
		L_1 = Variant_FromObject_mE58A1F66819C8CD004C2BF52AFE4F19985597EF7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_002a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{ // begin catch(System.ArgumentException)
		{
			V_1 = ((ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *));
			RuntimeObject * L_2 = ___value0;
			G_B3_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19709657F1A68406CA65F0C729F82F01A9E68B23));
			if (L_2)
			{
				G_B4_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19709657F1A68406CA65F0C729F82F01A9E68B23));
				goto IL_0018;
			}
		}

IL_0015:
		{
			G_B5_0 = ((String_t*)(NULL));
			G_B5_1 = G_B3_0;
			goto IL_001e;
		}

IL_0018:
		{
			RuntimeObject * L_3 = ___value0;
			NullCheck(L_3);
			String_t* L_4;
			L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
			G_B5_0 = L_4;
			G_B5_1 = G_B4_0;
		}

IL_001e:
		{
			String_t* L_5;
			L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B5_1, G_B5_0, /*hidden argument*/NULL);
			ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_6 = V_1;
			DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 * L_7 = (DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DatabaseException_t648150B11620CC65E3B70CFE9354174DB51FEFE5_il2cpp_TypeInfo_var)));
			DatabaseException__ctor_m781AE6C22FF3B1DA68B293ABE9A6F948C3AB7FF9(L_7, L_5, L_6, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utilities_MakeVariant_m78FD4C678C3062393C277EF8DAC3E6E53488DC15_RuntimeMethod_var)));
		}
	} // end catch (depth: 1)

IL_002a:
	{
		Variant_tC9E895EAF1DFC875B36FD116E647B6CF93AC0068 * L_8 = V_0;
		return L_8;
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
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_m1198F269D02216F4D7E807302458CE7409A8D65F (ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * __this, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___snapshot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_0 = ___snapshot0;
		ValueChangedEventArgs_set_Snapshot_mF61362820ACDD111A1ABA52AA9D13A44868405D3_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs__ctor_mD23C8AE84228CF5D3EDFCE06DFD2C5C8D1B1A9EE (ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * __this, DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs__ctor_m5ECB9A8ED0A9E2DBB1ED999BAC1CB44F4354E571(__this, /*hidden argument*/NULL);
		DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * L_0 = ___error0;
		ValueChangedEventArgs_set_DatabaseError_mB5FB47A69517C6163CB9B6206394D3339DA19DCA_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_mF61362820ACDD111A1ABA52AA9D13A44868405D3 (ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * __this, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_mB5FB47A69517C6163CB9B6206394D3339DA19DCA (ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * __this, DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
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
// System.Void Firebase.Database.DataSnapshot/DataSnapshotEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<Firebase.Database.InternalDataSnapshot>,Firebase.Database.FirebaseDatabase,Firebase.Database.DataSnapshot/DataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshotEnumerator__ctor_mDFDADE3FA29C564B9A79E9F787E2642047909B9D (DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D * __this, RuntimeObject* ___internalEnumerator0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * ___parentList2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___internalEnumerator0;
		__this->set_internalEnumerator_0(L_0);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_1 = ___database1;
		__this->set_database_1(L_1);
		DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * L_2 = ___parentList2;
		__this->set_parentList_2(L_2);
		return;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot/DataSnapshotEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * DataSnapshotEnumerator_get_Current_m85407147C4BCA27EEF98D5C952E15200F6838752 (DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1E9AF05435B4D34B25AA3791C02C002FE564CB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_internalEnumerator_0();
		NullCheck(L_0);
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_1;
		L_1 = InterfaceFuncInvoker0< InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Firebase.Database.InternalDataSnapshot>::get_Current() */, IEnumerator_1_t1E9AF05435B4D34B25AA3791C02C002FE564CB04_il2cpp_TypeInfo_var, L_0);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_2 = __this->get_database_1();
		DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * L_3 = __this->get_parentList_2();
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_4;
		L_4 = DataSnapshot_CreateSnapshot_mB241FF440F36F65554C9648FC2BF22F2967E5D5F(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_5 = V_0;
		return L_5;
	}
}
// System.Object Firebase.Database.DataSnapshot/DataSnapshotEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DataSnapshotEnumerator_System_Collections_IEnumerator_get_Current_mC5D8679B32BB12819473652CB574ADD09C27920C (DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t1E9AF05435B4D34B25AA3791C02C002FE564CB04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_internalEnumerator_0();
		NullCheck(L_0);
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_1;
		L_1 = InterfaceFuncInvoker0< InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Firebase.Database.InternalDataSnapshot>::get_Current() */, IEnumerator_1_t1E9AF05435B4D34B25AA3791C02C002FE564CB04_il2cpp_TypeInfo_var, L_0);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_2 = __this->get_database_1();
		DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * L_3 = __this->get_parentList_2();
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_4;
		L_4 = DataSnapshot_CreateSnapshot_mB241FF440F36F65554C9648FC2BF22F2967E5D5F(L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject * L_5 = V_0;
		return L_5;
	}
}
// System.Boolean Firebase.Database.DataSnapshot/DataSnapshotEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataSnapshotEnumerator_MoveNext_m2C6937D0BBD1997EA7E1035A5411136229D29838 (DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = __this->get_internalEnumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Firebase.Database.DataSnapshot/DataSnapshotEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshotEnumerator_Reset_mE4359DD3AEFF5D9E2528910A9D8C347BE9FB2AB4 (DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_internalEnumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Firebase.Database.DataSnapshot/DataSnapshotEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshotEnumerator_Dispose_m6C48D5EA6B7951DCE8B3C7AED816647D7D9A67CF (DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_internalEnumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_0);
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
// System.Void Firebase.Database.DataSnapshot/DataSnapshotList::.ctor(System.Collections.Generic.IEnumerable`1<Firebase.Database.InternalDataSnapshot>,Firebase.Database.FirebaseDatabase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataSnapshotList__ctor_mA06F4A56E6987296779AE0B4EAFD601E6C0EF265 (DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * __this, RuntimeObject* ___internalList0, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___database1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___internalList0;
		__this->set_internalList_0(L_0);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_1 = ___database1;
		__this->set_database_1(L_1);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot> Firebase.Database.DataSnapshot/DataSnapshotList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshotList_GetEnumerator_mCC00CE535D22BD3A0ABF49FE74C7AD974E6A186B (DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t031CE69231FC3DC893EBC83FF5A66C165EEAED51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_internalList_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Firebase.Database.InternalDataSnapshot>::GetEnumerator() */, IEnumerable_1_t031CE69231FC3DC893EBC83FF5A66C165EEAED51_il2cpp_TypeInfo_var, L_0);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_2 = __this->get_database_1();
		DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D * L_3 = (DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D *)il2cpp_codegen_object_new(DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D_il2cpp_TypeInfo_var);
		DataSnapshotEnumerator__ctor_mDFDADE3FA29C564B9A79E9F787E2642047909B9D(L_3, L_1, L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator Firebase.Database.DataSnapshot/DataSnapshotList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DataSnapshotList_System_Collections_IEnumerable_GetEnumerator_m3E4EAE8BAB99193707D2D284A4F7F098A28701EE (DataSnapshotList_t8799BCA62D222D39BDD30DA40E8A1B4BF9F8A842 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t031CE69231FC3DC893EBC83FF5A66C165EEAED51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->get_internalList_0();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Firebase.Database.InternalDataSnapshot>::GetEnumerator() */, IEnumerable_1_t031CE69231FC3DC893EBC83FF5A66C165EEAED51_il2cpp_TypeInfo_var, L_0);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_2 = __this->get_database_1();
		DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D * L_3 = (DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D *)il2cpp_codegen_object_new(DataSnapshotEnumerator_t417E3D2BD275B97C3C4E9D0D3AD7E05E35F03F5D_il2cpp_TypeInfo_var);
		DataSnapshotEnumerator__ctor_mDFDADE3FA29C564B9A79E9F787E2642047909B9D(L_3, L_1, L_2, __this, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001b;
	}

IL_001b:
	{
		RuntimeObject* L_4 = V_0;
		return L_4;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m377BB2DE45F30DA21083EE753BDEC79D9212FDF4(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m377BB2DE45F30DA21083EE753BDEC79D9212FDF4(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m73E8A430BD4C1D04462AE032F1C323AEE1457E05(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m73E8A430BD4C1D04462AE032F1C323AEE1457E05(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m91D8C7C04B791E2E1EECBCE2ECCC8939D0225D8E(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m91D8C7C04B791E2E1EECBCE2ECCC8939D0225D8E(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFC1CF3FCDF68EE5E1E89CCD3518D487C8B23477F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFC1CF3FCDF68EE5E1E89CCD3518D487C8B23477F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m6014336D1D32DC06743EFA93E791111E0642DA29(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m6014336D1D32DC06743EFA93E791111E0642DA29(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m72F773E470EC582CFF080D0C9B82FD34577C184F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m72F773E470EC582CFF080D0C9B82FD34577C184F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m836485F3142C00D31F0A6788A244F9F18020633C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m836485F3142C00D31F0A6788A244F9F18020633C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m487720C91262230563DC3EEFF69447A5A1A01B9D(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m487720C91262230563DC3EEFF69447A5A1A01B9D(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mDC148D80E05DB75259C36706BBCA8AA7160B1971(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_mDC148D80E05DB75259C36706BBCA8AA7160B1971(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m1B13BAED239B9E719AB2DDFD018F0BDD7F0E702F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m1B13BAED239B9E719AB2DDFD018F0BDD7F0E702F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m1DD3FFA06F12A427AB91DC9E0AA0FE12FB041A3C(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m1DD3FFA06F12A427AB91DC9E0AA0FE12FB041A3C(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m70A9D4FE95EB40ED67FA3871D2793E5A4161B2E9(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m70A9D4FE95EB40ED67FA3871D2793E5A4161B2E9(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m42C6E4D09BA80136DE63B08F1E82540A4E06A2FC(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m42C6E4D09BA80136DE63B08F1E82540A4E06A2FC(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m560F02541BE4AA13B7F181EDC45D7EAFDD9EA2FE(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m560F02541BE4AA13B7F181EDC45D7EAFDD9EA2FE(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_mB9E7871FCEEA2634DB32B29C7517B5235E2B1E6A (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___applicationDelegate0, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___arithmeticDelegate1, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___divideByZeroDelegate2, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___indexOutOfRangeDelegate3, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___invalidCastDelegate4, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___invalidOperationDelegate5, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___ioDelegate6, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___nullReferenceDelegate7, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___outOfMemoryDelegate8, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___overflowDelegate9, ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "SWIGRegisterExceptionCallbacks_DatabaseInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_DatabaseInternal)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#else
	il2cppPInvokeFunc(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m62724F93E01C642A503F9A4185AAE5DB4EC5844D (ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * ___argumentDelegate0, ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * ___argumentNullDelegate1, ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "SWIGRegisterExceptionArgumentCallbacks_DatabaseInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionArgumentCallbacks_DatabaseInternal)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#else
	il2cppPInvokeFunc(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);
	#endif

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_m377BB2DE45F30DA21083EE753BDEC79D9212FDF4 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_2 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_m73E8A430BD4C1D04462AE032F1C323AEE1457E05 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * L_2 = (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 *)il2cpp_codegen_object_new(ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m91D8C7C04B791E2E1EECBCE2ECCC8939D0225D8E (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * L_2 = (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 *)il2cpp_codegen_object_new(DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFC1CF3FCDF68EE5E1E89CCD3518D487C8B23477F (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_2 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m6014336D1D32DC06743EFA93E791111E0642DA29 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_2 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m72F773E470EC582CFF080D0C9B82FD34577C184F (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_m836485F3142C00D31F0A6788A244F9F18020633C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_2 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_m487720C91262230563DC3EEFF69447A5A1A01B9D (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mDC148D80E05DB75259C36706BBCA8AA7160B1971 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * L_2 = (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC *)il2cpp_codegen_object_new(OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m1B13BAED239B9E719AB2DDFD018F0BDD7F0E702F (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m1DD3FFA06F12A427AB91DC9E0AA0FE12FB041A3C (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_1;
		L_1 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_2 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m70A9D4FE95EB40ED67FA3871D2793E5A4161B2E9 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_2;
		L_2 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m42C6E4D09BA80136DE63B08F1E82540A4E06A2FC (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___message0;
		Exception_t * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, /*hidden argument*/NULL);
		___message0 = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___paramName1;
		String_t* L_8 = ___message0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_9 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_9, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m560F02541BE4AA13B7F181EDC45D7EAFDD9EA2FE (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B47BC9031A69F662702621810EC706E2C081467);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_0;
		L_0 = SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		V_1 = (bool)((!(((RuntimeObject*)(Exception_t *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___message0;
		Exception_t * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_3, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_5, /*hidden argument*/NULL);
		___message0 = L_6;
	}

IL_0022:
	{
		String_t* L_7 = ___paramName1;
		String_t* L_8 = ___message0;
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_9 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_9, L_7, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA(L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m8141161F5F7C0AEE555021C86134569FE55378B3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingApplicationException_m377BB2DE45F30DA21083EE753BDEC79D9212FDF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentException_m70A9D4FE95EB40ED67FA3871D2793E5A4161B2E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentNullException_m42C6E4D09BA80136DE63B08F1E82540A4E06A2FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m560F02541BE4AA13B7F181EDC45D7EAFDD9EA2FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingArithmeticException_m73E8A430BD4C1D04462AE032F1C323AEE1457E05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingDivideByZeroException_m91D8C7C04B791E2E1EECBCE2ECCC8939D0225D8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIOException_m836485F3142C00D31F0A6788A244F9F18020633C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFC1CF3FCDF68EE5E1E89CCD3518D487C8B23477F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidCastException_m6014336D1D32DC06743EFA93E791111E0642DA29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingInvalidOperationException_m72F773E470EC582CFF080D0C9B82FD34577C184F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingNullReferenceException_m487720C91262230563DC3EEFF69447A5A1A01B9D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOutOfMemoryException_mDC148D80E05DB75259C36706BBCA8AA7160B1971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingOverflowException_m1B13BAED239B9E719AB2DDFD018F0BDD7F0E702F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_SetPendingSystemException_m1DD3FFA06F12A427AB91DC9E0AA0FE12FB041A3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_0 = (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF *)il2cpp_codegen_object_new(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m377BB2DE45F30DA21083EE753BDEC79D9212FDF4_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_1 = (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF *)il2cpp_codegen_object_new(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m73E8A430BD4C1D04462AE032F1C323AEE1457E05_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_2 = (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF *)il2cpp_codegen_object_new(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m91D8C7C04B791E2E1EECBCE2ECCC8939D0225D8E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_3 = (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF *)il2cpp_codegen_object_new(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mFC1CF3FCDF68EE5E1E89CCD3518D487C8B23477F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_4 = (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF *)il2cpp_codegen_object_new(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m6014336D1D32DC06743EFA93E791111E0642DA29_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_5 = (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF *)il2cpp_codegen_object_new(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m72F773E470EC582CFF080D0C9B82FD34577C184F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_6 = (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF *)il2cpp_codegen_object_new(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_m836485F3142C00D31F0A6788A244F9F18020633C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_7 = (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF *)il2cpp_codegen_object_new(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m487720C91262230563DC3EEFF69447A5A1A01B9D_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_8 = (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF *)il2cpp_codegen_object_new(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_mDC148D80E05DB75259C36706BBCA8AA7160B1971_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_9 = (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF *)il2cpp_codegen_object_new(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m1B13BAED239B9E719AB2DDFD018F0BDD7F0E702F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_10 = (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF *)il2cpp_codegen_object_new(ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m1DD3FFA06F12A427AB91DC9E0AA0FE12FB041A3C_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * L_11 = (ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m678EE07B2B9CA7EF0472BCF865AB33613DF6908D(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m70A9D4FE95EB40ED67FA3871D2793E5A4161B2E9_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * L_12 = (ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m678EE07B2B9CA7EF0472BCF865AB33613DF6908D(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_m42C6E4D09BA80136DE63B08F1E82540A4E06A2FC_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * L_13 = (ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m678EE07B2B9CA7EF0472BCF865AB33613DF6908D(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m560F02541BE4AA13B7F181EDC45D7EAFDD9EA2FE_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_14 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_15 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_16 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_17 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_18 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_19 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_20 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_21 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_22 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_23 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * L_24 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_mB9E7871FCEEA2634DB32B29C7517B5235E2B1E6A(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * L_25 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * L_26 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * L_27 = ((SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m62724F93E01C642A503F9A4185AAE5DB4EC5844D(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m0639E25E7CE996689DB5AC51AF59B433BE541E5D (SWIGExceptionHelper_t832A037178D53D644DC8962FCF0574D1831366E3 * __this, const RuntimeMethod* method)
{
	{
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
// System.Boolean Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m568EEEC2A6E279C708D238BB1040DFDB7883B542 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_2 = ((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_001d:
	{
		bool L_4 = V_0;
		V_3 = L_4;
		goto IL_0021;
	}

IL_0021:
	{
		bool L_5 = V_3;
		return L_5;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_0 = ((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = (bool)((!(((RuntimeObject*)(Exception_t *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var)));
		Exception_t * L_2 = ((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))))->get_pendingException_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D)), /*hidden argument*/NULL);
		Exception_t * L_5 = ___e0;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_6 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var)));
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_6, L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SWIGPendingException_Set_mEEF5701070DB88F3DB9FDD71F8DD9727E419A0EA_RuntimeMethod_var)));
	}

IL_002d:
	{
		Exception_t * L_7 = ___e0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->set_pendingException_0(L_7);
		RuntimeObject * L_8 = ((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->get_exceptionsLock_2();
		V_1 = L_8;
		RuntimeObject * L_9 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_9, /*hidden argument*/NULL);
	}

IL_0040:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		int32_t L_10 = ((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x58, FINALLY_0050);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x58, IL_0058)
	}

IL_0058:
	{
		return;
	}
}
// System.Exception Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mD5E3DDD96FEA42BD4F0C0E40BC3C7DD7CD67996B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	Exception_t * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		V_0 = (Exception_t *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		V_1 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_2 = ((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_2 = (bool)((!(((RuntimeObject*)(Exception_t *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		Exception_t * L_4 = ((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_4;
		((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeObject * L_5 = ((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->get_exceptionsLock_2();
		V_3 = L_5;
		RuntimeObject * L_6 = V_3;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_6, /*hidden argument*/NULL);
	}

IL_0036:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		int32_t L_7 = ((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)));
		IL2CPP_LEAVE(0x4E, FINALLY_0046);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_3;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
	}

IL_004e:
	{
	}

IL_004f:
	{
	}

IL_0050:
	{
		Exception_t * L_9 = V_0;
		V_4 = L_9;
		goto IL_0055;
	}

IL_0055:
	{
		Exception_t * L_10 = V_4;
		return L_10;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGPendingException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException__cctor_m5F3EA51DEAECE45197B44614BCF0C277EA9A55BE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(0);
		((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->set_exceptionsLock_2(NULL);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_tE5A4550A95664EBEDC41ADBEEAF56276765A813E_il2cpp_TypeInfo_var))->set_exceptionsLock_2(L_0);
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mD7B98AEEC7A5A719A8BB07FEE5C67BE34F619E27(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_mD7B98AEEC7A5A719A8BB07FEE5C67BE34F619E27(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m6377EAA3A11812D564076D229291FF7D9A4670EB (SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("FirebaseCppApp-9_0_0"), "SWIGRegisterStringCallback_DatabaseInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_FirebaseCppApp_9_0_0_INTERNAL
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_DatabaseInternal)(____stringDelegate0_marshaled);
	#else
	il2cppPInvokeFunc(____stringDelegate0_marshaled);
	#endif

}
// System.String Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mD7B98AEEC7A5A719A8BB07FEE5C67BE34F619E27 (String_t* ___cString0, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___cString0;
		V_0 = L_0;
		goto IL_0005;
	}

IL_0005:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_m71EB842B12FD24B936E7112E6DA6806DEB978DC7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_CreateString_mD7B98AEEC7A5A719A8BB07FEE5C67BE34F619E27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * L_0 = (SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE *)il2cpp_codegen_object_new(SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_mF891F49ADA609183011C8467F08CF8021FFDC873(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_mD7B98AEEC7A5A719A8BB07FEE5C67BE34F619E27_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * L_1 = ((SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m6377EAA3A11812D564076D229291FF7D9A4670EB(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_m49B52E862F51CA8CC07C4C19427C9752BAF524D4 (SWIGStringHelper_t5828B46D15CAAE9C880C3E9DC192F09A68367EDD * __this, const RuntimeMethod* method)
{
	{
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
// System.Void Firebase.Database.DatabaseReference/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_m77AA0DF46DEB7CC95DDB189AE00A6232F54315D3 (U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseReference/<>c__DisplayClass29_0::<WrapInternalDefaultTask>b__0(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CWrapInternalDefaultTaskU3Eb__0_m2200E784F791DFE5CC9CEC7CD9064814ED8C542E (U3CU3Ec__DisplayClass29_0_tC890DE729D0DB9B36484AFDDBE116B505C30295A * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Query_CheckTaskStatus_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m43FFEDD0E87791905E584A039D5425D07C3A9A16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mBC013C4BFE7F83CEB4DC24476C87B3F5073A00BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * L_0 = __this->get_U3CU3E4__this_0();
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1 = ___task0;
		TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * L_2 = __this->get_tcs_1();
		NullCheck(L_0);
		bool L_3;
		L_3 = Query_CheckTaskStatus_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m43FFEDD0E87791905E584A039D5425D07C3A9A16(L_0, L_1, L_2, /*hidden argument*/Query_CheckTaskStatus_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m43FFEDD0E87791905E584A039D5425D07C3A9A16_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * L_5 = __this->get_tcs_1();
		NullCheck(L_5);
		TaskCompletionSource_1_SetResult_mBC013C4BFE7F83CEB4DC24476C87B3F5073A00BE(L_5, (bool)1, /*hidden argument*/TaskCompletionSource_1_SetResult_mBC013C4BFE7F83CEB4DC24476C87B3F5073A00BE_RuntimeMethod_var);
	}

IL_0026:
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
// System.Void Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mBCEF4FC4931F7BDE54FDD0DFDDFF7216042EB73E (U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Future_InternalDataSnapshot/<>c__DisplayClass4_0::<GetTask>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CGetTaskU3Eb__0_m2960C3BE91912BFB5995EC3E8BF2F64D94885AF9 (U3CU3Ec__DisplayClass4_0_t70AA66963BC0A2C51E5F9EC8B8BA98DA44C75FC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetCanceled_m6CC6A7E5B7DB013A630F6BEB56AB8A005E8F5E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetException_m8FC2983816DD9AE5209C39BA24146BF78D2E8EEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_m67B5A56DA662996813023DC1BAA8AB7C175A1D6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * L_0 = __this->get_fu_0();
			NullCheck(L_0);
			int32_t L_1;
			L_1 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_0, /*hidden argument*/NULL);
			V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
			bool L_2 = V_0;
			if (!L_2)
			{
				goto IL_0024;
			}
		}

IL_0014:
		{
			TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * L_3 = __this->get_tcs_1();
			NullCheck(L_3);
			TaskCompletionSource_1_SetCanceled_m6CC6A7E5B7DB013A630F6BEB56AB8A005E8F5E70(L_3, /*hidden argument*/TaskCompletionSource_1_SetCanceled_m6CC6A7E5B7DB013A630F6BEB56AB8A005E8F5E70_RuntimeMethod_var);
			goto IL_0074;
		}

IL_0024:
		{
			Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * L_4 = __this->get_fu_0();
			NullCheck(L_4);
			int32_t L_5;
			L_5 = FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03(L_4, /*hidden argument*/NULL);
			V_1 = L_5;
			int32_t L_6 = V_1;
			V_2 = (bool)((!(((uint32_t)L_6) <= ((uint32_t)0)))? 1 : 0);
			bool L_7 = V_2;
			if (!L_7)
			{
				goto IL_005a;
			}
		}

IL_0039:
		{
			TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * L_8 = __this->get_tcs_1();
			int32_t L_9 = V_1;
			Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * L_10 = __this->get_fu_0();
			NullCheck(L_10);
			String_t* L_11;
			L_11 = FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774(L_10, /*hidden argument*/NULL);
			FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_12 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
			FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_12, L_9, L_11, /*hidden argument*/NULL);
			NullCheck(L_8);
			TaskCompletionSource_1_SetException_m8FC2983816DD9AE5209C39BA24146BF78D2E8EEC(L_8, L_12, /*hidden argument*/TaskCompletionSource_1_SetException_m8FC2983816DD9AE5209C39BA24146BF78D2E8EEC_RuntimeMethod_var);
			goto IL_0073;
		}

IL_005a:
		{
			TaskCompletionSource_1_tB2311590DC84ED9E7AA08D17AC013E320D097223 * L_13 = __this->get_tcs_1();
			Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * L_14 = __this->get_fu_0();
			NullCheck(L_14);
			InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_15;
			L_15 = Future_InternalDataSnapshot_GetResult_m28E25B2824136D3A2EA1E2A4530B8012DF9E7721(L_14, /*hidden argument*/NULL);
			NullCheck(L_13);
			TaskCompletionSource_1_SetResult_m67B5A56DA662996813023DC1BAA8AB7C175A1D6B(L_13, L_15, /*hidden argument*/TaskCompletionSource_1_SetResult_m67B5A56DA662996813023DC1BAA8AB7C175A1D6B_RuntimeMethod_var);
		}

IL_0073:
		{
		}

IL_0074:
		{
			goto IL_008e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		Exception_t * L_16 = V_3;
		String_t* L_17;
		L_17 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F)), L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var)));
		LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(4, L_17, /*hidden argument*/NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	} // end catch (depth: 1)

IL_008e:
	{
		Future_InternalDataSnapshot_t2EE6F7654C8054C41F82B3464D3F82E6F3051631 * L_18 = __this->get_fu_0();
		NullCheck(L_18);
		FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB(L_18, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A (Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Database.Future_InternalDataSnapshot/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m62A16BA9085412AE20F03B92D82C7E0762297A77 (Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Future_InternalDataSnapshot/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mA76524B80991F76146ACEA8DBC2DF726FEB8725E (Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Future_InternalDataSnapshot/Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_m0BC997D81F1D705B86073189DC37E819794AB41E (Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void Firebase.Database.Future_InternalDataSnapshot/Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_mFB40A5C047EB9CD47E72FB92CB2867EC3ECD4D4F (Action_t3CB5699D7535097AB07674CEF40F7C037BBC2B9A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 (SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m3F7B6EC23D0B2484DAF5B6FCF95F7AEEB0332548 (SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_mF8BB4271D142B3593E633C98F27D1AA06C2958F4 (SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___index0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___index0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___index0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_mB34A91766BA573AA8FEF7CCE8802546C7EA0F544 (SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * __this, int32_t ___index0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Database.Future_InternalDataSnapshot/SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_m4E9DCB8AE1A8A4DB119A7753F47347746ED60909 (SWIG_CompletionDelegate_t7CE37E8F3C01E3B6234DCCFC51FC15287885DCF0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m9A6163BC7096A98347E630D88F6818A36EDE99DB (U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass4_0::<OnChildChangeHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnChildChangeHandlerU3Eb__0_m99ADD76E5FE255790179C6507277310B6A73E62C (U3CU3Ec__DisplayClass4_0_t40D3229AF8B2E1DC31C19C0047CA9B01A02C9A0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m404986A754EF91DBA5BAC3F22B924FD6C7C05A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * V_0 = NULL;
	EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * V_1 = NULL;
	InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		intptr_t L_0 = __this->get_snapshot_0();
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_1 = (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E *)il2cpp_codegen_object_new(InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_mF92765D4F94244010A55F45A200EBF265575ED14(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 *)NULL;
		V_2 = (InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 *)NULL;
		int32_t L_2 = __this->get_callbackId_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = InternalChildListener_TryGetListener_m10931CAF61F39B1466F678431424C6008E05E54B(L_2, (InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 **)(&V_2), /*hidden argument*/NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_5 = __this->get_changeType_2();
		V_5 = L_5;
		int32_t L_6 = V_5;
		V_4 = L_6;
		int32_t L_7 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0047:
	{
		InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * L_8 = V_2;
		NullCheck(L_8);
		EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * L_9 = L_8->get_childAddedImpl_8();
		V_1 = L_9;
		goto IL_0062;
	}

IL_0050:
	{
		InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * L_10 = V_2;
		NullCheck(L_10);
		EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * L_11 = L_10->get_childChangedImpl_9();
		V_1 = L_11;
		goto IL_0062;
	}

IL_0059:
	{
		InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * L_12 = V_2;
		NullCheck(L_12);
		EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * L_13 = L_12->get_childMovedImpl_10();
		V_1 = L_13;
		goto IL_0062;
	}

IL_0062:
	{
	}

IL_0063:
	{
		EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * L_14 = V_1;
		V_6 = (bool)((!(((RuntimeObject*)(EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 *)L_14) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0090;
		}
	}
	{
		EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * L_16 = V_1;
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_17 = V_0;
		InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * L_18 = V_2;
		NullCheck(L_18);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_19 = L_18->get_database_6();
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_20;
		L_20 = DataSnapshot_CreateSnapshot_mFBA4A179D82E0F8BB52717D8BA89784729C65607(L_17, L_19, /*hidden argument*/NULL);
		String_t* L_21 = __this->get_previousChildName_3();
		ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * L_22 = (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 *)il2cpp_codegen_object_new(ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_m64AE25C26D39720A7BCDAEB75EAC125A0E8AA723(L_22, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_16);
		EventHandler_1_Invoke_m404986A754EF91DBA5BAC3F22B924FD6C7C05A29(L_16, NULL, L_22, /*hidden argument*/EventHandler_1_Invoke_m404986A754EF91DBA5BAC3F22B924FD6C7C05A29_RuntimeMethod_var);
		goto IL_0099;
	}

IL_0090:
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_23 = V_0;
		NullCheck(L_23);
		InternalDataSnapshot_Dispose_mE9F953EAF050A4B713E2A518924BA6B58091AE9F(L_23, /*hidden argument*/NULL);
	}

IL_0099:
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
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m5CA59F064721FFB79E2F9A4D626442836E5DAD35 (U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass5_0::<OnChildRemovedHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0_U3COnChildRemovedHandlerU3Eb__0_m450B8B9A2E58E9FB9B64BA0199B387EE83AB36A8 (U3CU3Ec__DisplayClass5_0_tD63570BD77BE925097932380236C36BAEA5ECF63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m404986A754EF91DBA5BAC3F22B924FD6C7C05A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * V_0 = NULL;
	EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * V_1 = NULL;
	InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		intptr_t L_0 = __this->get_snapshot_0();
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_1 = (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E *)il2cpp_codegen_object_new(InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_mF92765D4F94244010A55F45A200EBF265575ED14(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 *)NULL;
		V_2 = (InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 *)NULL;
		int32_t L_2 = __this->get_callbackId_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = InternalChildListener_TryGetListener_m10931CAF61F39B1466F678431424C6008E05E54B(L_2, (InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 **)(&V_2), /*hidden argument*/NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * L_5 = V_2;
		NullCheck(L_5);
		EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * L_6 = L_5->get_childRemovedImpl_11();
		V_1 = L_6;
	}

IL_002c:
	{
		EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * L_7 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0054;
		}
	}
	{
		EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * L_9 = V_1;
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_10 = V_0;
		InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * L_11 = V_2;
		NullCheck(L_11);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_12 = L_11->get_database_6();
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_13;
		L_13 = DataSnapshot_CreateSnapshot_mFBA4A179D82E0F8BB52717D8BA89784729C65607(L_10, L_12, /*hidden argument*/NULL);
		ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * L_14 = (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 *)il2cpp_codegen_object_new(ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_m64AE25C26D39720A7BCDAEB75EAC125A0E8AA723(L_14, L_13, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_9);
		EventHandler_1_Invoke_m404986A754EF91DBA5BAC3F22B924FD6C7C05A29(L_9, NULL, L_14, /*hidden argument*/EventHandler_1_Invoke_m404986A754EF91DBA5BAC3F22B924FD6C7C05A29_RuntimeMethod_var);
		goto IL_005d;
	}

IL_0054:
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_15 = V_0;
		NullCheck(L_15);
		InternalDataSnapshot_Dispose_mE9F953EAF050A4B713E2A518924BA6B58091AE9F(L_15, /*hidden argument*/NULL);
	}

IL_005d:
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
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m356938F37B1BCF2E8A646328A348821F899B0890 (U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener/<>c__DisplayClass6_0::<OnCancelledHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0_U3COnCancelledHandlerU3Eb__0_mD232DD9AF8B4B57640FA71DD84D343D48BC963BC (U3CU3Ec__DisplayClass6_0_tD305EDF6A0C06F970564A6136F6B88BB986457F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m404986A754EF91DBA5BAC3F22B924FD6C7C05A29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * V_0 = NULL;
	InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 *)NULL;
		int32_t L_0 = __this->get_callbackId_0();
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalChildListener_TryGetListener_m10931CAF61F39B1466F678431424C6008E05E54B(L_0, (InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 **)(&V_1), /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InternalChildListener_t4012C06A40CE00FC9D401E61C7D59EE645C96563 * L_3 = V_1;
		NullCheck(L_3);
		EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * L_4 = L_3->get_cancelledImpl_7();
		V_0 = L_4;
	}

IL_001d:
	{
		EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * L_5 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		EventHandler_1_t6579AA7680DB1BA0ADD84F773BA3241F4D05A6C0 * L_7 = V_0;
		int32_t L_8 = __this->get_error_1();
		String_t* L_9 = __this->get_msg_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var);
		DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * L_10;
		L_10 = DatabaseError_FromError_m4715BD4DE9F080CA1E87153311CABA2EC11D24D8(L_8, L_9, /*hidden argument*/NULL);
		ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * L_11 = (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 *)il2cpp_codegen_object_new(ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_m81FF0736EFD59D579A701F63E11B7B16A026C059(L_11, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_m404986A754EF91DBA5BAC3F22B924FD6C7C05A29(L_7, NULL, L_11, /*hidden argument*/EventHandler_1_Invoke_m404986A754EF91DBA5BAC3F22B924FD6C7C05A29_RuntimeMethod_var);
	}

IL_0045:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___error1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_m248FED25D7FF60944702A3F9AA5B7CF1A0C8CB80 (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_Invoke_mF3615388CFCC9C0ADD32D1A6CBBE9EFAF7443905 (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___error1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
					else
						VirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::BeginInvoke(System.Int32,Firebase.Database.Error,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCancelledDelegate_BeginInvoke_m7F658B21AB6F87343A3CCD47BFF5F996D7A47720 (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Error_tB39068F6A2A7301F0F10A67554D08536E4E9E8A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(Error_tB39068F6A2A7301F0F10A67554D08536E4E9E8A3_il2cpp_TypeInfo_var, &___error1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_EndInvoke_m827C1C12216C191CA9CE361CD9EEFFD60C867BF7 (OnCancelledDelegate_t4F1A75D4D67274F32FB1538209676B7317EF3DEC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 (OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___previousChildName3' to native representation
	char* ____previousChildName3_marshaled = NULL;
	____previousChildName3_marshaled = il2cpp_codegen_marshal_string(___previousChildName3);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___changeType1, ___snapshot2, ____previousChildName3_marshaled);

	// Marshaling cleanup of parameter '___previousChildName3' native representation
	il2cpp_codegen_marshal_free(____previousChildName3_marshaled);
	____previousChildName3_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate__ctor_m9BFDE1F969A02B54181D9A9C1D8380FF6DAC6B6A (OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::Invoke(System.Int32,Firebase.Database.ChildChangeType,System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate_Invoke_m66B3C740C6F63D8A0B5277C158B7731D0E4E06D0 (OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
					else
						GenericVirtActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
					else
						VirtActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::BeginInvoke(System.Int32,Firebase.Database.ChildChangeType,System.IntPtr,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnChildChangeDelegate_BeginInvoke_m07BB963F382590EAC42043F685826267A82BAB8D (OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChildChangeType_tC7CFB18EB19C698C73A6DBB787B6BF7EEE7E04E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(ChildChangeType_tC7CFB18EB19C698C73A6DBB787B6BF7EEE7E04E0_il2cpp_TypeInfo_var, &___changeType1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot2);
	__d_args[3] = ___previousChildName3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);;
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildChangeDelegate_EndInvoke_m1705D9DA33065711346BEB129DC23E0527B72F7B (OnChildChangeDelegate_t65C22C0162496A3CD16602E1E31C2F1011109092 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 (OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___snapshot1);

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate__ctor_m7EF292CFC57F57696207C784EB273C31A2A3BC5C (OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate_Invoke_m53CEAF1D7A94BFB81BA757847DC93AF2EB5E7E00 (OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___snapshot1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___snapshot1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___snapshot1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnChildRemovedDelegate_BeginInvoke_m1770533E8B176764E871A1C26F0A06C885150675 (OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnChildRemovedDelegate_EndInvoke_mEE858F2D73CC6CB6C284BA36A1FDC34C9FE5ADC5 (OnChildRemovedDelegate_t6230E05CABE68F15C8469BCB459A98FFE4E537D6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::.ctor(Firebase.Database.InternalDataSnapshotList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshotListEnumerator__ctor_m6E402F6D73419DF654150B8AFA9D7524FF45661C (InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394 * __this, InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * ___collection0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * L_0 = ___collection0;
		__this->set_collectionRef_0(L_0);
		__this->set_currentIndex_1((-1));
		__this->set_currentObject_2(NULL);
		InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * L_1 = __this->get_collectionRef_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InternalDataSnapshotList_get_Count_mAACCA81021AC06F88E30F7D58D4D1F54DD8733C4(L_1, /*hidden argument*/NULL);
		__this->set_currentSize_3(L_2);
		return;
	}
}
// Firebase.Database.InternalDataSnapshot Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * InternalDataSnapshotListEnumerator_get_Current_mA325E4029226CDF1DA2F9052E59F77CFDCD63100 (InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * V_3 = NULL;
	{
		int32_t L_0 = __this->get_currentIndex_1();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88B277217AED4CBAA42043A4D5CD8DB154680BFA)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshotListEnumerator_get_Current_mA325E4029226CDF1DA2F9052E59F77CFDCD63100_RuntimeMethod_var)));
	}

IL_0019:
	{
		int32_t L_3 = __this->get_currentIndex_1();
		int32_t L_4 = __this->get_currentSize_3();
		V_1 = (bool)((((int32_t)L_3) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1))))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7D6709CAC9D8FCE4933C82CDA34EE45277DBD95)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshotListEnumerator_get_Current_mA325E4029226CDF1DA2F9052E59F77CFDCD63100_RuntimeMethod_var)));
	}

IL_0038:
	{
		RuntimeObject * L_7 = __this->get_currentObject_2();
		V_2 = (bool)((((RuntimeObject*)(RuntimeObject *)L_7) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_9 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral572FD223BFCEC6E8E552A7CC84FEDA3269F3A5F7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshotListEnumerator_get_Current_mA325E4029226CDF1DA2F9052E59F77CFDCD63100_RuntimeMethod_var)));
	}

IL_0050:
	{
		RuntimeObject * L_10 = __this->get_currentObject_2();
		V_3 = ((InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E *)CastclassClass((RuntimeObject*)L_10, InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var));
		goto IL_005e;
	}

IL_005e:
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_11 = V_3;
		return L_11;
	}
}
// System.Object Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::global::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InternalDataSnapshotListEnumerator_globalU3AU3ASystem_Collections_IEnumerator_get_Current_mE01F3A8908DD99787EB7DB023650EDB2BBBD6D59 (InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_0;
		L_0 = InternalDataSnapshotListEnumerator_get_Current_mA325E4029226CDF1DA2F9052E59F77CFDCD63100(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalDataSnapshotListEnumerator_MoveNext_mF1B49D945D0391E967B44F4735AB2F2FDFA17D5C (InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * L_0 = __this->get_collectionRef_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InternalDataSnapshotList_get_Count_mAACCA81021AC06F88E30F7D58D4D1F54DD8733C4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_currentIndex_1();
		int32_t L_3 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))) >= ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_currentSize_3();
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_8 = __this->get_currentIndex_1();
		__this->set_currentIndex_1(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * L_9 = __this->get_collectionRef_0();
		int32_t L_10 = __this->get_currentIndex_1();
		NullCheck(L_9);
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_11;
		L_11 = InternalDataSnapshotList_get_Item_mCB4A1EA3BA4CADBBE3F7B58F5E7D833773F00CFE(L_9, L_10, /*hidden argument*/NULL);
		__this->set_currentObject_2(L_11);
		goto IL_005c;
	}

IL_0053:
	{
		__this->set_currentObject_2(NULL);
	}

IL_005c:
	{
		bool L_12 = V_1;
		V_3 = L_12;
		goto IL_0060;
	}

IL_0060:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Void Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshotListEnumerator_Reset_m585ECE2841EDBC93C6862FFE7A669577E79B2C5B (InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		__this->set_currentIndex_1((-1));
		__this->set_currentObject_2(NULL);
		InternalDataSnapshotList_t8A8C2BB74FC3B971C51B8AE85CC2455C93A0F1B4 * L_0 = __this->get_collectionRef_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InternalDataSnapshotList_get_Count_mAACCA81021AC06F88E30F7D58D4D1F54DD8733C4(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_currentSize_3();
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral572FD223BFCEC6E8E552A7CC84FEDA3269F3A5F7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InternalDataSnapshotListEnumerator_Reset_m585ECE2841EDBC93C6862FFE7A669577E79B2C5B_RuntimeMethod_var)));
	}

IL_0035:
	{
		return;
	}
}
// System.Void Firebase.Database.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalDataSnapshotListEnumerator_Dispose_m68CF6ABDEBCC2BD0813687E4CCB516FD02267070 (InternalDataSnapshotListEnumerator_t9572CE801AAF59083B655B8A1F97998ACDB0D394 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currentIndex_1((-1));
		__this->set_currentObject_2(NULL);
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
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m05666CC59A24AF23CA045FD875166DB8435A4B12 (U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass3_0::<OnValueChangedHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3COnValueChangedHandlerU3Eb__0_m43BA96A9CFC989BC690C72F6449CF754F2AAA118 (U3CU3Ec__DisplayClass3_0_tEED0C852BC83197F461E50EB60F20C3D04B7EAB3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m0A38C6E82462B13F17E7427AE3A31706196F0781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * V_0 = NULL;
	EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D * V_1 = NULL;
	InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	{
		intptr_t L_0 = __this->get_snapshot_0();
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_1 = (InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E *)il2cpp_codegen_object_new(InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_mF92765D4F94244010A55F45A200EBF265575ED14(L_1, (intptr_t)L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D *)NULL;
		V_2 = (InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D *)NULL;
		int32_t L_2 = __this->get_callbackId_1();
		IL2CPP_RUNTIME_CLASS_INIT(InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = InternalValueListener_TryGetListener_m738D37323C40BE7FCFE4BA9148AC752C8FCD053A(L_2, (InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D **)(&V_2), /*hidden argument*/NULL);
		V_3 = L_3;
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * L_5 = V_2;
		NullCheck(L_5);
		EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D * L_6 = L_5->get_valueChangedImpl_7();
		V_1 = L_6;
	}

IL_002c:
	{
		EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D * L_7 = V_1;
		V_4 = (bool)((!(((RuntimeObject*)(EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D *)L_7) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D * L_9 = V_1;
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_10 = V_0;
		InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * L_11 = V_2;
		NullCheck(L_11);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_12 = L_11->get_database_6();
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_13;
		L_13 = DataSnapshot_CreateSnapshot_mFBA4A179D82E0F8BB52717D8BA89784729C65607(L_10, L_12, /*hidden argument*/NULL);
		ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * L_14 = (ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 *)il2cpp_codegen_object_new(ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043_il2cpp_TypeInfo_var);
		ValueChangedEventArgs__ctor_m1198F269D02216F4D7E807302458CE7409A8D65F(L_14, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		EventHandler_1_Invoke_m0A38C6E82462B13F17E7427AE3A31706196F0781(L_9, NULL, L_14, /*hidden argument*/EventHandler_1_Invoke_m0A38C6E82462B13F17E7427AE3A31706196F0781_RuntimeMethod_var);
		goto IL_005c;
	}

IL_0053:
	{
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_15 = V_0;
		NullCheck(L_15);
		InternalDataSnapshot_Dispose_mE9F953EAF050A4B713E2A518924BA6B58091AE9F(L_15, /*hidden argument*/NULL);
	}

IL_005c:
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
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m5DF749C18F8CEAF293473504E5BEBAF21A1D85F9 (U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener/<>c__DisplayClass4_0::<OnCancelledHandler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3COnCancelledHandlerU3Eb__0_m9E0F92219FAFF5C237B0BE9BEB665DB678E1D5AD (U3CU3Ec__DisplayClass4_0_tE454B1790FABE83F432F89B487F6D93B5B4D23EA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m0A38C6E82462B13F17E7427AE3A31706196F0781_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D * V_0 = NULL;
	InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		V_0 = (EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D *)NULL;
		int32_t L_0 = __this->get_callbackId_0();
		IL2CPP_RUNTIME_CLASS_INIT(InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = InternalValueListener_TryGetListener_m738D37323C40BE7FCFE4BA9148AC752C8FCD053A(L_0, (InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D **)(&V_1), /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		InternalValueListener_tC2575477A5654E7353522B5E0931E94C396A3B0D * L_3 = V_1;
		NullCheck(L_3);
		EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D * L_4 = L_3->get_valueChangedImpl_7();
		V_0 = L_4;
	}

IL_001d:
	{
		EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D * L_5 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		EventHandler_1_t2E1770E7E35152F46A49FD014BDADBE094E3C76D * L_7 = V_0;
		int32_t L_8 = __this->get_error_1();
		String_t* L_9 = __this->get_msg_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2_il2cpp_TypeInfo_var);
		DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * L_10;
		L_10 = DatabaseError_FromError_m4715BD4DE9F080CA1E87153311CABA2EC11D24D8(L_8, L_9, /*hidden argument*/NULL);
		ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * L_11 = (ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 *)il2cpp_codegen_object_new(ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043_il2cpp_TypeInfo_var);
		ValueChangedEventArgs__ctor_mD23C8AE84228CF5D3EDFCE06DFD2C5C8D1B1A9EE(L_11, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_m0A38C6E82462B13F17E7427AE3A31706196F0781(L_7, NULL, L_11, /*hidden argument*/EventHandler_1_Invoke_m0A38C6E82462B13F17E7427AE3A31706196F0781_RuntimeMethod_var);
	}

IL_0045:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCancelledDelegate_tD2F9725361BFBCA4F0062E1ACA2070DD2139BC48 (OnCancelledDelegate_tD2F9725361BFBCA4F0062E1ACA2070DD2139BC48 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___error1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate__ctor_m2CB085729DAF9C32CDE8E6FE8D3DD00204929146 (OnCancelledDelegate_tD2F9725361BFBCA4F0062E1ACA2070DD2139BC48 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Error,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_Invoke_m3CB61638F1DA67B985CFBBA4890165D5C2E998A7 (OnCancelledDelegate_tD2F9725361BFBCA4F0062E1ACA2070DD2139BC48 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___error1, ___msg2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
					else
						VirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::BeginInvoke(System.Int32,Firebase.Database.Error,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCancelledDelegate_BeginInvoke_m7D1EB08739882233FCB2DAE72D26D0B0A931A61E (OnCancelledDelegate_tD2F9725361BFBCA4F0062E1ACA2070DD2139BC48 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Error_tB39068F6A2A7301F0F10A67554D08536E4E9E8A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(Error_tB39068F6A2A7301F0F10A67554D08536E4E9E8A3_il2cpp_TypeInfo_var, &___error1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCancelledDelegate_EndInvoke_mD992C103DDCFDB16D4B39160F0DDCC11FD14E9B8 (OnCancelledDelegate_tD2F9725361BFBCA4F0062E1ACA2070DD2139BC48 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E (OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___snapshot1);

}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate__ctor_m66B488EAEA1427C813122ABAAE8DEB737CD915D8 (OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate_Invoke_m0E121D515FA58852BFEC61D785B1F10C29711E30 (OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___callbackId0, ___snapshot1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___snapshot1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___snapshot1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnValueChangedDelegate_BeginInvoke_m90D3710FDA08E4D4A2EE6D53F2FD8077C71C0B2E (OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E * __this, int32_t ___callbackId0, intptr_t ___snapshot1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedDelegate_EndInvoke_mE0739157C73EE60C376FC1A35253967F1636D3C1 (OnValueChangedDelegate_t3E2454623BDB2F61030EF2A1470F18A566C3468E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Query/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m2AB5A229989D6FAE0040C9AEA8617EC5AAC64293 (U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Query/<>c__DisplayClass21_0::<WrapInternalDataSnapshotTask>b__0(System.Threading.Tasks.Task`1<Firebase.Database.InternalDataSnapshot>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CWrapInternalDataSnapshotTaskU3Eb__0_m3D4CB618D00212B8F4D3000EF3BC152CFC04E634 (U3CU3Ec__DisplayClass21_0_t465F0211FC479C54975DC7BF6CDD9486EAF00A47 * __this, Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Query_CheckTaskStatus_TisDataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_mF5820C37BB0F183F642971D1E8B8199CE4DE85DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mEC988034F1874D898632EF3B350F4BD850C2A7E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m5FC15BDAA9347B29157C9422BDDB82367633B1B6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * L_0 = __this->get_U3CU3E4__this_0();
		Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * L_1 = ___task0;
		TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 * L_2 = __this->get_tcs_1();
		NullCheck(L_0);
		bool L_3;
		L_3 = Query_CheckTaskStatus_TisDataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_mF5820C37BB0F183F642971D1E8B8199CE4DE85DD(L_0, L_1, L_2, /*hidden argument*/Query_CheckTaskStatus_TisDataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256_mF5820C37BB0F183F642971D1E8B8199CE4DE85DD_RuntimeMethod_var);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		TaskCompletionSource_1_t12EE2709FCA43A832FE40620BD74EDE8AF637EB5 * L_5 = __this->get_tcs_1();
		Task_1_t9AD88AF00998E3B3946190DFD7420BA8A5FC84A8 * L_6 = ___task0;
		NullCheck(L_6);
		InternalDataSnapshot_t793F13F7583FBA1E92103AA719870A205A045F2E * L_7;
		L_7 = Task_1_get_Result_m5FC15BDAA9347B29157C9422BDDB82367633B1B6(L_6, /*hidden argument*/Task_1_get_Result_m5FC15BDAA9347B29157C9422BDDB82367633B1B6_RuntimeMethod_var);
		Query_t71635BA1C892CC02D0D053DE894A2BDB0E9211DE * L_8 = __this->get_U3CU3E4__this_0();
		NullCheck(L_8);
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_9 = L_8->get_database_1();
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_10;
		L_10 = DataSnapshot_CreateSnapshot_mFBA4A179D82E0F8BB52717D8BA89784729C65607(L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		TaskCompletionSource_1_SetResult_mEC988034F1874D898632EF3B350F4BD850C2A7E1(L_5, L_10, /*hidden argument*/TaskCompletionSource_1_SetResult_mEC988034F1874D898632EF3B350F4BD850C2A7E1_RuntimeMethod_var);
	}

IL_003b:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF (ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m678EE07B2B9CA7EF0472BCF865AB33613DF6908D (ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m6A8B4FB3FC11D11538D063A80B40BA5280EA645E (ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_mA100573FCE26A02BBC483D552C80712F63FD7610 (ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m869A390D3B1BE9C02FD1FC54E85E35CC10884858 (ExceptionArgumentDelegate_t00289C124CC5B8D981D2EA49B7DD6B7D9C6378CF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mD0DF362A392B0DCCFA4F8CAA7858DAB7C3F4231A (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_mC0790EF1903D8FF220A3A12C7403B1CB8ABE1801 (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * __this, String_t* ___message0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_m1AE956BB93E8F06DCCBA87745E9849856DBCBCE0 (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m9D8CCB18E076BB86AB87445CA3339F601B18D451 (ExceptionDelegate_tBB29063095E3F263D5E6428CBAC718E9BFD0D9EF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE (SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_mF891F49ADA609183011C8467F08CF8021FFDC873 (SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m7940F49602D1C9B4C5E51B87F9317293E08461B5 (SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_mEC0B9FD8540B7078FE94CBC0899DC703000B4BA3 (SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.String Firebase.Database.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m4AFFBF7FF69BA9D0531A6F18A50C51AAD61B3BD8 (SWIGStringDelegate_t6B67AAF812B42072B9C8E5A316B3C1E0C3950FAE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_PreviousChildName_m49315889215BF6BAAAB015D6498A1C5520B5FCB7_inline (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPreviousChildNameU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_Snapshot_m695CD84928AEA3ECCD479809D78E1815A907AEBF_inline (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ChildChangedEventArgs_set_DatabaseError_m58F6B34C441C16D3E00BBF6CC4D7CFF902032A24_inline (ChildChangedEventArgs_tEBEC8BC1F964BFD6DE15E8DA0BFCED2D6F864C50 * __this, DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Code_mE2894AEF5C0FFC49431C93AEA528795027A32CBC_inline (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Message_m6FAD520028268298D62ED10F2EE7AD88E632EF31_inline (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseError_set_Details_m61CD1F0F07229466C7FE6E6F28EDEB2E4D969146_inline (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDetailsU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DatabaseError_get_Message_mC49A845945958AFFC3DA96E8CBB40E25A42CDB0F_inline (DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DatabaseReference_set_Database_mC86C9524EBE1CA3A1476D96AE97A273674FDDA86_inline (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_0 = ___value0;
		__this->set_U3CDatabaseU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * DatabaseReference_get_Database_m50FCB15345968BB0302C9BEBE9BC6F0F2E7A2B2A_inline (DatabaseReference_t86EFB310200D4E261BC0291EF559CA50DE9C2E37 * __this, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * L_0 = __this->get_U3CDatabaseU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseDatabase_set_App_mD2C513B185F9D95A2BAE970DE4E5320CF429BDEE_inline (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___value0;
		__this->set_U3CAppU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseDatabase_get_App_mD2B9084C041946615D4F6451262B6A605308CE1A_inline (FirebaseDatabase_tC9B99A90E0EBBBF7837D8953D07BA714336654A1 * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = __this->get_U3CAppU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_mAE84F30BF7A0A0D522CC280712623B53961FB98D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_StaticFields*)il2cpp_codegen_static_fields_for(Services_tA8A3B3E48044107EAC272A3F409EFC54E43DD861_il2cpp_TypeInfo_var))->get_U3CAppConfigU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_Snapshot_mF61362820ACDD111A1ABA52AA9D13A44868405D3_inline (ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * __this, DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_tF0F9F103ABAA191BFDB3455240F45022EC9A4256 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueChangedEventArgs_set_DatabaseError_mB5FB47A69517C6163CB9B6206394D3339DA19DCA_inline (ValueChangedEventArgs_tB06FEE225839A015E46282E5CC0EDB610A6C8043 * __this, DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t0303F6E60CDEB0005F205CE0D42EB6C5366D76B2 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskCompletionSource_1_get_Task_mD0793F8F6461F1DC1A38ABEC59547B462F0AAA39_gshared_inline (TaskCompletionSource_1_t56125454B9277AE49801F3DF08F7774ED6B499F3 * __this, const RuntimeMethod* method)
{
	{
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_0 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)__this->get_m_task_0();
		return (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_0;
	}
}
