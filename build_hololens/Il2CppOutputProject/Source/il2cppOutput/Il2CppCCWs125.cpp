﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct Action_1_t231F2AF856D3317D1380298224A60D02F9F43072;
// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation>
struct Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t18E7F4E321737EF92F70387314BC88164CA7B59C;
// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String>
struct Action_2_tBB7AE204FD0C5FE10EC036638475EBCC10BF9B39;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single>
struct Dictionary_2_tD695848A44AF92EAFC286F58A272F421EA39D447;
// System.Collections.Generic.Dictionary`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_tAABCF01104CEF2E181F1448D23A29A42D7B120A9;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tEF69AB24B90083667848FA18EB11001609E77E9E;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct Dictionary_2_tC33F2089B5745FD79062A11AEA0C3F0B26F99631;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.Boolean>
struct Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA;
// System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Func_1_t87F4D899EDDDA25407AC884A9A61F602E32A21FA;
// System.Func`2<UnityEngine.InputSystem.InputControl,System.String>
struct Func_2_tDFF7FD5F9307DD46AB85BF6531D2DB40FC0FA613;
// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single>
struct Func_3_t2C41859D084C543E2B0ABD59C126E950EBE553A9;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t0DE5AA701B682A891412350E63D3E441F98F205C;
// System.IObserver`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct IObserver_1_t072DF21B5F7715B733A9517AE29C55682B49568E;
// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message>
struct IObserver_1_tB82F264B718A3FAFD814F5AA7258B436D7E2A166;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct KeyValuePair_2_tC5DBFF0A12DD027962885E57237A73F3553DE521;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.LowLevel.InputEventPtr>
struct List_1_t980EF2517D85AC88F5978408EA85D232DFCECEDF;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct List_1_tAB81C0660683C34CA2FB68642BB0C75063C7405B;
// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo>
struct List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17;
// System.Collections.Generic.Stack`1<UnityEngine.Transform>
struct Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Tuple`2<System.Int32,System.Int32>
struct Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[]
struct KeyValuePair_2U5BU5D_t7E976A4C11090CA77A36F27FF080865677E9C105;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_tD3CFE5DE4AAAD0D056FE716A341869DC8352C3F7;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.InputSystem.Utilities.Substring[]
struct SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0;
// Microsoft.MixedReality.Toolkit.Utilities.SystemType[]
struct SystemTypeU5BU5D_t7649C03496F1F836680D0861D743C23C8EE45032;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_tBAAEA8AD0E93A8EF9DF98E9F4957B7A56286E795;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.InputSystem.LowLevel.ActionEvent
struct ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48;
// System.Diagnostics.Tracing.ActivityFilter
struct ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem
struct AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056;
// Character
struct Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8;
// Microsoft.MixedReality.Toolkit.UI.Dialog
struct Dialog_t423A07D628625B434117D763CD41D7274CEEAF83;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// System.Diagnostics.Tracing.EventPayload
struct EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA;
// System.Diagnostics.Tracing.EventSource
struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Microsoft.MixedReality.Toolkit.UI.FollowMeToggle
struct FollowMeToggle_t4505C7F07BB7945E4F1E400C0D2250F10C5AC9CA;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.UI.GazeHandHelper
struct GazeHandHelper_t8E0791ECE59CA65EF8575AA5DDA128A1628AEAEC;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint
struct HandConstraint_tAB764DF2FBB841A5D3FC029AB14C059882689DC1;
// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp
struct HandConstraintPalmUp_tC12165763337F6F99CE0742DF4425785A396F18F;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint
struct HandInteractionHint_tAA6582F8D55B918EF54EBFA8F5565CDFFF2120FE;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// Windows.Storage.Streams.IInputStream
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t30769B0E5BEC9AF82820A8983DE77F98CBE98DC8;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer
struct IMixedRealityPointer_tC8C6CA2DB07D67431BAAB603F549294D0C3E2616;
// Windows.Storage.Streams.IOutputStream
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A;
// UnityEngine.InputSystem.InputAction
struct InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9;
// UnityEngine.InputSystem.Utilities.InputActionTrace
struct InputActionTrace_tC3267A7DBED6A384009BD802DDA0259FA663430A;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation
struct InputAnimation_t978FCBBAC054003C8AFC139452EB645F3AD2A42B;
// UnityEngine.InputSystem.InputControl
struct InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234;
// UnityEngine.InputSystem.LowLevel.InputEventTrace
struct InputEventTrace_t22E95967587C4A3EAA545A70D57A745BCFEAD646;
// UnityEngine.UI.InputField
struct InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0;
// UnityEngine.InputSystem.InputManager
struct InputManager_t9E534956EF45276E5D7E75B3EA03BF1AB0EC411F;
// UnityEngine.InputSystem.InputRemoting
struct InputRemoting_t1E0E6A3FCECB6332362D470A443CE1B1F0E26E38;
// UnityEngine.InputSystem.LowLevel.InputStateHistory
struct InputStateHistory_t0869C8331534E5D5C7E2D33FA6EEC05E85C18A31;
// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046;
// Microsoft.MixedReality.Toolkit.UI.Interactable
struct Interactable_t4E915BA65200B03D52FB324984F5DF045DA04840;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule
struct MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99;
// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase
struct MixedRealityKeyboardBase_t04B91053F41C6627E590E5ABC33A6EFD7651466D;
// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview
struct MixedRealityKeyboardPreview_t1D2462B98B991404A3D404C9369C3B845952E292;
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer
struct MixedRealityLineRenderer_t2224EF32BC7DF449DB8A9210824385CF2FFDAE28;
// Microsoft.MixedReality.Toolkit.MixedRealitySceneContent
struct MixedRealitySceneContent_t0F93B2B5D455FDB9F34E0556DBFD573FB694187F;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem
struct MixedRealitySceneSystem_t01D939AA82F52B5672A8A409354F3C87D1316CFF;
// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile
struct MixedRealitySceneSystemProfile_tDBF05B14E290A07DB6DC58749ADA9F40000EBF87;
// System.Reflection.Module
struct Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7;
// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget
struct MoveToTarget_t9583CCDA3EE26C41F18B329EC7B260AB4D96B1E3;
// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.XR.OpenXR.OpenXRRestarter
struct OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Runtime.InteropServices.SafeBuffer
struct SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2;
// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateAuthenticationTokenDelegate
struct SecureRemotingValidateAuthenticationTokenDelegate_t73195B5441A1FCE413AB88193B1D8AA9CE9A8F80;
// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateServerCertificateDelegate
struct SecureRemotingValidateServerCertificateDelegate_tA92D7BF713A58F8A343A785810BA649376E7779E;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.InputSystem.InputActionState/ActionMapIndices
struct ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A;
// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26;
// UnityEngine.InputSystem.InputActionState/InteractionState
struct InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320;
// UnityEngine.InputSystem.InputActionState/TriggerState
struct TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145;
// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves
struct PoseCurves_t0E84F660C8BE04EE53E17AB634069C9EE81CDB40;
// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData
struct PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E;
// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback
struct EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
struct ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 ;
struct ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A ;
struct BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 ;
struct DeviceRequirement_tAB27570ED81D24759C54FDE48B6DD74FF51649C9_marshaled_com;
struct DeviceRequirement_tAB27570ED81D24759C54FDE48B6DD74FF51649C9_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
struct IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2;
struct IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D;
struct IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF;
struct IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD;
struct IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A;
struct InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 ;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;
struct TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_mBC6183A763190D7A90AC3695ABA5695BA36C856A(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mE2D4B228CE53F99221609445BE370DDFCE36E6B1(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m175060E2E21B33EF1970DD606F09B7DF584D798D(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mC86F0CF355BA73A8EDDBDAE24D74C5879DA6FBBA(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m0F646662AC31DEE0CE961AFADC7973E48F97C5B9(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m0377F4567A96FDBBDB5965FBC39543CB067FBC44(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m56432550918918419AD9E3C4C6628C1761816138(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m543BD227353BA50F701DDE984A8B401788B0B43C(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mEDC3E8F6D24BF8D62A67B5CCF13C77258C3D7FB8(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mA5979B888030B4A4C8E751DBEEF4305A3CE37292(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7656E1FBD07F1A33A8BABCA2DFC7FB61231A0958(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF8AED96C1879988554BA949E0718A6174C3117F5(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m33CB8132B6D0D81238F6BE90A9D3F1F13AB422AD(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Char>>
struct NOVTABLE IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct NOVTABLE IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.String>
struct NOVTABLE IIterable_1_t94592E586C395F026290ACC676E74C560595CC26 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Type>
struct NOVTABLE IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67(IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m4FBAA7520F46F3CC6D15DCA72AE6DE7682A9A470(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m5433B1C2AADBE9CE086F6DAE6E300C687A17DB19(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_mF6D33616BBEEBF636AA7AF9EFA8525C3F721FE01(uint32_t ___value0) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7(uint64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB(uint64_t ___position0, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023(uint64_t ___position0, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A(IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146(bool* comReturnValue) = 0;
};

// System.Object


// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___emptyArray_4;

public:
	inline static int32_t get_offset_of_emptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575_StaticFields, ___emptyArray_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_emptyArray_4() const { return ___emptyArray_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_emptyArray_4() { return &___emptyArray_4; }
	inline void set_emptyArray_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___emptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_4), (void*)value);
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

// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__36
struct U3CDisconnectAndStopXRU3Ed__36_t075E11243F55343D259153CB2162A4EE7F6311E4  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__36::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisconnectAndStopXRU3Ed__36_t075E11243F55343D259153CB2162A4EE7F6311E4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDisconnectAndStopXRU3Ed__36_t075E11243F55343D259153CB2162A4EE7F6311E4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// UnityEngine.UI.Button/<OnFinishSubmit>d__9
struct U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.Button UnityEngine.UI.Button/<OnFinishSubmit>d__9::<>4__this
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___U3CU3E4__this_2;
	// System.Single UnityEngine.UI.Button/<OnFinishSubmit>d__9::<fadeTime>5__2
	float ___U3CfadeTimeU3E5__2_3;
	// System.Single UnityEngine.UI.Button/<OnFinishSubmit>d__9::<elapsedTime>5__3
	float ___U3CelapsedTimeU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CU3E4__this_2)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfadeTimeU3E5__2_3() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CfadeTimeU3E5__2_3)); }
	inline float get_U3CfadeTimeU3E5__2_3() const { return ___U3CfadeTimeU3E5__2_3; }
	inline float* get_address_of_U3CfadeTimeU3E5__2_3() { return &___U3CfadeTimeU3E5__2_3; }
	inline void set_U3CfadeTimeU3E5__2_3(float value)
	{
		___U3CfadeTimeU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CelapsedTimeU3E5__3_4() { return static_cast<int32_t>(offsetof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0, ___U3CelapsedTimeU3E5__3_4)); }
	inline float get_U3CelapsedTimeU3E5__3_4() const { return ___U3CelapsedTimeU3E5__3_4; }
	inline float* get_address_of_U3CelapsedTimeU3E5__3_4() { return &___U3CelapsedTimeU3E5__3_4; }
	inline void set_U3CelapsedTimeU3E5__3_4(float value)
	{
		___U3CelapsedTimeU3E5__3_4 = value;
	}
};


// Character/<SetIdleTrigger>d__4
struct U3CSetIdleTriggerU3Ed__4_tB7F79AADAE56176F2C5B72C19559761D13157BC3  : public RuntimeObject
{
public:
	// System.Int32 Character/<SetIdleTrigger>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Character/<SetIdleTrigger>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Character Character/<SetIdleTrigger>d__4::<>4__this
	Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSetIdleTriggerU3Ed__4_tB7F79AADAE56176F2C5B72C19559761D13157BC3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSetIdleTriggerU3Ed__4_tB7F79AADAE56176F2C5B72C19559761D13157BC3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSetIdleTriggerU3Ed__4_tB7F79AADAE56176F2C5B72C19559761D13157BC3, ___U3CU3E4__this_2)); }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Character_tCB5C2B96512E4E769F3BC54DA7AF4653B4CED7A8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11
struct U3CCloseDialogU3Ed__11_t966670EEC0E71441C46DA6850DAEE900561CC68E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCloseDialogU3Ed__11_t966670EEC0E71441C46DA6850DAEE900561CC68E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCloseDialogU3Ed__11_t966670EEC0E71441C46DA6850DAEE900561CC68E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10
struct U3COpenDialogU3Ed__10_tFF24764BD6804F4E8976B10B0B7503A581B795B9  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COpenDialogU3Ed__10_tFF24764BD6804F4E8976B10B0B7503A581B795B9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3COpenDialogU3Ed__10_tFF24764BD6804F4E8976B10B0B7503A581B795B9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9
struct U3CRunDialogOverTimeU3Ed__9_tA05A12D02CFBF6E9ED04DEDD27530E2ADC70AEA3  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.Dialog Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9::<>4__this
	Dialog_t423A07D628625B434117D763CD41D7274CEEAF83 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRunDialogOverTimeU3Ed__9_tA05A12D02CFBF6E9ED04DEDD27530E2ADC70AEA3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRunDialogOverTimeU3Ed__9_tA05A12D02CFBF6E9ED04DEDD27530E2ADC70AEA3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRunDialogOverTimeU3Ed__9_tA05A12D02CFBF6E9ED04DEDD27530E2ADC70AEA3, ___U3CU3E4__this_2)); }
	inline Dialog_t423A07D628625B434117D763CD41D7274CEEAF83 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Dialog_t423A07D628625B434117D763CD41D7274CEEAF83 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Dialog_t423A07D628625B434117D763CD41D7274CEEAF83 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75
struct U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::delay
	float ___delay_2;
	// UnityEngine.UI.Dropdown UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75::<>4__this
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30, ___U3CU3E4__this_3)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__37
struct U3CAutoFollowDistanceCheckU3Ed__37_t0AABC3BC24D5A9060D031375592C42BF0429DF71  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.FollowMeToggle Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__37::<>4__this
	FollowMeToggle_t4505C7F07BB7945E4F1E400C0D2250F10C5AC9CA * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAutoFollowDistanceCheckU3Ed__37_t0AABC3BC24D5A9060D031375592C42BF0429DF71, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAutoFollowDistanceCheckU3Ed__37_t0AABC3BC24D5A9060D031375592C42BF0429DF71, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAutoFollowDistanceCheckU3Ed__37_t0AABC3BC24D5A9060D031375592C42BF0429DF71, ___U3CU3E4__this_2)); }
	inline FollowMeToggle_t4505C7F07BB7945E4F1E400C0D2250F10C5AC9CA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline FollowMeToggle_t4505C7F07BB7945E4F1E400C0D2250F10C5AC9CA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(FollowMeToggle_t4505C7F07BB7945E4F1E400C0D2250F10C5AC9CA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62
struct U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::controller
	RuntimeObject* ___controller_2;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::<>4__this
	HandConstraint_tAB764DF2FBB841A5D3FC029AB14C059882689DC1 * ___U3CU3E4__this_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::frameDelay
	bool ___frameDelay_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62::visible
	bool ___visible_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77, ___controller_2)); }
	inline RuntimeObject* get_controller_2() const { return ___controller_2; }
	inline RuntimeObject** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(RuntimeObject* value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77, ___U3CU3E4__this_3)); }
	inline HandConstraint_tAB764DF2FBB841A5D3FC029AB14C059882689DC1 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline HandConstraint_tAB764DF2FBB841A5D3FC029AB14C059882689DC1 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(HandConstraint_tAB764DF2FBB841A5D3FC029AB14C059882689DC1 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_frameDelay_4() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77, ___frameDelay_4)); }
	inline bool get_frameDelay_4() const { return ___frameDelay_4; }
	inline bool* get_address_of_frameDelay_4() { return &___frameDelay_4; }
	inline void set_frameDelay_4(bool value)
	{
		___frameDelay_4 = value;
	}

	inline static int32_t get_offset_of_visible_5() { return static_cast<int32_t>(offsetof(U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77, ___visible_5)); }
	inline bool get_visible_5() const { return ___visible_5; }
	inline bool* get_address_of_visible_5() { return &___visible_5; }
	inline void set_visible_5(bool value)
	{
		___visible_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42
struct U3CWorldLockedReattachCheckU3Ed__42_t1E5C84581AB1220825479D498C6735230578CFD9  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42::<>4__this
	HandConstraintPalmUp_tC12165763337F6F99CE0742DF4425785A396F18F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_t1E5C84581AB1220825479D498C6735230578CFD9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_t1E5C84581AB1220825479D498C6735230578CFD9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWorldLockedReattachCheckU3Ed__42_t1E5C84581AB1220825479D498C6735230578CFD9, ___U3CU3E4__this_2)); }
	inline HandConstraintPalmUp_tC12165763337F6F99CE0742DF4425785A396F18F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HandConstraintPalmUp_tC12165763337F6F99CE0742DF4425785A396F18F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HandConstraintPalmUp_tC12165763337F6F99CE0742DF4425785A396F18F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45
struct U3CFadeOutHintU3Ed__45_tAD0C1A36C5C6C971282C271868731034BBC2C229  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45::<>4__this
	HandInteractionHint_tAA6582F8D55B918EF54EBFA8F5565CDFFF2120FE * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeOutHintU3Ed__45_tAD0C1A36C5C6C971282C271868731034BBC2C229, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeOutHintU3Ed__45_tAD0C1A36C5C6C971282C271868731034BBC2C229, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeOutHintU3Ed__45_tAD0C1A36C5C6C971282C271868731034BBC2C229, ___U3CU3E4__this_2)); }
	inline HandInteractionHint_tAA6582F8D55B918EF54EBFA8F5565CDFFF2120FE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HandInteractionHint_tAA6582F8D55B918EF54EBFA8F5565CDFFF2120FE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HandInteractionHint_tAA6582F8D55B918EF54EBFA8F5565CDFFF2120FE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46
struct U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<>4__this
	HandInteractionHint_tAA6582F8D55B918EF54EBFA8F5565CDFFF2120FE * ___U3CU3E4__this_2;
	// System.String Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::stateToPlay
	String_t* ___stateToPlay_3;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<timer>5__2
	float ___U3CtimerU3E5__2_4;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<displayDelay>5__3
	float ___U3CdisplayDelayU3E5__3_5;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<visibleTime>5__4
	float ___U3CvisibleTimeU3E5__4_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<playCount>5__5
	int32_t ___U3CplayCountU3E5__5_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46::<shouldHide>5__6
	bool ___U3CshouldHideU3E5__6_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880, ___U3CU3E4__this_2)); }
	inline HandInteractionHint_tAA6582F8D55B918EF54EBFA8F5565CDFFF2120FE * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline HandInteractionHint_tAA6582F8D55B918EF54EBFA8F5565CDFFF2120FE ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(HandInteractionHint_tAA6582F8D55B918EF54EBFA8F5565CDFFF2120FE * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_stateToPlay_3() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880, ___stateToPlay_3)); }
	inline String_t* get_stateToPlay_3() const { return ___stateToPlay_3; }
	inline String_t** get_address_of_stateToPlay_3() { return &___stateToPlay_3; }
	inline void set_stateToPlay_3(String_t* value)
	{
		___stateToPlay_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateToPlay_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CtimerU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880, ___U3CtimerU3E5__2_4)); }
	inline float get_U3CtimerU3E5__2_4() const { return ___U3CtimerU3E5__2_4; }
	inline float* get_address_of_U3CtimerU3E5__2_4() { return &___U3CtimerU3E5__2_4; }
	inline void set_U3CtimerU3E5__2_4(float value)
	{
		___U3CtimerU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayDelayU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880, ___U3CdisplayDelayU3E5__3_5)); }
	inline float get_U3CdisplayDelayU3E5__3_5() const { return ___U3CdisplayDelayU3E5__3_5; }
	inline float* get_address_of_U3CdisplayDelayU3E5__3_5() { return &___U3CdisplayDelayU3E5__3_5; }
	inline void set_U3CdisplayDelayU3E5__3_5(float value)
	{
		___U3CdisplayDelayU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CvisibleTimeU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880, ___U3CvisibleTimeU3E5__4_6)); }
	inline float get_U3CvisibleTimeU3E5__4_6() const { return ___U3CvisibleTimeU3E5__4_6; }
	inline float* get_address_of_U3CvisibleTimeU3E5__4_6() { return &___U3CvisibleTimeU3E5__4_6; }
	inline void set_U3CvisibleTimeU3E5__4_6(float value)
	{
		___U3CvisibleTimeU3E5__4_6 = value;
	}

	inline static int32_t get_offset_of_U3CplayCountU3E5__5_7() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880, ___U3CplayCountU3E5__5_7)); }
	inline int32_t get_U3CplayCountU3E5__5_7() const { return ___U3CplayCountU3E5__5_7; }
	inline int32_t* get_address_of_U3CplayCountU3E5__5_7() { return &___U3CplayCountU3E5__5_7; }
	inline void set_U3CplayCountU3E5__5_7(int32_t value)
	{
		___U3CplayCountU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CshouldHideU3E5__6_8() { return static_cast<int32_t>(offsetof(U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880, ___U3CshouldHideU3E5__6_8)); }
	inline bool get_U3CshouldHideU3E5__6_8() const { return ___U3CshouldHideU3E5__6_8; }
	inline bool* get_address_of_U3CshouldHideU3E5__6_8() { return &___U3CshouldHideU3E5__6_8; }
	inline void set_U3CshouldHideU3E5__6_8(bool value)
	{
		___U3CshouldHideU3E5__6_8 = value;
	}
};


// System.Collections.Hashtable/KeyCollection
struct KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/KeyCollection::_hashtable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____hashtable_0;

public:
	inline static int32_t get_offset_of__hashtable_0() { return static_cast<int32_t>(offsetof(KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE, ____hashtable_0)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__hashtable_0() const { return ____hashtable_0; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__hashtable_0() { return &____hashtable_0; }
	inline void set__hashtable_0(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____hashtable_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hashtable_0), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/DeferBindingResolutionWrapper
struct DeferBindingResolutionWrapper_tE67305335B476E901F955C3DFFA4F42DEF4225BC  : public RuntimeObject
{
public:

public:
};


// UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12
struct U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::composite
	String_t* ___composite_3;
	// System.String UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<>3__composite
	String_t* ___U3CU3E3__composite_4;
	// System.Reflection.FieldInfo[] UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<>7__wrap1
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* ___U3CU3E7__wrap1_5;
	// System.Int32 UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_composite_3() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5, ___composite_3)); }
	inline String_t* get_composite_3() const { return ___composite_3; }
	inline String_t** get_address_of_composite_3() { return &___composite_3; }
	inline void set_composite_3(String_t* value)
	{
		___composite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___composite_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__composite_4() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5, ___U3CU3E3__composite_4)); }
	inline String_t* get_U3CU3E3__composite_4() const { return ___U3CU3E3__composite_4; }
	inline String_t** get_address_of_U3CU3E3__composite_4() { return &___U3CU3E3__composite_4; }
	inline void set_U3CU3E3__composite_4(String_t* value)
	{
		___U3CU3E3__composite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__composite_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_5() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5, ___U3CU3E7__wrap1_5)); }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* get_U3CU3E7__wrap1_5() const { return ___U3CU3E7__wrap1_5; }
	inline FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E** get_address_of_U3CU3E7__wrap1_5() { return &___U3CU3E7__wrap1_5; }
	inline void set_U3CU3E7__wrap1_5(FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* value)
	{
		___U3CU3E7__wrap1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_6() { return static_cast<int32_t>(offsetof(U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5, ___U3CU3E7__wrap2_6)); }
	inline int32_t get_U3CU3E7__wrap2_6() const { return ___U3CU3E7__wrap2_6; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_6() { return &___U3CU3E7__wrap2_6; }
	inline void set_U3CU3E7__wrap2_6(int32_t value)
	{
		___U3CU3E7__wrap2_6 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputEventListener/DisposableObserver
struct DisposableObserver_t3EA358A188D2946104E227EC7510A1247577761E  : public RuntimeObject
{
public:
	// System.IObserver`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventListener/DisposableObserver::observer
	RuntimeObject* ___observer_0;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(DisposableObserver_t3EA358A188D2946104E227EC7510A1247577761E, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_0), (void*)value);
	}
};


// UnityEngine.UI.InputField/<CaretBlink>d__161
struct U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.InputField/<CaretBlink>d__161::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.InputField/<CaretBlink>d__161::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.UI.InputField UnityEngine.UI.InputField/<CaretBlink>d__161::<>4__this
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52, ___U3CU3E4__this_2)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// UnityEngine.UI.InputField/<MouseDragOutsideRect>d__183
struct U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.InputField/<MouseDragOutsideRect>d__183::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.InputField/<MouseDragOutsideRect>d__183::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.UI.InputField/<MouseDragOutsideRect>d__183::eventData
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData_2;
	// UnityEngine.UI.InputField UnityEngine.UI.InputField/<MouseDragOutsideRect>d__183::<>4__this
	InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_eventData_2() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285, ___eventData_2)); }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * get_eventData_2() const { return ___eventData_2; }
	inline PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 ** get_address_of_eventData_2() { return &___eventData_2; }
	inline void set_eventData_2(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * value)
	{
		___eventData_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285, ___U3CU3E4__this_3)); }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputField_tB41A2814F31A3E9373D443EDEBBB2856006324D0 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.InputSystem.InputRemoting/Subscriber
struct Subscriber_t2FE8E62E94D1ECBB25A3D8579E3BEDF2A2890492  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputRemoting UnityEngine.InputSystem.InputRemoting/Subscriber::owner
	InputRemoting_t1E0E6A3FCECB6332362D470A443CE1B1F0E26E38 * ___owner_0;
	// System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message> UnityEngine.InputSystem.InputRemoting/Subscriber::observer
	RuntimeObject* ___observer_1;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(Subscriber_t2FE8E62E94D1ECBB25A3D8579E3BEDF2A2890492, ___owner_0)); }
	inline InputRemoting_t1E0E6A3FCECB6332362D470A443CE1B1F0E26E38 * get_owner_0() const { return ___owner_0; }
	inline InputRemoting_t1E0E6A3FCECB6332362D470A443CE1B1F0E26E38 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(InputRemoting_t1E0E6A3FCECB6332362D470A443CE1B1F0E26E38 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___owner_0), (void*)value);
	}

	inline static int32_t get_offset_of_observer_1() { return static_cast<int32_t>(offsetof(Subscriber_t2FE8E62E94D1ECBB25A3D8579E3BEDF2A2890492, ___observer_1)); }
	inline RuntimeObject* get_observer_1() const { return ___observer_1; }
	inline RuntimeObject** get_address_of_observer_1() { return &___observer_1; }
	inline void set_observer_1(RuntimeObject* value)
	{
		___observer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_1), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__170
struct U3CGlobalVisualResetU3Ed__170_tB32189B67816EBAF3468BE9BC01B6D6437D3BCFB  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__170::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__170::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__170::time
	float ___time_2;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__170::<>4__this
	Interactable_t4E915BA65200B03D52FB324984F5DF045DA04840 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGlobalVisualResetU3Ed__170_tB32189B67816EBAF3468BE9BC01B6D6437D3BCFB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGlobalVisualResetU3Ed__170_tB32189B67816EBAF3468BE9BC01B6D6437D3BCFB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CGlobalVisualResetU3Ed__170_tB32189B67816EBAF3468BE9BC01B6D6437D3BCFB, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGlobalVisualResetU3Ed__170_tB32189B67816EBAF3468BE9BC01B6D6437D3BCFB, ___U3CU3E4__this_3)); }
	inline Interactable_t4E915BA65200B03D52FB324984F5DF045DA04840 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Interactable_t4E915BA65200B03D52FB324984F5DF045DA04840 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Interactable_t4E915BA65200B03D52FB324984F5DF045DA04840 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__160
struct U3CInputDownTimerU3Ed__160_tD9B851156AFABB5E824680F9FA99847EC30FADF9  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__160::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__160::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__160::time
	float ___time_2;
	// Microsoft.MixedReality.Toolkit.UI.Interactable Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__160::<>4__this
	Interactable_t4E915BA65200B03D52FB324984F5DF045DA04840 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInputDownTimerU3Ed__160_tD9B851156AFABB5E824680F9FA99847EC30FADF9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInputDownTimerU3Ed__160_tD9B851156AFABB5E824680F9FA99847EC30FADF9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CInputDownTimerU3Ed__160_tD9B851156AFABB5E824680F9FA99847EC30FADF9, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CInputDownTimerU3Ed__160_tD9B851156AFABB5E824680F9FA99847EC30FADF9, ___U3CU3E4__this_3)); }
	inline Interactable_t4E915BA65200B03D52FB324984F5DF045DA04840 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Interactable_t4E915BA65200B03D52FB324984F5DF045DA04840 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Interactable_t4E915BA65200B03D52FB324984F5DF045DA04840 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56
struct U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56::rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_rectTransform_2() { return static_cast<int32_t>(offsetof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE, ___rectTransform_2)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_rectTransform_2() const { return ___rectTransform_2; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_rectTransform_2() { return &___rectTransform_2; }
	inline void set_rectTransform_2(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___rectTransform_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rectTransform_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35
struct U3CUpdateStateU3Ed__35_t2A42A7C37B8DFAF01AC129E7A3D3E0FAEA78ED65  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35::<>4__this
	MixedRealityKeyboardBase_t04B91053F41C6627E590E5ABC33A6EFD7651466D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUpdateStateU3Ed__35_t2A42A7C37B8DFAF01AC129E7A3D3E0FAEA78ED65, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUpdateStateU3Ed__35_t2A42A7C37B8DFAF01AC129E7A3D3E0FAEA78ED65, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CUpdateStateU3Ed__35_t2A42A7C37B8DFAF01AC129E7A3D3E0FAEA78ED65, ___U3CU3E4__this_2)); }
	inline MixedRealityKeyboardBase_t04B91053F41C6627E590E5ABC33A6EFD7651466D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealityKeyboardBase_t04B91053F41C6627E590E5ABC33A6EFD7651466D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealityKeyboardBase_t04B91053F41C6627E590E5ABC33A6EFD7651466D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20
struct U3CBlinkCaretU3Ed__20_tE309EFED3E00FC1FD9B26761A2636B24A5A51554  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20::<>4__this
	MixedRealityKeyboardPreview_t1D2462B98B991404A3D404C9369C3B845952E292 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CBlinkCaretU3Ed__20_tE309EFED3E00FC1FD9B26761A2636B24A5A51554, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CBlinkCaretU3Ed__20_tE309EFED3E00FC1FD9B26761A2636B24A5A51554, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CBlinkCaretU3Ed__20_tE309EFED3E00FC1FD9B26761A2636B24A5A51554, ___U3CU3E4__this_2)); }
	inline MixedRealityKeyboardPreview_t1D2462B98B991404A3D404C9369C3B845952E292 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealityKeyboardPreview_t1D2462B98B991404A3D404C9369C3B845952E292 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealityKeyboardPreview_t1D2462B98B991404A3D404C9369C3B845952E292 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37
struct U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<>4__this
	MixedRealityLineRenderer_t2224EF32BC7DF449DB8A9210824385CF2FFDAE28 * ___U3CU3E4__this_2;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::animationLength
	float ___animationLength_3;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::targetAlphaPercentage
	float ___targetAlphaPercentage_4;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<currentTime>5__2
	float ___U3CcurrentTimeU3E5__2_5;
	// UnityEngine.GradientAlphaKey[] Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<fadedKeys>5__3
	GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* ___U3CfadedKeysU3E5__3_6;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37::<startAlpha>5__4
	float ___U3CstartAlphaU3E5__4_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076, ___U3CU3E4__this_2)); }
	inline MixedRealityLineRenderer_t2224EF32BC7DF449DB8A9210824385CF2FFDAE28 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealityLineRenderer_t2224EF32BC7DF449DB8A9210824385CF2FFDAE28 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealityLineRenderer_t2224EF32BC7DF449DB8A9210824385CF2FFDAE28 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_animationLength_3() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076, ___animationLength_3)); }
	inline float get_animationLength_3() const { return ___animationLength_3; }
	inline float* get_address_of_animationLength_3() { return &___animationLength_3; }
	inline void set_animationLength_3(float value)
	{
		___animationLength_3 = value;
	}

	inline static int32_t get_offset_of_targetAlphaPercentage_4() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076, ___targetAlphaPercentage_4)); }
	inline float get_targetAlphaPercentage_4() const { return ___targetAlphaPercentage_4; }
	inline float* get_address_of_targetAlphaPercentage_4() { return &___targetAlphaPercentage_4; }
	inline void set_targetAlphaPercentage_4(float value)
	{
		___targetAlphaPercentage_4 = value;
	}

	inline static int32_t get_offset_of_U3CcurrentTimeU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076, ___U3CcurrentTimeU3E5__2_5)); }
	inline float get_U3CcurrentTimeU3E5__2_5() const { return ___U3CcurrentTimeU3E5__2_5; }
	inline float* get_address_of_U3CcurrentTimeU3E5__2_5() { return &___U3CcurrentTimeU3E5__2_5; }
	inline void set_U3CcurrentTimeU3E5__2_5(float value)
	{
		___U3CcurrentTimeU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CfadedKeysU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076, ___U3CfadedKeysU3E5__3_6)); }
	inline GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* get_U3CfadedKeysU3E5__3_6() const { return ___U3CfadedKeysU3E5__3_6; }
	inline GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748** get_address_of_U3CfadedKeysU3E5__3_6() { return &___U3CfadedKeysU3E5__3_6; }
	inline void set_U3CfadedKeysU3E5__3_6(GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* value)
	{
		___U3CfadedKeysU3E5__3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfadedKeysU3E5__3_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartAlphaU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076, ___U3CstartAlphaU3E5__4_7)); }
	inline float get_U3CstartAlphaU3E5__4_7() const { return ___U3CstartAlphaU3E5__4_7; }
	inline float* get_address_of_U3CstartAlphaU3E5__4_7() { return &___U3CstartAlphaU3E5__4_7; }
	inline void set_U3CstartAlphaU3E5__4_7(float value)
	{
		___U3CstartAlphaU3E5__4_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__9
struct U3CInitializeSceneContentWithDelayU3Ed__9_tB071DF720F4DB228E9EB79B7FE6CA9F4264EC710  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.MixedRealitySceneContent Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__9::<>4__this
	MixedRealitySceneContent_t0F93B2B5D455FDB9F34E0556DBFD573FB694187F * ___U3CU3E4__this_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__9::<i>5__2
	int32_t ___U3CiU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInitializeSceneContentWithDelayU3Ed__9_tB071DF720F4DB228E9EB79B7FE6CA9F4264EC710, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CInitializeSceneContentWithDelayU3Ed__9_tB071DF720F4DB228E9EB79B7FE6CA9F4264EC710, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CInitializeSceneContentWithDelayU3Ed__9_tB071DF720F4DB228E9EB79B7FE6CA9F4264EC710, ___U3CU3E4__this_2)); }
	inline MixedRealitySceneContent_t0F93B2B5D455FDB9F34E0556DBFD573FB694187F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MixedRealitySceneContent_t0F93B2B5D455FDB9F34E0556DBFD573FB694187F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MixedRealitySceneContent_t0F93B2B5D455FDB9F34E0556DBFD573FB694187F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CInitializeSceneContentWithDelayU3Ed__9_tB071DF720F4DB228E9EB79B7FE6CA9F4264EC710, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20
struct U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>2__current
	Type_t * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>4__this
	MixedRealitySceneSystemProfile_tDBF05B14E290A07DB6DC58749ADA9F40000EBF87 * ___U3CU3E4__this_3;
	// Microsoft.MixedReality.Toolkit.Utilities.SystemType[] Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>7__wrap1
	SystemTypeU5BU5D_t7649C03496F1F836680D0861D743C23C8EE45032* ___U3CU3E7__wrap1_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891, ___U3CU3E2__current_1)); }
	inline Type_t * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Type_t ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Type_t * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891, ___U3CU3E4__this_3)); }
	inline MixedRealitySceneSystemProfile_tDBF05B14E290A07DB6DC58749ADA9F40000EBF87 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealitySceneSystemProfile_tDBF05B14E290A07DB6DC58749ADA9F40000EBF87 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealitySceneSystemProfile_tDBF05B14E290A07DB6DC58749ADA9F40000EBF87 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891, ___U3CU3E7__wrap1_4)); }
	inline SystemTypeU5BU5D_t7649C03496F1F836680D0861D743C23C8EE45032* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline SystemTypeU5BU5D_t7649C03496F1F836680D0861D743C23C8EE45032** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(SystemTypeU5BU5D_t7649C03496F1F836680D0861D743C23C8EE45032* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_5() { return static_cast<int32_t>(offsetof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891, ___U3CU3E7__wrap2_5)); }
	inline int32_t get_U3CU3E7__wrap2_5() const { return ___U3CU3E7__wrap2_5; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_5() { return &___U3CU3E7__wrap2_5; }
	inline void set_U3CU3E7__wrap2_5(int32_t value)
	{
		___U3CU3E7__wrap2_5 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31
struct U3CFollowSequenceU3Ed__31_t2E905CCE41800B0D81E0BBF73F7E22641810A717  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31::<>4__this
	MoveToTarget_t9583CCDA3EE26C41F18B329EC7B260AB4D96B1E3 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFollowSequenceU3Ed__31_t2E905CCE41800B0D81E0BBF73F7E22641810A717, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFollowSequenceU3Ed__31_t2E905CCE41800B0D81E0BBF73F7E22641810A717, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CFollowSequenceU3Ed__31_t2E905CCE41800B0D81E0BBF73F7E22641810A717, ___U3CU3E4__this_2)); }
	inline MoveToTarget_t9583CCDA3EE26C41F18B329EC7B260AB4D96B1E3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MoveToTarget_t9583CCDA3EE26C41F18B329EC7B260AB4D96B1E3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MoveToTarget_t9583CCDA3EE26C41F18B329EC7B260AB4D96B1E3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1
struct U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<>2__current
	String_t* ___U3CU3E2__current_1;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::includeChildren
	bool ___includeChildren_3;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<objBuffer>5__2
	StringBuilder_t * ___U3CobjBufferU3E5__2_4;
	// System.Collections.Generic.Stack`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<processStack>5__3
	Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * ___U3CprocessStackU3E5__3_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1::<startVertexIndex>5__4
	int32_t ___U3CstartVertexIndexU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E, ___target_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_2() const { return ___target_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_2), (void*)value);
	}

	inline static int32_t get_offset_of_includeChildren_3() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E, ___includeChildren_3)); }
	inline bool get_includeChildren_3() const { return ___includeChildren_3; }
	inline bool* get_address_of_includeChildren_3() { return &___includeChildren_3; }
	inline void set_includeChildren_3(bool value)
	{
		___includeChildren_3 = value;
	}

	inline static int32_t get_offset_of_U3CobjBufferU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E, ___U3CobjBufferU3E5__2_4)); }
	inline StringBuilder_t * get_U3CobjBufferU3E5__2_4() const { return ___U3CobjBufferU3E5__2_4; }
	inline StringBuilder_t ** get_address_of_U3CobjBufferU3E5__2_4() { return &___U3CobjBufferU3E5__2_4; }
	inline void set_U3CobjBufferU3E5__2_4(StringBuilder_t * value)
	{
		___U3CobjBufferU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CobjBufferU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CprocessStackU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E, ___U3CprocessStackU3E5__3_5)); }
	inline Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * get_U3CprocessStackU3E5__3_5() const { return ___U3CprocessStackU3E5__3_5; }
	inline Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F ** get_address_of_U3CprocessStackU3E5__3_5() { return &___U3CprocessStackU3E5__3_5; }
	inline void set_U3CprocessStackU3E5__3_5(Stack_1_t947A852F0DF179B04BC160BDA03DAC7B3F07460F * value)
	{
		___U3CprocessStackU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CprocessStackU3E5__3_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartVertexIndexU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E, ___U3CstartVertexIndexU3E5__4_6)); }
	inline int32_t get_U3CstartVertexIndexU3E5__4_6() const { return ___U3CstartVertexIndexU3E5__4_6; }
	inline int32_t* get_address_of_U3CstartVertexIndexU3E5__4_6() { return &___U3CstartVertexIndexU3E5__4_6; }
	inline void set_U3CstartVertexIndexU3E5__4_6(int32_t value)
	{
		___U3CstartVertexIndexU3E5__4_6 = value;
	}
};


// UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25
struct U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::pauseTimeInSeconds
	float ___pauseTimeInSeconds_2;
	// UnityEngine.XR.OpenXR.OpenXRRestarter UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25::<>4__this
	OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_pauseTimeInSeconds_2() { return static_cast<int32_t>(offsetof(U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43, ___pauseTimeInSeconds_2)); }
	inline float get_pauseTimeInSeconds_2() const { return ___pauseTimeInSeconds_2; }
	inline float* get_address_of_pauseTimeInSeconds_2() { return &___pauseTimeInSeconds_2; }
	inline void set_pauseTimeInSeconds_2(float value)
	{
		___pauseTimeInSeconds_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43, ___U3CU3E4__this_3)); }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(OpenXRRestarter_tA40F022DD115AC469786BA541B126F42C6F44944 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves>
struct Enumerator_t24328407D3C87643E0C26D9C6DEF65B214F0028D 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::dictionary
	Dictionary_2_tC33F2089B5745FD79062A11AEA0C3F0B26F99631 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::version
	int32_t ___version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::currentValue
	PoseCurves_t0E84F660C8BE04EE53E17AB634069C9EE81CDB40 * ___currentValue_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t24328407D3C87643E0C26D9C6DEF65B214F0028D, ___dictionary_0)); }
	inline Dictionary_2_tC33F2089B5745FD79062A11AEA0C3F0B26F99631 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tC33F2089B5745FD79062A11AEA0C3F0B26F99631 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tC33F2089B5745FD79062A11AEA0C3F0B26F99631 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t24328407D3C87643E0C26D9C6DEF65B214F0028D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t24328407D3C87643E0C26D9C6DEF65B214F0028D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentValue_3() { return static_cast<int32_t>(offsetof(Enumerator_t24328407D3C87643E0C26D9C6DEF65B214F0028D, ___currentValue_3)); }
	inline PoseCurves_t0E84F660C8BE04EE53E17AB634069C9EE81CDB40 * get_currentValue_3() const { return ___currentValue_3; }
	inline PoseCurves_t0E84F660C8BE04EE53E17AB634069C9EE81CDB40 ** get_address_of_currentValue_3() { return &___currentValue_3; }
	inline void set_currentValue_3(PoseCurves_t0E84F660C8BE04EE53E17AB634069C9EE81CDB40 * value)
	{
		___currentValue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentValue_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt32,System.Boolean>
struct Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	uint32_t ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6, ___dictionary_0)); }
	inline Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t727597657DBCDE8841E480361B4F6009E211BACA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6, ___currentKey_3)); }
	inline uint32_t get_currentKey_3() const { return ___currentKey_3; }
	inline uint32_t* get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(uint32_t value)
	{
		___currentKey_3 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputDevice>
struct InlinedArray_1_tC5C77F6FF5FBFA76A6453E7A72CF263550C8C40C 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC5C77F6FF5FBFA76A6453E7A72CF263550C8C40C, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC5C77F6FF5FBFA76A6453E7A72CF263550C8C40C, ___firstValue_1)); }
	inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * get_firstValue_1() const { return ___firstValue_1; }
	inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tC5C77F6FF5FBFA76A6453E7A72CF263550C8C40C, ___additionalValues_2)); }
	inline InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6* get_additionalValues_2() const { return ___additionalValues_2; }
	inline InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(InputDeviceU5BU5D_tE05D1214F0F949DC3A889F8DB4B7A68A3089F6D6* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
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


// System.Collections.Generic.KeyValuePair`2<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00, ___value_1)); }
	inline PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E * get_value_1() const { return ___value_1; }
	inline PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PointerData_tFFB8BD6689DF7417692F19AD49E7AAF716C1F95E * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputAction>
struct ReadOnlyArray_1_tFF2DE177BEADC53D8885722D3FCDBF7846BD112F 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputActionU5BU5D_tD3CFE5DE4AAAD0D056FE716A341869DC8352C3F7* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFF2DE177BEADC53D8885722D3FCDBF7846BD112F, ___m_Array_0)); }
	inline InputActionU5BU5D_tD3CFE5DE4AAAD0D056FE716A341869DC8352C3F7* get_m_Array_0() const { return ___m_Array_0; }
	inline InputActionU5BU5D_tD3CFE5DE4AAAD0D056FE716A341869DC8352C3F7** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputActionU5BU5D_tD3CFE5DE4AAAD0D056FE716A341869DC8352C3F7* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFF2DE177BEADC53D8885722D3FCDBF7846BD112F, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tFF2DE177BEADC53D8885722D3FCDBF7846BD112F, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
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


// UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputBindingCompositeContext::m_State
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext::m_BindingIndex
	int32_t ___m_BindingIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570, ___m_State_0)); }
	inline InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingIndex_1() { return static_cast<int32_t>(offsetof(InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570, ___m_BindingIndex_1)); }
	inline int32_t get_m_BindingIndex_1() const { return ___m_BindingIndex_1; }
	inline int32_t* get_address_of_m_BindingIndex_1() { return &___m_BindingIndex_1; }
	inline void set_m_BindingIndex_1(int32_t value)
	{
		___m_BindingIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570_marshaled_pinvoke
{
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	int32_t ___m_BindingIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBindingCompositeContext
struct InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570_marshaled_com
{
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	int32_t ___m_BindingIndex_1;
};

// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 * ___m_EventPtr_0;

public:
	inline static int32_t get_offset_of_m_EventPtr_0() { return static_cast<int32_t>(offsetof(InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1, ___m_EventPtr_0)); }
	inline InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 * get_m_EventPtr_0() const { return ___m_EventPtr_0; }
	inline InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 ** get_address_of_m_EventPtr_0() { return &___m_EventPtr_0; }
	inline void set_m_EventPtr_0(InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 * value)
	{
		___m_EventPtr_0 = value;
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


// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;

public:
	inline static int32_t get_offset_of_m_StringOriginalCase_0() { return static_cast<int32_t>(offsetof(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED, ___m_StringOriginalCase_0)); }
	inline String_t* get_m_StringOriginalCase_0() const { return ___m_StringOriginalCase_0; }
	inline String_t** get_address_of_m_StringOriginalCase_0() { return &___m_StringOriginalCase_0; }
	inline void set_m_StringOriginalCase_0(String_t* value)
	{
		___m_StringOriginalCase_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringOriginalCase_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StringLowerCase_1() { return static_cast<int32_t>(offsetof(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED, ___m_StringLowerCase_1)); }
	inline String_t* get_m_StringLowerCase_1() const { return ___m_StringLowerCase_1; }
	inline String_t** get_address_of_m_StringLowerCase_1() { return &___m_StringLowerCase_1; }
	inline void set_m_StringLowerCase_1(String_t* value)
	{
		___m_StringLowerCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StringLowerCase_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration
struct SecureRemotingConnectConfiguration_t4A3548FDD3A76C13DB27458F7A82E0D6900C5D0D 
{
public:
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration::AuthenticationToken
	String_t* ___AuthenticationToken_0;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration::PerformSystemValidation
	bool ___PerformSystemValidation_1;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateServerCertificateDelegate Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration::ValidateServerCertificateCallback
	SecureRemotingValidateServerCertificateDelegate_tA92D7BF713A58F8A343A785810BA649376E7779E * ___ValidateServerCertificateCallback_2;

public:
	inline static int32_t get_offset_of_AuthenticationToken_0() { return static_cast<int32_t>(offsetof(SecureRemotingConnectConfiguration_t4A3548FDD3A76C13DB27458F7A82E0D6900C5D0D, ___AuthenticationToken_0)); }
	inline String_t* get_AuthenticationToken_0() const { return ___AuthenticationToken_0; }
	inline String_t** get_address_of_AuthenticationToken_0() { return &___AuthenticationToken_0; }
	inline void set_AuthenticationToken_0(String_t* value)
	{
		___AuthenticationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AuthenticationToken_0), (void*)value);
	}

	inline static int32_t get_offset_of_PerformSystemValidation_1() { return static_cast<int32_t>(offsetof(SecureRemotingConnectConfiguration_t4A3548FDD3A76C13DB27458F7A82E0D6900C5D0D, ___PerformSystemValidation_1)); }
	inline bool get_PerformSystemValidation_1() const { return ___PerformSystemValidation_1; }
	inline bool* get_address_of_PerformSystemValidation_1() { return &___PerformSystemValidation_1; }
	inline void set_PerformSystemValidation_1(bool value)
	{
		___PerformSystemValidation_1 = value;
	}

	inline static int32_t get_offset_of_ValidateServerCertificateCallback_2() { return static_cast<int32_t>(offsetof(SecureRemotingConnectConfiguration_t4A3548FDD3A76C13DB27458F7A82E0D6900C5D0D, ___ValidateServerCertificateCallback_2)); }
	inline SecureRemotingValidateServerCertificateDelegate_tA92D7BF713A58F8A343A785810BA649376E7779E * get_ValidateServerCertificateCallback_2() const { return ___ValidateServerCertificateCallback_2; }
	inline SecureRemotingValidateServerCertificateDelegate_tA92D7BF713A58F8A343A785810BA649376E7779E ** get_address_of_ValidateServerCertificateCallback_2() { return &___ValidateServerCertificateCallback_2; }
	inline void set_ValidateServerCertificateCallback_2(SecureRemotingValidateServerCertificateDelegate_tA92D7BF713A58F8A343A785810BA649376E7779E * value)
	{
		___ValidateServerCertificateCallback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValidateServerCertificateCallback_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration
struct SecureRemotingConnectConfiguration_t4A3548FDD3A76C13DB27458F7A82E0D6900C5D0D_marshaled_pinvoke
{
	char* ___AuthenticationToken_0;
	int32_t ___PerformSystemValidation_1;
	Il2CppMethodPointer ___ValidateServerCertificateCallback_2;
};
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration
struct SecureRemotingConnectConfiguration_t4A3548FDD3A76C13DB27458F7A82E0D6900C5D0D_marshaled_com
{
	Il2CppChar* ___AuthenticationToken_0;
	int32_t ___PerformSystemValidation_1;
	Il2CppMethodPointer ___ValidateServerCertificateCallback_2;
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


// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F 
{
public:
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_String_0() { return static_cast<int32_t>(offsetof(Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F, ___m_String_0)); }
	inline String_t* get_m_String_0() const { return ___m_String_0; }
	inline String_t** get_address_of_m_String_0() { return &___m_String_0; }
	inline void set_m_String_0(String_t* value)
	{
		___m_String_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
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


// System.Collections.ArrayList/ReadOnlyArrayList
struct ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C  : public ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ReadOnlyArrayList::_list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____list_5;

public:
	inline static int32_t get_offset_of__list_5() { return static_cast<int32_t>(offsetof(ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C, ____list_5)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__list_5() const { return ____list_5; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__list_5() { return &____list_5; }
	inline void set__list_5(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____list_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____list_5), (void*)value);
	}
};


// UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95 
{
public:
	union
	{
		struct
		{
			// System.Char UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer::FixedElementField
			Il2CppChar ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95__padding[128];
	};

public:
	inline static int32_t get_offset_of_FixedElementField_0() { return static_cast<int32_t>(offsetof(U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95, ___FixedElementField_0)); }
	inline Il2CppChar get_FixedElementField_0() const { return ___FixedElementField_0; }
	inline Il2CppChar* get_address_of_FixedElementField_0() { return &___FixedElementField_0; }
	inline void set_FixedElementField_0(Il2CppChar value)
	{
		___FixedElementField_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95_marshaled_pinvoke
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95__padding[128];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer
struct U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95_marshaled_com
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95__padding[128];
	};
};

// UnityEngine.InputSystem.InputActionState/BindingState
struct BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Byte UnityEngine.InputSystem.InputActionState/BindingState::m_ControlCount
					uint8_t ___m_ControlCount_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint8_t ___m_ControlCount_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_InteractionCount_1_OffsetPadding[1];
					// System.Byte UnityEngine.InputSystem.InputActionState/BindingState::m_InteractionCount
					uint8_t ___m_InteractionCount_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_InteractionCount_1_OffsetPadding_forAlignmentOnly[1];
					uint8_t ___m_InteractionCount_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ProcessorCount_2_OffsetPadding[2];
					// System.Byte UnityEngine.InputSystem.InputActionState/BindingState::m_ProcessorCount
					uint8_t ___m_ProcessorCount_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ProcessorCount_2_OffsetPadding_forAlignmentOnly[2];
					uint8_t ___m_ProcessorCount_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_MapIndex_3_OffsetPadding[3];
					// System.Byte UnityEngine.InputSystem.InputActionState/BindingState::m_MapIndex
					uint8_t ___m_MapIndex_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_MapIndex_3_OffsetPadding_forAlignmentOnly[3];
					uint8_t ___m_MapIndex_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_Flags_4_OffsetPadding[4];
					// System.Byte UnityEngine.InputSystem.InputActionState/BindingState::m_Flags
					uint8_t ___m_Flags_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_Flags_4_OffsetPadding_forAlignmentOnly[4];
					uint8_t ___m_Flags_4_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_PartIndex_5_OffsetPadding[5];
					// System.Byte UnityEngine.InputSystem.InputActionState/BindingState::m_PartIndex
					uint8_t ___m_PartIndex_5;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_PartIndex_5_OffsetPadding_forAlignmentOnly[5];
					uint8_t ___m_PartIndex_5_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ActionIndex_6_OffsetPadding[6];
					// System.UInt16 UnityEngine.InputSystem.InputActionState/BindingState::m_ActionIndex
					uint16_t ___m_ActionIndex_6;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ActionIndex_6_OffsetPadding_forAlignmentOnly[6];
					uint16_t ___m_ActionIndex_6_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_CompositeOrCompositeBindingIndex_7_OffsetPadding[8];
					// System.UInt16 UnityEngine.InputSystem.InputActionState/BindingState::m_CompositeOrCompositeBindingIndex
					uint16_t ___m_CompositeOrCompositeBindingIndex_7;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_CompositeOrCompositeBindingIndex_7_OffsetPadding_forAlignmentOnly[8];
					uint16_t ___m_CompositeOrCompositeBindingIndex_7_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ProcessorStartIndex_8_OffsetPadding[10];
					// System.UInt16 UnityEngine.InputSystem.InputActionState/BindingState::m_ProcessorStartIndex
					uint16_t ___m_ProcessorStartIndex_8;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ProcessorStartIndex_8_OffsetPadding_forAlignmentOnly[10];
					uint16_t ___m_ProcessorStartIndex_8_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_InteractionStartIndex_9_OffsetPadding[12];
					// System.UInt16 UnityEngine.InputSystem.InputActionState/BindingState::m_InteractionStartIndex
					uint16_t ___m_InteractionStartIndex_9;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_InteractionStartIndex_9_OffsetPadding_forAlignmentOnly[12];
					uint16_t ___m_InteractionStartIndex_9_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_ControlStartIndex_10_OffsetPadding[14];
					// System.UInt16 UnityEngine.InputSystem.InputActionState/BindingState::m_ControlStartIndex
					uint16_t ___m_ControlStartIndex_10;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_ControlStartIndex_10_OffsetPadding_forAlignmentOnly[14];
					uint16_t ___m_ControlStartIndex_10_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_PressTime_11_OffsetPadding[16];
					// System.Double UnityEngine.InputSystem.InputActionState/BindingState::m_PressTime
					double ___m_PressTime_11;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_PressTime_11_OffsetPadding_forAlignmentOnly[16];
					double ___m_PressTime_11_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___m_TriggerEventIdForComposite_12_OffsetPadding[24];
					// System.Int32 UnityEngine.InputSystem.InputActionState/BindingState::m_TriggerEventIdForComposite
					int32_t ___m_TriggerEventIdForComposite_12;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___m_TriggerEventIdForComposite_12_OffsetPadding_forAlignmentOnly[24];
					int32_t ___m_TriggerEventIdForComposite_12_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char _____padding_13_OffsetPadding[28];
					// System.Int32 UnityEngine.InputSystem.InputActionState/BindingState::__padding
					int32_t _____padding_13;
				};
				#pragma pack(pop, tp)
				struct
				{
					char _____padding_13_OffsetPadding_forAlignmentOnly[28];
					int32_t _____padding_13_forAlignmentOnly;
				};
			};
		};
		uint8_t BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26__padding[32];
	};

public:
	inline static int32_t get_offset_of_m_ControlCount_0() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_ControlCount_0)); }
	inline uint8_t get_m_ControlCount_0() const { return ___m_ControlCount_0; }
	inline uint8_t* get_address_of_m_ControlCount_0() { return &___m_ControlCount_0; }
	inline void set_m_ControlCount_0(uint8_t value)
	{
		___m_ControlCount_0 = value;
	}

	inline static int32_t get_offset_of_m_InteractionCount_1() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_InteractionCount_1)); }
	inline uint8_t get_m_InteractionCount_1() const { return ___m_InteractionCount_1; }
	inline uint8_t* get_address_of_m_InteractionCount_1() { return &___m_InteractionCount_1; }
	inline void set_m_InteractionCount_1(uint8_t value)
	{
		___m_InteractionCount_1 = value;
	}

	inline static int32_t get_offset_of_m_ProcessorCount_2() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_ProcessorCount_2)); }
	inline uint8_t get_m_ProcessorCount_2() const { return ___m_ProcessorCount_2; }
	inline uint8_t* get_address_of_m_ProcessorCount_2() { return &___m_ProcessorCount_2; }
	inline void set_m_ProcessorCount_2(uint8_t value)
	{
		___m_ProcessorCount_2 = value;
	}

	inline static int32_t get_offset_of_m_MapIndex_3() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_MapIndex_3)); }
	inline uint8_t get_m_MapIndex_3() const { return ___m_MapIndex_3; }
	inline uint8_t* get_address_of_m_MapIndex_3() { return &___m_MapIndex_3; }
	inline void set_m_MapIndex_3(uint8_t value)
	{
		___m_MapIndex_3 = value;
	}

	inline static int32_t get_offset_of_m_Flags_4() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_Flags_4)); }
	inline uint8_t get_m_Flags_4() const { return ___m_Flags_4; }
	inline uint8_t* get_address_of_m_Flags_4() { return &___m_Flags_4; }
	inline void set_m_Flags_4(uint8_t value)
	{
		___m_Flags_4 = value;
	}

	inline static int32_t get_offset_of_m_PartIndex_5() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_PartIndex_5)); }
	inline uint8_t get_m_PartIndex_5() const { return ___m_PartIndex_5; }
	inline uint8_t* get_address_of_m_PartIndex_5() { return &___m_PartIndex_5; }
	inline void set_m_PartIndex_5(uint8_t value)
	{
		___m_PartIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndex_6() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_ActionIndex_6)); }
	inline uint16_t get_m_ActionIndex_6() const { return ___m_ActionIndex_6; }
	inline uint16_t* get_address_of_m_ActionIndex_6() { return &___m_ActionIndex_6; }
	inline void set_m_ActionIndex_6(uint16_t value)
	{
		___m_ActionIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_CompositeOrCompositeBindingIndex_7() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_CompositeOrCompositeBindingIndex_7)); }
	inline uint16_t get_m_CompositeOrCompositeBindingIndex_7() const { return ___m_CompositeOrCompositeBindingIndex_7; }
	inline uint16_t* get_address_of_m_CompositeOrCompositeBindingIndex_7() { return &___m_CompositeOrCompositeBindingIndex_7; }
	inline void set_m_CompositeOrCompositeBindingIndex_7(uint16_t value)
	{
		___m_CompositeOrCompositeBindingIndex_7 = value;
	}

	inline static int32_t get_offset_of_m_ProcessorStartIndex_8() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_ProcessorStartIndex_8)); }
	inline uint16_t get_m_ProcessorStartIndex_8() const { return ___m_ProcessorStartIndex_8; }
	inline uint16_t* get_address_of_m_ProcessorStartIndex_8() { return &___m_ProcessorStartIndex_8; }
	inline void set_m_ProcessorStartIndex_8(uint16_t value)
	{
		___m_ProcessorStartIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_InteractionStartIndex_9() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_InteractionStartIndex_9)); }
	inline uint16_t get_m_InteractionStartIndex_9() const { return ___m_InteractionStartIndex_9; }
	inline uint16_t* get_address_of_m_InteractionStartIndex_9() { return &___m_InteractionStartIndex_9; }
	inline void set_m_InteractionStartIndex_9(uint16_t value)
	{
		___m_InteractionStartIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_10() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_ControlStartIndex_10)); }
	inline uint16_t get_m_ControlStartIndex_10() const { return ___m_ControlStartIndex_10; }
	inline uint16_t* get_address_of_m_ControlStartIndex_10() { return &___m_ControlStartIndex_10; }
	inline void set_m_ControlStartIndex_10(uint16_t value)
	{
		___m_ControlStartIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_PressTime_11() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_PressTime_11)); }
	inline double get_m_PressTime_11() const { return ___m_PressTime_11; }
	inline double* get_address_of_m_PressTime_11() { return &___m_PressTime_11; }
	inline void set_m_PressTime_11(double value)
	{
		___m_PressTime_11 = value;
	}

	inline static int32_t get_offset_of_m_TriggerEventIdForComposite_12() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, ___m_TriggerEventIdForComposite_12)); }
	inline int32_t get_m_TriggerEventIdForComposite_12() const { return ___m_TriggerEventIdForComposite_12; }
	inline int32_t* get_address_of_m_TriggerEventIdForComposite_12() { return &___m_TriggerEventIdForComposite_12; }
	inline void set_m_TriggerEventIdForComposite_12(int32_t value)
	{
		___m_TriggerEventIdForComposite_12 = value;
	}

	inline static int32_t get_offset_of___padding_13() { return static_cast<int32_t>(offsetof(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26, _____padding_13)); }
	inline int32_t get___padding_13() const { return _____padding_13; }
	inline int32_t* get_address_of___padding_13() { return &_____padding_13; }
	inline void set___padding_13(int32_t value)
	{
		_____padding_13 = value;
	}
};


// UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79 
{
public:
	// System.Void* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::basePtr
	void* ___basePtr_0;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapCount
	int32_t ___mapCount_1;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionCount
	int32_t ___actionCount_2;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionCount
	int32_t ___interactionCount_3;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingCount
	int32_t ___bindingCount_4;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlCount
	int32_t ___controlCount_5;
	// System.Int32 UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeCount
	int32_t ___compositeCount_6;
	// UnityEngine.InputSystem.InputActionState/TriggerState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionStates
	TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 * ___actionStates_7;
	// UnityEngine.InputSystem.InputActionState/BindingState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::bindingStates
	BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 * ___bindingStates_8;
	// UnityEngine.InputSystem.InputActionState/InteractionState* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::interactionStates
	InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 * ___interactionStates_9;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlMagnitudes
	float* ___controlMagnitudes_10;
	// System.Single* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::compositeMagnitudes
	float* ___compositeMagnitudes_11;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::enabledControls
	int32_t* ___enabledControls_12;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndicesAndCounts
	uint16_t* ___actionBindingIndicesAndCounts_13;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::actionBindingIndices
	uint16_t* ___actionBindingIndices_14;
	// System.Int32* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlIndexToBindingIndex
	int32_t* ___controlIndexToBindingIndex_15;
	// System.UInt16* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlGroupingAndComplexity
	uint16_t* ___controlGroupingAndComplexity_16;
	// System.Boolean UnityEngine.InputSystem.InputActionState/UnmanagedMemory::controlGroupingInitialized
	bool ___controlGroupingInitialized_17;
	// UnityEngine.InputSystem.InputActionState/ActionMapIndices* UnityEngine.InputSystem.InputActionState/UnmanagedMemory::mapIndices
	ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A * ___mapIndices_18;

public:
	inline static int32_t get_offset_of_basePtr_0() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___basePtr_0)); }
	inline void* get_basePtr_0() const { return ___basePtr_0; }
	inline void** get_address_of_basePtr_0() { return &___basePtr_0; }
	inline void set_basePtr_0(void* value)
	{
		___basePtr_0 = value;
	}

	inline static int32_t get_offset_of_mapCount_1() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___mapCount_1)); }
	inline int32_t get_mapCount_1() const { return ___mapCount_1; }
	inline int32_t* get_address_of_mapCount_1() { return &___mapCount_1; }
	inline void set_mapCount_1(int32_t value)
	{
		___mapCount_1 = value;
	}

	inline static int32_t get_offset_of_actionCount_2() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___actionCount_2)); }
	inline int32_t get_actionCount_2() const { return ___actionCount_2; }
	inline int32_t* get_address_of_actionCount_2() { return &___actionCount_2; }
	inline void set_actionCount_2(int32_t value)
	{
		___actionCount_2 = value;
	}

	inline static int32_t get_offset_of_interactionCount_3() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___interactionCount_3)); }
	inline int32_t get_interactionCount_3() const { return ___interactionCount_3; }
	inline int32_t* get_address_of_interactionCount_3() { return &___interactionCount_3; }
	inline void set_interactionCount_3(int32_t value)
	{
		___interactionCount_3 = value;
	}

	inline static int32_t get_offset_of_bindingCount_4() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___bindingCount_4)); }
	inline int32_t get_bindingCount_4() const { return ___bindingCount_4; }
	inline int32_t* get_address_of_bindingCount_4() { return &___bindingCount_4; }
	inline void set_bindingCount_4(int32_t value)
	{
		___bindingCount_4 = value;
	}

	inline static int32_t get_offset_of_controlCount_5() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___controlCount_5)); }
	inline int32_t get_controlCount_5() const { return ___controlCount_5; }
	inline int32_t* get_address_of_controlCount_5() { return &___controlCount_5; }
	inline void set_controlCount_5(int32_t value)
	{
		___controlCount_5 = value;
	}

	inline static int32_t get_offset_of_compositeCount_6() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___compositeCount_6)); }
	inline int32_t get_compositeCount_6() const { return ___compositeCount_6; }
	inline int32_t* get_address_of_compositeCount_6() { return &___compositeCount_6; }
	inline void set_compositeCount_6(int32_t value)
	{
		___compositeCount_6 = value;
	}

	inline static int32_t get_offset_of_actionStates_7() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___actionStates_7)); }
	inline TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 * get_actionStates_7() const { return ___actionStates_7; }
	inline TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 ** get_address_of_actionStates_7() { return &___actionStates_7; }
	inline void set_actionStates_7(TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 * value)
	{
		___actionStates_7 = value;
	}

	inline static int32_t get_offset_of_bindingStates_8() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___bindingStates_8)); }
	inline BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 * get_bindingStates_8() const { return ___bindingStates_8; }
	inline BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 ** get_address_of_bindingStates_8() { return &___bindingStates_8; }
	inline void set_bindingStates_8(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 * value)
	{
		___bindingStates_8 = value;
	}

	inline static int32_t get_offset_of_interactionStates_9() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___interactionStates_9)); }
	inline InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 * get_interactionStates_9() const { return ___interactionStates_9; }
	inline InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 ** get_address_of_interactionStates_9() { return &___interactionStates_9; }
	inline void set_interactionStates_9(InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 * value)
	{
		___interactionStates_9 = value;
	}

	inline static int32_t get_offset_of_controlMagnitudes_10() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___controlMagnitudes_10)); }
	inline float* get_controlMagnitudes_10() const { return ___controlMagnitudes_10; }
	inline float** get_address_of_controlMagnitudes_10() { return &___controlMagnitudes_10; }
	inline void set_controlMagnitudes_10(float* value)
	{
		___controlMagnitudes_10 = value;
	}

	inline static int32_t get_offset_of_compositeMagnitudes_11() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___compositeMagnitudes_11)); }
	inline float* get_compositeMagnitudes_11() const { return ___compositeMagnitudes_11; }
	inline float** get_address_of_compositeMagnitudes_11() { return &___compositeMagnitudes_11; }
	inline void set_compositeMagnitudes_11(float* value)
	{
		___compositeMagnitudes_11 = value;
	}

	inline static int32_t get_offset_of_enabledControls_12() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___enabledControls_12)); }
	inline int32_t* get_enabledControls_12() const { return ___enabledControls_12; }
	inline int32_t** get_address_of_enabledControls_12() { return &___enabledControls_12; }
	inline void set_enabledControls_12(int32_t* value)
	{
		___enabledControls_12 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndicesAndCounts_13() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___actionBindingIndicesAndCounts_13)); }
	inline uint16_t* get_actionBindingIndicesAndCounts_13() const { return ___actionBindingIndicesAndCounts_13; }
	inline uint16_t** get_address_of_actionBindingIndicesAndCounts_13() { return &___actionBindingIndicesAndCounts_13; }
	inline void set_actionBindingIndicesAndCounts_13(uint16_t* value)
	{
		___actionBindingIndicesAndCounts_13 = value;
	}

	inline static int32_t get_offset_of_actionBindingIndices_14() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___actionBindingIndices_14)); }
	inline uint16_t* get_actionBindingIndices_14() const { return ___actionBindingIndices_14; }
	inline uint16_t** get_address_of_actionBindingIndices_14() { return &___actionBindingIndices_14; }
	inline void set_actionBindingIndices_14(uint16_t* value)
	{
		___actionBindingIndices_14 = value;
	}

	inline static int32_t get_offset_of_controlIndexToBindingIndex_15() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___controlIndexToBindingIndex_15)); }
	inline int32_t* get_controlIndexToBindingIndex_15() const { return ___controlIndexToBindingIndex_15; }
	inline int32_t** get_address_of_controlIndexToBindingIndex_15() { return &___controlIndexToBindingIndex_15; }
	inline void set_controlIndexToBindingIndex_15(int32_t* value)
	{
		___controlIndexToBindingIndex_15 = value;
	}

	inline static int32_t get_offset_of_controlGroupingAndComplexity_16() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___controlGroupingAndComplexity_16)); }
	inline uint16_t* get_controlGroupingAndComplexity_16() const { return ___controlGroupingAndComplexity_16; }
	inline uint16_t** get_address_of_controlGroupingAndComplexity_16() { return &___controlGroupingAndComplexity_16; }
	inline void set_controlGroupingAndComplexity_16(uint16_t* value)
	{
		___controlGroupingAndComplexity_16 = value;
	}

	inline static int32_t get_offset_of_controlGroupingInitialized_17() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___controlGroupingInitialized_17)); }
	inline bool get_controlGroupingInitialized_17() const { return ___controlGroupingInitialized_17; }
	inline bool* get_address_of_controlGroupingInitialized_17() { return &___controlGroupingInitialized_17; }
	inline void set_controlGroupingInitialized_17(bool value)
	{
		___controlGroupingInitialized_17 = value;
	}

	inline static int32_t get_offset_of_mapIndices_18() { return static_cast<int32_t>(offsetof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79, ___mapIndices_18)); }
	inline ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A * get_mapIndices_18() const { return ___mapIndices_18; }
	inline ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A ** get_address_of_mapIndices_18() { return &___mapIndices_18; }
	inline void set_mapIndices_18(ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A * value)
	{
		___mapIndices_18 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79_marshaled_pinvoke
{
	void* ___basePtr_0;
	int32_t ___mapCount_1;
	int32_t ___actionCount_2;
	int32_t ___interactionCount_3;
	int32_t ___bindingCount_4;
	int32_t ___controlCount_5;
	int32_t ___compositeCount_6;
	TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 * ___actionStates_7;
	BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 * ___bindingStates_8;
	InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 * ___interactionStates_9;
	float* ___controlMagnitudes_10;
	float* ___compositeMagnitudes_11;
	int32_t* ___enabledControls_12;
	uint16_t* ___actionBindingIndicesAndCounts_13;
	uint16_t* ___actionBindingIndices_14;
	int32_t* ___controlIndexToBindingIndex_15;
	uint16_t* ___controlGroupingAndComplexity_16;
	int32_t ___controlGroupingInitialized_17;
	ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A * ___mapIndices_18;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79_marshaled_com
{
	void* ___basePtr_0;
	int32_t ___mapCount_1;
	int32_t ___actionCount_2;
	int32_t ___interactionCount_3;
	int32_t ___bindingCount_4;
	int32_t ___controlCount_5;
	int32_t ___compositeCount_6;
	TriggerState_t0DFC29612AAA2473244F3580C746BE71D6C57145 * ___actionStates_7;
	BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 * ___bindingStates_8;
	InteractionState_tBD9D1657CA10C3E513F0A89AE637B7EF7CC68320 * ___interactionStates_9;
	float* ___controlMagnitudes_10;
	float* ___compositeMagnitudes_11;
	int32_t* ___enabledControls_12;
	uint16_t* ___actionBindingIndicesAndCounts_13;
	uint16_t* ___actionBindingIndices_14;
	int32_t* ___controlIndexToBindingIndex_15;
	uint16_t* ___controlGroupingAndComplexity_16;
	int32_t ___controlGroupingInitialized_17;
	ActionMapIndices_t627DF9CE7704FDD352C035C65CC9AF6D8B899A0A * ___mapIndices_18;
};

// UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
struct Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F 
{
public:
	// UnityEngine.InputSystem.Utilities.InputActionTrace UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_Trace
	InputActionTrace_tC3267A7DBED6A384009BD802DDA0259FA663430A * ___m_Trace_0;
	// UnityEngine.InputSystem.LowLevel.ActionEvent* UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_Buffer
	ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 * ___m_Buffer_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_EventCount
	int32_t ___m_EventCount_2;
	// UnityEngine.InputSystem.LowLevel.ActionEvent* UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_CurrentEvent
	ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 * ___m_CurrentEvent_3;
	// System.Int32 UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_4;

public:
	inline static int32_t get_offset_of_m_Trace_0() { return static_cast<int32_t>(offsetof(Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F, ___m_Trace_0)); }
	inline InputActionTrace_tC3267A7DBED6A384009BD802DDA0259FA663430A * get_m_Trace_0() const { return ___m_Trace_0; }
	inline InputActionTrace_tC3267A7DBED6A384009BD802DDA0259FA663430A ** get_address_of_m_Trace_0() { return &___m_Trace_0; }
	inline void set_m_Trace_0(InputActionTrace_tC3267A7DBED6A384009BD802DDA0259FA663430A * value)
	{
		___m_Trace_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trace_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Buffer_1() { return static_cast<int32_t>(offsetof(Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F, ___m_Buffer_1)); }
	inline ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 * get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 ** get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 * value)
	{
		___m_Buffer_1 = value;
	}

	inline static int32_t get_offset_of_m_EventCount_2() { return static_cast<int32_t>(offsetof(Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F, ___m_EventCount_2)); }
	inline int32_t get_m_EventCount_2() const { return ___m_EventCount_2; }
	inline int32_t* get_address_of_m_EventCount_2() { return &___m_EventCount_2; }
	inline void set_m_EventCount_2(int32_t value)
	{
		___m_EventCount_2 = value;
	}

	inline static int32_t get_offset_of_m_CurrentEvent_3() { return static_cast<int32_t>(offsetof(Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F, ___m_CurrentEvent_3)); }
	inline ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 * get_m_CurrentEvent_3() const { return ___m_CurrentEvent_3; }
	inline ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 ** get_address_of_m_CurrentEvent_3() { return &___m_CurrentEvent_3; }
	inline void set_m_CurrentEvent_3(ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 * value)
	{
		___m_CurrentEvent_3 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_4() { return static_cast<int32_t>(offsetof(Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F, ___m_CurrentIndex_4)); }
	inline int32_t get_m_CurrentIndex_4() const { return ___m_CurrentIndex_4; }
	inline int32_t* get_address_of_m_CurrentIndex_4() { return &___m_CurrentIndex_4; }
	inline void set_m_CurrentIndex_4(int32_t value)
	{
		___m_CurrentIndex_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
struct Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F_marshaled_pinvoke
{
	InputActionTrace_tC3267A7DBED6A384009BD802DDA0259FA663430A * ___m_Trace_0;
	ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 * ___m_Buffer_1;
	int32_t ___m_EventCount_2;
	ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 * ___m_CurrentEvent_3;
	int32_t ___m_CurrentIndex_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
struct Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F_marshaled_com
{
	InputActionTrace_tC3267A7DBED6A384009BD802DDA0259FA663430A * ___m_Trace_0;
	ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 * ___m_Buffer_1;
	int32_t ___m_EventCount_2;
	ActionEvent_t12598D9456C7953E3247F33C09C879BF879A0E48 * ___m_CurrentEvent_3;
	int32_t ___m_CurrentIndex_4;
};

// UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tE86A8E039A6A38212C52C12C3D2EC9FD2895D3F0 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::<part>k__BackingField
	int32_t ___U3CpartU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding::<control>k__BackingField
	InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___U3CcontrolU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CpartU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PartBinding_tE86A8E039A6A38212C52C12C3D2EC9FD2895D3F0, ___U3CpartU3Ek__BackingField_0)); }
	inline int32_t get_U3CpartU3Ek__BackingField_0() const { return ___U3CpartU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CpartU3Ek__BackingField_0() { return &___U3CpartU3Ek__BackingField_0; }
	inline void set_U3CpartU3Ek__BackingField_0(int32_t value)
	{
		___U3CpartU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CcontrolU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PartBinding_tE86A8E039A6A38212C52C12C3D2EC9FD2895D3F0, ___U3CcontrolU3Ek__BackingField_1)); }
	inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * get_U3CcontrolU3Ek__BackingField_1() const { return ___U3CcontrolU3Ek__BackingField_1; }
	inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 ** get_address_of_U3CcontrolU3Ek__BackingField_1() { return &___U3CcontrolU3Ek__BackingField_1; }
	inline void set_U3CcontrolU3Ek__BackingField_1(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * value)
	{
		___U3CcontrolU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcontrolU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tE86A8E039A6A38212C52C12C3D2EC9FD2895D3F0_marshaled_pinvoke
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___U3CcontrolU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding
struct PartBinding_tE86A8E039A6A38212C52C12C3D2EC9FD2895D3F0_marshaled_com
{
	int32_t ___U3CpartU3Ek__BackingField_0;
	InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___U3CcontrolU3Ek__BackingField_1;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E 
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65 * ___table_0;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E, ___table_0)); }
	inline Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65 * get_table_0() const { return ___table_0; }
	inline Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___table_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E_marshaled_pinvoke
{
	Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65 * ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E_marshaled_com
{
	Dictionary_2_t5CDE7C1F4CCF20D97AD81FE47A410DD3383EFB65 * ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_t32BCEBAA7826C9CBD6572CFFCA4732CC3FB7F749 
{
public:
	// System.Boolean UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance::valid
	bool ___valid_0;

public:
	inline static int32_t get_offset_of_valid_0() { return static_cast<int32_t>(offsetof(CacheRefInstance_t32BCEBAA7826C9CBD6572CFFCA4732CC3FB7F749, ___valid_0)); }
	inline bool get_valid_0() const { return ___valid_0; }
	inline bool* get_address_of_valid_0() { return &___valid_0; }
	inline void set_valid_0(bool value)
	{
		___valid_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_t32BCEBAA7826C9CBD6572CFFCA4732CC3FB7F749_marshaled_pinvoke
{
	int32_t ___valid_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_t32BCEBAA7826C9CBD6572CFFCA4732CC3FB7F749_marshaled_com
{
	int32_t ___valid_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceBuilder/RefInstance
struct RefInstance_t644EB29D353013AE02C53F47A026FFEEBA232E6F 
{
public:
	union
	{
		struct
		{
		};
		uint8_t RefInstance_t644EB29D353013AE02C53F47A026FFEEBA232E6F__padding[1];
	};

public:
};


// UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator
struct Enumerator_tD8A07122686F8093CC59FC43AE479C73D2B32313 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_Buffer
	InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 * ___m_Buffer_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_EventCount
	int32_t ___m_EventCount_1;
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_CurrentEvent
	InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 * ___m_CurrentEvent_2;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_3;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(Enumerator_tD8A07122686F8093CC59FC43AE479C73D2B32313, ___m_Buffer_0)); }
	inline InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 * get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 ** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 * value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_EventCount_1() { return static_cast<int32_t>(offsetof(Enumerator_tD8A07122686F8093CC59FC43AE479C73D2B32313, ___m_EventCount_1)); }
	inline int32_t get_m_EventCount_1() const { return ___m_EventCount_1; }
	inline int32_t* get_address_of_m_EventCount_1() { return &___m_EventCount_1; }
	inline void set_m_EventCount_1(int32_t value)
	{
		___m_EventCount_1 = value;
	}

	inline static int32_t get_offset_of_m_CurrentEvent_2() { return static_cast<int32_t>(offsetof(Enumerator_tD8A07122686F8093CC59FC43AE479C73D2B32313, ___m_CurrentEvent_2)); }
	inline InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 * get_m_CurrentEvent_2() const { return ___m_CurrentEvent_2; }
	inline InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 ** get_address_of_m_CurrentEvent_2() { return &___m_CurrentEvent_2; }
	inline void set_m_CurrentEvent_2(InputEvent_t0E4B1A66D8B3273D8188F3902F40C5E8BFF6E234 * value)
	{
		___m_CurrentEvent_2 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_3() { return static_cast<int32_t>(offsetof(Enumerator_tD8A07122686F8093CC59FC43AE479C73D2B32313, ___m_CurrentIndex_3)); }
	inline int32_t get_m_CurrentIndex_3() const { return ___m_CurrentIndex_3; }
	inline int32_t* get_address_of_m_CurrentIndex_3() { return &___m_CurrentIndex_3; }
	inline void set_m_CurrentIndex_3(int32_t value)
	{
		___m_CurrentIndex_3 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_t3A3C0A8934B8EEA5C0CB34AD648C6A0EE599D85B 
{
public:
	// UnityEngine.InputSystem.LowLevel.InputStateHistory UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator::m_History
	InputStateHistory_t0869C8331534E5D5C7E2D33FA6EEC05E85C18A31 * ___m_History_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_History_0() { return static_cast<int32_t>(offsetof(Enumerator_t3A3C0A8934B8EEA5C0CB34AD648C6A0EE599D85B, ___m_History_0)); }
	inline InputStateHistory_t0869C8331534E5D5C7E2D33FA6EEC05E85C18A31 * get_m_History_0() const { return ___m_History_0; }
	inline InputStateHistory_t0869C8331534E5D5C7E2D33FA6EEC05E85C18A31 ** get_address_of_m_History_0() { return &___m_History_0; }
	inline void set_m_History_0(InputStateHistory_t0869C8331534E5D5C7E2D33FA6EEC05E85C18A31 * value)
	{
		___m_History_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_History_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3A3C0A8934B8EEA5C0CB34AD648C6A0EE599D85B, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_t3A3C0A8934B8EEA5C0CB34AD648C6A0EE599D85B_marshaled_pinvoke
{
	InputStateHistory_t0869C8331534E5D5C7E2D33FA6EEC05E85C18A31 * ___m_History_0;
	int32_t ___m_Index_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_t3A3C0A8934B8EEA5C0CB34AD648C6A0EE599D85B_marshaled_com
{
	InputStateHistory_t0869C8331534E5D5C7E2D33FA6EEC05E85C18A31 * ___m_History_0;
	int32_t ___m_Index_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData>
struct Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9, ___dictionary_0)); }
	inline Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t99258040B667AD054EDE09515EFC6475271347D4 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9, ___current_3)); }
	inline KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2E7D57D6DE02C3C4616E9788456652661A076A00  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct InlinedArray_1_t73599F4D005E33EE995C1D2D1DEAD2515D694B81 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t73599F4D005E33EE995C1D2D1DEAD2515D694B81, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t73599F4D005E33EE995C1D2D1DEAD2515D694B81, ___firstValue_1)); }
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  get_firstValue_1() const { return ___firstValue_1; }
	inline KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(KeyValuePair_2_tE78AD78874BCE1BC993F92EF8CBBDC3B30E44CBB  value)
	{
		___firstValue_1 = value;
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t73599F4D005E33EE995C1D2D1DEAD2515D694B81, ___additionalValues_2)); }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* get_additionalValues_2() const { return ___additionalValues_2; }
	inline KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(KeyValuePair_2U5BU5D_t346E5EF32BF6AB8CE577D2FE538C7B4F90DA2D48* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.Substring>
struct InlinedArray_1_t553149D8EBA6D89FE4952303D036252DC5D360C3 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_t553149D8EBA6D89FE4952303D036252DC5D360C3, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_t553149D8EBA6D89FE4952303D036252DC5D360C3, ___firstValue_1)); }
	inline Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  get_firstValue_1() const { return ___firstValue_1; }
	inline Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F * get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___firstValue_1))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_t553149D8EBA6D89FE4952303D036252DC5D360C3, ___additionalValues_2)); }
	inline SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0* get_additionalValues_2() const { return ___additionalValues_2; }
	inline SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(SubstringU5BU5D_tE332884993470F5CF7BAAA950414E4E24691A8D0* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct KeyValuePair_2_t2B4BD676624F7FEC54BCB9D6BF33CCB09221DB7B 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Func_1_t87F4D899EDDDA25407AC884A9A61F602E32A21FA * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2B4BD676624F7FEC54BCB9D6BF33CCB09221DB7B, ___key_0)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_key_0() const { return ___key_0; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2B4BD676624F7FEC54BCB9D6BF33CCB09221DB7B, ___value_1)); }
	inline Func_1_t87F4D899EDDDA25407AC884A9A61F602E32A21FA * get_value_1() const { return ___value_1; }
	inline Func_1_t87F4D899EDDDA25407AC884A9A61F602E32A21FA ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Func_1_t87F4D899EDDDA25407AC884A9A61F602E32A21FA * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct KeyValuePair_2_t76AE7CE0A1B0BF6D053BE29F1193D9C3EFFD608E 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t76AE7CE0A1B0BF6D053BE29F1193D9C3EFFD608E, ___key_0)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_key_0() const { return ___key_0; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t76AE7CE0A1B0BF6D053BE29F1193D9C3EFFD608E, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct KeyValuePair_2_t32554390D3DCC815F632A9813367A1A9E6C4C324 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t32554390D3DCC815F632A9813367A1A9E6C4C324, ___key_0)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_key_0() const { return ___key_0; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t32554390D3DCC815F632A9813367A1A9E6C4C324, ___value_1)); }
	inline Type_t * get_value_1() const { return ___value_1; }
	inline Type_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Type_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration>
struct Nullable_1_tD097F8A4EE146ACEAD5B1EA04990E4BED15CB593 
{
public:
	// T System.Nullable`1::value
	SecureRemotingConnectConfiguration_t4A3548FDD3A76C13DB27458F7A82E0D6900C5D0D  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD097F8A4EE146ACEAD5B1EA04990E4BED15CB593, ___value_0)); }
	inline SecureRemotingConnectConfiguration_t4A3548FDD3A76C13DB27458F7A82E0D6900C5D0D  get_value_0() const { return ___value_0; }
	inline SecureRemotingConnectConfiguration_t4A3548FDD3A76C13DB27458F7A82E0D6900C5D0D * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(SecureRemotingConnectConfiguration_t4A3548FDD3A76C13DB27458F7A82E0D6900C5D0D  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___AuthenticationToken_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___ValidateServerCertificateCallback_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD097F8A4EE146ACEAD5B1EA04990E4BED15CB593, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Microsoft.MixedReality.OpenXR.Remoting.ConnectionState
struct ConnectionState_tB034A01F7811A65E94C26978BCCF6D39250A43B5 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.ConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionState_tB034A01F7811A65E94C26978BCCF6D39250A43B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* ___buckets_10;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_11;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_12;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_13;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_20;

public:
	inline static int32_t get_offset_of_buckets_10() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___buckets_10)); }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* get_buckets_10() const { return ___buckets_10; }
	inline bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190** get_address_of_buckets_10() { return &___buckets_10; }
	inline void set_buckets_10(bucketU5BU5D_tFE956DAEFB1D1C86A13EF247D7367BF60B55E190* value)
	{
		___buckets_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_10), (void*)value);
	}

	inline static int32_t get_offset_of_count_11() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___count_11)); }
	inline int32_t get_count_11() const { return ___count_11; }
	inline int32_t* get_address_of_count_11() { return &___count_11; }
	inline void set_count_11(int32_t value)
	{
		___count_11 = value;
	}

	inline static int32_t get_offset_of_occupancy_12() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___occupancy_12)); }
	inline int32_t get_occupancy_12() const { return ___occupancy_12; }
	inline int32_t* get_address_of_occupancy_12() { return &___occupancy_12; }
	inline void set_occupancy_12(int32_t value)
	{
		___occupancy_12 = value;
	}

	inline static int32_t get_offset_of_loadsize_13() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadsize_13)); }
	inline int32_t get_loadsize_13() const { return ___loadsize_13; }
	inline int32_t* get_address_of_loadsize_13() { return &___loadsize_13; }
	inline void set_loadsize_13(int32_t value)
	{
		___loadsize_13 = value;
	}

	inline static int32_t get_offset_of_loadFactor_14() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___loadFactor_14)); }
	inline float get_loadFactor_14() const { return ___loadFactor_14; }
	inline float* get_address_of_loadFactor_14() { return &___loadFactor_14; }
	inline void set_loadFactor_14(float value)
	{
		___loadFactor_14 = value;
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_16() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___isWriterInProgress_16)); }
	inline bool get_isWriterInProgress_16() const { return ___isWriterInProgress_16; }
	inline bool* get_address_of_isWriterInProgress_16() { return &___isWriterInProgress_16; }
	inline void set_isWriterInProgress_16(bool value)
	{
		___isWriterInProgress_16 = value;
	}

	inline static int32_t get_offset_of_keys_17() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___keys_17)); }
	inline RuntimeObject* get_keys_17() const { return ___keys_17; }
	inline RuntimeObject** get_address_of_keys_17() { return &___keys_17; }
	inline void set_keys_17(RuntimeObject* value)
	{
		___keys_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_17), (void*)value);
	}

	inline static int32_t get_offset_of_values_18() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ___values_18)); }
	inline RuntimeObject* get_values_18() const { return ___values_18; }
	inline RuntimeObject** get_address_of_values_18() { return &___values_18; }
	inline void set_values_18(RuntimeObject* value)
	{
		___values_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_18), (void*)value);
	}

	inline static int32_t get_offset_of__keycomparer_19() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____keycomparer_19)); }
	inline RuntimeObject* get__keycomparer_19() const { return ____keycomparer_19; }
	inline RuntimeObject** get_address_of__keycomparer_19() { return &____keycomparer_19; }
	inline void set__keycomparer_19(RuntimeObject* value)
	{
		____keycomparer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keycomparer_19), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_20() { return static_cast<int32_t>(offsetof(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC, ____syncRoot_20)); }
	inline RuntimeObject * get__syncRoot_20() const { return ____syncRoot_20; }
	inline RuntimeObject ** get_address_of__syncRoot_20() { return &____syncRoot_20; }
	inline void set__syncRoot_20(RuntimeObject * value)
	{
		____syncRoot_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_20), (void*)value);
	}
};


// UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83 
{
public:
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 UnityEngine.InputSystem.LowLevel.IMECompositionString::size
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					// UnityEngine.InputSystem.LowLevel.IMECompositionString/<buffer>e__FixedBuffer UnityEngine.InputSystem.LowLevel.IMECompositionString::buffer
					U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95  ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95  ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83__padding[132];
	};

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_buffer_1() { return static_cast<int32_t>(offsetof(IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83, ___buffer_1)); }
	inline U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95  get_buffer_1() const { return ___buffer_1; }
	inline U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95 * get_address_of_buffer_1() { return &___buffer_1; }
	inline void set_buffer_1(U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95  value)
	{
		___buffer_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95_marshaled_pinvoke ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95_marshaled_pinvoke ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83__padding[132];
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString
struct IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___size_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___size_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___buffer_1_OffsetPadding[4];
					U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95_marshaled_com ___buffer_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___buffer_1_OffsetPadding_forAlignmentOnly[4];
					U3CbufferU3Ee__FixedBuffer_t88B6D84FC28714D9288385B2C11373B95985EF95_marshaled_com ___buffer_1_forAlignmentOnly;
				};
			};
		};
		uint8_t IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83__padding[132];
	};
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57 
{
public:
	// System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] UnityEngine.InputSystem.Layouts.InputDeviceMatcher::m_Patterns
	KeyValuePair_2U5BU5D_t7E976A4C11090CA77A36F27FF080865677E9C105* ___m_Patterns_0;

public:
	inline static int32_t get_offset_of_m_Patterns_0() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57, ___m_Patterns_0)); }
	inline KeyValuePair_2U5BU5D_t7E976A4C11090CA77A36F27FF080865677E9C105* get_m_Patterns_0() const { return ___m_Patterns_0; }
	inline KeyValuePair_2U5BU5D_t7E976A4C11090CA77A36F27FF080865677E9C105** get_address_of_m_Patterns_0() { return &___m_Patterns_0; }
	inline void set_m_Patterns_0(KeyValuePair_2U5BU5D_t7E976A4C11090CA77A36F27FF080865677E9C105* value)
	{
		___m_Patterns_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Patterns_0), (void*)value);
	}
};

struct InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57_StaticFields
{
public:
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kInterfaceKey
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___kInterfaceKey_1;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kDeviceClassKey
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___kDeviceClassKey_2;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kManufacturerKey
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___kManufacturerKey_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kProductKey
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___kProductKey_4;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputDeviceMatcher::kVersionKey
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___kVersionKey_5;

public:
	inline static int32_t get_offset_of_kInterfaceKey_1() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57_StaticFields, ___kInterfaceKey_1)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_kInterfaceKey_1() const { return ___kInterfaceKey_1; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_kInterfaceKey_1() { return &___kInterfaceKey_1; }
	inline void set_kInterfaceKey_1(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___kInterfaceKey_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kInterfaceKey_1))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kDeviceClassKey_2() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57_StaticFields, ___kDeviceClassKey_2)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_kDeviceClassKey_2() const { return ___kDeviceClassKey_2; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_kDeviceClassKey_2() { return &___kDeviceClassKey_2; }
	inline void set_kDeviceClassKey_2(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___kDeviceClassKey_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kDeviceClassKey_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kManufacturerKey_3() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57_StaticFields, ___kManufacturerKey_3)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_kManufacturerKey_3() const { return ___kManufacturerKey_3; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_kManufacturerKey_3() { return &___kManufacturerKey_3; }
	inline void set_kManufacturerKey_3(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___kManufacturerKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kManufacturerKey_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kProductKey_4() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57_StaticFields, ___kProductKey_4)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_kProductKey_4() const { return ___kProductKey_4; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_kProductKey_4() { return &___kProductKey_4; }
	inline void set_kProductKey_4(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___kProductKey_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kProductKey_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_kVersionKey_5() { return static_cast<int32_t>(offsetof(InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57_StaticFields, ___kVersionKey_5)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_kVersionKey_5() const { return ___kVersionKey_5; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_kVersionKey_5() { return &___kVersionKey_5; }
	inline void set_kVersionKey_5(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___kVersionKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___kVersionKey_5))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57_marshaled_pinvoke
{
	KeyValuePair_2_tC5DBFF0A12DD027962885E57237A73F3553DE521 * ___m_Patterns_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceMatcher
struct InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57_marshaled_com
{
	KeyValuePair_2_tC5DBFF0A12DD027962885E57237A73F3553DE521 * ___m_Patterns_0;
};

// Windows.Storage.Streams.InputStreamOptions
struct InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t0C3A0185F954CB3B6508044E60E672B8DB75CA79, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.ListenMode
struct ListenMode_t642C17A2A312BA6C512D7BDC21CCEDED0406ECA8 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.ListenMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ListenMode_t642C17A2A312BA6C512D7BDC21CCEDED0406ECA8, ___value___2)); }
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

// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec
struct RemotingVideoCodec_tEC83D54380ABE50A87F13177F6B906EBF73C71B0 
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RemotingVideoCodec_tEC83D54380ABE50A87F13177F6B906EBF73C71B0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TypeCode
struct TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeCode_tCB39BAB5CFB7A1E0BCB521413E3C46B81C31AA7C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
struct U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Tuple`2<System.Int32,System.Int32> System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>2__current
	Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * ___U3CU3E2__current_1;
	// System.Int32 System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Diagnostics.Tracing.ActivityFilter System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>4__this
	ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * ___U3CU3E4__this_3;
	// System.Guid System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::sourceGuid
	Guid_t  ___sourceGuid_4;
	// System.Guid System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<>3__sourceGuid
	Guid_t  ___U3CU3E3__sourceGuid_5;
	// System.Diagnostics.Tracing.ActivityFilter System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7::<af>5__1
	ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * ___U3CafU3E5__1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E2__current_1)); }
	inline Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Tuple_2_t9780D2A61D8DBBB60BF3E0DEDBE022E5856BD800 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E4__this_3)); }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_sourceGuid_4() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___sourceGuid_4)); }
	inline Guid_t  get_sourceGuid_4() const { return ___sourceGuid_4; }
	inline Guid_t * get_address_of_sourceGuid_4() { return &___sourceGuid_4; }
	inline void set_sourceGuid_4(Guid_t  value)
	{
		___sourceGuid_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__sourceGuid_5() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CU3E3__sourceGuid_5)); }
	inline Guid_t  get_U3CU3E3__sourceGuid_5() const { return ___U3CU3E3__sourceGuid_5; }
	inline Guid_t * get_address_of_U3CU3E3__sourceGuid_5() { return &___U3CU3E3__sourceGuid_5; }
	inline void set_U3CU3E3__sourceGuid_5(Guid_t  value)
	{
		___U3CU3E3__sourceGuid_5 = value;
	}

	inline static int32_t get_offset_of_U3CafU3E5__1_6() { return static_cast<int32_t>(offsetof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491, ___U3CafU3E5__1_6)); }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * get_U3CafU3E5__1_6() const { return ___U3CafU3E5__1_6; }
	inline ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 ** get_address_of_U3CafU3E5__1_6() { return &___U3CafU3E5__1_6; }
	inline void set_U3CafU3E5__1_6(ActivityFilter_tDE324191EED4A666088536472641E58C3BC81385 * value)
	{
		___U3CafU3E5__1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CafU3E5__1_6), (void*)value);
	}
};


// System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17
struct U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD  : public RuntimeObject
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17::<>2__current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___U3CU3E2__current_1;
	// System.Diagnostics.Tracing.EventPayload System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17::<>4__this
	EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA * ___U3CU3E4__this_2;
	// System.Int32 System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17::<i>5__1
	int32_t ___U3CiU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD, ___U3CU3E4__this_2)); }
	inline EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(EventPayload_t43BB09A63B3B7D1DDA3D998D4167167A8443BEFA * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD, ___U3CiU3E5__1_3)); }
	inline int32_t get_U3CiU3E5__1_3() const { return ___U3CiU3E5__1_3; }
	inline int32_t* get_address_of_U3CiU3E5__1_3() { return &___U3CiU3E5__1_3; }
	inline void set_U3CiU3E5__1_3(int32_t value)
	{
		___U3CiU3E5__1_3 = value;
	}
};


// System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode
struct WriteEventErrorCode_tBC26AED9CF2B3FB2A599E68EA076E136A9F92CEA 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WriteEventErrorCode_tBC26AED9CF2B3FB2A599E68EA076E136A9F92CEA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11
struct U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>2__current
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.UI.GazeHandHelper Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>4__this
	GazeHandHelper_t8E0791ECE59CA65EF8575AA5DDA128A1628AEAEC * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.UInt32,System.Boolean> Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11::<>7__wrap1
	Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16, ___U3CU3E2__current_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16, ___U3CU3E4__this_3)); }
	inline GazeHandHelper_t8E0791ECE59CA65EF8575AA5DDA128A1628AEAEC * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GazeHandHelper_t8E0791ECE59CA65EF8575AA5DDA128A1628AEAEC ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GazeHandHelper_t8E0791ECE59CA65EF8575AA5DDA128A1628AEAEC * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t7A1A5DBCE9886A54B4A6383FDC74412BBBF530F6  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
	}
};


// UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31
struct U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<>2__current
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___U3CU3E2__current_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<>4__this
	InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * ___U3CU3E4__this_2;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<i>5__2
	int32_t ___U3CiU3E5__2_3;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<actions>5__3
	ReadOnlyArray_1_tFF2DE177BEADC53D8885722D3FCDBF7846BD112F  ___U3CactionsU3E5__3_4;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<actionCount>5__4
	int32_t ___U3CactionCountU3E5__4_5;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31::<n>5__5
	int32_t ___U3CnU3E5__5_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F, ___U3CU3E2__current_1)); }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F, ___U3CU3E4__this_2)); }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F, ___U3CiU3E5__2_3)); }
	inline int32_t get_U3CiU3E5__2_3() const { return ___U3CiU3E5__2_3; }
	inline int32_t* get_address_of_U3CiU3E5__2_3() { return &___U3CiU3E5__2_3; }
	inline void set_U3CiU3E5__2_3(int32_t value)
	{
		___U3CiU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CactionsU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F, ___U3CactionsU3E5__3_4)); }
	inline ReadOnlyArray_1_tFF2DE177BEADC53D8885722D3FCDBF7846BD112F  get_U3CactionsU3E5__3_4() const { return ___U3CactionsU3E5__3_4; }
	inline ReadOnlyArray_1_tFF2DE177BEADC53D8885722D3FCDBF7846BD112F * get_address_of_U3CactionsU3E5__3_4() { return &___U3CactionsU3E5__3_4; }
	inline void set_U3CactionsU3E5__3_4(ReadOnlyArray_1_tFF2DE177BEADC53D8885722D3FCDBF7846BD112F  value)
	{
		___U3CactionsU3E5__3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CactionsU3E5__3_4))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CactionCountU3E5__4_5() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F, ___U3CactionCountU3E5__4_5)); }
	inline int32_t get_U3CactionCountU3E5__4_5() const { return ___U3CactionCountU3E5__4_5; }
	inline int32_t* get_address_of_U3CactionCountU3E5__4_5() { return &___U3CactionCountU3E5__4_5; }
	inline void set_U3CactionCountU3E5__4_5(int32_t value)
	{
		___U3CactionCountU3E5__4_5 = value;
	}

	inline static int32_t get_offset_of_U3CnU3E5__5_6() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F, ___U3CnU3E5__5_6)); }
	inline int32_t get_U3CnU3E5__5_6() const { return ___U3CnU3E5__5_6; }
	inline int32_t* get_address_of_U3CnU3E5__5_6() { return &___U3CnU3E5__5_6; }
	inline void set_U3CnU3E5__5_6(int32_t value)
	{
		___U3CnU3E5__5_6 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59
struct U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.AnimationCurve Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>2__current
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>4__this
	InputAnimation_t978FCBBAC054003C8AFC139452EB645F3AD2A42B * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves> Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<>7__wrap1
	Enumerator_t24328407D3C87643E0C26D9C6DEF65B214F0028D  ___U3CU3E7__wrap1_4;
	// Microsoft.MixedReality.Toolkit.Input.InputAnimation/PoseCurves Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59::<curves>5__3
	PoseCurves_t0E84F660C8BE04EE53E17AB634069C9EE81CDB40 * ___U3CcurvesU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3, ___U3CU3E2__current_1)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3, ___U3CU3E4__this_3)); }
	inline InputAnimation_t978FCBBAC054003C8AFC139452EB645F3AD2A42B * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputAnimation_t978FCBBAC054003C8AFC139452EB645F3AD2A42B ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputAnimation_t978FCBBAC054003C8AFC139452EB645F3AD2A42B * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t24328407D3C87643E0C26D9C6DEF65B214F0028D  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t24328407D3C87643E0C26D9C6DEF65B214F0028D * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t24328407D3C87643E0C26D9C6DEF65B214F0028D  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___currentValue_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CcurvesU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3, ___U3CcurvesU3E5__3_5)); }
	inline PoseCurves_t0E84F660C8BE04EE53E17AB634069C9EE81CDB40 * get_U3CcurvesU3E5__3_5() const { return ___U3CcurvesU3E5__3_5; }
	inline PoseCurves_t0E84F660C8BE04EE53E17AB634069C9EE81CDB40 ** get_address_of_U3CcurvesU3E5__3_5() { return &___U3CcurvesU3E5__3_5; }
	inline void set_U3CcurvesU3E5__3_5(PoseCurves_t0E84F660C8BE04EE53E17AB634069C9EE81CDB40 * value)
	{
		___U3CcurvesU3E5__3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcurvesU3E5__3_5), (void*)value);
	}
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_tB8C0F66F19426A1903E4D43B669650457D5057D1 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tB8C0F66F19426A1903E4D43B669650457D5057D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2
struct U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputBindingCompositeContext/PartBinding UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<>2__current
	PartBinding_tE86A8E039A6A38212C52C12C3D2EC9FD2895D3F0  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.InputSystem.InputBindingCompositeContext UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<>4__this
	InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570  ___U3CU3E4__this_3;
	// UnityEngine.InputSystem.InputBindingCompositeContext UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<>3__<>4__this
	InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570  ___U3CU3E3__U3CU3E4__this_4;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<totalBindingCount>5__2
	int32_t ___U3CtotalBindingCountU3E5__2_5;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<bindingIndex>5__3
	int32_t ___U3CbindingIndexU3E5__3_6;
	// UnityEngine.InputSystem.InputActionState/BindingState UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<bindingState>5__4
	BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26  ___U3CbindingStateU3E5__4_7;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<controlStartIndex>5__5
	int32_t ___U3CcontrolStartIndexU3E5__5_8;
	// System.Int32 UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2::<i>5__6
	int32_t ___U3CiU3E5__6_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E, ___U3CU3E2__current_1)); }
	inline PartBinding_tE86A8E039A6A38212C52C12C3D2EC9FD2895D3F0  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline PartBinding_tE86A8E039A6A38212C52C12C3D2EC9FD2895D3F0 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(PartBinding_tE86A8E039A6A38212C52C12C3D2EC9FD2895D3F0  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___U3CcontrolU3Ek__BackingField_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E, ___U3CU3E4__this_3)); }
	inline InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570  get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570 * get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570  value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_3))->___m_State_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E3__U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E, ___U3CU3E3__U3CU3E4__this_4)); }
	inline InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570  get_U3CU3E3__U3CU3E4__this_4() const { return ___U3CU3E3__U3CU3E4__this_4; }
	inline InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570 * get_address_of_U3CU3E3__U3CU3E4__this_4() { return &___U3CU3E3__U3CU3E4__this_4; }
	inline void set_U3CU3E3__U3CU3E4__this_4(InputBindingCompositeContext_tDEF957C733B71700F6486BD2032AF9D93F286570  value)
	{
		___U3CU3E3__U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_4))->___m_State_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CtotalBindingCountU3E5__2_5() { return static_cast<int32_t>(offsetof(U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E, ___U3CtotalBindingCountU3E5__2_5)); }
	inline int32_t get_U3CtotalBindingCountU3E5__2_5() const { return ___U3CtotalBindingCountU3E5__2_5; }
	inline int32_t* get_address_of_U3CtotalBindingCountU3E5__2_5() { return &___U3CtotalBindingCountU3E5__2_5; }
	inline void set_U3CtotalBindingCountU3E5__2_5(int32_t value)
	{
		___U3CtotalBindingCountU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CbindingIndexU3E5__3_6() { return static_cast<int32_t>(offsetof(U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E, ___U3CbindingIndexU3E5__3_6)); }
	inline int32_t get_U3CbindingIndexU3E5__3_6() const { return ___U3CbindingIndexU3E5__3_6; }
	inline int32_t* get_address_of_U3CbindingIndexU3E5__3_6() { return &___U3CbindingIndexU3E5__3_6; }
	inline void set_U3CbindingIndexU3E5__3_6(int32_t value)
	{
		___U3CbindingIndexU3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CbindingStateU3E5__4_7() { return static_cast<int32_t>(offsetof(U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E, ___U3CbindingStateU3E5__4_7)); }
	inline BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26  get_U3CbindingStateU3E5__4_7() const { return ___U3CbindingStateU3E5__4_7; }
	inline BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26 * get_address_of_U3CbindingStateU3E5__4_7() { return &___U3CbindingStateU3E5__4_7; }
	inline void set_U3CbindingStateU3E5__4_7(BindingState_t568A45761EFD086FB6772BD7B933703E3ABFBF26  value)
	{
		___U3CbindingStateU3E5__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CcontrolStartIndexU3E5__5_8() { return static_cast<int32_t>(offsetof(U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E, ___U3CcontrolStartIndexU3E5__5_8)); }
	inline int32_t get_U3CcontrolStartIndexU3E5__5_8() const { return ___U3CcontrolStartIndexU3E5__5_8; }
	inline int32_t* get_address_of_U3CcontrolStartIndexU3E5__5_8() { return &___U3CcontrolStartIndexU3E5__5_8; }
	inline void set_U3CcontrolStartIndexU3E5__5_8(int32_t value)
	{
		___U3CcontrolStartIndexU3E5__5_8 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__6_9() { return static_cast<int32_t>(offsetof(U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E, ___U3CiU3E5__6_9)); }
	inline int32_t get_U3CiU3E5__6_9() const { return ___U3CiU3E5__6_9; }
	inline int32_t* get_address_of_U3CiU3E5__6_9() { return &___U3CiU3E5__6_9; }
	inline void set_U3CiU3E5__6_9(int32_t value)
	{
		___U3CiU3E5__6_9 = value;
	}
};


// UnityEngine.InputSystem.InputControlExtensions/Enumerate
struct Enumerate_t96DA2D1CBE9001A434A7552E04C8C045049A88A1 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/Enumerate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Enumerate_t96DA2D1CBE9001A434A7552E04C8C045049A88A1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.LowLevel.InputEventTrace UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator::m_Trace
	InputEventTrace_t22E95967587C4A3EAA545A70D57A745BCFEAD646 * ___m_Trace_0;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator::m_ChangeCounter
	int32_t ___m_ChangeCounter_1;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator::m_Current
	InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  ___m_Current_2;

public:
	inline static int32_t get_offset_of_m_Trace_0() { return static_cast<int32_t>(offsetof(Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143, ___m_Trace_0)); }
	inline InputEventTrace_t22E95967587C4A3EAA545A70D57A745BCFEAD646 * get_m_Trace_0() const { return ___m_Trace_0; }
	inline InputEventTrace_t22E95967587C4A3EAA545A70D57A745BCFEAD646 ** get_address_of_m_Trace_0() { return &___m_Trace_0; }
	inline void set_m_Trace_0(InputEventTrace_t22E95967587C4A3EAA545A70D57A745BCFEAD646 * value)
	{
		___m_Trace_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trace_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChangeCounter_1() { return static_cast<int32_t>(offsetof(Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143, ___m_ChangeCounter_1)); }
	inline int32_t get_m_ChangeCounter_1() const { return ___m_ChangeCounter_1; }
	inline int32_t* get_address_of_m_ChangeCounter_1() { return &___m_ChangeCounter_1; }
	inline void set_m_ChangeCounter_1(int32_t value)
	{
		___m_ChangeCounter_1 = value;
	}

	inline static int32_t get_offset_of_m_Current_2() { return static_cast<int32_t>(offsetof(Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143, ___m_Current_2)); }
	inline InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  get_m_Current_2() const { return ___m_Current_2; }
	inline InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1 * get_address_of_m_Current_2() { return &___m_Current_2; }
	inline void set_m_Current_2(InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  value)
	{
		___m_Current_2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138
struct U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.SceneManagement.Scene Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>2__current
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::sceneNames
	RuntimeObject* ___sceneNames_3;
	// System.Collections.Generic.IEnumerable`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>3__sceneNames
	RuntimeObject* ___U3CU3E3__sceneNames_4;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>4__this
	MixedRealitySceneSystem_t01D939AA82F52B5672A8A409354F3C87D1316CFF * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<System.String> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96, ___U3CU3E2__current_1)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___U3CU3E2__current_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_sceneNames_3() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96, ___sceneNames_3)); }
	inline RuntimeObject* get_sceneNames_3() const { return ___sceneNames_3; }
	inline RuntimeObject** get_address_of_sceneNames_3() { return &___sceneNames_3; }
	inline void set_sceneNames_3(RuntimeObject* value)
	{
		___sceneNames_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneNames_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__sceneNames_4() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96, ___U3CU3E3__sceneNames_4)); }
	inline RuntimeObject* get_U3CU3E3__sceneNames_4() const { return ___U3CU3E3__sceneNames_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__sceneNames_4() { return &___U3CU3E3__sceneNames_4; }
	inline void set_U3CU3E3__sceneNames_4(RuntimeObject* value)
	{
		___U3CU3E3__sceneNames_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__sceneNames_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96, ___U3CU3E4__this_5)); }
	inline MixedRealitySceneSystem_t01D939AA82F52B5672A8A409354F3C87D1316CFF * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline MixedRealitySceneSystem_t01D939AA82F52B5672A8A409354F3C87D1316CFF ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(MixedRealitySceneSystem_t01D939AA82F52B5672A8A409354F3C87D1316CFF * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96, ___U3CU3E7__wrap1_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29
struct U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<>4__this
	MoveToTarget_t9583CCDA3EE26C41F18B329EC7B260AB4D96B1E3 * ___U3CU3E4__this_2;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<origin>5__2
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CoriginU3E5__2_3;
	// System.Single Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29::<t>5__3
	float ___U3CtU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5, ___U3CU3E4__this_2)); }
	inline MoveToTarget_t9583CCDA3EE26C41F18B329EC7B260AB4D96B1E3 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MoveToTarget_t9583CCDA3EE26C41F18B329EC7B260AB4D96B1E3 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MoveToTarget_t9583CCDA3EE26C41F18B329EC7B260AB4D96B1E3 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoriginU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5, ___U3CoriginU3E5__2_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CoriginU3E5__2_3() const { return ___U3CoriginU3E5__2_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CoriginU3E5__2_3() { return &___U3CoriginU3E5__2_3; }
	inline void set_U3CoriginU3E5__2_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CoriginU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5, ___U3CtU3E5__3_4)); }
	inline float get_U3CtU3E5__3_4() const { return ___U3CtU3E5__3_4; }
	inline float* get_address_of_U3CtU3E5__3_4() { return &___U3CtU3E5__3_4; }
	inline void set_U3CtU3E5__3_4(float value)
	{
		___U3CtU3E5__3_4 = value;
	}
};


// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization
struct StreamReadOperationOptimization_tD9F9D4F3EE59F08ED342058819D3955F855271E2 
{
public:
	// System.Int32 System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadOperationOptimization_tD9F9D4F3EE59F08ED342058819D3955F855271E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags
struct Flags_tBBC2208E3CFA107946D496127F15A9C0E4903821 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tBBC2208E3CFA107946D496127F15A9C0E4903821, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.InputSystem.InputControlScheme/MatchResult/Result
struct Result_t09F4754AEFB48BE0DBDA8361B88406110CC66F66 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlScheme/MatchResult/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t09F4754AEFB48BE0DBDA8361B88406110CC66F66, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Enumerator_t86F084708DD8E20059734F3D16C77A4CE4C171D9 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tAABCF01104CEF2E181F1448D23A29A42D7B120A9 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2B4BD676624F7FEC54BCB9D6BF33CCB09221DB7B  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t86F084708DD8E20059734F3D16C77A4CE4C171D9, ___dictionary_0)); }
	inline Dictionary_2_tAABCF01104CEF2E181F1448D23A29A42D7B120A9 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAABCF01104CEF2E181F1448D23A29A42D7B120A9 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAABCF01104CEF2E181F1448D23A29A42D7B120A9 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t86F084708DD8E20059734F3D16C77A4CE4C171D9, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t86F084708DD8E20059734F3D16C77A4CE4C171D9, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t86F084708DD8E20059734F3D16C77A4CE4C171D9, ___current_3)); }
	inline KeyValuePair_2_t2B4BD676624F7FEC54BCB9D6BF33CCB09221DB7B  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2B4BD676624F7FEC54BCB9D6BF33CCB09221DB7B * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2B4BD676624F7FEC54BCB9D6BF33CCB09221DB7B  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t86F084708DD8E20059734F3D16C77A4CE4C171D9, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Enumerator_tA79D34AACF919BA3D1503DCC212621FFA3947536 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tEF69AB24B90083667848FA18EB11001609E77E9E * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t76AE7CE0A1B0BF6D053BE29F1193D9C3EFFD608E  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tA79D34AACF919BA3D1503DCC212621FFA3947536, ___dictionary_0)); }
	inline Dictionary_2_tEF69AB24B90083667848FA18EB11001609E77E9E * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tEF69AB24B90083667848FA18EB11001609E77E9E ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tEF69AB24B90083667848FA18EB11001609E77E9E * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tA79D34AACF919BA3D1503DCC212621FFA3947536, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tA79D34AACF919BA3D1503DCC212621FFA3947536, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA79D34AACF919BA3D1503DCC212621FFA3947536, ___current_3)); }
	inline KeyValuePair_2_t76AE7CE0A1B0BF6D053BE29F1193D9C3EFFD608E  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t76AE7CE0A1B0BF6D053BE29F1193D9C3EFFD608E * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t76AE7CE0A1B0BF6D053BE29F1193D9C3EFFD608E  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tA79D34AACF919BA3D1503DCC212621FFA3947536, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Enumerator_tBC97DB5B6B5870EB975D595B3E8450E430C0A0E5 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t32554390D3DCC815F632A9813367A1A9E6C4C324  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tBC97DB5B6B5870EB975D595B3E8450E430C0A0E5, ___dictionary_0)); }
	inline Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBA40388A060E3B4AEE59780F047938A6FB3C566E * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tBC97DB5B6B5870EB975D595B3E8450E430C0A0E5, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tBC97DB5B6B5870EB975D595B3E8450E430C0A0E5, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tBC97DB5B6B5870EB975D595B3E8450E430C0A0E5, ___current_3)); }
	inline KeyValuePair_2_t32554390D3DCC815F632A9813367A1A9E6C4C324  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t32554390D3DCC815F632A9813367A1A9E6C4C324 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t32554390D3DCC815F632A9813367A1A9E6C4C324  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tBC97DB5B6B5870EB975D595B3E8450E430C0A0E5, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.Diagnostics.Tracing.EventProvider
struct EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589  : public RuntimeObject
{
public:
	// Microsoft.Win32.UnsafeNativeMethods/ManifestEtw/EtwEnableCallback System.Diagnostics.Tracing.EventProvider::m_etwCallback
	EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * ___m_etwCallback_1;
	// System.Runtime.InteropServices.GCHandle System.Diagnostics.Tracing.EventProvider::m_thisGCHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___m_thisGCHandle_2;
	// System.Int64 System.Diagnostics.Tracing.EventProvider::m_regHandle
	int64_t ___m_regHandle_3;
	// System.Byte System.Diagnostics.Tracing.EventProvider::m_level
	uint8_t ___m_level_4;
	// System.Int64 System.Diagnostics.Tracing.EventProvider::m_anyKeywordMask
	int64_t ___m_anyKeywordMask_5;
	// System.Int64 System.Diagnostics.Tracing.EventProvider::m_allKeywordMask
	int64_t ___m_allKeywordMask_6;
	// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EventProvider/SessionInfo> System.Diagnostics.Tracing.EventProvider::m_liveSessions
	List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17 * ___m_liveSessions_7;
	// System.Boolean System.Diagnostics.Tracing.EventProvider::m_enabled
	bool ___m_enabled_8;
	// System.Guid System.Diagnostics.Tracing.EventProvider::m_providerId
	Guid_t  ___m_providerId_9;
	// System.Boolean System.Diagnostics.Tracing.EventProvider::m_disposed
	bool ___m_disposed_10;

public:
	inline static int32_t get_offset_of_m_etwCallback_1() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_etwCallback_1)); }
	inline EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * get_m_etwCallback_1() const { return ___m_etwCallback_1; }
	inline EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA ** get_address_of_m_etwCallback_1() { return &___m_etwCallback_1; }
	inline void set_m_etwCallback_1(EtwEnableCallback_t0A092DCCAA1CF6D740310D3C16BCFEB2667D26FA * value)
	{
		___m_etwCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_etwCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_thisGCHandle_2() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_thisGCHandle_2)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_m_thisGCHandle_2() const { return ___m_thisGCHandle_2; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_m_thisGCHandle_2() { return &___m_thisGCHandle_2; }
	inline void set_m_thisGCHandle_2(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___m_thisGCHandle_2 = value;
	}

	inline static int32_t get_offset_of_m_regHandle_3() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_regHandle_3)); }
	inline int64_t get_m_regHandle_3() const { return ___m_regHandle_3; }
	inline int64_t* get_address_of_m_regHandle_3() { return &___m_regHandle_3; }
	inline void set_m_regHandle_3(int64_t value)
	{
		___m_regHandle_3 = value;
	}

	inline static int32_t get_offset_of_m_level_4() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_level_4)); }
	inline uint8_t get_m_level_4() const { return ___m_level_4; }
	inline uint8_t* get_address_of_m_level_4() { return &___m_level_4; }
	inline void set_m_level_4(uint8_t value)
	{
		___m_level_4 = value;
	}

	inline static int32_t get_offset_of_m_anyKeywordMask_5() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_anyKeywordMask_5)); }
	inline int64_t get_m_anyKeywordMask_5() const { return ___m_anyKeywordMask_5; }
	inline int64_t* get_address_of_m_anyKeywordMask_5() { return &___m_anyKeywordMask_5; }
	inline void set_m_anyKeywordMask_5(int64_t value)
	{
		___m_anyKeywordMask_5 = value;
	}

	inline static int32_t get_offset_of_m_allKeywordMask_6() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_allKeywordMask_6)); }
	inline int64_t get_m_allKeywordMask_6() const { return ___m_allKeywordMask_6; }
	inline int64_t* get_address_of_m_allKeywordMask_6() { return &___m_allKeywordMask_6; }
	inline void set_m_allKeywordMask_6(int64_t value)
	{
		___m_allKeywordMask_6 = value;
	}

	inline static int32_t get_offset_of_m_liveSessions_7() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_liveSessions_7)); }
	inline List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17 * get_m_liveSessions_7() const { return ___m_liveSessions_7; }
	inline List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17 ** get_address_of_m_liveSessions_7() { return &___m_liveSessions_7; }
	inline void set_m_liveSessions_7(List_1_t53BBC0AA893BF75B4925CA24EBF5975C942A4D17 * value)
	{
		___m_liveSessions_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_liveSessions_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_enabled_8() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_enabled_8)); }
	inline bool get_m_enabled_8() const { return ___m_enabled_8; }
	inline bool* get_address_of_m_enabled_8() { return &___m_enabled_8; }
	inline void set_m_enabled_8(bool value)
	{
		___m_enabled_8 = value;
	}

	inline static int32_t get_offset_of_m_providerId_9() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_providerId_9)); }
	inline Guid_t  get_m_providerId_9() const { return ___m_providerId_9; }
	inline Guid_t * get_address_of_m_providerId_9() { return &___m_providerId_9; }
	inline void set_m_providerId_9(Guid_t  value)
	{
		___m_providerId_9 = value;
	}

	inline static int32_t get_offset_of_m_disposed_10() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589, ___m_disposed_10)); }
	inline bool get_m_disposed_10() const { return ___m_disposed_10; }
	inline bool* get_address_of_m_disposed_10() { return &___m_disposed_10; }
	inline void set_m_disposed_10(bool value)
	{
		___m_disposed_10 = value;
	}
};

struct EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_StaticFields
{
public:
	// System.Boolean System.Diagnostics.Tracing.EventProvider::m_setInformationMissing
	bool ___m_setInformationMissing_0;
	// System.Int32[] System.Diagnostics.Tracing.EventProvider::nibblebits
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___nibblebits_12;

public:
	inline static int32_t get_offset_of_m_setInformationMissing_0() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_StaticFields, ___m_setInformationMissing_0)); }
	inline bool get_m_setInformationMissing_0() const { return ___m_setInformationMissing_0; }
	inline bool* get_address_of_m_setInformationMissing_0() { return &___m_setInformationMissing_0; }
	inline void set_m_setInformationMissing_0(bool value)
	{
		___m_setInformationMissing_0 = value;
	}

	inline static int32_t get_offset_of_nibblebits_12() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_StaticFields, ___nibblebits_12)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_nibblebits_12() const { return ___nibblebits_12; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_nibblebits_12() { return &___nibblebits_12; }
	inline void set_nibblebits_12(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___nibblebits_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nibblebits_12), (void*)value);
	}
};

struct EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_ThreadStaticFields
{
public:
	// System.Diagnostics.Tracing.EventProvider/WriteEventErrorCode System.Diagnostics.Tracing.EventProvider::s_returnCode
	int32_t ___s_returnCode_11;

public:
	inline static int32_t get_offset_of_s_returnCode_11() { return static_cast<int32_t>(offsetof(EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589_ThreadStaticFields, ___s_returnCode_11)); }
	inline int32_t get_s_returnCode_11() const { return ___s_returnCode_11; }
	inline int32_t* get_address_of_s_returnCode_11() { return &___s_returnCode_11; }
	inline void set_s_returnCode_11(int32_t value)
	{
		___s_returnCode_11 = value;
	}
};

// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) = 0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// System.IO.NetFxToWinRtStreamAdapter
struct NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.NetFxToWinRtStreamAdapter::_managedStream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ____managedStream_0;
	// System.Boolean System.IO.NetFxToWinRtStreamAdapter::_leaveUnderlyingStreamOpen
	bool ____leaveUnderlyingStreamOpen_1;
	// System.IO.NetFxToWinRtStreamAdapter/StreamReadOperationOptimization System.IO.NetFxToWinRtStreamAdapter::_readOptimization
	int32_t ____readOptimization_2;

public:
	inline static int32_t get_offset_of__managedStream_0() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____managedStream_0)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get__managedStream_0() const { return ____managedStream_0; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of__managedStream_0() { return &____managedStream_0; }
	inline void set__managedStream_0(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		____managedStream_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____managedStream_0), (void*)value);
	}

	inline static int32_t get_offset_of__leaveUnderlyingStreamOpen_1() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____leaveUnderlyingStreamOpen_1)); }
	inline bool get__leaveUnderlyingStreamOpen_1() const { return ____leaveUnderlyingStreamOpen_1; }
	inline bool* get_address_of__leaveUnderlyingStreamOpen_1() { return &____leaveUnderlyingStreamOpen_1; }
	inline void set__leaveUnderlyingStreamOpen_1(bool value)
	{
		____leaveUnderlyingStreamOpen_1 = value;
	}

	inline static int32_t get_offset_of__readOptimization_2() { return static_cast<int32_t>(offsetof(NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD, ____readOptimization_2)); }
	inline int32_t get__readOptimization_2() const { return ____readOptimization_2; }
	inline int32_t* get_address_of__readOptimization_2() { return &____readOptimization_2; }
	inline void set__readOptimization_2(int32_t value)
	{
		____readOptimization_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_BoolValue_1() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_BoolValue_1)); }
	inline bool get_m_BoolValue_1() const { return ___m_BoolValue_1; }
	inline bool* get_address_of_m_BoolValue_1() { return &___m_BoolValue_1; }
	inline void set_m_BoolValue_1(bool value)
	{
		___m_BoolValue_1 = value;
	}

	inline static int32_t get_offset_of_m_CharValue_2() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_CharValue_2)); }
	inline Il2CppChar get_m_CharValue_2() const { return ___m_CharValue_2; }
	inline Il2CppChar* get_address_of_m_CharValue_2() { return &___m_CharValue_2; }
	inline void set_m_CharValue_2(Il2CppChar value)
	{
		___m_CharValue_2 = value;
	}

	inline static int32_t get_offset_of_m_ByteValue_3() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_ByteValue_3)); }
	inline uint8_t get_m_ByteValue_3() const { return ___m_ByteValue_3; }
	inline uint8_t* get_address_of_m_ByteValue_3() { return &___m_ByteValue_3; }
	inline void set_m_ByteValue_3(uint8_t value)
	{
		___m_ByteValue_3 = value;
	}

	inline static int32_t get_offset_of_m_SByteValue_4() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_SByteValue_4)); }
	inline int8_t get_m_SByteValue_4() const { return ___m_SByteValue_4; }
	inline int8_t* get_address_of_m_SByteValue_4() { return &___m_SByteValue_4; }
	inline void set_m_SByteValue_4(int8_t value)
	{
		___m_SByteValue_4 = value;
	}

	inline static int32_t get_offset_of_m_ShortValue_5() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_ShortValue_5)); }
	inline int16_t get_m_ShortValue_5() const { return ___m_ShortValue_5; }
	inline int16_t* get_address_of_m_ShortValue_5() { return &___m_ShortValue_5; }
	inline void set_m_ShortValue_5(int16_t value)
	{
		___m_ShortValue_5 = value;
	}

	inline static int32_t get_offset_of_m_UShortValue_6() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_UShortValue_6)); }
	inline uint16_t get_m_UShortValue_6() const { return ___m_UShortValue_6; }
	inline uint16_t* get_address_of_m_UShortValue_6() { return &___m_UShortValue_6; }
	inline void set_m_UShortValue_6(uint16_t value)
	{
		___m_UShortValue_6 = value;
	}

	inline static int32_t get_offset_of_m_IntValue_7() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_IntValue_7)); }
	inline int32_t get_m_IntValue_7() const { return ___m_IntValue_7; }
	inline int32_t* get_address_of_m_IntValue_7() { return &___m_IntValue_7; }
	inline void set_m_IntValue_7(int32_t value)
	{
		___m_IntValue_7 = value;
	}

	inline static int32_t get_offset_of_m_UIntValue_8() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_UIntValue_8)); }
	inline uint32_t get_m_UIntValue_8() const { return ___m_UIntValue_8; }
	inline uint32_t* get_address_of_m_UIntValue_8() { return &___m_UIntValue_8; }
	inline void set_m_UIntValue_8(uint32_t value)
	{
		___m_UIntValue_8 = value;
	}

	inline static int32_t get_offset_of_m_LongValue_9() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_LongValue_9)); }
	inline int64_t get_m_LongValue_9() const { return ___m_LongValue_9; }
	inline int64_t* get_address_of_m_LongValue_9() { return &___m_LongValue_9; }
	inline void set_m_LongValue_9(int64_t value)
	{
		___m_LongValue_9 = value;
	}

	inline static int32_t get_offset_of_m_ULongValue_10() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_ULongValue_10)); }
	inline uint64_t get_m_ULongValue_10() const { return ___m_ULongValue_10; }
	inline uint64_t* get_address_of_m_ULongValue_10() { return &___m_ULongValue_10; }
	inline void set_m_ULongValue_10(uint64_t value)
	{
		___m_ULongValue_10 = value;
	}

	inline static int32_t get_offset_of_m_FloatValue_11() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_FloatValue_11)); }
	inline float get_m_FloatValue_11() const { return ___m_FloatValue_11; }
	inline float* get_address_of_m_FloatValue_11() { return &___m_FloatValue_11; }
	inline void set_m_FloatValue_11(float value)
	{
		___m_FloatValue_11 = value;
	}

	inline static int32_t get_offset_of_m_DoubleValue_12() { return static_cast<int32_t>(offsetof(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8, ___m_DoubleValue_12)); }
	inline double get_m_DoubleValue_12() const { return ___m_DoubleValue_12; }
	inline double* get_address_of_m_DoubleValue_12() { return &___m_DoubleValue_12; }
	inline void set_m_DoubleValue_12(double value)
	{
		___m_DoubleValue_12 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration
struct RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778 
{
public:
	// System.String Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::RemoteHostName
	String_t* ___RemoteHostName_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::RemotePort
	uint16_t ___RemotePort_1;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::VideoCodec
	int32_t ___VideoCodec_3;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration::EnableAudio
	bool ___EnableAudio_4;

public:
	inline static int32_t get_offset_of_RemoteHostName_0() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778, ___RemoteHostName_0)); }
	inline String_t* get_RemoteHostName_0() const { return ___RemoteHostName_0; }
	inline String_t** get_address_of_RemoteHostName_0() { return &___RemoteHostName_0; }
	inline void set_RemoteHostName_0(String_t* value)
	{
		___RemoteHostName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteHostName_0), (void*)value);
	}

	inline static int32_t get_offset_of_RemotePort_1() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778, ___RemotePort_1)); }
	inline uint16_t get_RemotePort_1() const { return ___RemotePort_1; }
	inline uint16_t* get_address_of_RemotePort_1() { return &___RemotePort_1; }
	inline void set_RemotePort_1(uint16_t value)
	{
		___RemotePort_1 = value;
	}

	inline static int32_t get_offset_of_MaxBitrateKbps_2() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778, ___MaxBitrateKbps_2)); }
	inline uint32_t get_MaxBitrateKbps_2() const { return ___MaxBitrateKbps_2; }
	inline uint32_t* get_address_of_MaxBitrateKbps_2() { return &___MaxBitrateKbps_2; }
	inline void set_MaxBitrateKbps_2(uint32_t value)
	{
		___MaxBitrateKbps_2 = value;
	}

	inline static int32_t get_offset_of_VideoCodec_3() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778, ___VideoCodec_3)); }
	inline int32_t get_VideoCodec_3() const { return ___VideoCodec_3; }
	inline int32_t* get_address_of_VideoCodec_3() { return &___VideoCodec_3; }
	inline void set_VideoCodec_3(int32_t value)
	{
		___VideoCodec_3 = value;
	}

	inline static int32_t get_offset_of_EnableAudio_4() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778, ___EnableAudio_4)); }
	inline bool get_EnableAudio_4() const { return ___EnableAudio_4; }
	inline bool* get_address_of_EnableAudio_4() { return &___EnableAudio_4; }
	inline void set_EnableAudio_4(bool value)
	{
		___EnableAudio_4 = value;
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration
#pragma pack(push, tp, 8)
struct RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778_marshaled_pinvoke
{
	char* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration
#pragma pack(push, tp, 8)
struct RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778_marshaled_com
{
	Il2CppChar* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
};
#pragma pack(pop, tp)

// Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration
struct RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701 
{
public:
	// System.String Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::RemoteHostName
	String_t* ___RemoteHostName_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::RemotePort
	uint16_t ___RemotePort_1;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::VideoCodec
	int32_t ___VideoCodec_3;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::EnableAudio
	bool ___EnableAudio_4;
	// System.Nullable`1<Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingConnectConfiguration> Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration::secureConnectConfiguration
	Nullable_1_tD097F8A4EE146ACEAD5B1EA04990E4BED15CB593  ___secureConnectConfiguration_5;

public:
	inline static int32_t get_offset_of_RemoteHostName_0() { return static_cast<int32_t>(offsetof(RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701, ___RemoteHostName_0)); }
	inline String_t* get_RemoteHostName_0() const { return ___RemoteHostName_0; }
	inline String_t** get_address_of_RemoteHostName_0() { return &___RemoteHostName_0; }
	inline void set_RemoteHostName_0(String_t* value)
	{
		___RemoteHostName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RemoteHostName_0), (void*)value);
	}

	inline static int32_t get_offset_of_RemotePort_1() { return static_cast<int32_t>(offsetof(RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701, ___RemotePort_1)); }
	inline uint16_t get_RemotePort_1() const { return ___RemotePort_1; }
	inline uint16_t* get_address_of_RemotePort_1() { return &___RemotePort_1; }
	inline void set_RemotePort_1(uint16_t value)
	{
		___RemotePort_1 = value;
	}

	inline static int32_t get_offset_of_MaxBitrateKbps_2() { return static_cast<int32_t>(offsetof(RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701, ___MaxBitrateKbps_2)); }
	inline uint32_t get_MaxBitrateKbps_2() const { return ___MaxBitrateKbps_2; }
	inline uint32_t* get_address_of_MaxBitrateKbps_2() { return &___MaxBitrateKbps_2; }
	inline void set_MaxBitrateKbps_2(uint32_t value)
	{
		___MaxBitrateKbps_2 = value;
	}

	inline static int32_t get_offset_of_VideoCodec_3() { return static_cast<int32_t>(offsetof(RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701, ___VideoCodec_3)); }
	inline int32_t get_VideoCodec_3() const { return ___VideoCodec_3; }
	inline int32_t* get_address_of_VideoCodec_3() { return &___VideoCodec_3; }
	inline void set_VideoCodec_3(int32_t value)
	{
		___VideoCodec_3 = value;
	}

	inline static int32_t get_offset_of_EnableAudio_4() { return static_cast<int32_t>(offsetof(RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701, ___EnableAudio_4)); }
	inline bool get_EnableAudio_4() const { return ___EnableAudio_4; }
	inline bool* get_address_of_EnableAudio_4() { return &___EnableAudio_4; }
	inline void set_EnableAudio_4(bool value)
	{
		___EnableAudio_4 = value;
	}

	inline static int32_t get_offset_of_secureConnectConfiguration_5() { return static_cast<int32_t>(offsetof(RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701, ___secureConnectConfiguration_5)); }
	inline Nullable_1_tD097F8A4EE146ACEAD5B1EA04990E4BED15CB593  get_secureConnectConfiguration_5() const { return ___secureConnectConfiguration_5; }
	inline Nullable_1_tD097F8A4EE146ACEAD5B1EA04990E4BED15CB593 * get_address_of_secureConnectConfiguration_5() { return &___secureConnectConfiguration_5; }
	inline void set_secureConnectConfiguration_5(Nullable_1_tD097F8A4EE146ACEAD5B1EA04990E4BED15CB593  value)
	{
		___secureConnectConfiguration_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___secureConnectConfiguration_5))->___value_0))->___AuthenticationToken_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___secureConnectConfiguration_5))->___value_0))->___ValidateServerCertificateCallback_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration
#pragma pack(push, tp, 8)
struct RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701_marshaled_pinvoke
{
	char* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
	Nullable_1_tD097F8A4EE146ACEAD5B1EA04990E4BED15CB593  ___secureConnectConfiguration_5;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration
#pragma pack(push, tp, 8)
struct RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701_marshaled_com
{
	Il2CppChar* ___RemoteHostName_0;
	uint16_t ___RemotePort_1;
	uint32_t ___MaxBitrateKbps_2;
	int32_t ___VideoCodec_3;
	int32_t ___EnableAudio_4;
	Nullable_1_tD097F8A4EE146ACEAD5B1EA04990E4BED15CB593  ___secureConnectConfiguration_5;
};
#pragma pack(pop, tp)

// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE 
{
public:
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Name
	String_t* ___Name_1;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Path
	String_t* ___Path_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Included
	bool ___Included_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::BuildIndex
	int32_t ___BuildIndex_4;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Tag
	String_t* ___Tag_5;
	// UnityEngine.Object Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::Asset
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___Asset_6;

public:
	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_Path_2() { return static_cast<int32_t>(offsetof(SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE, ___Path_2)); }
	inline String_t* get_Path_2() const { return ___Path_2; }
	inline String_t** get_address_of_Path_2() { return &___Path_2; }
	inline void set_Path_2(String_t* value)
	{
		___Path_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_2), (void*)value);
	}

	inline static int32_t get_offset_of_Included_3() { return static_cast<int32_t>(offsetof(SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE, ___Included_3)); }
	inline bool get_Included_3() const { return ___Included_3; }
	inline bool* get_address_of_Included_3() { return &___Included_3; }
	inline void set_Included_3(bool value)
	{
		___Included_3 = value;
	}

	inline static int32_t get_offset_of_BuildIndex_4() { return static_cast<int32_t>(offsetof(SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE, ___BuildIndex_4)); }
	inline int32_t get_BuildIndex_4() const { return ___BuildIndex_4; }
	inline int32_t* get_address_of_BuildIndex_4() { return &___BuildIndex_4; }
	inline void set_BuildIndex_4(int32_t value)
	{
		___BuildIndex_4 = value;
	}

	inline static int32_t get_offset_of_Tag_5() { return static_cast<int32_t>(offsetof(SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE, ___Tag_5)); }
	inline String_t* get_Tag_5() const { return ___Tag_5; }
	inline String_t** get_address_of_Tag_5() { return &___Tag_5; }
	inline void set_Tag_5(String_t* value)
	{
		___Tag_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tag_5), (void*)value);
	}

	inline static int32_t get_offset_of_Asset_6() { return static_cast<int32_t>(offsetof(SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE, ___Asset_6)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_Asset_6() const { return ___Asset_6; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_Asset_6() { return &___Asset_6; }
	inline void set_Asset_6(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___Asset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Asset_6), (void*)value);
	}
};

struct SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo::empty
	SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE  ___empty_0;

public:
	inline static int32_t get_offset_of_empty_0() { return static_cast<int32_t>(offsetof(SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE_StaticFields, ___empty_0)); }
	inline SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE  get_empty_0() const { return ___empty_0; }
	inline SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE * get_address_of_empty_0() { return &___empty_0; }
	inline void set_empty_0(SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE  value)
	{
		___empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___empty_0))->___Asset_6), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE_marshaled_pinvoke
{
	char* ___Name_1;
	char* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	char* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___Asset_6;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo
struct SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE_marshaled_com
{
	Il2CppChar* ___Name_1;
	Il2CppChar* ___Path_2;
	int32_t ___Included_3;
	int32_t ___BuildIndex_4;
	Il2CppChar* ___Tag_5;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___Asset_6;
};

// System.IO.UnmanagedMemoryStream
struct UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Runtime.InteropServices.SafeBuffer System.IO.UnmanagedMemoryStream::_buffer
	SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * ____buffer_4;
	// System.Byte* System.IO.UnmanagedMemoryStream::_mem
	uint8_t* ____mem_5;
	// System.Int64 System.IO.UnmanagedMemoryStream::_length
	int64_t ____length_6;
	// System.Int64 System.IO.UnmanagedMemoryStream::_capacity
	int64_t ____capacity_7;
	// System.Int64 System.IO.UnmanagedMemoryStream::_position
	int64_t ____position_8;
	// System.Int64 System.IO.UnmanagedMemoryStream::_offset
	int64_t ____offset_9;
	// System.IO.FileAccess System.IO.UnmanagedMemoryStream::_access
	int32_t ____access_10;
	// System.Boolean System.IO.UnmanagedMemoryStream::_isOpen
	bool ____isOpen_11;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.UnmanagedMemoryStream::_lastReadTask
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_12;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____buffer_4)); }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * get__buffer_4() const { return ____buffer_4; }
	inline SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 ** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(SafeBuffer_tABA0D0B754FCCF3625CD905D535296E353C630D2 * value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__mem_5() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____mem_5)); }
	inline uint8_t* get__mem_5() const { return ____mem_5; }
	inline uint8_t** get_address_of__mem_5() { return &____mem_5; }
	inline void set__mem_5(uint8_t* value)
	{
		____mem_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____length_6)); }
	inline int64_t get__length_6() const { return ____length_6; }
	inline int64_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int64_t value)
	{
		____length_6 = value;
	}

	inline static int32_t get_offset_of__capacity_7() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____capacity_7)); }
	inline int64_t get__capacity_7() const { return ____capacity_7; }
	inline int64_t* get_address_of__capacity_7() { return &____capacity_7; }
	inline void set__capacity_7(int64_t value)
	{
		____capacity_7 = value;
	}

	inline static int32_t get_offset_of__position_8() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____position_8)); }
	inline int64_t get__position_8() const { return ____position_8; }
	inline int64_t* get_address_of__position_8() { return &____position_8; }
	inline void set__position_8(int64_t value)
	{
		____position_8 = value;
	}

	inline static int32_t get_offset_of__offset_9() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____offset_9)); }
	inline int64_t get__offset_9() const { return ____offset_9; }
	inline int64_t* get_address_of__offset_9() { return &____offset_9; }
	inline void set__offset_9(int64_t value)
	{
		____offset_9 = value;
	}

	inline static int32_t get_offset_of__access_10() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____access_10)); }
	inline int32_t get__access_10() const { return ____access_10; }
	inline int32_t* get_address_of__access_10() { return &____access_10; }
	inline void set__access_10(int32_t value)
	{
		____access_10 = value;
	}

	inline static int32_t get_offset_of__isOpen_11() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____isOpen_11)); }
	inline bool get__isOpen_11() const { return ____isOpen_11; }
	inline bool* get_address_of__isOpen_11() { return &____isOpen_11; }
	inline void set__isOpen_11(bool value)
	{
		____isOpen_11 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_12() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62, ____lastReadTask_12)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_12() const { return ____lastReadTask_12; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_12() { return &____lastReadTask_12; }
	inline void set__lastReadTask_12(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_12), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/BlankCertificateHandler
struct BlankCertificateHandler_t353CFCE10D94420CC49C99FC64BCD79BF9D47D84  : public CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E
{
public:

public:
};


// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C  : public Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::_table
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____table_21;

public:
	inline static int32_t get_offset_of__table_21() { return static_cast<int32_t>(offsetof(SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C, ____table_21)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__table_21() const { return ____table_21; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__table_21() { return &____table_21; }
	inline void set__table_21(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____table_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____table_21), (void*)value);
	}
};


// UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD 
{
public:
	// UnityEngine.InputSystem.LowLevel.IMECompositionString UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator::m_CompositionString
	IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83  ___m_CompositionString_0;
	// System.Char UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator::m_CurrentCharacter
	Il2CppChar ___m_CurrentCharacter_1;
	// System.Int32 UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_2;

public:
	inline static int32_t get_offset_of_m_CompositionString_0() { return static_cast<int32_t>(offsetof(Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD, ___m_CompositionString_0)); }
	inline IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83  get_m_CompositionString_0() const { return ___m_CompositionString_0; }
	inline IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83 * get_address_of_m_CompositionString_0() { return &___m_CompositionString_0; }
	inline void set_m_CompositionString_0(IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83  value)
	{
		___m_CompositionString_0 = value;
	}

	inline static int32_t get_offset_of_m_CurrentCharacter_1() { return static_cast<int32_t>(offsetof(Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD, ___m_CurrentCharacter_1)); }
	inline Il2CppChar get_m_CurrentCharacter_1() const { return ___m_CurrentCharacter_1; }
	inline Il2CppChar* get_address_of_m_CurrentCharacter_1() { return &___m_CurrentCharacter_1; }
	inline void set_m_CurrentCharacter_1(Il2CppChar value)
	{
		___m_CurrentCharacter_1 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_2() { return static_cast<int32_t>(offsetof(Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD, ___m_CurrentIndex_2)); }
	inline int32_t get_m_CurrentIndex_2() const { return ___m_CurrentIndex_2; }
	inline int32_t* get_address_of_m_CurrentIndex_2() { return &___m_CurrentIndex_2; }
	inline void set_m_CurrentIndex_2(int32_t value)
	{
		___m_CurrentIndex_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD_marshaled_pinvoke
{
	IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83_marshaled_pinvoke ___m_CompositionString_0;
	uint8_t ___m_CurrentCharacter_1;
	int32_t ___m_CurrentIndex_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD_marshaled_com
{
	IMECompositionString_t2FF8DD4A10EA5DF2D7023622FD79384367D4FD83_marshaled_com ___m_CompositionString_0;
	uint8_t ___m_CurrentCharacter_1;
	int32_t ___m_CurrentIndex_2;
};

// UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978 
{
public:
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection::m_Device
	InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * ___m_Device_0;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection::m_EventPtr
	InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  ___m_EventPtr_1;
	// UnityEngine.InputSystem.InputControlExtensions/Enumerate UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection::m_Flags
	int32_t ___m_Flags_2;
	// System.Single UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_3;

public:
	inline static int32_t get_offset_of_m_Device_0() { return static_cast<int32_t>(offsetof(InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978, ___m_Device_0)); }
	inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * get_m_Device_0() const { return ___m_Device_0; }
	inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 ** get_address_of_m_Device_0() { return &___m_Device_0; }
	inline void set_m_Device_0(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * value)
	{
		___m_Device_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_EventPtr_1() { return static_cast<int32_t>(offsetof(InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978, ___m_EventPtr_1)); }
	inline InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  get_m_EventPtr_1() const { return ___m_EventPtr_1; }
	inline InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1 * get_address_of_m_EventPtr_1() { return &___m_EventPtr_1; }
	inline void set_m_EventPtr_1(InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  value)
	{
		___m_EventPtr_1 = value;
	}

	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_3() { return static_cast<int32_t>(offsetof(InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978, ___m_MagnitudeThreshold_3)); }
	inline float get_m_MagnitudeThreshold_3() const { return ___m_MagnitudeThreshold_3; }
	inline float* get_address_of_m_MagnitudeThreshold_3() { return &___m_MagnitudeThreshold_3; }
	inline void set_m_MagnitudeThreshold_3(float value)
	{
		___m_MagnitudeThreshold_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978_marshaled_pinvoke
{
	InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * ___m_Device_0;
	InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  ___m_EventPtr_1;
	int32_t ___m_Flags_2;
	float ___m_MagnitudeThreshold_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978_marshaled_com
{
	InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * ___m_Device_0;
	InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  ___m_EventPtr_1;
	int32_t ___m_Flags_2;
	float ___m_MagnitudeThreshold_3;
};

// UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61 
{
public:
	// UnityEngine.InputSystem.InputControlExtensions/Enumerate UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_Flags
	int32_t ___m_Flags_0;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_Device
	InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * ___m_Device_1;
	// System.UInt32[] UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_StateOffsetToControlIndex
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___m_StateOffsetToControlIndex_2;
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_StateOffsetToControlIndexLength
	int32_t ___m_StateOffsetToControlIndexLength_3;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_AllControls
	InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* ___m_AllControls_4;
	// System.Byte* UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_DefaultState
	uint8_t* ___m_DefaultState_5;
	// System.Byte* UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentState
	uint8_t* ___m_CurrentState_6;
	// System.Byte* UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_NoiseMask
	uint8_t* ___m_NoiseMask_7;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_EventPtr
	InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  ___m_EventPtr_8;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentControl
	InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___m_CurrentControl_9;
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentIndexInStateOffsetToControlIndexMap
	int32_t ___m_CurrentIndexInStateOffsetToControlIndexMap_10;
	// System.UInt32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentControlStateBitOffset
	uint32_t ___m_CurrentControlStateBitOffset_11;
	// System.Byte* UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_EventState
	uint8_t* ___m_EventState_12;
	// System.UInt32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_CurrentBitOffset
	uint32_t ___m_CurrentBitOffset_13;
	// System.UInt32 UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_EndBitOffset
	uint32_t ___m_EndBitOffset_14;
	// System.Single UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_15;

public:
	inline static int32_t get_offset_of_m_Flags_0() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_Flags_0)); }
	inline int32_t get_m_Flags_0() const { return ___m_Flags_0; }
	inline int32_t* get_address_of_m_Flags_0() { return &___m_Flags_0; }
	inline void set_m_Flags_0(int32_t value)
	{
		___m_Flags_0 = value;
	}

	inline static int32_t get_offset_of_m_Device_1() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_Device_1)); }
	inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * get_m_Device_1() const { return ___m_Device_1; }
	inline InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 ** get_address_of_m_Device_1() { return &___m_Device_1; }
	inline void set_m_Device_1(InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * value)
	{
		___m_Device_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Device_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlIndex_2() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_StateOffsetToControlIndex_2)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_m_StateOffsetToControlIndex_2() const { return ___m_StateOffsetToControlIndex_2; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_m_StateOffsetToControlIndex_2() { return &___m_StateOffsetToControlIndex_2; }
	inline void set_m_StateOffsetToControlIndex_2(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___m_StateOffsetToControlIndex_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StateOffsetToControlIndex_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_StateOffsetToControlIndexLength_3() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_StateOffsetToControlIndexLength_3)); }
	inline int32_t get_m_StateOffsetToControlIndexLength_3() const { return ___m_StateOffsetToControlIndexLength_3; }
	inline int32_t* get_address_of_m_StateOffsetToControlIndexLength_3() { return &___m_StateOffsetToControlIndexLength_3; }
	inline void set_m_StateOffsetToControlIndexLength_3(int32_t value)
	{
		___m_StateOffsetToControlIndexLength_3 = value;
	}

	inline static int32_t get_offset_of_m_AllControls_4() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_AllControls_4)); }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* get_m_AllControls_4() const { return ___m_AllControls_4; }
	inline InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680** get_address_of_m_AllControls_4() { return &___m_AllControls_4; }
	inline void set_m_AllControls_4(InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* value)
	{
		___m_AllControls_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllControls_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_DefaultState_5() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_DefaultState_5)); }
	inline uint8_t* get_m_DefaultState_5() const { return ___m_DefaultState_5; }
	inline uint8_t** get_address_of_m_DefaultState_5() { return &___m_DefaultState_5; }
	inline void set_m_DefaultState_5(uint8_t* value)
	{
		___m_DefaultState_5 = value;
	}

	inline static int32_t get_offset_of_m_CurrentState_6() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_CurrentState_6)); }
	inline uint8_t* get_m_CurrentState_6() const { return ___m_CurrentState_6; }
	inline uint8_t** get_address_of_m_CurrentState_6() { return &___m_CurrentState_6; }
	inline void set_m_CurrentState_6(uint8_t* value)
	{
		___m_CurrentState_6 = value;
	}

	inline static int32_t get_offset_of_m_NoiseMask_7() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_NoiseMask_7)); }
	inline uint8_t* get_m_NoiseMask_7() const { return ___m_NoiseMask_7; }
	inline uint8_t** get_address_of_m_NoiseMask_7() { return &___m_NoiseMask_7; }
	inline void set_m_NoiseMask_7(uint8_t* value)
	{
		___m_NoiseMask_7 = value;
	}

	inline static int32_t get_offset_of_m_EventPtr_8() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_EventPtr_8)); }
	inline InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  get_m_EventPtr_8() const { return ___m_EventPtr_8; }
	inline InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1 * get_address_of_m_EventPtr_8() { return &___m_EventPtr_8; }
	inline void set_m_EventPtr_8(InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  value)
	{
		___m_EventPtr_8 = value;
	}

	inline static int32_t get_offset_of_m_CurrentControl_9() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_CurrentControl_9)); }
	inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * get_m_CurrentControl_9() const { return ___m_CurrentControl_9; }
	inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 ** get_address_of_m_CurrentControl_9() { return &___m_CurrentControl_9; }
	inline void set_m_CurrentControl_9(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * value)
	{
		___m_CurrentControl_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentControl_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentIndexInStateOffsetToControlIndexMap_10() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_CurrentIndexInStateOffsetToControlIndexMap_10)); }
	inline int32_t get_m_CurrentIndexInStateOffsetToControlIndexMap_10() const { return ___m_CurrentIndexInStateOffsetToControlIndexMap_10; }
	inline int32_t* get_address_of_m_CurrentIndexInStateOffsetToControlIndexMap_10() { return &___m_CurrentIndexInStateOffsetToControlIndexMap_10; }
	inline void set_m_CurrentIndexInStateOffsetToControlIndexMap_10(int32_t value)
	{
		___m_CurrentIndexInStateOffsetToControlIndexMap_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentControlStateBitOffset_11() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_CurrentControlStateBitOffset_11)); }
	inline uint32_t get_m_CurrentControlStateBitOffset_11() const { return ___m_CurrentControlStateBitOffset_11; }
	inline uint32_t* get_address_of_m_CurrentControlStateBitOffset_11() { return &___m_CurrentControlStateBitOffset_11; }
	inline void set_m_CurrentControlStateBitOffset_11(uint32_t value)
	{
		___m_CurrentControlStateBitOffset_11 = value;
	}

	inline static int32_t get_offset_of_m_EventState_12() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_EventState_12)); }
	inline uint8_t* get_m_EventState_12() const { return ___m_EventState_12; }
	inline uint8_t** get_address_of_m_EventState_12() { return &___m_EventState_12; }
	inline void set_m_EventState_12(uint8_t* value)
	{
		___m_EventState_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentBitOffset_13() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_CurrentBitOffset_13)); }
	inline uint32_t get_m_CurrentBitOffset_13() const { return ___m_CurrentBitOffset_13; }
	inline uint32_t* get_address_of_m_CurrentBitOffset_13() { return &___m_CurrentBitOffset_13; }
	inline void set_m_CurrentBitOffset_13(uint32_t value)
	{
		___m_CurrentBitOffset_13 = value;
	}

	inline static int32_t get_offset_of_m_EndBitOffset_14() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_EndBitOffset_14)); }
	inline uint32_t get_m_EndBitOffset_14() const { return ___m_EndBitOffset_14; }
	inline uint32_t* get_address_of_m_EndBitOffset_14() { return &___m_EndBitOffset_14; }
	inline void set_m_EndBitOffset_14(uint32_t value)
	{
		___m_EndBitOffset_14 = value;
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_15() { return static_cast<int32_t>(offsetof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61, ___m_MagnitudeThreshold_15)); }
	inline float get_m_MagnitudeThreshold_15() const { return ___m_MagnitudeThreshold_15; }
	inline float* get_address_of_m_MagnitudeThreshold_15() { return &___m_MagnitudeThreshold_15; }
	inline void set_m_MagnitudeThreshold_15(float value)
	{
		___m_MagnitudeThreshold_15 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61_marshaled_pinvoke
{
	int32_t ___m_Flags_0;
	InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * ___m_Device_1;
	Il2CppSafeArray/*NONE*/* ___m_StateOffsetToControlIndex_2;
	int32_t ___m_StateOffsetToControlIndexLength_3;
	InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* ___m_AllControls_4;
	uint8_t* ___m_DefaultState_5;
	uint8_t* ___m_CurrentState_6;
	uint8_t* ___m_NoiseMask_7;
	InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  ___m_EventPtr_8;
	InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___m_CurrentControl_9;
	int32_t ___m_CurrentIndexInStateOffsetToControlIndexMap_10;
	uint32_t ___m_CurrentControlStateBitOffset_11;
	uint8_t* ___m_EventState_12;
	uint32_t ___m_CurrentBitOffset_13;
	uint32_t ___m_EndBitOffset_14;
	float ___m_MagnitudeThreshold_15;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61_marshaled_com
{
	int32_t ___m_Flags_0;
	InputDevice_t64BD575C54DB522A280D29E47F96E52B79B22D87 * ___m_Device_1;
	Il2CppSafeArray/*NONE*/* ___m_StateOffsetToControlIndex_2;
	int32_t ___m_StateOffsetToControlIndexLength_3;
	InputControlU5BU5D_tB874FECA56E2B08D3280F4174B988EA155E99680* ___m_AllControls_4;
	uint8_t* ___m_DefaultState_5;
	uint8_t* ___m_CurrentState_6;
	uint8_t* ___m_NoiseMask_7;
	InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  ___m_EventPtr_8;
	InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___m_CurrentControl_9;
	int32_t ___m_CurrentIndexInStateOffsetToControlIndexMap_10;
	uint32_t ___m_CurrentControlStateBitOffset_11;
	uint8_t* ___m_EventState_12;
	uint32_t ___m_CurrentBitOffset_13;
	uint32_t ___m_EndBitOffset_14;
	float ___m_MagnitudeThreshold_15;
};

// UnityEngine.InputSystem.InputControlPath/ParsedPathComponent
struct ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838 
{
public:
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.InputControlPath/ParsedPathComponent::m_Layout
	Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  ___m_Layout_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.Substring> UnityEngine.InputSystem.InputControlPath/ParsedPathComponent::m_Usages
	InlinedArray_1_t553149D8EBA6D89FE4952303D036252DC5D360C3  ___m_Usages_1;
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.InputControlPath/ParsedPathComponent::m_Name
	Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  ___m_Name_2;
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.InputControlPath/ParsedPathComponent::m_DisplayName
	Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  ___m_DisplayName_3;

public:
	inline static int32_t get_offset_of_m_Layout_0() { return static_cast<int32_t>(offsetof(ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838, ___m_Layout_0)); }
	inline Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  get_m_Layout_0() const { return ___m_Layout_0; }
	inline Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F * get_address_of_m_Layout_0() { return &___m_Layout_0; }
	inline void set_m_Layout_0(Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  value)
	{
		___m_Layout_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Layout_0))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_Usages_1() { return static_cast<int32_t>(offsetof(ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838, ___m_Usages_1)); }
	inline InlinedArray_1_t553149D8EBA6D89FE4952303D036252DC5D360C3  get_m_Usages_1() const { return ___m_Usages_1; }
	inline InlinedArray_1_t553149D8EBA6D89FE4952303D036252DC5D360C3 * get_address_of_m_Usages_1() { return &___m_Usages_1; }
	inline void set_m_Usages_1(InlinedArray_1_t553149D8EBA6D89FE4952303D036252DC5D360C3  value)
	{
		___m_Usages_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Usages_1))->___firstValue_1))->___m_String_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Usages_1))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838, ___m_Name_2)); }
	inline Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  get_m_Name_2() const { return ___m_Name_2; }
	inline Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F * get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Name_2))->___m_String_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_DisplayName_3() { return static_cast<int32_t>(offsetof(ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838, ___m_DisplayName_3)); }
	inline Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  get_m_DisplayName_3() const { return ___m_DisplayName_3; }
	inline Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F * get_address_of_m_DisplayName_3() { return &___m_DisplayName_3; }
	inline void set_m_DisplayName_3(Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F  value)
	{
		___m_DisplayName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DisplayName_3))->___m_String_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlPath/ParsedPathComponent
struct ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838_marshaled_pinvoke
{
	Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F_marshaled_pinvoke ___m_Layout_0;
	InlinedArray_1_t553149D8EBA6D89FE4952303D036252DC5D360C3  ___m_Usages_1;
	Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F_marshaled_pinvoke ___m_Name_2;
	Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F_marshaled_pinvoke ___m_DisplayName_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlPath/ParsedPathComponent
struct ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838_marshaled_com
{
	Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F_marshaled_com ___m_Layout_0;
	InlinedArray_1_t553149D8EBA6D89FE4952303D036252DC5D360C3  ___m_Usages_1;
	Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F_marshaled_com ___m_Name_2;
	Substring_t9EE457D8CFFFB970B2967B31E9D9AB465415571F_marshaled_com ___m_DisplayName_3;
};

// UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4
struct U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,System.Object> UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>2__current
	KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>4__this
	InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57  ___U3CU3E4__this_3;
	// UnityEngine.InputSystem.Layouts.InputDeviceMatcher UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<>3__<>4__this
	InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57  ___U3CU3E3__U3CU3E4__this_4;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<count>5__2
	int32_t ___U3CcountU3E5__2_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4::<i>5__3
	int32_t ___U3CiU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_tD6E57B7EAC6134DCA97F39E5E598EB43B44A5EAE  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816, ___U3CU3E4__this_3)); }
	inline InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57  get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57 * get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57  value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E4__this_3))->___m_Patterns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E3__U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816, ___U3CU3E3__U3CU3E4__this_4)); }
	inline InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57  get_U3CU3E3__U3CU3E4__this_4() const { return ___U3CU3E3__U3CU3E4__this_4; }
	inline InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57 * get_address_of_U3CU3E3__U3CU3E4__this_4() { return &___U3CU3E3__U3CU3E4__this_4; }
	inline void set_U3CU3E3__U3CU3E4__this_4(InputDeviceMatcher_tFC41EBE6D273378A154C6DFD759DD75D23C99E57  value)
	{
		___U3CU3E3__U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E3__U3CU3E4__this_4))->___m_Patterns_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CcountU3E5__2_5() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816, ___U3CcountU3E5__2_5)); }
	inline int32_t get_U3CcountU3E5__2_5() const { return ___U3CcountU3E5__2_5; }
	inline int32_t* get_address_of_U3CcountU3E5__2_5() { return &___U3CcountU3E5__2_5; }
	inline void set_U3CcountU3E5__2_5(int32_t value)
	{
		___U3CcountU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_6() { return static_cast<int32_t>(offsetof(U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816, ___U3CiU3E5__3_6)); }
	inline int32_t get_U3CiU3E5__3_6() const { return ___U3CiU3E5__3_6; }
	inline int32_t* get_address_of_U3CiU3E5__3_6() { return &___U3CiU3E5__3_6; }
	inline void set_U3CiU3E5__3_6(int32_t value)
	{
		___U3CiU3E5__3_6 = value;
	}
};


// UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
struct ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<finished>k__BackingField
	bool ___U3CfinishedU3Ek__BackingField_0;
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<paused>k__BackingField
	bool ___U3CpausedU3Ek__BackingField_1;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::<position>k__BackingField
	int32_t ___U3CpositionU3Ek__BackingField_2;
	// UnityEngine.InputSystem.LowLevel.InputEventTrace UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_EventTrace
	InputEventTrace_t22E95967587C4A3EAA545A70D57A745BCFEAD646 * ___m_EventTrace_3;
	// UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_Enumerator
	Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143 * ___m_Enumerator_4;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_DeviceIDMappings
	InlinedArray_1_t73599F4D005E33EE995C1D2D1DEAD2515D694B81  ___m_DeviceIDMappings_5;
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_CreateNewDevices
	bool ___m_CreateNewDevices_6;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_CreatedDevices
	InlinedArray_1_tC5C77F6FF5FBFA76A6453E7A72CF263550C8C40C  ___m_CreatedDevices_7;
	// System.Action UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_OnFinished
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnFinished_8;
	// System.Action`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_OnEvent
	Action_1_t231F2AF856D3317D1380298224A60D02F9F43072 * ___m_OnEvent_9;
	// System.Double UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_StartTimeAsPerFirstEvent
	double ___m_StartTimeAsPerFirstEvent_10;
	// System.Double UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_StartTimeAsPerRuntime
	double ___m_StartTimeAsPerRuntime_11;
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_AllEventsByTimeIndex
	int32_t ___m_AllEventsByTimeIndex_12;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.LowLevel.InputEventPtr> UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController::m_AllEventsByTime
	List_1_t980EF2517D85AC88F5978408EA85D232DFCECEDF * ___m_AllEventsByTime_13;

public:
	inline static int32_t get_offset_of_U3CfinishedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___U3CfinishedU3Ek__BackingField_0)); }
	inline bool get_U3CfinishedU3Ek__BackingField_0() const { return ___U3CfinishedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CfinishedU3Ek__BackingField_0() { return &___U3CfinishedU3Ek__BackingField_0; }
	inline void set_U3CfinishedU3Ek__BackingField_0(bool value)
	{
		___U3CfinishedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpausedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___U3CpausedU3Ek__BackingField_1)); }
	inline bool get_U3CpausedU3Ek__BackingField_1() const { return ___U3CpausedU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CpausedU3Ek__BackingField_1() { return &___U3CpausedU3Ek__BackingField_1; }
	inline void set_U3CpausedU3Ek__BackingField_1(bool value)
	{
		___U3CpausedU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___U3CpositionU3Ek__BackingField_2)); }
	inline int32_t get_U3CpositionU3Ek__BackingField_2() const { return ___U3CpositionU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CpositionU3Ek__BackingField_2() { return &___U3CpositionU3Ek__BackingField_2; }
	inline void set_U3CpositionU3Ek__BackingField_2(int32_t value)
	{
		___U3CpositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_m_EventTrace_3() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___m_EventTrace_3)); }
	inline InputEventTrace_t22E95967587C4A3EAA545A70D57A745BCFEAD646 * get_m_EventTrace_3() const { return ___m_EventTrace_3; }
	inline InputEventTrace_t22E95967587C4A3EAA545A70D57A745BCFEAD646 ** get_address_of_m_EventTrace_3() { return &___m_EventTrace_3; }
	inline void set_m_EventTrace_3(InputEventTrace_t22E95967587C4A3EAA545A70D57A745BCFEAD646 * value)
	{
		___m_EventTrace_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventTrace_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Enumerator_4() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___m_Enumerator_4)); }
	inline Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143 * get_m_Enumerator_4() const { return ___m_Enumerator_4; }
	inline Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143 ** get_address_of_m_Enumerator_4() { return &___m_Enumerator_4; }
	inline void set_m_Enumerator_4(Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143 * value)
	{
		___m_Enumerator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Enumerator_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceIDMappings_5() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___m_DeviceIDMappings_5)); }
	inline InlinedArray_1_t73599F4D005E33EE995C1D2D1DEAD2515D694B81  get_m_DeviceIDMappings_5() const { return ___m_DeviceIDMappings_5; }
	inline InlinedArray_1_t73599F4D005E33EE995C1D2D1DEAD2515D694B81 * get_address_of_m_DeviceIDMappings_5() { return &___m_DeviceIDMappings_5; }
	inline void set_m_DeviceIDMappings_5(InlinedArray_1_t73599F4D005E33EE995C1D2D1DEAD2515D694B81  value)
	{
		___m_DeviceIDMappings_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DeviceIDMappings_5))->___additionalValues_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_CreateNewDevices_6() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___m_CreateNewDevices_6)); }
	inline bool get_m_CreateNewDevices_6() const { return ___m_CreateNewDevices_6; }
	inline bool* get_address_of_m_CreateNewDevices_6() { return &___m_CreateNewDevices_6; }
	inline void set_m_CreateNewDevices_6(bool value)
	{
		___m_CreateNewDevices_6 = value;
	}

	inline static int32_t get_offset_of_m_CreatedDevices_7() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___m_CreatedDevices_7)); }
	inline InlinedArray_1_tC5C77F6FF5FBFA76A6453E7A72CF263550C8C40C  get_m_CreatedDevices_7() const { return ___m_CreatedDevices_7; }
	inline InlinedArray_1_tC5C77F6FF5FBFA76A6453E7A72CF263550C8C40C * get_address_of_m_CreatedDevices_7() { return &___m_CreatedDevices_7; }
	inline void set_m_CreatedDevices_7(InlinedArray_1_tC5C77F6FF5FBFA76A6453E7A72CF263550C8C40C  value)
	{
		___m_CreatedDevices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreatedDevices_7))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_CreatedDevices_7))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnFinished_8() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___m_OnFinished_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnFinished_8() const { return ___m_OnFinished_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnFinished_8() { return &___m_OnFinished_8; }
	inline void set_m_OnFinished_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnFinished_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnFinished_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEvent_9() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___m_OnEvent_9)); }
	inline Action_1_t231F2AF856D3317D1380298224A60D02F9F43072 * get_m_OnEvent_9() const { return ___m_OnEvent_9; }
	inline Action_1_t231F2AF856D3317D1380298224A60D02F9F43072 ** get_address_of_m_OnEvent_9() { return &___m_OnEvent_9; }
	inline void set_m_OnEvent_9(Action_1_t231F2AF856D3317D1380298224A60D02F9F43072 * value)
	{
		___m_OnEvent_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEvent_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartTimeAsPerFirstEvent_10() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___m_StartTimeAsPerFirstEvent_10)); }
	inline double get_m_StartTimeAsPerFirstEvent_10() const { return ___m_StartTimeAsPerFirstEvent_10; }
	inline double* get_address_of_m_StartTimeAsPerFirstEvent_10() { return &___m_StartTimeAsPerFirstEvent_10; }
	inline void set_m_StartTimeAsPerFirstEvent_10(double value)
	{
		___m_StartTimeAsPerFirstEvent_10 = value;
	}

	inline static int32_t get_offset_of_m_StartTimeAsPerRuntime_11() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___m_StartTimeAsPerRuntime_11)); }
	inline double get_m_StartTimeAsPerRuntime_11() const { return ___m_StartTimeAsPerRuntime_11; }
	inline double* get_address_of_m_StartTimeAsPerRuntime_11() { return &___m_StartTimeAsPerRuntime_11; }
	inline void set_m_StartTimeAsPerRuntime_11(double value)
	{
		___m_StartTimeAsPerRuntime_11 = value;
	}

	inline static int32_t get_offset_of_m_AllEventsByTimeIndex_12() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___m_AllEventsByTimeIndex_12)); }
	inline int32_t get_m_AllEventsByTimeIndex_12() const { return ___m_AllEventsByTimeIndex_12; }
	inline int32_t* get_address_of_m_AllEventsByTimeIndex_12() { return &___m_AllEventsByTimeIndex_12; }
	inline void set_m_AllEventsByTimeIndex_12(int32_t value)
	{
		___m_AllEventsByTimeIndex_12 = value;
	}

	inline static int32_t get_offset_of_m_AllEventsByTime_13() { return static_cast<int32_t>(offsetof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755, ___m_AllEventsByTime_13)); }
	inline List_1_t980EF2517D85AC88F5978408EA85D232DFCECEDF * get_m_AllEventsByTime_13() const { return ___m_AllEventsByTime_13; }
	inline List_1_t980EF2517D85AC88F5978408EA85D232DFCECEDF ** get_address_of_m_AllEventsByTime_13() { return &___m_AllEventsByTime_13; }
	inline void set_m_AllEventsByTime_13(List_1_t980EF2517D85AC88F5978408EA85D232DFCECEDF * value)
	{
		___m_AllEventsByTime_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AllEventsByTime_13), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>4__this
	MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99 * ___U3CU3E4__this_3;
	// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/PointerData> Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16::<>7__wrap1
	Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9  ___U3CU3E7__wrap1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A, ___U3CU3E2__current_1)); }
	inline RuntimeObject* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A, ___U3CU3E4__this_3)); }
	inline MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealityInputModule_t76F66FFFC2F805CEB169ABB00F69053EA20B6E99 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A, ___U3CU3E7__wrap1_4)); }
	inline Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9  get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9 * get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(Enumerator_t4F537D94EABCE13FB71FC6B2DF9F38E873F3C3A9  value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_4))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_4))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo>
struct Enumerator_t26BE053359A4F969987D878B8C712B2092D169FD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tAB81C0660683C34CA2FB68642BB0C75063C7405B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t26BE053359A4F969987D878B8C712B2092D169FD, ___list_0)); }
	inline List_1_tAB81C0660683C34CA2FB68642BB0C75063C7405B * get_list_0() const { return ___list_0; }
	inline List_1_tAB81C0660683C34CA2FB68642BB0C75063C7405B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tAB81C0660683C34CA2FB68642BB0C75063C7405B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t26BE053359A4F969987D878B8C712B2092D169FD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t26BE053359A4F969987D878B8C712B2092D169FD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t26BE053359A4F969987D878B8C712B2092D169FD, ___current_3)); }
	inline SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE  get_current_3() const { return ___current_3; }
	inline SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(SceneInfo_t28BDCAC17ED468EDDD1A5672F65E822FE036B3EE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Name_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Asset_6), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputDevice>
struct InputControlList_1_t9D0926F8AB5859C8767B43B76E6AC3847A5D7D02 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;

public:
	inline static int32_t get_offset_of_m_Count_0() { return static_cast<int32_t>(offsetof(InputControlList_1_t9D0926F8AB5859C8767B43B76E6AC3847A5D7D02, ___m_Count_0)); }
	inline int32_t get_m_Count_0() const { return ___m_Count_0; }
	inline int32_t* get_address_of_m_Count_0() { return &___m_Count_0; }
	inline void set_m_Count_0(int32_t value)
	{
		___m_Count_0 = value;
	}

	inline static int32_t get_offset_of_m_Indices_1() { return static_cast<int32_t>(offsetof(InputControlList_1_t9D0926F8AB5859C8767B43B76E6AC3847A5D7D02, ___m_Indices_1)); }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  get_m_Indices_1() const { return ___m_Indices_1; }
	inline NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B * get_address_of_m_Indices_1() { return &___m_Indices_1; }
	inline void set_m_Indices_1(NativeArray_1_t9D118727A643E61710D0A4DF5B0C8CD1A918A40B  value)
	{
		___m_Indices_1 = value;
	}

	inline static int32_t get_offset_of_m_Allocator_2() { return static_cast<int32_t>(offsetof(InputControlList_1_t9D0926F8AB5859C8767B43B76E6AC3847A5D7D02, ___m_Allocator_2)); }
	inline int32_t get_m_Allocator_2() const { return ___m_Allocator_2; }
	inline int32_t* get_address_of_m_Allocator_2() { return &___m_Allocator_2; }
	inline void set_m_Allocator_2(int32_t value)
	{
		___m_Allocator_2 = value;
	}
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07 
{
public:
	// T System.Nullable`1::value
	InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07, ___value_0)); }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  get_value_0() const { return ___value_0; }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration
struct SecureRemotingListenConfiguration_tCFDCBD0C4BF5BBE5A40DC2E193A098784B4DBAE9 
{
public:
	// Unity.Collections.NativeArray`1<System.Byte> Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration::Certificate
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___Certificate_0;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration::SubjectName
	String_t* ___SubjectName_1;
	// System.String Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration::KeyPassphrase
	String_t* ___KeyPassphrase_2;
	// Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingValidateAuthenticationTokenDelegate Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration::ValidateAuthenticationTokenCallback
	SecureRemotingValidateAuthenticationTokenDelegate_t73195B5441A1FCE413AB88193B1D8AA9CE9A8F80 * ___ValidateAuthenticationTokenCallback_3;

public:
	inline static int32_t get_offset_of_Certificate_0() { return static_cast<int32_t>(offsetof(SecureRemotingListenConfiguration_tCFDCBD0C4BF5BBE5A40DC2E193A098784B4DBAE9, ___Certificate_0)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_Certificate_0() const { return ___Certificate_0; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_Certificate_0() { return &___Certificate_0; }
	inline void set_Certificate_0(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___Certificate_0 = value;
	}

	inline static int32_t get_offset_of_SubjectName_1() { return static_cast<int32_t>(offsetof(SecureRemotingListenConfiguration_tCFDCBD0C4BF5BBE5A40DC2E193A098784B4DBAE9, ___SubjectName_1)); }
	inline String_t* get_SubjectName_1() const { return ___SubjectName_1; }
	inline String_t** get_address_of_SubjectName_1() { return &___SubjectName_1; }
	inline void set_SubjectName_1(String_t* value)
	{
		___SubjectName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SubjectName_1), (void*)value);
	}

	inline static int32_t get_offset_of_KeyPassphrase_2() { return static_cast<int32_t>(offsetof(SecureRemotingListenConfiguration_tCFDCBD0C4BF5BBE5A40DC2E193A098784B4DBAE9, ___KeyPassphrase_2)); }
	inline String_t* get_KeyPassphrase_2() const { return ___KeyPassphrase_2; }
	inline String_t** get_address_of_KeyPassphrase_2() { return &___KeyPassphrase_2; }
	inline void set_KeyPassphrase_2(String_t* value)
	{
		___KeyPassphrase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyPassphrase_2), (void*)value);
	}

	inline static int32_t get_offset_of_ValidateAuthenticationTokenCallback_3() { return static_cast<int32_t>(offsetof(SecureRemotingListenConfiguration_tCFDCBD0C4BF5BBE5A40DC2E193A098784B4DBAE9, ___ValidateAuthenticationTokenCallback_3)); }
	inline SecureRemotingValidateAuthenticationTokenDelegate_t73195B5441A1FCE413AB88193B1D8AA9CE9A8F80 * get_ValidateAuthenticationTokenCallback_3() const { return ___ValidateAuthenticationTokenCallback_3; }
	inline SecureRemotingValidateAuthenticationTokenDelegate_t73195B5441A1FCE413AB88193B1D8AA9CE9A8F80 ** get_address_of_ValidateAuthenticationTokenCallback_3() { return &___ValidateAuthenticationTokenCallback_3; }
	inline void set_ValidateAuthenticationTokenCallback_3(SecureRemotingValidateAuthenticationTokenDelegate_t73195B5441A1FCE413AB88193B1D8AA9CE9A8F80 * value)
	{
		___ValidateAuthenticationTokenCallback_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValidateAuthenticationTokenCallback_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration
struct SecureRemotingListenConfiguration_tCFDCBD0C4BF5BBE5A40DC2E193A098784B4DBAE9_marshaled_pinvoke
{
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___Certificate_0;
	char* ___SubjectName_1;
	char* ___KeyPassphrase_2;
	Il2CppMethodPointer ___ValidateAuthenticationTokenCallback_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration
struct SecureRemotingListenConfiguration_tCFDCBD0C4BF5BBE5A40DC2E193A098784B4DBAE9_marshaled_com
{
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___Certificate_0;
	Il2CppChar* ___SubjectName_1;
	Il2CppChar* ___KeyPassphrase_2;
	Il2CppMethodPointer ___ValidateAuthenticationTokenCallback_3;
};

// Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Connect>d__0
struct U3CConnectU3Ed__0_t30D06066C729541DBD520B821B3C962A95747185  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Connect>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Connect>d__0::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Connect>d__0::configuration
	RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778  ___configuration_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__0_t30D06066C729541DBD520B821B3C962A95747185, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__0_t30D06066C729541DBD520B821B3C962A95747185, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_configuration_2() { return static_cast<int32_t>(offsetof(U3CConnectU3Ed__0_t30D06066C729541DBD520B821B3C962A95747185, ___configuration_2)); }
	inline RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778  get_configuration_2() const { return ___configuration_2; }
	inline RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778 * get_address_of_configuration_2() { return &___configuration_2; }
	inline void set_configuration_2(RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778  value)
	{
		___configuration_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___configuration_2))->___RemoteHostName_0), (void*)NULL);
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectLegacy>d__29
struct U3CConnectLegacyU3Ed__29_t1A03D58ED8033961123557085C80E22F0F6E4FC8  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectLegacy>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectLegacy>d__29::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectLegacy>d__29::configuration
	RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778  ___configuration_2;
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectLegacy>d__29::<>4__this
	AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CConnectLegacyU3Ed__29_t1A03D58ED8033961123557085C80E22F0F6E4FC8, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CConnectLegacyU3Ed__29_t1A03D58ED8033961123557085C80E22F0F6E4FC8, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_configuration_2() { return static_cast<int32_t>(offsetof(U3CConnectLegacyU3Ed__29_t1A03D58ED8033961123557085C80E22F0F6E4FC8, ___configuration_2)); }
	inline RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778  get_configuration_2() const { return ___configuration_2; }
	inline RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778 * get_address_of_configuration_2() { return &___configuration_2; }
	inline void set_configuration_2(RemotingConfiguration_t468847AEFB4CD152AA6A4E71070684C114110778  value)
	{
		___configuration_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___configuration_2))->___RemoteHostName_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CConnectLegacyU3Ed__29_t1A03D58ED8033961123557085C80E22F0F6E4FC8, ___U3CU3E4__this_3)); }
	inline AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectRoutine>d__27
struct U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectRoutine>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectRoutine>d__27::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectRoutine>d__27::<>4__this
	AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D * ___U3CU3E4__this_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingConnectConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectRoutine>d__27::connectConfiguration
	RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701  ___connectConfiguration_3;
	// UnityEngine.WaitForSeconds Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectRoutine>d__27::<defaultWait>5__2
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___U3CdefaultWaitU3E5__2_4;
	// Microsoft.MixedReality.OpenXR.Remoting.ConnectionState Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectRoutine>d__27::<previousConnectionState>5__3
	int32_t ___U3CpreviousConnectionStateU3E5__3_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1, ___U3CU3E4__this_2)); }
	inline AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_connectConfiguration_3() { return static_cast<int32_t>(offsetof(U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1, ___connectConfiguration_3)); }
	inline RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701  get_connectConfiguration_3() const { return ___connectConfiguration_3; }
	inline RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701 * get_address_of_connectConfiguration_3() { return &___connectConfiguration_3; }
	inline void set_connectConfiguration_3(RemotingConnectConfiguration_t0A0FE38AF7BE486121515B05CA082D8276E23701  value)
	{
		___connectConfiguration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___connectConfiguration_3))->___RemoteHostName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___connectConfiguration_3))->___secureConnectConfiguration_5))->___value_0))->___AuthenticationToken_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___connectConfiguration_3))->___secureConnectConfiguration_5))->___value_0))->___ValidateServerCertificateCallback_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CdefaultWaitU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1, ___U3CdefaultWaitU3E5__2_4)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_U3CdefaultWaitU3E5__2_4() const { return ___U3CdefaultWaitU3E5__2_4; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_U3CdefaultWaitU3E5__2_4() { return &___U3CdefaultWaitU3E5__2_4; }
	inline void set_U3CdefaultWaitU3E5__2_4(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___U3CdefaultWaitU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefaultWaitU3E5__2_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpreviousConnectionStateU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1, ___U3CpreviousConnectionStateU3E5__3_5)); }
	inline int32_t get_U3CpreviousConnectionStateU3E5__3_5() const { return ___U3CpreviousConnectionStateU3E5__3_5; }
	inline int32_t* get_address_of_U3CpreviousConnectionStateU3E5__3_5() { return &___U3CpreviousConnectionStateU3E5__3_5; }
	inline void set_U3CpreviousConnectionStateU3E5__3_5(int32_t value)
	{
		___U3CpreviousConnectionStateU3E5__3_5 = value;
	}
};


// System.Reflection.Assembly/UnmanagedMemoryStreamForModule
struct UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44  : public UnmanagedMemoryStream_tCF65E90F0047A6F54D79A6A5E681BC98AE6C2F62
{
public:
	// System.Reflection.Module System.Reflection.Assembly/UnmanagedMemoryStreamForModule::module
	Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * ___module_13;

public:
	inline static int32_t get_offset_of_module_13() { return static_cast<int32_t>(offsetof(UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44, ___module_13)); }
	inline Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * get_module_13() const { return ___module_13; }
	inline Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 ** get_address_of_module_13() { return &___module_13; }
	inline void set_module_13(Module_tAAF0DBC4FB20AB46035441C66C41A8DB813C8CD7 * value)
	{
		___module_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_13), (void*)value);
	}
};


// System.Diagnostics.Tracing.EventSource/OverideEventProvider
struct OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940  : public EventProvider_t885CC4F2E2C705553AD5FA95D6954CAEA35BF589
{
public:
	// System.Diagnostics.Tracing.EventSource System.Diagnostics.Tracing.EventSource/OverideEventProvider::m_eventSource
	EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * ___m_eventSource_13;

public:
	inline static int32_t get_offset_of_m_eventSource_13() { return static_cast<int32_t>(offsetof(OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940, ___m_eventSource_13)); }
	inline EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * get_m_eventSource_13() const { return ___m_eventSource_13; }
	inline EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A ** get_address_of_m_eventSource_13() { return &___m_eventSource_13; }
	inline void set_m_eventSource_13(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * value)
	{
		___m_eventSource_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventSource_13), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8
struct U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputBinding UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<>2__current
	InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<>4__this
	InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * ___U3CU3E4__this_3;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<numActionMaps>5__2
	int32_t ___U3CnumActionMapsU3E5__2_4;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<i>5__3
	int32_t ___U3CiU3E5__3_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<bindings>5__4
	InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6* ___U3CbindingsU3E5__4_6;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<numBindings>5__5
	int32_t ___U3CnumBindingsU3E5__5_7;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8::<n>5__6
	int32_t ___U3CnU3E5__6_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81, ___U3CU3E2__current_1)); }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81, ___U3CU3E4__this_3)); }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(InputActionAsset_t528ACD0ABA45255A4FD391F0C3D26B1B50B82B18 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnumActionMapsU3E5__2_4() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81, ___U3CnumActionMapsU3E5__2_4)); }
	inline int32_t get_U3CnumActionMapsU3E5__2_4() const { return ___U3CnumActionMapsU3E5__2_4; }
	inline int32_t* get_address_of_U3CnumActionMapsU3E5__2_4() { return &___U3CnumActionMapsU3E5__2_4; }
	inline void set_U3CnumActionMapsU3E5__2_4(int32_t value)
	{
		___U3CnumActionMapsU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_5() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81, ___U3CiU3E5__3_5)); }
	inline int32_t get_U3CiU3E5__3_5() const { return ___U3CiU3E5__3_5; }
	inline int32_t* get_address_of_U3CiU3E5__3_5() { return &___U3CiU3E5__3_5; }
	inline void set_U3CiU3E5__3_5(int32_t value)
	{
		___U3CiU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CbindingsU3E5__4_6() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81, ___U3CbindingsU3E5__4_6)); }
	inline InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6* get_U3CbindingsU3E5__4_6() const { return ___U3CbindingsU3E5__4_6; }
	inline InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6** get_address_of_U3CbindingsU3E5__4_6() { return &___U3CbindingsU3E5__4_6; }
	inline void set_U3CbindingsU3E5__4_6(InputBindingU5BU5D_tFBF775077101E34ED6C54C4468F6E0722ECB2EF6* value)
	{
		___U3CbindingsU3E5__4_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbindingsU3E5__4_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CnumBindingsU3E5__5_7() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81, ___U3CnumBindingsU3E5__5_7)); }
	inline int32_t get_U3CnumBindingsU3E5__5_7() const { return ___U3CnumBindingsU3E5__5_7; }
	inline int32_t* get_address_of_U3CnumBindingsU3E5__5_7() { return &___U3CnumBindingsU3E5__5_7; }
	inline void set_U3CnumBindingsU3E5__5_7(int32_t value)
	{
		___U3CnumBindingsU3E5__5_7 = value;
	}

	inline static int32_t get_offset_of_U3CnU3E5__6_8() { return static_cast<int32_t>(offsetof(U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81, ___U3CnU3E5__6_8)); }
	inline int32_t get_U3CnU3E5__6_8() const { return ___U3CnU3E5__6_8; }
	inline int32_t* get_address_of_U3CnU3E5__6_8() { return &___U3CnU3E5__6_8; }
	inline void set_U3CnU3E5__6_8(int32_t value)
	{
		___U3CnU3E5__6_8 = value;
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator
struct ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_State
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_MapIndex
	int32_t ___m_MapIndex_1;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_BindingCurrentIndex
	int32_t ___m_BindingCurrentIndex_2;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_BindingEndIndex
	int32_t ___m_BindingEndIndex_3;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_InteractionCurrentIndex
	int32_t ___m_InteractionCurrentIndex_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_InteractionEndIndex
	int32_t ___m_InteractionEndIndex_5;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_ProcessorCurrentIndex
	int32_t ___m_ProcessorCurrentIndex_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_ProcessorEndIndex
	int32_t ___m_ProcessorEndIndex_7;
	// UnityEngine.InputSystem.InputBinding UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_BindingMask
	InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  ___m_BindingMask_8;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_ObjectType
	Type_t * ___m_ObjectType_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_ParameterName
	String_t* ___m_ParameterName_10;
	// System.Boolean UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_MayBeInteraction
	bool ___m_MayBeInteraction_11;
	// System.Boolean UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_MayBeProcessor
	bool ___m_MayBeProcessor_12;
	// System.Boolean UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_MayBeComposite
	bool ___m_MayBeComposite_13;
	// System.Boolean UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_CurrentBindingIsComposite
	bool ___m_CurrentBindingIsComposite_14;
	// System.Object UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_CurrentObject
	RuntimeObject * ___m_CurrentObject_15;
	// System.Reflection.FieldInfo UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator::m_CurrentParameter
	FieldInfo_t * ___m_CurrentParameter_16;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_State_0)); }
	inline InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_MapIndex_1() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_MapIndex_1)); }
	inline int32_t get_m_MapIndex_1() const { return ___m_MapIndex_1; }
	inline int32_t* get_address_of_m_MapIndex_1() { return &___m_MapIndex_1; }
	inline void set_m_MapIndex_1(int32_t value)
	{
		___m_MapIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_BindingCurrentIndex_2() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_BindingCurrentIndex_2)); }
	inline int32_t get_m_BindingCurrentIndex_2() const { return ___m_BindingCurrentIndex_2; }
	inline int32_t* get_address_of_m_BindingCurrentIndex_2() { return &___m_BindingCurrentIndex_2; }
	inline void set_m_BindingCurrentIndex_2(int32_t value)
	{
		___m_BindingCurrentIndex_2 = value;
	}

	inline static int32_t get_offset_of_m_BindingEndIndex_3() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_BindingEndIndex_3)); }
	inline int32_t get_m_BindingEndIndex_3() const { return ___m_BindingEndIndex_3; }
	inline int32_t* get_address_of_m_BindingEndIndex_3() { return &___m_BindingEndIndex_3; }
	inline void set_m_BindingEndIndex_3(int32_t value)
	{
		___m_BindingEndIndex_3 = value;
	}

	inline static int32_t get_offset_of_m_InteractionCurrentIndex_4() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_InteractionCurrentIndex_4)); }
	inline int32_t get_m_InteractionCurrentIndex_4() const { return ___m_InteractionCurrentIndex_4; }
	inline int32_t* get_address_of_m_InteractionCurrentIndex_4() { return &___m_InteractionCurrentIndex_4; }
	inline void set_m_InteractionCurrentIndex_4(int32_t value)
	{
		___m_InteractionCurrentIndex_4 = value;
	}

	inline static int32_t get_offset_of_m_InteractionEndIndex_5() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_InteractionEndIndex_5)); }
	inline int32_t get_m_InteractionEndIndex_5() const { return ___m_InteractionEndIndex_5; }
	inline int32_t* get_address_of_m_InteractionEndIndex_5() { return &___m_InteractionEndIndex_5; }
	inline void set_m_InteractionEndIndex_5(int32_t value)
	{
		___m_InteractionEndIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_ProcessorCurrentIndex_6() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_ProcessorCurrentIndex_6)); }
	inline int32_t get_m_ProcessorCurrentIndex_6() const { return ___m_ProcessorCurrentIndex_6; }
	inline int32_t* get_address_of_m_ProcessorCurrentIndex_6() { return &___m_ProcessorCurrentIndex_6; }
	inline void set_m_ProcessorCurrentIndex_6(int32_t value)
	{
		___m_ProcessorCurrentIndex_6 = value;
	}

	inline static int32_t get_offset_of_m_ProcessorEndIndex_7() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_ProcessorEndIndex_7)); }
	inline int32_t get_m_ProcessorEndIndex_7() const { return ___m_ProcessorEndIndex_7; }
	inline int32_t* get_address_of_m_ProcessorEndIndex_7() { return &___m_ProcessorEndIndex_7; }
	inline void set_m_ProcessorEndIndex_7(int32_t value)
	{
		___m_ProcessorEndIndex_7 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_BindingMask_8)); }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BindingMask_8))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BindingMask_8))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BindingMask_8))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BindingMask_8))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BindingMask_8))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BindingMask_8))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BindingMask_8))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BindingMask_8))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BindingMask_8))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_BindingMask_8))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ObjectType_9() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_ObjectType_9)); }
	inline Type_t * get_m_ObjectType_9() const { return ___m_ObjectType_9; }
	inline Type_t ** get_address_of_m_ObjectType_9() { return &___m_ObjectType_9; }
	inline void set_m_ObjectType_9(Type_t * value)
	{
		___m_ObjectType_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ObjectType_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParameterName_10() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_ParameterName_10)); }
	inline String_t* get_m_ParameterName_10() const { return ___m_ParameterName_10; }
	inline String_t** get_address_of_m_ParameterName_10() { return &___m_ParameterName_10; }
	inline void set_m_ParameterName_10(String_t* value)
	{
		___m_ParameterName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParameterName_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_MayBeInteraction_11() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_MayBeInteraction_11)); }
	inline bool get_m_MayBeInteraction_11() const { return ___m_MayBeInteraction_11; }
	inline bool* get_address_of_m_MayBeInteraction_11() { return &___m_MayBeInteraction_11; }
	inline void set_m_MayBeInteraction_11(bool value)
	{
		___m_MayBeInteraction_11 = value;
	}

	inline static int32_t get_offset_of_m_MayBeProcessor_12() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_MayBeProcessor_12)); }
	inline bool get_m_MayBeProcessor_12() const { return ___m_MayBeProcessor_12; }
	inline bool* get_address_of_m_MayBeProcessor_12() { return &___m_MayBeProcessor_12; }
	inline void set_m_MayBeProcessor_12(bool value)
	{
		___m_MayBeProcessor_12 = value;
	}

	inline static int32_t get_offset_of_m_MayBeComposite_13() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_MayBeComposite_13)); }
	inline bool get_m_MayBeComposite_13() const { return ___m_MayBeComposite_13; }
	inline bool* get_address_of_m_MayBeComposite_13() { return &___m_MayBeComposite_13; }
	inline void set_m_MayBeComposite_13(bool value)
	{
		___m_MayBeComposite_13 = value;
	}

	inline static int32_t get_offset_of_m_CurrentBindingIsComposite_14() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_CurrentBindingIsComposite_14)); }
	inline bool get_m_CurrentBindingIsComposite_14() const { return ___m_CurrentBindingIsComposite_14; }
	inline bool* get_address_of_m_CurrentBindingIsComposite_14() { return &___m_CurrentBindingIsComposite_14; }
	inline void set_m_CurrentBindingIsComposite_14(bool value)
	{
		___m_CurrentBindingIsComposite_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentObject_15() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_CurrentObject_15)); }
	inline RuntimeObject * get_m_CurrentObject_15() const { return ___m_CurrentObject_15; }
	inline RuntimeObject ** get_address_of_m_CurrentObject_15() { return &___m_CurrentObject_15; }
	inline void set_m_CurrentObject_15(RuntimeObject * value)
	{
		___m_CurrentObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentObject_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentParameter_16() { return static_cast<int32_t>(offsetof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A, ___m_CurrentParameter_16)); }
	inline FieldInfo_t * get_m_CurrentParameter_16() const { return ___m_CurrentParameter_16; }
	inline FieldInfo_t ** get_address_of_m_CurrentParameter_16() { return &___m_CurrentParameter_16; }
	inline void set_m_CurrentParameter_16(FieldInfo_t * value)
	{
		___m_CurrentParameter_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentParameter_16), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator
struct ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A_marshaled_pinvoke
{
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	int32_t ___m_MapIndex_1;
	int32_t ___m_BindingCurrentIndex_2;
	int32_t ___m_BindingEndIndex_3;
	int32_t ___m_InteractionCurrentIndex_4;
	int32_t ___m_InteractionEndIndex_5;
	int32_t ___m_ProcessorCurrentIndex_6;
	int32_t ___m_ProcessorEndIndex_7;
	InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB_marshaled_pinvoke ___m_BindingMask_8;
	Type_t * ___m_ObjectType_9;
	char* ___m_ParameterName_10;
	int32_t ___m_MayBeInteraction_11;
	int32_t ___m_MayBeProcessor_12;
	int32_t ___m_MayBeComposite_13;
	int32_t ___m_CurrentBindingIsComposite_14;
	Il2CppIUnknown* ___m_CurrentObject_15;
	FieldInfo_t * ___m_CurrentParameter_16;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator
struct ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A_marshaled_com
{
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	int32_t ___m_MapIndex_1;
	int32_t ___m_BindingCurrentIndex_2;
	int32_t ___m_BindingEndIndex_3;
	int32_t ___m_InteractionCurrentIndex_4;
	int32_t ___m_InteractionEndIndex_5;
	int32_t ___m_ProcessorCurrentIndex_6;
	int32_t ___m_ProcessorEndIndex_7;
	InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB_marshaled_com ___m_BindingMask_8;
	Type_t * ___m_ObjectType_9;
	Il2CppChar* ___m_ParameterName_10;
	int32_t ___m_MayBeInteraction_11;
	int32_t ___m_MayBeProcessor_12;
	int32_t ___m_MayBeComposite_13;
	int32_t ___m_CurrentBindingIsComposite_14;
	Il2CppIUnknown* ___m_CurrentObject_15;
	FieldInfo_t * ___m_CurrentParameter_16;
};

// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride
struct ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7 
{
public:
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride::objectRegistrationName
	String_t* ___objectRegistrationName_0;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride::parameter
	String_t* ___parameter_1;
	// UnityEngine.InputSystem.InputBinding UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride::bindingMask
	InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  ___bindingMask_2;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride::value
	PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  ___value_3;

public:
	inline static int32_t get_offset_of_objectRegistrationName_0() { return static_cast<int32_t>(offsetof(ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7, ___objectRegistrationName_0)); }
	inline String_t* get_objectRegistrationName_0() const { return ___objectRegistrationName_0; }
	inline String_t** get_address_of_objectRegistrationName_0() { return &___objectRegistrationName_0; }
	inline void set_objectRegistrationName_0(String_t* value)
	{
		___objectRegistrationName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectRegistrationName_0), (void*)value);
	}

	inline static int32_t get_offset_of_parameter_1() { return static_cast<int32_t>(offsetof(ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7, ___parameter_1)); }
	inline String_t* get_parameter_1() const { return ___parameter_1; }
	inline String_t** get_address_of_parameter_1() { return &___parameter_1; }
	inline void set_parameter_1(String_t* value)
	{
		___parameter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameter_1), (void*)value);
	}

	inline static int32_t get_offset_of_bindingMask_2() { return static_cast<int32_t>(offsetof(ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7, ___bindingMask_2)); }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  get_bindingMask_2() const { return ___bindingMask_2; }
	inline InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB * get_address_of_bindingMask_2() { return &___bindingMask_2; }
	inline void set_bindingMask_2(InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB  value)
	{
		___bindingMask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___bindingMask_2))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bindingMask_2))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bindingMask_2))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bindingMask_2))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bindingMask_2))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bindingMask_2))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bindingMask_2))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bindingMask_2))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bindingMask_2))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___bindingMask_2))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_value_3() { return static_cast<int32_t>(offsetof(ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7, ___value_3)); }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  get_value_3() const { return ___value_3; }
	inline PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8 * get_address_of_value_3() { return &___value_3; }
	inline void set_value_3(PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8  value)
	{
		___value_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride
struct ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7_marshaled_pinvoke
{
	char* ___objectRegistrationName_0;
	char* ___parameter_1;
	InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB_marshaled_pinvoke ___bindingMask_2;
	PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8_marshaled_pinvoke ___value_3;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride
struct ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7_marshaled_com
{
	Il2CppChar* ___objectRegistrationName_0;
	Il2CppChar* ___parameter_1;
	InputBinding_t95FC40907C92DDB8F118F0062BE49C22ADF28FFB_marshaled_com ___bindingMask_2;
	PrimitiveValue_t70D8365A1CB2217C466D27D6820362EF4331A0C8_marshaled_com ___value_3;
};

// UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43
struct U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>2__current
	InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::eventPtr
	InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  ___eventPtr_3;
	// UnityEngine.InputSystem.LowLevel.InputEventPtr UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>3__eventPtr
	InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  ___U3CU3E3__eventPtr_4;
	// System.Single UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::magnitude
	float ___magnitude_5;
	// System.Single UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>3__magnitude
	float ___U3CU3E3__magnitude_6;
	// System.Boolean UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::buttonControlsOnly
	bool ___buttonControlsOnly_7;
	// System.Boolean UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>3__buttonControlsOnly
	bool ___U3CU3E3__buttonControlsOnly_8;
	// UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43::<>7__wrap1
	InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61  ___U3CU3E7__wrap1_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53, ___U3CU3E2__current_1)); }
	inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(InputControl_tF71EDA53B03EA6D600257755523682E10F94DDC1 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_eventPtr_3() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53, ___eventPtr_3)); }
	inline InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  get_eventPtr_3() const { return ___eventPtr_3; }
	inline InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1 * get_address_of_eventPtr_3() { return &___eventPtr_3; }
	inline void set_eventPtr_3(InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  value)
	{
		___eventPtr_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__eventPtr_4() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53, ___U3CU3E3__eventPtr_4)); }
	inline InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  get_U3CU3E3__eventPtr_4() const { return ___U3CU3E3__eventPtr_4; }
	inline InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1 * get_address_of_U3CU3E3__eventPtr_4() { return &___U3CU3E3__eventPtr_4; }
	inline void set_U3CU3E3__eventPtr_4(InputEventPtr_t3ECDD4FDE129B0CD8021DF46D8D01D941F4AE5C1  value)
	{
		___U3CU3E3__eventPtr_4 = value;
	}

	inline static int32_t get_offset_of_magnitude_5() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53, ___magnitude_5)); }
	inline float get_magnitude_5() const { return ___magnitude_5; }
	inline float* get_address_of_magnitude_5() { return &___magnitude_5; }
	inline void set_magnitude_5(float value)
	{
		___magnitude_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__magnitude_6() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53, ___U3CU3E3__magnitude_6)); }
	inline float get_U3CU3E3__magnitude_6() const { return ___U3CU3E3__magnitude_6; }
	inline float* get_address_of_U3CU3E3__magnitude_6() { return &___U3CU3E3__magnitude_6; }
	inline void set_U3CU3E3__magnitude_6(float value)
	{
		___U3CU3E3__magnitude_6 = value;
	}

	inline static int32_t get_offset_of_buttonControlsOnly_7() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53, ___buttonControlsOnly_7)); }
	inline bool get_buttonControlsOnly_7() const { return ___buttonControlsOnly_7; }
	inline bool* get_address_of_buttonControlsOnly_7() { return &___buttonControlsOnly_7; }
	inline void set_buttonControlsOnly_7(bool value)
	{
		___buttonControlsOnly_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__buttonControlsOnly_8() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53, ___U3CU3E3__buttonControlsOnly_8)); }
	inline bool get_U3CU3E3__buttonControlsOnly_8() const { return ___U3CU3E3__buttonControlsOnly_8; }
	inline bool* get_address_of_U3CU3E3__buttonControlsOnly_8() { return &___U3CU3E3__buttonControlsOnly_8; }
	inline void set_U3CU3E3__buttonControlsOnly_8(bool value)
	{
		___U3CU3E3__buttonControlsOnly_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_9() { return static_cast<int32_t>(offsetof(U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53, ___U3CU3E7__wrap1_9)); }
	inline InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61  get_U3CU3E7__wrap1_9() const { return ___U3CU3E7__wrap1_9; }
	inline InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61 * get_address_of_U3CU3E7__wrap1_9() { return &___U3CU3E7__wrap1_9; }
	inline void set_U3CU3E7__wrap1_9(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61  value)
	{
		___U3CU3E7__wrap1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_9))->___m_Device_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_9))->___m_StateOffsetToControlIndex_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_9))->___m_AllControls_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_9))->___m_CurrentControl_9), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControlPath/PathParser
struct PathParser_tE41DE9EDE1038D22BC97195F752FC6DB2A090EFD 
{
public:
	// System.String UnityEngine.InputSystem.InputControlPath/PathParser::path
	String_t* ___path_0;
	// System.Int32 UnityEngine.InputSystem.InputControlPath/PathParser::length
	int32_t ___length_1;
	// System.Int32 UnityEngine.InputSystem.InputControlPath/PathParser::leftIndexInPath
	int32_t ___leftIndexInPath_2;
	// System.Int32 UnityEngine.InputSystem.InputControlPath/PathParser::rightIndexInPath
	int32_t ___rightIndexInPath_3;
	// UnityEngine.InputSystem.InputControlPath/ParsedPathComponent UnityEngine.InputSystem.InputControlPath/PathParser::current
	ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838  ___current_4;

public:
	inline static int32_t get_offset_of_path_0() { return static_cast<int32_t>(offsetof(PathParser_tE41DE9EDE1038D22BC97195F752FC6DB2A090EFD, ___path_0)); }
	inline String_t* get_path_0() const { return ___path_0; }
	inline String_t** get_address_of_path_0() { return &___path_0; }
	inline void set_path_0(String_t* value)
	{
		___path_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_0), (void*)value);
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(PathParser_tE41DE9EDE1038D22BC97195F752FC6DB2A090EFD, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}

	inline static int32_t get_offset_of_leftIndexInPath_2() { return static_cast<int32_t>(offsetof(PathParser_tE41DE9EDE1038D22BC97195F752FC6DB2A090EFD, ___leftIndexInPath_2)); }
	inline int32_t get_leftIndexInPath_2() const { return ___leftIndexInPath_2; }
	inline int32_t* get_address_of_leftIndexInPath_2() { return &___leftIndexInPath_2; }
	inline void set_leftIndexInPath_2(int32_t value)
	{
		___leftIndexInPath_2 = value;
	}

	inline static int32_t get_offset_of_rightIndexInPath_3() { return static_cast<int32_t>(offsetof(PathParser_tE41DE9EDE1038D22BC97195F752FC6DB2A090EFD, ___rightIndexInPath_3)); }
	inline int32_t get_rightIndexInPath_3() const { return ___rightIndexInPath_3; }
	inline int32_t* get_address_of_rightIndexInPath_3() { return &___rightIndexInPath_3; }
	inline void set_rightIndexInPath_3(int32_t value)
	{
		___rightIndexInPath_3 = value;
	}

	inline static int32_t get_offset_of_current_4() { return static_cast<int32_t>(offsetof(PathParser_tE41DE9EDE1038D22BC97195F752FC6DB2A090EFD, ___current_4)); }
	inline ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838  get_current_4() const { return ___current_4; }
	inline ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838 * get_address_of_current_4() { return &___current_4; }
	inline void set_current_4(ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838  value)
	{
		___current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_4))->___m_Layout_0))->___m_String_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___current_4))->___m_Usages_1))->___firstValue_1))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_4))->___m_Usages_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_4))->___m_Name_2))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___current_4))->___m_DisplayName_3))->___m_String_0), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlPath/PathParser
struct PathParser_tE41DE9EDE1038D22BC97195F752FC6DB2A090EFD_marshaled_pinvoke
{
	char* ___path_0;
	int32_t ___length_1;
	int32_t ___leftIndexInPath_2;
	int32_t ___rightIndexInPath_3;
	ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838_marshaled_pinvoke ___current_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlPath/PathParser
struct PathParser_tE41DE9EDE1038D22BC97195F752FC6DB2A090EFD_marshaled_com
{
	Il2CppChar* ___path_0;
	int32_t ___length_1;
	int32_t ___leftIndexInPath_2;
	int32_t ___rightIndexInPath_3;
	ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838_marshaled_com ___current_4;
};

// UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75
struct U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::basedOn
	String_t* ___basedOn_3;
	// System.String UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>3__basedOn
	String_t* ___U3CU3E3__basedOn_4;
	// UnityEngine.InputSystem.InputManager UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>4__this
	InputManager_t9E534956EF45276E5D7E75B3EA03BF1AB0EC411F * ___U3CU3E4__this_5;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<internedBasedOn>5__2
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___U3CinternedBasedOnU3E5__2_6;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>7__wrap2
	Enumerator_tBC97DB5B6B5870EB975D595B3E8450E430C0A0E5  ___U3CU3E7__wrap2_7;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>7__wrap3
	Enumerator_tA79D34AACF919BA3D1503DCC212621FFA3947536  ___U3CU3E7__wrap3_8;
	// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75::<>7__wrap4
	Enumerator_t86F084708DD8E20059734F3D16C77A4CE4C171D9  ___U3CU3E7__wrap4_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_basedOn_3() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89, ___basedOn_3)); }
	inline String_t* get_basedOn_3() const { return ___basedOn_3; }
	inline String_t** get_address_of_basedOn_3() { return &___basedOn_3; }
	inline void set_basedOn_3(String_t* value)
	{
		___basedOn_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___basedOn_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__basedOn_4() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89, ___U3CU3E3__basedOn_4)); }
	inline String_t* get_U3CU3E3__basedOn_4() const { return ___U3CU3E3__basedOn_4; }
	inline String_t** get_address_of_U3CU3E3__basedOn_4() { return &___U3CU3E3__basedOn_4; }
	inline void set_U3CU3E3__basedOn_4(String_t* value)
	{
		___U3CU3E3__basedOn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__basedOn_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89, ___U3CU3E4__this_5)); }
	inline InputManager_t9E534956EF45276E5D7E75B3EA03BF1AB0EC411F * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline InputManager_t9E534956EF45276E5D7E75B3EA03BF1AB0EC411F ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(InputManager_t9E534956EF45276E5D7E75B3EA03BF1AB0EC411F * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CinternedBasedOnU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89, ___U3CinternedBasedOnU3E5__2_6)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_U3CinternedBasedOnU3E5__2_6() const { return ___U3CinternedBasedOnU3E5__2_6; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_U3CinternedBasedOnU3E5__2_6() { return &___U3CinternedBasedOnU3E5__2_6; }
	inline void set_U3CinternedBasedOnU3E5__2_6(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___U3CinternedBasedOnU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CinternedBasedOnU3E5__2_6))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CinternedBasedOnU3E5__2_6))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_7() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89, ___U3CU3E7__wrap2_7)); }
	inline Enumerator_tBC97DB5B6B5870EB975D595B3E8450E430C0A0E5  get_U3CU3E7__wrap2_7() const { return ___U3CU3E7__wrap2_7; }
	inline Enumerator_tBC97DB5B6B5870EB975D595B3E8450E430C0A0E5 * get_address_of_U3CU3E7__wrap2_7() { return &___U3CU3E7__wrap2_7; }
	inline void set_U3CU3E7__wrap2_7(Enumerator_tBC97DB5B6B5870EB975D595B3E8450E430C0A0E5  value)
	{
		___U3CU3E7__wrap2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap2_7))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap2_7))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap2_7))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap2_7))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_8() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89, ___U3CU3E7__wrap3_8)); }
	inline Enumerator_tA79D34AACF919BA3D1503DCC212621FFA3947536  get_U3CU3E7__wrap3_8() const { return ___U3CU3E7__wrap3_8; }
	inline Enumerator_tA79D34AACF919BA3D1503DCC212621FFA3947536 * get_address_of_U3CU3E7__wrap3_8() { return &___U3CU3E7__wrap3_8; }
	inline void set_U3CU3E7__wrap3_8(Enumerator_tA79D34AACF919BA3D1503DCC212621FFA3947536  value)
	{
		___U3CU3E7__wrap3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_8))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap3_8))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap3_8))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap3_8))->___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap4_9() { return static_cast<int32_t>(offsetof(U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89, ___U3CU3E7__wrap4_9)); }
	inline Enumerator_t86F084708DD8E20059734F3D16C77A4CE4C171D9  get_U3CU3E7__wrap4_9() const { return ___U3CU3E7__wrap4_9; }
	inline Enumerator_t86F084708DD8E20059734F3D16C77A4CE4C171D9 * get_address_of_U3CU3E7__wrap4_9() { return &___U3CU3E7__wrap4_9; }
	inline void set_U3CU3E7__wrap4_9(Enumerator_t86F084708DD8E20059734F3D16C77A4CE4C171D9  value)
	{
		___U3CU3E7__wrap4_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap4_9))->___dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap4_9))->___current_3))->___key_0))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E7__wrap4_9))->___current_3))->___key_0))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap4_9))->___current_3))->___value_1), (void*)NULL);
		#endif
	}
};


// System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75  : public NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD
{
public:

public:
};


// System.Nullable`1<Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration>
struct Nullable_1_t1C43E34A84CC448C979FE78D031D4C8400DF74AA 
{
public:
	// T System.Nullable`1::value
	SecureRemotingListenConfiguration_tCFDCBD0C4BF5BBE5A40DC2E193A098784B4DBAE9  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1C43E34A84CC448C979FE78D031D4C8400DF74AA, ___value_0)); }
	inline SecureRemotingListenConfiguration_tCFDCBD0C4BF5BBE5A40DC2E193A098784B4DBAE9  get_value_0() const { return ___value_0; }
	inline SecureRemotingListenConfiguration_tCFDCBD0C4BF5BBE5A40DC2E193A098784B4DBAE9 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(SecureRemotingListenConfiguration_tCFDCBD0C4BF5BBE5A40DC2E193A098784B4DBAE9  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___SubjectName_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___KeyPassphrase_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___ValidateAuthenticationTokenCallback_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1C43E34A84CC448C979FE78D031D4C8400DF74AA, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerable
struct ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerable::m_State
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerable::m_Parameter
	ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7  ___m_Parameter_1;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerable::m_MapIndex
	int32_t ___m_MapIndex_2;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13, ___m_State_0)); }
	inline InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parameter_1() { return static_cast<int32_t>(offsetof(ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13, ___m_Parameter_1)); }
	inline ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7  get_m_Parameter_1() const { return ___m_Parameter_1; }
	inline ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7 * get_address_of_m_Parameter_1() { return &___m_Parameter_1; }
	inline void set_m_Parameter_1(ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7  value)
	{
		___m_Parameter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Parameter_1))->___objectRegistrationName_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Parameter_1))->___parameter_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Parameter_1))->___bindingMask_2))->___m_Name_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Parameter_1))->___bindingMask_2))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Parameter_1))->___bindingMask_2))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Parameter_1))->___bindingMask_2))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Parameter_1))->___bindingMask_2))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Parameter_1))->___bindingMask_2))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Parameter_1))->___bindingMask_2))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Parameter_1))->___bindingMask_2))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Parameter_1))->___bindingMask_2))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_Parameter_1))->___bindingMask_2))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_MapIndex_2() { return static_cast<int32_t>(offsetof(ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13, ___m_MapIndex_2)); }
	inline int32_t get_m_MapIndex_2() const { return ___m_MapIndex_2; }
	inline int32_t* get_address_of_m_MapIndex_2() { return &___m_MapIndex_2; }
	inline void set_m_MapIndex_2(int32_t value)
	{
		___m_MapIndex_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerable
struct ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13_marshaled_pinvoke
{
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7_marshaled_pinvoke ___m_Parameter_1;
	int32_t ___m_MapIndex_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerable
struct ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13_marshaled_com
{
	InputActionState_tBAB20591FD6515A6FF5D70EF641A423E270A33F9 * ___m_State_0;
	ParameterOverride_tCD42C8DD25FE1912FF804959CF14F31924FB5DD7_marshaled_com ___m_Parameter_1;
	int32_t ___m_MapIndex_2;
};

// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ActionToRebind
	InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * ___m_ActionToRebind_1;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingMask
	Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07  ___m_BindingMask_2;
	// System.Type UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ControlType
	Type_t * ___m_ControlType_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExpectedLayout
	InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  ___m_ExpectedLayout_4;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePathCount
	int32_t ___m_IncludePathCount_5;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_IncludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_IncludePaths_6;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePathCount
	int32_t ___m_ExcludePathCount_7;
	// System.String[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_ExcludePaths
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_ExcludePaths_8;
	// System.Int32 UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_TargetBindingIndex
	int32_t ___m_TargetBindingIndex_9;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_BindingGroupForNewBinding
	String_t* ___m_BindingGroupForNewBinding_10;
	// System.String UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_CancelBinding
	String_t* ___m_CancelBinding_11;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_MagnitudeThreshold
	float ___m_MagnitudeThreshold_12;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Scores
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Scores_13;
	// System.Single[] UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Magnitudes
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_Magnitudes_14;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LastMatchTime
	double ___m_LastMatchTime_15;
	// System.Double UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartTime
	double ___m_StartTime_16;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Timeout
	float ___m_Timeout_17;
	// System.Single UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_WaitSecondsAfterMatch
	float ___m_WaitSecondsAfterMatch_18;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Candidates
	InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A  ___m_Candidates_19;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComplete
	Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * ___m_OnComplete_20;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnCancel
	Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * ___m_OnCancel_21;
	// System.Action`1<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnPotentialMatch
	Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * ___m_OnPotentialMatch_22;
	// System.Func`2<UnityEngine.InputSystem.InputControl,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnGeneratePath
	Func_2_tDFF7FD5F9307DD46AB85BF6531D2DB40FC0FA613 * ___m_OnGeneratePath_23;
	// System.Func`3<UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnComputeScore
	Func_3_t2C41859D084C543E2B0ABD59C126E950EBE553A9 * ___m_OnComputeScore_24;
	// System.Action`2<UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation,System.String> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnApplyBinding
	Action_2_tBB7AE204FD0C5FE10EC036638475EBCC10BF9B39 * ___m_OnApplyBinding_25;
	// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnEventDelegate
	Action_2_t18E7F4E321737EF92F70387314BC88164CA7B59C * ___m_OnEventDelegate_26;
	// System.Action UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_OnAfterUpdateDelegate
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___m_OnAfterUpdateDelegate_27;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_LayoutCache
	Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E  ___m_LayoutCache_28;
	// System.Text.StringBuilder UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_PathBuilder
	StringBuilder_t * ___m_PathBuilder_29;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation/Flags UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_Flags
	int32_t ___m_Flags_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.InputControl,System.Single> UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation::m_StartingActuations
	Dictionary_2_tD695848A44AF92EAFC286F58A272F421EA39D447 * ___m_StartingActuations_31;

public:
	inline static int32_t get_offset_of_m_ActionToRebind_1() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_ActionToRebind_1)); }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * get_m_ActionToRebind_1() const { return ___m_ActionToRebind_1; }
	inline InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B ** get_address_of_m_ActionToRebind_1() { return &___m_ActionToRebind_1; }
	inline void set_m_ActionToRebind_1(InputAction_t9AC3F79A5911EDC5CEB0BCD81640FDACA8DB0B0B * value)
	{
		___m_ActionToRebind_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionToRebind_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_2() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_BindingMask_2)); }
	inline Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07  get_m_BindingMask_2() const { return ___m_BindingMask_2; }
	inline Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07 * get_address_of_m_BindingMask_2() { return &___m_BindingMask_2; }
	inline void set_m_BindingMask_2(Nullable_1_t2055E88624438E34B0C4AEB7B387170528759E07  value)
	{
		___m_BindingMask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_2))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_ControlType_3() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_ControlType_3)); }
	inline Type_t * get_m_ControlType_3() const { return ___m_ControlType_3; }
	inline Type_t ** get_address_of_m_ControlType_3() { return &___m_ControlType_3; }
	inline void set_m_ControlType_3(Type_t * value)
	{
		___m_ControlType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlType_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExpectedLayout_4() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_ExpectedLayout_4)); }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  get_m_ExpectedLayout_4() const { return ___m_ExpectedLayout_4; }
	inline InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED * get_address_of_m_ExpectedLayout_4() { return &___m_ExpectedLayout_4; }
	inline void set_m_ExpectedLayout_4(InternedString_tA8F88C6E35F6EA6E9F774DC4DC7D003E1D6B4EED  value)
	{
		___m_ExpectedLayout_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ExpectedLayout_4))->___m_StringLowerCase_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_IncludePathCount_5() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_IncludePathCount_5)); }
	inline int32_t get_m_IncludePathCount_5() const { return ___m_IncludePathCount_5; }
	inline int32_t* get_address_of_m_IncludePathCount_5() { return &___m_IncludePathCount_5; }
	inline void set_m_IncludePathCount_5(int32_t value)
	{
		___m_IncludePathCount_5 = value;
	}

	inline static int32_t get_offset_of_m_IncludePaths_6() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_IncludePaths_6)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_IncludePaths_6() const { return ___m_IncludePaths_6; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_IncludePaths_6() { return &___m_IncludePaths_6; }
	inline void set_m_IncludePaths_6(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_IncludePaths_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IncludePaths_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ExcludePathCount_7() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_ExcludePathCount_7)); }
	inline int32_t get_m_ExcludePathCount_7() const { return ___m_ExcludePathCount_7; }
	inline int32_t* get_address_of_m_ExcludePathCount_7() { return &___m_ExcludePathCount_7; }
	inline void set_m_ExcludePathCount_7(int32_t value)
	{
		___m_ExcludePathCount_7 = value;
	}

	inline static int32_t get_offset_of_m_ExcludePaths_8() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_ExcludePaths_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_ExcludePaths_8() const { return ___m_ExcludePaths_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_ExcludePaths_8() { return &___m_ExcludePaths_8; }
	inline void set_m_ExcludePaths_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_ExcludePaths_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExcludePaths_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TargetBindingIndex_9() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_TargetBindingIndex_9)); }
	inline int32_t get_m_TargetBindingIndex_9() const { return ___m_TargetBindingIndex_9; }
	inline int32_t* get_address_of_m_TargetBindingIndex_9() { return &___m_TargetBindingIndex_9; }
	inline void set_m_TargetBindingIndex_9(int32_t value)
	{
		___m_TargetBindingIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_BindingGroupForNewBinding_10() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_BindingGroupForNewBinding_10)); }
	inline String_t* get_m_BindingGroupForNewBinding_10() const { return ___m_BindingGroupForNewBinding_10; }
	inline String_t** get_address_of_m_BindingGroupForNewBinding_10() { return &___m_BindingGroupForNewBinding_10; }
	inline void set_m_BindingGroupForNewBinding_10(String_t* value)
	{
		___m_BindingGroupForNewBinding_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroupForNewBinding_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CancelBinding_11() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_CancelBinding_11)); }
	inline String_t* get_m_CancelBinding_11() const { return ___m_CancelBinding_11; }
	inline String_t** get_address_of_m_CancelBinding_11() { return &___m_CancelBinding_11; }
	inline void set_m_CancelBinding_11(String_t* value)
	{
		___m_CancelBinding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CancelBinding_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_MagnitudeThreshold_12() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_MagnitudeThreshold_12)); }
	inline float get_m_MagnitudeThreshold_12() const { return ___m_MagnitudeThreshold_12; }
	inline float* get_address_of_m_MagnitudeThreshold_12() { return &___m_MagnitudeThreshold_12; }
	inline void set_m_MagnitudeThreshold_12(float value)
	{
		___m_MagnitudeThreshold_12 = value;
	}

	inline static int32_t get_offset_of_m_Scores_13() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_Scores_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Scores_13() const { return ___m_Scores_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Scores_13() { return &___m_Scores_13; }
	inline void set_m_Scores_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Scores_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Scores_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Magnitudes_14() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_Magnitudes_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_Magnitudes_14() const { return ___m_Magnitudes_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_Magnitudes_14() { return &___m_Magnitudes_14; }
	inline void set_m_Magnitudes_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_Magnitudes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Magnitudes_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastMatchTime_15() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_LastMatchTime_15)); }
	inline double get_m_LastMatchTime_15() const { return ___m_LastMatchTime_15; }
	inline double* get_address_of_m_LastMatchTime_15() { return &___m_LastMatchTime_15; }
	inline void set_m_LastMatchTime_15(double value)
	{
		___m_LastMatchTime_15 = value;
	}

	inline static int32_t get_offset_of_m_StartTime_16() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_StartTime_16)); }
	inline double get_m_StartTime_16() const { return ___m_StartTime_16; }
	inline double* get_address_of_m_StartTime_16() { return &___m_StartTime_16; }
	inline void set_m_StartTime_16(double value)
	{
		___m_StartTime_16 = value;
	}

	inline static int32_t get_offset_of_m_Timeout_17() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_Timeout_17)); }
	inline float get_m_Timeout_17() const { return ___m_Timeout_17; }
	inline float* get_address_of_m_Timeout_17() { return &___m_Timeout_17; }
	inline void set_m_Timeout_17(float value)
	{
		___m_Timeout_17 = value;
	}

	inline static int32_t get_offset_of_m_WaitSecondsAfterMatch_18() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_WaitSecondsAfterMatch_18)); }
	inline float get_m_WaitSecondsAfterMatch_18() const { return ___m_WaitSecondsAfterMatch_18; }
	inline float* get_address_of_m_WaitSecondsAfterMatch_18() { return &___m_WaitSecondsAfterMatch_18; }
	inline void set_m_WaitSecondsAfterMatch_18(float value)
	{
		___m_WaitSecondsAfterMatch_18 = value;
	}

	inline static int32_t get_offset_of_m_Candidates_19() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_Candidates_19)); }
	inline InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A  get_m_Candidates_19() const { return ___m_Candidates_19; }
	inline InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A * get_address_of_m_Candidates_19() { return &___m_Candidates_19; }
	inline void set_m_Candidates_19(InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A  value)
	{
		___m_Candidates_19 = value;
	}

	inline static int32_t get_offset_of_m_OnComplete_20() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnComplete_20)); }
	inline Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * get_m_OnComplete_20() const { return ___m_OnComplete_20; }
	inline Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 ** get_address_of_m_OnComplete_20() { return &___m_OnComplete_20; }
	inline void set_m_OnComplete_20(Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * value)
	{
		___m_OnComplete_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComplete_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnCancel_21() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnCancel_21)); }
	inline Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * get_m_OnCancel_21() const { return ___m_OnCancel_21; }
	inline Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 ** get_address_of_m_OnCancel_21() { return &___m_OnCancel_21; }
	inline void set_m_OnCancel_21(Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * value)
	{
		___m_OnCancel_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCancel_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnPotentialMatch_22() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnPotentialMatch_22)); }
	inline Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * get_m_OnPotentialMatch_22() const { return ___m_OnPotentialMatch_22; }
	inline Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 ** get_address_of_m_OnPotentialMatch_22() { return &___m_OnPotentialMatch_22; }
	inline void set_m_OnPotentialMatch_22(Action_1_t61BD3DFB9BC1BA4B424EA704CEA81D8C8D2F5B79 * value)
	{
		___m_OnPotentialMatch_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnPotentialMatch_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnGeneratePath_23() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnGeneratePath_23)); }
	inline Func_2_tDFF7FD5F9307DD46AB85BF6531D2DB40FC0FA613 * get_m_OnGeneratePath_23() const { return ___m_OnGeneratePath_23; }
	inline Func_2_tDFF7FD5F9307DD46AB85BF6531D2DB40FC0FA613 ** get_address_of_m_OnGeneratePath_23() { return &___m_OnGeneratePath_23; }
	inline void set_m_OnGeneratePath_23(Func_2_tDFF7FD5F9307DD46AB85BF6531D2DB40FC0FA613 * value)
	{
		___m_OnGeneratePath_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnGeneratePath_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnComputeScore_24() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnComputeScore_24)); }
	inline Func_3_t2C41859D084C543E2B0ABD59C126E950EBE553A9 * get_m_OnComputeScore_24() const { return ___m_OnComputeScore_24; }
	inline Func_3_t2C41859D084C543E2B0ABD59C126E950EBE553A9 ** get_address_of_m_OnComputeScore_24() { return &___m_OnComputeScore_24; }
	inline void set_m_OnComputeScore_24(Func_3_t2C41859D084C543E2B0ABD59C126E950EBE553A9 * value)
	{
		___m_OnComputeScore_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnComputeScore_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnApplyBinding_25() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnApplyBinding_25)); }
	inline Action_2_tBB7AE204FD0C5FE10EC036638475EBCC10BF9B39 * get_m_OnApplyBinding_25() const { return ___m_OnApplyBinding_25; }
	inline Action_2_tBB7AE204FD0C5FE10EC036638475EBCC10BF9B39 ** get_address_of_m_OnApplyBinding_25() { return &___m_OnApplyBinding_25; }
	inline void set_m_OnApplyBinding_25(Action_2_tBB7AE204FD0C5FE10EC036638475EBCC10BF9B39 * value)
	{
		___m_OnApplyBinding_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnApplyBinding_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnEventDelegate_26() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnEventDelegate_26)); }
	inline Action_2_t18E7F4E321737EF92F70387314BC88164CA7B59C * get_m_OnEventDelegate_26() const { return ___m_OnEventDelegate_26; }
	inline Action_2_t18E7F4E321737EF92F70387314BC88164CA7B59C ** get_address_of_m_OnEventDelegate_26() { return &___m_OnEventDelegate_26; }
	inline void set_m_OnEventDelegate_26(Action_2_t18E7F4E321737EF92F70387314BC88164CA7B59C * value)
	{
		___m_OnEventDelegate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnEventDelegate_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnAfterUpdateDelegate_27() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_OnAfterUpdateDelegate_27)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_m_OnAfterUpdateDelegate_27() const { return ___m_OnAfterUpdateDelegate_27; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_m_OnAfterUpdateDelegate_27() { return &___m_OnAfterUpdateDelegate_27; }
	inline void set_m_OnAfterUpdateDelegate_27(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___m_OnAfterUpdateDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnAfterUpdateDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_LayoutCache_28() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_LayoutCache_28)); }
	inline Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E  get_m_LayoutCache_28() const { return ___m_LayoutCache_28; }
	inline Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E * get_address_of_m_LayoutCache_28() { return &___m_LayoutCache_28; }
	inline void set_m_LayoutCache_28(Cache_tCCC71FFB1DEF56FF815ED5B09BB764EDB00EE82E  value)
	{
		___m_LayoutCache_28 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_LayoutCache_28))->___table_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_PathBuilder_29() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_PathBuilder_29)); }
	inline StringBuilder_t * get_m_PathBuilder_29() const { return ___m_PathBuilder_29; }
	inline StringBuilder_t ** get_address_of_m_PathBuilder_29() { return &___m_PathBuilder_29; }
	inline void set_m_PathBuilder_29(StringBuilder_t * value)
	{
		___m_PathBuilder_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PathBuilder_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_30() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_Flags_30)); }
	inline int32_t get_m_Flags_30() const { return ___m_Flags_30; }
	inline int32_t* get_address_of_m_Flags_30() { return &___m_Flags_30; }
	inline void set_m_Flags_30(int32_t value)
	{
		___m_Flags_30 = value;
	}

	inline static int32_t get_offset_of_m_StartingActuations_31() { return static_cast<int32_t>(offsetof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A, ___m_StartingActuations_31)); }
	inline Dictionary_2_tD695848A44AF92EAFC286F58A272F421EA39D447 * get_m_StartingActuations_31() const { return ___m_StartingActuations_31; }
	inline Dictionary_2_tD695848A44AF92EAFC286F58A272F421EA39D447 ** get_address_of_m_StartingActuations_31() { return &___m_StartingActuations_31; }
	inline void set_m_StartingActuations_31(Dictionary_2_tD695848A44AF92EAFC286F58A272F421EA39D447 * value)
	{
		___m_StartingActuations_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StartingActuations_31), (void*)value);
	}
};


// UnityEngine.InputSystem.InputControlPath/<Parse>d__33
struct U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.InputSystem.InputControlPath/ParsedPathComponent UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<>2__current
	ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838  ___U3CU3E2__current_1;
	// System.Int32 UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.String UnityEngine.InputSystem.InputControlPath/<Parse>d__33::path
	String_t* ___path_3;
	// System.String UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<>3__path
	String_t* ___U3CU3E3__path_4;
	// UnityEngine.InputSystem.InputControlPath/PathParser UnityEngine.InputSystem.InputControlPath/<Parse>d__33::<parser>5__2
	PathParser_tE41DE9EDE1038D22BC97195F752FC6DB2A090EFD  ___U3CparserU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F, ___U3CU3E2__current_1)); }
	inline ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(ParsedPathComponent_t66CA6341433EC984B5A351CC1A087BFBC3EB9838  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E2__current_1))->___m_Layout_0))->___m_String_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CU3E2__current_1))->___m_Usages_1))->___firstValue_1))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E2__current_1))->___m_Usages_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E2__current_1))->___m_Name_2))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E2__current_1))->___m_DisplayName_3))->___m_String_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___path_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__path_4() { return static_cast<int32_t>(offsetof(U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F, ___U3CU3E3__path_4)); }
	inline String_t* get_U3CU3E3__path_4() const { return ___U3CU3E3__path_4; }
	inline String_t** get_address_of_U3CU3E3__path_4() { return &___U3CU3E3__path_4; }
	inline void set_U3CU3E3__path_4(String_t* value)
	{
		___U3CU3E3__path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__path_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CparserU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F, ___U3CparserU3E5__2_5)); }
	inline PathParser_tE41DE9EDE1038D22BC97195F752FC6DB2A090EFD  get_U3CparserU3E5__2_5() const { return ___U3CparserU3E5__2_5; }
	inline PathParser_tE41DE9EDE1038D22BC97195F752FC6DB2A090EFD * get_address_of_U3CparserU3E5__2_5() { return &___U3CparserU3E5__2_5; }
	inline void set_U3CparserU3E5__2_5(PathParser_tE41DE9EDE1038D22BC97195F752FC6DB2A090EFD  value)
	{
		___U3CparserU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CparserU3E5__2_5))->___path_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CparserU3E5__2_5))->___current_4))->___m_Layout_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___U3CparserU3E5__2_5))->___current_4))->___m_Usages_1))->___firstValue_1))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CparserU3E5__2_5))->___current_4))->___m_Usages_1))->___additionalValues_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CparserU3E5__2_5))->___current_4))->___m_Name_2))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___U3CparserU3E5__2_5))->___current_4))->___m_DisplayName_3))->___m_String_0), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E 
{
public:
	// UnityEngine.InputSystem.InputControlScheme/MatchResult/Result UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Result
	int32_t ___m_Result_0;
	// System.Single UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Score
	float ___m_Score_1;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputDevice> UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Devices
	InputControlList_1_t9D0926F8AB5859C8767B43B76E6AC3847A5D7D02  ___m_Devices_2;
	// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Controls
	InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A  ___m_Controls_3;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme/MatchResult::m_Requirements
	DeviceRequirementU5BU5D_tBAAEA8AD0E93A8EF9DF98E9F4957B7A56286E795* ___m_Requirements_4;

public:
	inline static int32_t get_offset_of_m_Result_0() { return static_cast<int32_t>(offsetof(MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E, ___m_Result_0)); }
	inline int32_t get_m_Result_0() const { return ___m_Result_0; }
	inline int32_t* get_address_of_m_Result_0() { return &___m_Result_0; }
	inline void set_m_Result_0(int32_t value)
	{
		___m_Result_0 = value;
	}

	inline static int32_t get_offset_of_m_Score_1() { return static_cast<int32_t>(offsetof(MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E, ___m_Score_1)); }
	inline float get_m_Score_1() const { return ___m_Score_1; }
	inline float* get_address_of_m_Score_1() { return &___m_Score_1; }
	inline void set_m_Score_1(float value)
	{
		___m_Score_1 = value;
	}

	inline static int32_t get_offset_of_m_Devices_2() { return static_cast<int32_t>(offsetof(MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E, ___m_Devices_2)); }
	inline InputControlList_1_t9D0926F8AB5859C8767B43B76E6AC3847A5D7D02  get_m_Devices_2() const { return ___m_Devices_2; }
	inline InputControlList_1_t9D0926F8AB5859C8767B43B76E6AC3847A5D7D02 * get_address_of_m_Devices_2() { return &___m_Devices_2; }
	inline void set_m_Devices_2(InputControlList_1_t9D0926F8AB5859C8767B43B76E6AC3847A5D7D02  value)
	{
		___m_Devices_2 = value;
	}

	inline static int32_t get_offset_of_m_Controls_3() { return static_cast<int32_t>(offsetof(MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E, ___m_Controls_3)); }
	inline InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A  get_m_Controls_3() const { return ___m_Controls_3; }
	inline InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A * get_address_of_m_Controls_3() { return &___m_Controls_3; }
	inline void set_m_Controls_3(InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A  value)
	{
		___m_Controls_3 = value;
	}

	inline static int32_t get_offset_of_m_Requirements_4() { return static_cast<int32_t>(offsetof(MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E, ___m_Requirements_4)); }
	inline DeviceRequirementU5BU5D_tBAAEA8AD0E93A8EF9DF98E9F4957B7A56286E795* get_m_Requirements_4() const { return ___m_Requirements_4; }
	inline DeviceRequirementU5BU5D_tBAAEA8AD0E93A8EF9DF98E9F4957B7A56286E795** get_address_of_m_Requirements_4() { return &___m_Requirements_4; }
	inline void set_m_Requirements_4(DeviceRequirementU5BU5D_tBAAEA8AD0E93A8EF9DF98E9F4957B7A56286E795* value)
	{
		___m_Requirements_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Requirements_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E_marshaled_pinvoke
{
	int32_t ___m_Result_0;
	float ___m_Score_1;
	InputControlList_1_t9D0926F8AB5859C8767B43B76E6AC3847A5D7D02  ___m_Devices_2;
	InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A  ___m_Controls_3;
	DeviceRequirement_tAB27570ED81D24759C54FDE48B6DD74FF51649C9_marshaled_pinvoke* ___m_Requirements_4;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E_marshaled_com
{
	int32_t ___m_Result_0;
	float ___m_Score_1;
	InputControlList_1_t9D0926F8AB5859C8767B43B76E6AC3847A5D7D02  ___m_Devices_2;
	InputControlList_1_tCCB2EBF6FDF573DC316CABD9A44894F5CCEEAE4A  ___m_Controls_3;
	DeviceRequirement_tAB27570ED81D24759C54FDE48B6DD74FF51649C9_marshaled_com* ___m_Requirements_4;
};

// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36
struct U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>4__this
	MixedRealitySceneSystemProfile_tDBF05B14E290A07DB6DC58749ADA9F40000EBF87 * ___U3CU3E4__this_3;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::tag
	String_t* ___tag_4;
	// System.String Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>3__tag
	String_t* ___U3CU3E3__tag_5;
	// System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.SceneSystem.SceneInfo> Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36::<>7__wrap1
	Enumerator_t26BE053359A4F969987D878B8C712B2092D169FD  ___U3CU3E7__wrap1_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E, ___U3CU3E2__current_1)); }
	inline String_t* get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline String_t** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(String_t* value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E, ___U3CU3E4__this_3)); }
	inline MixedRealitySceneSystemProfile_tDBF05B14E290A07DB6DC58749ADA9F40000EBF87 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline MixedRealitySceneSystemProfile_tDBF05B14E290A07DB6DC58749ADA9F40000EBF87 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(MixedRealitySceneSystemProfile_tDBF05B14E290A07DB6DC58749ADA9F40000EBF87 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_tag_4() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E, ___tag_4)); }
	inline String_t* get_tag_4() const { return ___tag_4; }
	inline String_t** get_address_of_tag_4() { return &___tag_4; }
	inline void set_tag_4(String_t* value)
	{
		___tag_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__tag_5() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E, ___U3CU3E3__tag_5)); }
	inline String_t* get_U3CU3E3__tag_5() const { return ___U3CU3E3__tag_5; }
	inline String_t** get_address_of_U3CU3E3__tag_5() { return &___U3CU3E3__tag_5; }
	inline void set_U3CU3E3__tag_5(String_t* value)
	{
		___U3CU3E3__tag_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__tag_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E, ___U3CU3E7__wrap1_6)); }
	inline Enumerator_t26BE053359A4F969987D878B8C712B2092D169FD  get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline Enumerator_t26BE053359A4F969987D878B8C712B2092D169FD * get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(Enumerator_t26BE053359A4F969987D878B8C712B2092D169FD  value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap1_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_6))->___current_3))->___Name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_6))->___current_3))->___Path_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_6))->___current_3))->___Tag_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___U3CU3E7__wrap1_6))->___current_3))->___Asset_6), (void*)NULL);
		#endif
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
struct RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D 
{
public:
	// System.String Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::ListenInterface
	String_t* ___ListenInterface_0;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::HandshakeListenPort
	uint16_t ___HandshakeListenPort_1;
	// System.UInt16 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::TransportListenPort
	uint16_t ___TransportListenPort_2;
	// System.UInt32 Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::MaxBitrateKbps
	uint32_t ___MaxBitrateKbps_3;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingVideoCodec Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::VideoCodec
	int32_t ___VideoCodec_4;
	// System.Boolean Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::EnableAudio
	bool ___EnableAudio_5;
	// System.Nullable`1<Microsoft.MixedReality.OpenXR.Remoting.SecureRemotingListenConfiguration> Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration::secureListenConfiguration
	Nullable_1_t1C43E34A84CC448C979FE78D031D4C8400DF74AA  ___secureListenConfiguration_6;

public:
	inline static int32_t get_offset_of_ListenInterface_0() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D, ___ListenInterface_0)); }
	inline String_t* get_ListenInterface_0() const { return ___ListenInterface_0; }
	inline String_t** get_address_of_ListenInterface_0() { return &___ListenInterface_0; }
	inline void set_ListenInterface_0(String_t* value)
	{
		___ListenInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ListenInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_HandshakeListenPort_1() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D, ___HandshakeListenPort_1)); }
	inline uint16_t get_HandshakeListenPort_1() const { return ___HandshakeListenPort_1; }
	inline uint16_t* get_address_of_HandshakeListenPort_1() { return &___HandshakeListenPort_1; }
	inline void set_HandshakeListenPort_1(uint16_t value)
	{
		___HandshakeListenPort_1 = value;
	}

	inline static int32_t get_offset_of_TransportListenPort_2() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D, ___TransportListenPort_2)); }
	inline uint16_t get_TransportListenPort_2() const { return ___TransportListenPort_2; }
	inline uint16_t* get_address_of_TransportListenPort_2() { return &___TransportListenPort_2; }
	inline void set_TransportListenPort_2(uint16_t value)
	{
		___TransportListenPort_2 = value;
	}

	inline static int32_t get_offset_of_MaxBitrateKbps_3() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D, ___MaxBitrateKbps_3)); }
	inline uint32_t get_MaxBitrateKbps_3() const { return ___MaxBitrateKbps_3; }
	inline uint32_t* get_address_of_MaxBitrateKbps_3() { return &___MaxBitrateKbps_3; }
	inline void set_MaxBitrateKbps_3(uint32_t value)
	{
		___MaxBitrateKbps_3 = value;
	}

	inline static int32_t get_offset_of_VideoCodec_4() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D, ___VideoCodec_4)); }
	inline int32_t get_VideoCodec_4() const { return ___VideoCodec_4; }
	inline int32_t* get_address_of_VideoCodec_4() { return &___VideoCodec_4; }
	inline void set_VideoCodec_4(int32_t value)
	{
		___VideoCodec_4 = value;
	}

	inline static int32_t get_offset_of_EnableAudio_5() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D, ___EnableAudio_5)); }
	inline bool get_EnableAudio_5() const { return ___EnableAudio_5; }
	inline bool* get_address_of_EnableAudio_5() { return &___EnableAudio_5; }
	inline void set_EnableAudio_5(bool value)
	{
		___EnableAudio_5 = value;
	}

	inline static int32_t get_offset_of_secureListenConfiguration_6() { return static_cast<int32_t>(offsetof(RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D, ___secureListenConfiguration_6)); }
	inline Nullable_1_t1C43E34A84CC448C979FE78D031D4C8400DF74AA  get_secureListenConfiguration_6() const { return ___secureListenConfiguration_6; }
	inline Nullable_1_t1C43E34A84CC448C979FE78D031D4C8400DF74AA * get_address_of_secureListenConfiguration_6() { return &___secureListenConfiguration_6; }
	inline void set_secureListenConfiguration_6(Nullable_1_t1C43E34A84CC448C979FE78D031D4C8400DF74AA  value)
	{
		___secureListenConfiguration_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___secureListenConfiguration_6))->___value_0))->___SubjectName_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___secureListenConfiguration_6))->___value_0))->___KeyPassphrase_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___secureListenConfiguration_6))->___value_0))->___ValidateAuthenticationTokenCallback_3), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
#pragma pack(push, tp, 8)
struct RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D_marshaled_pinvoke
{
	char* ___ListenInterface_0;
	uint16_t ___HandshakeListenPort_1;
	uint16_t ___TransportListenPort_2;
	uint32_t ___MaxBitrateKbps_3;
	int32_t ___VideoCodec_4;
	int32_t ___EnableAudio_5;
	Nullable_1_t1C43E34A84CC448C979FE78D031D4C8400DF74AA  ___secureListenConfiguration_6;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration
#pragma pack(push, tp, 8)
struct RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D_marshaled_com
{
	Il2CppChar* ___ListenInterface_0;
	uint16_t ___HandshakeListenPort_1;
	uint16_t ___TransportListenPort_2;
	uint32_t ___MaxBitrateKbps_3;
	int32_t ___VideoCodec_4;
	int32_t ___EnableAudio_5;
	Nullable_1_t1C43E34A84CC448C979FE78D031D4C8400DF74AA  ___secureListenConfiguration_6;
};
#pragma pack(pop, tp)

// Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Listen>d__2
struct U3CListenU3Ed__2_tD4572815960C8640EF70FE83F0365CAC4CAD7106  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Listen>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Listen>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Action Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Listen>d__2::onRemotingListenCompleted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onRemotingListenCompleted_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Listen>d__2::listenConfiguration
	RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D  ___listenConfiguration_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__2_tD4572815960C8640EF70FE83F0365CAC4CAD7106, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__2_tD4572815960C8640EF70FE83F0365CAC4CAD7106, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_onRemotingListenCompleted_2() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__2_tD4572815960C8640EF70FE83F0365CAC4CAD7106, ___onRemotingListenCompleted_2)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onRemotingListenCompleted_2() const { return ___onRemotingListenCompleted_2; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onRemotingListenCompleted_2() { return &___onRemotingListenCompleted_2; }
	inline void set_onRemotingListenCompleted_2(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onRemotingListenCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRemotingListenCompleted_2), (void*)value);
	}

	inline static int32_t get_offset_of_listenConfiguration_3() { return static_cast<int32_t>(offsetof(U3CListenU3Ed__2_tD4572815960C8640EF70FE83F0365CAC4CAD7106, ___listenConfiguration_3)); }
	inline RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D  get_listenConfiguration_3() const { return ___listenConfiguration_3; }
	inline RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D * get_address_of_listenConfiguration_3() { return &___listenConfiguration_3; }
	inline void set_listenConfiguration_3(RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D  value)
	{
		___listenConfiguration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___listenConfiguration_3))->___ListenInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___listenConfiguration_3))->___secureListenConfiguration_6))->___value_0))->___SubjectName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___listenConfiguration_3))->___secureListenConfiguration_6))->___value_0))->___KeyPassphrase_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___listenConfiguration_3))->___secureListenConfiguration_6))->___value_0))->___ValidateAuthenticationTokenCallback_3), (void*)NULL);
		#endif
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__32
struct U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__32::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__32::<>4__this
	AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D * ___U3CU3E4__this_2;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__32::listenConfiguration
	RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D  ___listenConfiguration_3;
	// Microsoft.MixedReality.OpenXR.Remoting.ListenMode Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__32::listenMode
	int32_t ___listenMode_4;
	// System.Action Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__32::onRemotingListenCompleted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onRemotingListenCompleted_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4, ___U3CU3E4__this_2)); }
	inline AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_listenConfiguration_3() { return static_cast<int32_t>(offsetof(U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4, ___listenConfiguration_3)); }
	inline RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D  get_listenConfiguration_3() const { return ___listenConfiguration_3; }
	inline RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D * get_address_of_listenConfiguration_3() { return &___listenConfiguration_3; }
	inline void set_listenConfiguration_3(RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D  value)
	{
		___listenConfiguration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___listenConfiguration_3))->___ListenInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___listenConfiguration_3))->___secureListenConfiguration_6))->___value_0))->___SubjectName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___listenConfiguration_3))->___secureListenConfiguration_6))->___value_0))->___KeyPassphrase_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___listenConfiguration_3))->___secureListenConfiguration_6))->___value_0))->___ValidateAuthenticationTokenCallback_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_listenMode_4() { return static_cast<int32_t>(offsetof(U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4, ___listenMode_4)); }
	inline int32_t get_listenMode_4() const { return ___listenMode_4; }
	inline int32_t* get_address_of_listenMode_4() { return &___listenMode_4; }
	inline void set_listenMode_4(int32_t value)
	{
		___listenMode_4 = value;
	}

	inline static int32_t get_offset_of_onRemotingListenCompleted_5() { return static_cast<int32_t>(offsetof(U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4, ___onRemotingListenCompleted_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onRemotingListenCompleted_5() const { return ___onRemotingListenCompleted_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onRemotingListenCompleted_5() { return &___onRemotingListenCompleted_5; }
	inline void set_onRemotingListenCompleted_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onRemotingListenCompleted_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRemotingListenCompleted_5), (void*)value);
	}
};


// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenRoutine>d__30
struct U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenRoutine>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenRoutine>d__30::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Microsoft.MixedReality.OpenXR.Remoting.ListenMode Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenRoutine>d__30::listenMode
	int32_t ___listenMode_2;
	// Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenRoutine>d__30::<>4__this
	AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D * ___U3CU3E4__this_3;
	// Microsoft.MixedReality.OpenXR.Remoting.RemotingListenConfiguration Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenRoutine>d__30::listenConfiguration
	RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D  ___listenConfiguration_4;
	// System.Action Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenRoutine>d__30::onRemotingListenCompleted
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___onRemotingListenCompleted_5;
	// UnityEngine.WaitForSeconds Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenRoutine>d__30::<defaultWait>5__2
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___U3CdefaultWaitU3E5__2_6;
	// Microsoft.MixedReality.OpenXR.Remoting.ConnectionState Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenRoutine>d__30::<previousConnectionState>5__3
	int32_t ___U3CpreviousConnectionStateU3E5__3_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_listenMode_2() { return static_cast<int32_t>(offsetof(U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA, ___listenMode_2)); }
	inline int32_t get_listenMode_2() const { return ___listenMode_2; }
	inline int32_t* get_address_of_listenMode_2() { return &___listenMode_2; }
	inline void set_listenMode_2(int32_t value)
	{
		___listenMode_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA, ___U3CU3E4__this_3)); }
	inline AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(AppRemotingSubsystem_t548E39F8B0261EDC0019594C5240722B65AAD34D * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_listenConfiguration_4() { return static_cast<int32_t>(offsetof(U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA, ___listenConfiguration_4)); }
	inline RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D  get_listenConfiguration_4() const { return ___listenConfiguration_4; }
	inline RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D * get_address_of_listenConfiguration_4() { return &___listenConfiguration_4; }
	inline void set_listenConfiguration_4(RemotingListenConfiguration_t1C5375A543769D04B89B7B33FE8BB35E4F72073D  value)
	{
		___listenConfiguration_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___listenConfiguration_4))->___ListenInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___listenConfiguration_4))->___secureListenConfiguration_6))->___value_0))->___SubjectName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___listenConfiguration_4))->___secureListenConfiguration_6))->___value_0))->___KeyPassphrase_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___listenConfiguration_4))->___secureListenConfiguration_6))->___value_0))->___ValidateAuthenticationTokenCallback_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_onRemotingListenCompleted_5() { return static_cast<int32_t>(offsetof(U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA, ___onRemotingListenCompleted_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_onRemotingListenCompleted_5() const { return ___onRemotingListenCompleted_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_onRemotingListenCompleted_5() { return &___onRemotingListenCompleted_5; }
	inline void set_onRemotingListenCompleted_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___onRemotingListenCompleted_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onRemotingListenCompleted_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdefaultWaitU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA, ___U3CdefaultWaitU3E5__2_6)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_U3CdefaultWaitU3E5__2_6() const { return ___U3CdefaultWaitU3E5__2_6; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_U3CdefaultWaitU3E5__2_6() { return &___U3CdefaultWaitU3E5__2_6; }
	inline void set_U3CdefaultWaitU3E5__2_6(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___U3CdefaultWaitU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefaultWaitU3E5__2_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpreviousConnectionStateU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA, ___U3CpreviousConnectionStateU3E5__3_7)); }
	inline int32_t get_U3CpreviousConnectionStateU3E5__3_7() const { return ___U3CpreviousConnectionStateU3E5__3_7; }
	inline int32_t* get_address_of_U3CpreviousConnectionStateU3E5__3_7() { return &___U3CpreviousConnectionStateU3E5__3_7; }
	inline void set_U3CpreviousConnectionStateU3E5__3_7(int32_t value)
	{
		___U3CpreviousConnectionStateU3E5__3_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue);


// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::ReadAsync(Windows.Storage.Streams.IBuffer,System.UInt32,Windows.Storage.Streams.InputStreamOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, RuntimeObject* ___buffer0, uint32_t ___count1, uint32_t ___options2, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32> System.IO.NetFxToWinRtStreamAdapter::WriteAsync(Windows.Storage.Streams.IBuffer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, RuntimeObject* ___buffer0, const RuntimeMethod* method);
// Windows.Foundation.IAsyncOperation`1<System.Boolean> System.IO.NetFxToWinRtStreamAdapter::FlushAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Size_mFD8C8AF2B59C9B158F4FD5EC91CFAE7F33947EE3 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream::Windows.Storage.Streams.IRandomAccessStream.put_Size(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m9D2CE9CC6523D0D74FD43684002D590A4B9096BE (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __this, uint64_t ___value0, const RuntimeMethod* method);
// Windows.Storage.Streams.IInputStream System.IO.NetFxToWinRtStreamAdapter::GetInputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetInputStreamAt_m570BCD8F5293AC6BD7206B8F13641E09831A6BFC (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// Windows.Storage.Streams.IOutputStream System.IO.NetFxToWinRtStreamAdapter::GetOutputStreamAt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_GetOutputStreamAt_m6FD92CC3130BFC5290A86CFDAA1450B59FA3AB93 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// System.UInt64 System.IO.NetFxToWinRtStreamAdapter::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetFxToWinRtStreamAdapter_get_Position_m26FD8C0876A65ABDFF37AB9A53993EABC0EBECD1 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Void System.IO.NetFxToWinRtStreamAdapter::Seek(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, uint64_t ___position0, const RuntimeMethod* method);
// Windows.Storage.Streams.IRandomAccessStream System.IO.NetFxToWinRtStreamAdapter::CloneStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetFxToWinRtStreamAdapter_CloneStream_m880CA0AA9596D6A1122DBCC52F331185D25674C4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanRead_m511B6ED32D3ED2745BE81C0B0670A3B5696045A9 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);
// System.Boolean System.IO.NetFxToWinRtStreamAdapter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetFxToWinRtStreamAdapter_get_CanWrite_m96164AE9C8728C35995BB7E2E74B44314C7FC9C4 (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __this, const RuntimeMethod* method);

// COM Callable Wrapper for System.Diagnostics.Tracing.ActivityFilter/<GetFilterAsTuple>d__7
struct U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetFilterAsTupleU3Ed__7_t8130DC191707A022A6BE7222B5321AB979E5A491_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Connect>d__0
struct U3CConnectU3Ed__0_t30D06066C729541DBD520B821B3C962A95747185_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CConnectU3Ed__0_t30D06066C729541DBD520B821B3C962A95747185_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CConnectU3Ed__0_t30D06066C729541DBD520B821B3C962A95747185_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CConnectU3Ed__0_t30D06066C729541DBD520B821B3C962A95747185_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CConnectU3Ed__0_t30D06066C729541DBD520B821B3C962A95747185(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CConnectU3Ed__0_t30D06066C729541DBD520B821B3C962A95747185_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CConnectU3Ed__0_t30D06066C729541DBD520B821B3C962A95747185_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemoting/<Listen>d__2
struct U3CListenU3Ed__2_tD4572815960C8640EF70FE83F0365CAC4CAD7106_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CListenU3Ed__2_tD4572815960C8640EF70FE83F0365CAC4CAD7106_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CListenU3Ed__2_tD4572815960C8640EF70FE83F0365CAC4CAD7106_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CListenU3Ed__2_tD4572815960C8640EF70FE83F0365CAC4CAD7106_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CListenU3Ed__2_tD4572815960C8640EF70FE83F0365CAC4CAD7106(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CListenU3Ed__2_tD4572815960C8640EF70FE83F0365CAC4CAD7106_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CListenU3Ed__2_tD4572815960C8640EF70FE83F0365CAC4CAD7106_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectLegacy>d__29
struct U3CConnectLegacyU3Ed__29_t1A03D58ED8033961123557085C80E22F0F6E4FC8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CConnectLegacyU3Ed__29_t1A03D58ED8033961123557085C80E22F0F6E4FC8_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CConnectLegacyU3Ed__29_t1A03D58ED8033961123557085C80E22F0F6E4FC8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CConnectLegacyU3Ed__29_t1A03D58ED8033961123557085C80E22F0F6E4FC8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CConnectLegacyU3Ed__29_t1A03D58ED8033961123557085C80E22F0F6E4FC8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CConnectLegacyU3Ed__29_t1A03D58ED8033961123557085C80E22F0F6E4FC8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CConnectLegacyU3Ed__29_t1A03D58ED8033961123557085C80E22F0F6E4FC8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ConnectRoutine>d__27
struct U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CConnectRoutineU3Ed__27_tC0DEC438C5989CA41DD6352E24E3887CBBAEFBF1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<DisconnectAndStopXR>d__36
struct U3CDisconnectAndStopXRU3Ed__36_t075E11243F55343D259153CB2162A4EE7F6311E4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDisconnectAndStopXRU3Ed__36_t075E11243F55343D259153CB2162A4EE7F6311E4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDisconnectAndStopXRU3Ed__36_t075E11243F55343D259153CB2162A4EE7F6311E4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDisconnectAndStopXRU3Ed__36_t075E11243F55343D259153CB2162A4EE7F6311E4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDisconnectAndStopXRU3Ed__36_t075E11243F55343D259153CB2162A4EE7F6311E4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDisconnectAndStopXRU3Ed__36_t075E11243F55343D259153CB2162A4EE7F6311E4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDisconnectAndStopXRU3Ed__36_t075E11243F55343D259153CB2162A4EE7F6311E4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenLegacy>d__32
struct U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CListenLegacyU3Ed__32_tA5CF7A1EC253A84483E310CAE633C9CB0F4596D4_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.OpenXR.Remoting.AppRemotingSubsystem/<ListenRoutine>d__30
struct U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CListenRoutineU3Ed__30_tBD4FBC1AF272F3B42872723486768580DF6FEFAA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ArrayList/ReadOnlyArrayList
struct ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C_ComCallableWrapper>, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReadOnlyArrayList_t04F7885A1EAD601A3BC41F116B32946F692E592C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Reflection.Assembly/UnmanagedMemoryStreamForModule
struct UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnmanagedMemoryStreamForModule_tC10833E557EAF63A4AC57F9B6236EE5EB769FF44_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.Button/<OnFinishSubmit>d__9
struct U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3COnFinishSubmitU3Ed__9_t270CA6BB596B5C583A2E70FB6BED90A6D04C43C0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Character/<SetIdleTrigger>d__4
struct U3CSetIdleTriggerU3Ed__4_tB7F79AADAE56176F2C5B72C19559761D13157BC3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CSetIdleTriggerU3Ed__4_tB7F79AADAE56176F2C5B72C19559761D13157BC3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CSetIdleTriggerU3Ed__4_tB7F79AADAE56176F2C5B72C19559761D13157BC3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CSetIdleTriggerU3Ed__4_tB7F79AADAE56176F2C5B72C19559761D13157BC3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CSetIdleTriggerU3Ed__4_tB7F79AADAE56176F2C5B72C19559761D13157BC3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CSetIdleTriggerU3Ed__4_tB7F79AADAE56176F2C5B72C19559761D13157BC3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CSetIdleTriggerU3Ed__4_tB7F79AADAE56176F2C5B72C19559761D13157BC3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.WindowsDevicePortal.DevicePortal/BlankCertificateHandler
struct BlankCertificateHandler_t353CFCE10D94420CC49C99FC64BCD79BF9D47D84_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<BlankCertificateHandler_t353CFCE10D94420CC49C99FC64BCD79BF9D47D84_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline BlankCertificateHandler_t353CFCE10D94420CC49C99FC64BCD79BF9D47D84_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<BlankCertificateHandler_t353CFCE10D94420CC49C99FC64BCD79BF9D47D84_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_BlankCertificateHandler_t353CFCE10D94420CC49C99FC64BCD79BF9D47D84(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(BlankCertificateHandler_t353CFCE10D94420CC49C99FC64BCD79BF9D47D84_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) BlankCertificateHandler_t353CFCE10D94420CC49C99FC64BCD79BF9D47D84_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Dialog/<CloseDialog>d__11
struct U3CCloseDialogU3Ed__11_t966670EEC0E71441C46DA6850DAEE900561CC68E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCloseDialogU3Ed__11_t966670EEC0E71441C46DA6850DAEE900561CC68E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCloseDialogU3Ed__11_t966670EEC0E71441C46DA6850DAEE900561CC68E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCloseDialogU3Ed__11_t966670EEC0E71441C46DA6850DAEE900561CC68E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCloseDialogU3Ed__11_t966670EEC0E71441C46DA6850DAEE900561CC68E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCloseDialogU3Ed__11_t966670EEC0E71441C46DA6850DAEE900561CC68E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCloseDialogU3Ed__11_t966670EEC0E71441C46DA6850DAEE900561CC68E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Dialog/<OpenDialog>d__10
struct U3COpenDialogU3Ed__10_tFF24764BD6804F4E8976B10B0B7503A581B795B9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3COpenDialogU3Ed__10_tFF24764BD6804F4E8976B10B0B7503A581B795B9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3COpenDialogU3Ed__10_tFF24764BD6804F4E8976B10B0B7503A581B795B9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3COpenDialogU3Ed__10_tFF24764BD6804F4E8976B10B0B7503A581B795B9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3COpenDialogU3Ed__10_tFF24764BD6804F4E8976B10B0B7503A581B795B9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3COpenDialogU3Ed__10_tFF24764BD6804F4E8976B10B0B7503A581B795B9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3COpenDialogU3Ed__10_tFF24764BD6804F4E8976B10B0B7503A581B795B9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Dialog/<RunDialogOverTime>d__9
struct U3CRunDialogOverTimeU3Ed__9_tA05A12D02CFBF6E9ED04DEDD27530E2ADC70AEA3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CRunDialogOverTimeU3Ed__9_tA05A12D02CFBF6E9ED04DEDD27530E2ADC70AEA3_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CRunDialogOverTimeU3Ed__9_tA05A12D02CFBF6E9ED04DEDD27530E2ADC70AEA3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CRunDialogOverTimeU3Ed__9_tA05A12D02CFBF6E9ED04DEDD27530E2ADC70AEA3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CRunDialogOverTimeU3Ed__9_tA05A12D02CFBF6E9ED04DEDD27530E2ADC70AEA3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CRunDialogOverTimeU3Ed__9_tA05A12D02CFBF6E9ED04DEDD27530E2ADC70AEA3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CRunDialogOverTimeU3Ed__9_tA05A12D02CFBF6E9ED04DEDD27530E2ADC70AEA3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.Dropdown/<DelayedDestroyDropdownList>d__75
struct U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedDestroyDropdownListU3Ed__75_t66E97EB3DB330173C1EFE0905FC3CDF2AD15EB30_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.EventPayload/<GetEnumerator>d__17
struct U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__17_tDA663068CCAA29DFA4D785D25A8AF1F61E96F0DD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Diagnostics.Tracing.EventSource/OverideEventProvider
struct OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.FollowMeToggle/<AutoFollowDistanceCheck>d__37
struct U3CAutoFollowDistanceCheckU3Ed__37_t0AABC3BC24D5A9060D031375592C42BF0429DF71_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CAutoFollowDistanceCheckU3Ed__37_t0AABC3BC24D5A9060D031375592C42BF0429DF71_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CAutoFollowDistanceCheckU3Ed__37_t0AABC3BC24D5A9060D031375592C42BF0429DF71_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CAutoFollowDistanceCheckU3Ed__37_t0AABC3BC24D5A9060D031375592C42BF0429DF71_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CAutoFollowDistanceCheckU3Ed__37_t0AABC3BC24D5A9060D031375592C42BF0429DF71(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CAutoFollowDistanceCheckU3Ed__37_t0AABC3BC24D5A9060D031375592C42BF0429DF71_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CAutoFollowDistanceCheckU3Ed__37_t0AABC3BC24D5A9060D031375592C42BF0429DF71_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.GazeHandHelper/<GetAllHandPositions>d__11
struct U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetAllHandPositionsU3Ed__11_tB21A6154B7D3C77382DA4CEBE13584266AE80B16_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraint/<ToggleCursors>d__62
struct U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CToggleCursorsU3Ed__62_t487601D8BDF56F5A2B00B002F06AECD6BBCAFE77_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.Solvers.HandConstraintPalmUp/<WorldLockedReattachCheck>d__42
struct U3CWorldLockedReattachCheckU3Ed__42_t1E5C84581AB1220825479D498C6735230578CFD9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CWorldLockedReattachCheckU3Ed__42_t1E5C84581AB1220825479D498C6735230578CFD9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CWorldLockedReattachCheckU3Ed__42_t1E5C84581AB1220825479D498C6735230578CFD9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CWorldLockedReattachCheckU3Ed__42_t1E5C84581AB1220825479D498C6735230578CFD9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CWorldLockedReattachCheckU3Ed__42_t1E5C84581AB1220825479D498C6735230578CFD9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CWorldLockedReattachCheckU3Ed__42_t1E5C84581AB1220825479D498C6735230578CFD9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CWorldLockedReattachCheckU3Ed__42_t1E5C84581AB1220825479D498C6735230578CFD9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<FadeOutHint>d__45
struct U3CFadeOutHintU3Ed__45_tAD0C1A36C5C6C971282C271868731034BBC2C229_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFadeOutHintU3Ed__45_tAD0C1A36C5C6C971282C271868731034BBC2C229_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFadeOutHintU3Ed__45_tAD0C1A36C5C6C971282C271868731034BBC2C229_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFadeOutHintU3Ed__45_tAD0C1A36C5C6C971282C271868731034BBC2C229_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFadeOutHintU3Ed__45_tAD0C1A36C5C6C971282C271868731034BBC2C229(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFadeOutHintU3Ed__45_tAD0C1A36C5C6C971282C271868731034BBC2C229_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFadeOutHintU3Ed__45_tAD0C1A36C5C6C971282C271868731034BBC2C229_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.HandInteractionHint/<HintLoopSequence>d__46
struct U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CHintLoopSequenceU3Ed__46_t913D2CB16B43DFB778A196525096EAE45D333880_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Hashtable/KeyCollection
struct KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) KeyCollection_tD156AF123B81AE9183976AA8743E5D6B30030CCE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) SyncHashtable_t4F35FE38FB79C9F4C1F667D9DDD9836FA283841C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.IMECompositionString/Enumerator
struct Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_tB31D016A9DC5252EB3161BBACDE20D84B77482DD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionAsset/<GetEnumerator>d__31
struct U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetEnumeratorU3Ed__31_tAFDF29BC1C1607EAA5A6D27F4234AE404A31817F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionAsset/<get_bindings>d__8
struct U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_bindingsU3Ed__8_t44F18071E954ABA3E2BCF74BFF2F14AFEB6C4A81_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionRebindingExtensions/DeferBindingResolutionWrapper
struct DeferBindingResolutionWrapper_tE67305335B476E901F955C3DFFA4F42DEF4225BC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DeferBindingResolutionWrapper_tE67305335B476E901F955C3DFFA4F42DEF4225BC_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline DeferBindingResolutionWrapper_tE67305335B476E901F955C3DFFA4F42DEF4225BC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DeferBindingResolutionWrapper_tE67305335B476E901F955C3DFFA4F42DEF4225BC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DeferBindingResolutionWrapper_tE67305335B476E901F955C3DFFA4F42DEF4225BC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DeferBindingResolutionWrapper_tE67305335B476E901F955C3DFFA4F42DEF4225BC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DeferBindingResolutionWrapper_tE67305335B476E901F955C3DFFA4F42DEF4225BC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerable
struct ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ParameterEnumerable_t9B04D5E4EBD476F0D8EA134E1A4445D3C38A8E13_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterEnumerator
struct ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ParameterEnumerator_tD90A23BCB3BB0EAA374206F6408DD3CDA05ABC5A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionRebindingExtensions/RebindingOperation
struct RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RebindingOperation_t1BD8F65A827BF3A677F3B2108D295118ED5BF71A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputActionState/UnmanagedMemory
struct UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnmanagedMemory_tEFEC9104756D90F1ECBC9A1BFFBCDD0423D2DB79_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Utilities.InputActionTrace/Enumerator
struct Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t911E67F38E45C32C35E2F8FF6BB8063FF7EFE05F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.InputAnimation/<GetAllAnimationCurves>d__59
struct U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetAllAnimationCurvesU3Ed__59_tE948EA95B32B1B49ED9B00EC11FD9C71E4F63DA3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputBindingComposite/<GetPartNames>d__12
struct U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetPartNamesU3Ed__12_t8093CEE7CE538FBA597320873AE2E5067D5822B5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputBindingCompositeContext/<get_controls>d__2
struct U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_controlsU3Ed__2_t249033E1E2F1DFFCC90C4B7681FCDB137489C13E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlExtensions/<GetAllButtonPresses>d__43
struct U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetAllButtonPressesU3Ed__43_t83DF6FDE33D94709E45BFFD03C20FBBD4CFB5E53_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlExtensions/InputEventControlCollection
struct InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputEventControlCollection_t02135C9E4CC228A4B9E00140EFF489F1B8854978_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlExtensions/InputEventControlEnumerator
struct InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputEventControlEnumerator_t00A80AC85B1CD58B3BD8B2F5C075175699723F61_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputControlLayout/CacheRefInstance
struct CacheRefInstance_t32BCEBAA7826C9CBD6572CFFCA4732CC3FB7F749_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<CacheRefInstance_t32BCEBAA7826C9CBD6572CFFCA4732CC3FB7F749_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline CacheRefInstance_t32BCEBAA7826C9CBD6572CFFCA4732CC3FB7F749_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<CacheRefInstance_t32BCEBAA7826C9CBD6572CFFCA4732CC3FB7F749_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_CacheRefInstance_t32BCEBAA7826C9CBD6572CFFCA4732CC3FB7F749(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(CacheRefInstance_t32BCEBAA7826C9CBD6572CFFCA4732CC3FB7F749_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) CacheRefInstance_t32BCEBAA7826C9CBD6572CFFCA4732CC3FB7F749_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlPath/<Parse>d__33
struct U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CParseU3Ed__33_tED158D4238E353A3F0BEDC3D46D4958739E4293F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputControlScheme/MatchResult
struct MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) MatchResult_tB87B08CF46A07B0916A575EBC373FC406131649E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputDeviceBuilder/RefInstance
struct RefInstance_t644EB29D353013AE02C53F47A026FFEEBA232E6F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RefInstance_t644EB29D353013AE02C53F47A026FFEEBA232E6F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline RefInstance_t644EB29D353013AE02C53F47A026FFEEBA232E6F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RefInstance_t644EB29D353013AE02C53F47A026FFEEBA232E6F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RefInstance_t644EB29D353013AE02C53F47A026FFEEBA232E6F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RefInstance_t644EB29D353013AE02C53F47A026FFEEBA232E6F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RefInstance_t644EB29D353013AE02C53F47A026FFEEBA232E6F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.Layouts.InputDeviceMatcher/<get_patterns>d__4
struct U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816_ComCallableWrapper>, IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t6156BB07C03FE6B54DD7C3D8C67E40146401ABC2::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D(IIterator_1_t9BEB737EF2EB58AAD4CDAFC9AD9E4D31DAC5DB3C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m323E3C910DE7230170F3EFC117A0504558B8995D_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_patternsU3Ed__4_t6191EF324445918A4E234231F0240556B56CA816_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventBuffer/Enumerator
struct Enumerator_tD8A07122686F8093CC59FC43AE479C73D2B32313_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_tD8A07122686F8093CC59FC43AE479C73D2B32313_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_tD8A07122686F8093CC59FC43AE479C73D2B32313_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_tD8A07122686F8093CC59FC43AE479C73D2B32313_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_tD8A07122686F8093CC59FC43AE479C73D2B32313(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_tD8A07122686F8093CC59FC43AE479C73D2B32313_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_tD8A07122686F8093CC59FC43AE479C73D2B32313_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventListener/DisposableObserver
struct DisposableObserver_t3EA358A188D2946104E227EC7510A1247577761E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<DisposableObserver_t3EA358A188D2946104E227EC7510A1247577761E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline DisposableObserver_t3EA358A188D2946104E227EC7510A1247577761E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<DisposableObserver_t3EA358A188D2946104E227EC7510A1247577761E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_DisposableObserver_t3EA358A188D2946104E227EC7510A1247577761E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(DisposableObserver_t3EA358A188D2946104E227EC7510A1247577761E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) DisposableObserver_t3EA358A188D2946104E227EC7510A1247577761E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventTrace/Enumerator
struct Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_tDC926D70FAEB628CE95D05C8FF1E24E55664B143_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputEventTrace/ReplayController
struct ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReplayController_tB89A6FAB335193E670D3B2A1E84BB7F291060755_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.InputField/<CaretBlink>d__161
struct U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCaretBlinkU3Ed__161_tA860DFAB8E5BBF24FFD05F32A049BC7C482A4D52_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.InputField/<MouseDragOutsideRect>d__183
struct U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMouseDragOutsideRectU3Ed__183_t87DBEC74581DB3288A705C7B2B20718AAC7AA285_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputManager/<ListControlLayouts>d__75
struct U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CListControlLayoutsU3Ed__75_tA3D7E50B5429656CACEB609171EC221DD2A94B89_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.InputRemoting/Subscriber
struct Subscriber_t2FE8E62E94D1ECBB25A3D8579E3BEDF2A2890492_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Subscriber_t2FE8E62E94D1ECBB25A3D8579E3BEDF2A2890492_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Subscriber_t2FE8E62E94D1ECBB25A3D8579E3BEDF2A2890492_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Subscriber_t2FE8E62E94D1ECBB25A3D8579E3BEDF2A2890492_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Subscriber_t2FE8E62E94D1ECBB25A3D8579E3BEDF2A2890492(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Subscriber_t2FE8E62E94D1ECBB25A3D8579E3BEDF2A2890492_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Subscriber_t2FE8E62E94D1ECBB25A3D8579E3BEDF2A2890492_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.InputSystem.LowLevel.InputStateHistory/Enumerator
struct Enumerator_t3A3C0A8934B8EEA5C0CB34AD648C6A0EE599D85B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t3A3C0A8934B8EEA5C0CB34AD648C6A0EE599D85B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Enumerator_t3A3C0A8934B8EEA5C0CB34AD648C6A0EE599D85B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t3A3C0A8934B8EEA5C0CB34AD648C6A0EE599D85B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t3A3C0A8934B8EEA5C0CB34AD648C6A0EE599D85B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t3A3C0A8934B8EEA5C0CB34AD648C6A0EE599D85B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t3A3C0A8934B8EEA5C0CB34AD648C6A0EE599D85B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Interactable/<GlobalVisualReset>d__170
struct U3CGlobalVisualResetU3Ed__170_tB32189B67816EBAF3468BE9BC01B6D6437D3BCFB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGlobalVisualResetU3Ed__170_tB32189B67816EBAF3468BE9BC01B6D6437D3BCFB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGlobalVisualResetU3Ed__170_tB32189B67816EBAF3468BE9BC01B6D6437D3BCFB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGlobalVisualResetU3Ed__170_tB32189B67816EBAF3468BE9BC01B6D6437D3BCFB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGlobalVisualResetU3Ed__170_tB32189B67816EBAF3468BE9BC01B6D6437D3BCFB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGlobalVisualResetU3Ed__170_tB32189B67816EBAF3468BE9BC01B6D6437D3BCFB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGlobalVisualResetU3Ed__170_tB32189B67816EBAF3468BE9BC01B6D6437D3BCFB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.Interactable/<InputDownTimer>d__160
struct U3CInputDownTimerU3Ed__160_tD9B851156AFABB5E824680F9FA99847EC30FADF9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CInputDownTimerU3Ed__160_tD9B851156AFABB5E824680F9FA99847EC30FADF9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CInputDownTimerU3Ed__160_tD9B851156AFABB5E824680F9FA99847EC30FADF9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CInputDownTimerU3Ed__160_tD9B851156AFABB5E824680F9FA99847EC30FADF9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CInputDownTimerU3Ed__160_tD9B851156AFABB5E824680F9FA99847EC30FADF9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CInputDownTimerU3Ed__160_tD9B851156AFABB5E824680F9FA99847EC30FADF9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CInputDownTimerU3Ed__160_tD9B851156AFABB5E824680F9FA99847EC30FADF9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.UI.LayoutGroup/<DelayedSetDirty>d__56
struct U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayedSetDirtyU3Ed__56_tFC01B8A0930877A6B06D182C0DEA09660B57E7DE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Input.MixedRealityInputModule/<get_ActiveMixedRealityPointers>d__16
struct U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_ActiveMixedRealityPointersU3Ed__16_t8B10B75B86D3F1DAF33E4E5DF08F20E6E6907A1A_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardBase/<UpdateState>d__35
struct U3CUpdateStateU3Ed__35_t2A42A7C37B8DFAF01AC129E7A3D3E0FAEA78ED65_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CUpdateStateU3Ed__35_t2A42A7C37B8DFAF01AC129E7A3D3E0FAEA78ED65_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CUpdateStateU3Ed__35_t2A42A7C37B8DFAF01AC129E7A3D3E0FAEA78ED65_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CUpdateStateU3Ed__35_t2A42A7C37B8DFAF01AC129E7A3D3E0FAEA78ED65_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CUpdateStateU3Ed__35_t2A42A7C37B8DFAF01AC129E7A3D3E0FAEA78ED65(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CUpdateStateU3Ed__35_t2A42A7C37B8DFAF01AC129E7A3D3E0FAEA78ED65_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CUpdateStateU3Ed__35_t2A42A7C37B8DFAF01AC129E7A3D3E0FAEA78ED65_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Experimental.UI.MixedRealityKeyboardPreview/<BlinkCaret>d__20
struct U3CBlinkCaretU3Ed__20_tE309EFED3E00FC1FD9B26761A2636B24A5A51554_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CBlinkCaretU3Ed__20_tE309EFED3E00FC1FD9B26761A2636B24A5A51554_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CBlinkCaretU3Ed__20_tE309EFED3E00FC1FD9B26761A2636B24A5A51554_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CBlinkCaretU3Ed__20_tE309EFED3E00FC1FD9B26761A2636B24A5A51554_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CBlinkCaretU3Ed__20_tE309EFED3E00FC1FD9B26761A2636B24A5A51554(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CBlinkCaretU3Ed__20_tE309EFED3E00FC1FD9B26761A2636B24A5A51554_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CBlinkCaretU3Ed__20_tE309EFED3E00FC1FD9B26761A2636B24A5A51554_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.MixedRealityLineRenderer/<FadeLine>d__37
struct U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFadeLineU3Ed__37_t86BCBC32B4615BBD5ABA247030BCCE1498738076_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.MixedRealitySceneContent/<InitializeSceneContentWithDelay>d__9
struct U3CInitializeSceneContentWithDelayU3Ed__9_tB071DF720F4DB228E9EB79B7FE6CA9F4264EC710_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CInitializeSceneContentWithDelayU3Ed__9_tB071DF720F4DB228E9EB79B7FE6CA9F4264EC710_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CInitializeSceneContentWithDelayU3Ed__9_tB071DF720F4DB228E9EB79B7FE6CA9F4264EC710_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CInitializeSceneContentWithDelayU3Ed__9_tB071DF720F4DB228E9EB79B7FE6CA9F4264EC710_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CInitializeSceneContentWithDelayU3Ed__9_tB071DF720F4DB228E9EB79B7FE6CA9F4264EC710(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CInitializeSceneContentWithDelayU3Ed__9_tB071DF720F4DB228E9EB79B7FE6CA9F4264EC710_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CInitializeSceneContentWithDelayU3Ed__9_tB071DF720F4DB228E9EB79B7FE6CA9F4264EC710_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystem/<GetScenes>d__138
struct U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[1] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetScenesU3Ed__138_tEF29012F5FCA143AED8C3E4A0E3B82885D08CF96_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<GetContentSceneNamesByTag>d__36
struct U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E_ComCallableWrapper>, IIterable_1_t94592E586C395F026290ACC676E74C560595CC26, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t94592E586C395F026290ACC676E74C560595CC26*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(6);
		interfaceIds[0] = IIterable_1_t94592E586C395F026290ACC676E74C560595CC26::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IIterable_1_t05BE14C1DEA010486117E0E313F29EF024BDB2BF::IID;
		interfaceIds[4] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[5] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 6;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7(IIterator_1_t125F1266580B29D637CD7546CA3812EB7C0B0D9D** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m03F765E1BD333E4E315525DE80BF54183A4D54D7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87(IIterator_1_t966CEB5AF294B82E90C669B54974D432637938CF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD8D790F1EED3414261E3D73A15AA6B40BD8B4A87_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CGetContentSceneNamesByTagU3Ed__36_tDEAA9A6E0725E6D68573C96EB8FF2728B080DC7E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.SceneSystem.MixedRealitySceneSystemProfile/<get_PermittedLightingSceneComponentTypes>d__20
struct U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891_ComCallableWrapper>, IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t4D7C58066842A44A0C48B4D670B58E08F5C98872::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67(IIterator_1_t2CFACF402D9A2D616023D5DA34FDF5739B123E32** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mD436D926611E89172F9CCDB96214C201E7E6AE67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3Cget_PermittedLightingSceneComponentTypesU3Ed__20_t30E2189998274E8685665BA503B9C9CB0A6A4891_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<FollowSequence>d__31
struct U3CFollowSequenceU3Ed__31_t2E905CCE41800B0D81E0BBF73F7E22641810A717_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CFollowSequenceU3Ed__31_t2E905CCE41800B0D81E0BBF73F7E22641810A717_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CFollowSequenceU3Ed__31_t2E905CCE41800B0D81E0BBF73F7E22641810A717_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CFollowSequenceU3Ed__31_t2E905CCE41800B0D81E0BBF73F7E22641810A717_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CFollowSequenceU3Ed__31_t2E905CCE41800B0D81E0BBF73F7E22641810A717(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CFollowSequenceU3Ed__31_t2E905CCE41800B0D81E0BBF73F7E22641810A717_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CFollowSequenceU3Ed__31_t2E905CCE41800B0D81E0BBF73F7E22641810A717_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.UI.HandCoach.MoveToTarget/<MoveHintSequence>d__29
struct U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CMoveHintSequenceU3Ed__29_tE4FD12ED7473F399C220F14DCE6D519F4AE0D0A5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputOutputStream
struct InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;
		interfaceIds[2] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputOutputStream_t4B5B85F6BDC01DBCDF3B5F615D5B7CCBB0B425D7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/InputStream
struct InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2
{
	inline InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InputStream_tA3887A5BC412892DED73482ACEE2B5215E745249_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/OutputStream
struct OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) OutputStream_t1998B037EFA2AEB2B962ED1A04373110FC6EB789_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.IO.NetFxToWinRtStreamAdapter/RandomAccessStream
struct RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953, IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD
{
	inline RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;
		interfaceIds[1] = IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A::IID;
		interfaceIds[2] = IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2::IID;
		interfaceIds[3] = IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_mF9E844A817D64D4E78CD248CCBF6E07B77BCC3E6(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Size_mFD8C8AF2B59C9B158F4FD5EC91CFAE7F33947EE3(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m891818528BF8D69955CF27BC4D777FE8998159A7(uint64_t ___value0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 * __thisValue = (RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75 *)GetManagedObjectInline();
			RandomAccessStream_Windows_Storage_Streams_IRandomAccessStream_put_Size_m9D2CE9CC6523D0D74FD43684002D590A4B9096BE(__thisValue, ___value0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m9CC820A0D61D6396A06770F777B93F17F48195CB(uint64_t ___position0, IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetInputStreamAt_m570BCD8F5293AC6BD7206B8F13641E09831A6BFC(__thisValue, ___position0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IInputStream_t46D77C40CE44BF5C3DD6023FE88BCDEDFF469CE2>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetOutputStreamAt_m49D528CD63934AD30783BB759B104C80228DD023(uint64_t ___position0, IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_GetOutputStreamAt_m6FD92CC3130BFC5290A86CFDAA1450B59FA3AB93(__thisValue, ___position0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IOutputStream_t8D219F202CF583361E924773174B93D54F1DBBFD>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_mEBCDA9CD0B45E8C1F7A99E7B40277F0B73E772B3(uint64_t* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		uint64_t returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_Position_m26FD8C0876A65ABDFF37AB9A53993EABC0EBECD1(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m22E6D99C652709BF6A0BC31C53FCC63B528E998A(uint64_t ___position0) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			NetFxToWinRtStreamAdapter_Seek_mBC49312F09CDA8AECF50B9D7F761F4ADF42C5B7C(__thisValue, ___position0, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_CloneStream_mB8E84904911B293CCA5CB6420565DD027133866A(IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_CloneStream_m880CA0AA9596D6A1122DBCC52F331185D25674C4(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IRandomAccessStream_tDCB9A428BBF102A296B9FECF0A68EA792444395A>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_mAD979BED8B107A5A477E184F0A56C1C7880CF071(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanRead_m511B6ED32D3ED2745BE81C0B0670A3B5696045A9(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m3E677DD40D63CBE50AB0B17CEB72B8AFEC8D2146(bool* comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		bool returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_get_CanWrite_m96164AE9C8728C35995BB7E2E74B44314C7FC9C4(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		*comReturnValue = returnValue;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m0D2F91C5A51EB1AE5C1DBE7294381D13865E580B(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_ReadAsync_mB4E25DA1C9F7564B4CB7AF01F34651147748AFEC(__thisValue, ____buffer0_unmarshaled, ___count1, ___options2, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m8B510F24BFF6F7A2BC98F37DF8DADC69694ED30F(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC* ___buffer0, IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___buffer0' to managed representation
		RuntimeObject* ____buffer0_unmarshaled = NULL;
		if (___buffer0 != NULL)
		{
			____buffer0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___buffer0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____buffer0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____buffer0_unmarshaled), IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC::IID, ___buffer0);
			}
		}
		else
		{
			____buffer0_unmarshaled = NULL;
		}

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_WriteAsync_m9C20DDD1FCA106310464270C9DA4B9CF769B1DD4(__thisValue, ____buffer0_unmarshaled, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m36BD03B841D59D9168056963B19D19CD965A348C(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF** comReturnValue) IL2CPP_OVERRIDE
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Managed method invocation
		RuntimeObject* returnValue;
		try
		{
			NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD * __thisValue = (NetFxToWinRtStreamAdapter_t42169273B4B6144AD12AEDCCD5CB948EDCABB1DD *)GetManagedObjectInline();
			returnValue = NetFxToWinRtStreamAdapter_FlushAsync_m8C82E080CD97CAE110704BD8ACA926FA4E0BCE58(__thisValue, NULL);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			memset(comReturnValue, 0, sizeof(*comReturnValue));
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		// Marshaling of return value back from managed representation
		IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* _returnValue_marshaled = NULL;
		if (returnValue != NULL)
		{
			if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
			{
				_returnValue_marshaled = il2cpp_codegen_com_query_interface<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(static_cast<Il2CppComObject*>(returnValue));
				(_returnValue_marshaled)->AddRef();
			}
			else
			{
				_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF>(returnValue);
			}
		}
		else
		{
			_returnValue_marshaled = NULL;
		}

		*comReturnValue = _returnValue_marshaled;
		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) RandomAccessStream_t684E40DAD0E9AF90FDA0BB42D66C3BFD0BD2DD75_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Microsoft.MixedReality.Toolkit.Utilities.OBJWriterUtility/<CreateOBJFileContentAsync>d__1
struct U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CCreateOBJFileContentAsyncU3Ed__1_t515D92DA4F46A8346F662EF1132091E67774113E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UnityEngine.XR.OpenXR.OpenXRRestarter/<PauseAndRetryInitializationCoroutine>d__25
struct U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPauseAndRetryInitializationCoroutineU3Ed__25_t5405FE4D2FF5F60AF150344F4D9D952C60C3FA43_ComCallableWrapper(obj));
}
