#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Func`2<UnityEngine.Collider,System.Boolean>
struct Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Collider>
struct IEnumerable_1_t738A577130D5FBE55CDA8A3FF4898A00C43996CA;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding>
struct IEnumerable_1_tB0371F6D0932F0C778CAEED128603B65772AC357;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5197EB77176C670D4AAF5E0D1B4F1AB9940EFE41;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// Singleton`1<InputManager>
struct Singleton_1_tC95CB9586B859FC5907DA53C2C85B640D86A76BF;
// Singleton`1<System.Object>
struct Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6;
// Singleton`1<SwipeDetection>
struct Singleton_1_tE18E0C32FADF4693DACE737152A9957224BD4061;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Collections.Generic.List`1<System.Int32>[]
struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808;
// CoinBehaviour
struct CoinBehaviour_t4D2D5534D087D4FD2A65EFAEC8561029B4EB6C11;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Destroy
struct Destroy_t4F2B6B7FD5AFA77880F1040DBFD52453E63F3EA3;
// FollowPlayer
struct FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327;
// FollowPlayerMiddle
struct FollowPlayerMiddle_t4DDD2F62C3280D107B0F340B52FC95068F0733B2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOverUI
struct GameOverUI_tED6E1D9D1616BF7C870AEDB25B882281D25F4914;
// Graph
struct Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830;
// GroundSpawner
struct GroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F;
// GroundTileController
struct GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677;
// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayAudio
struct PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// RunX
struct RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A;
// SceneSwitcher
struct SceneSwitcher_t4BE0478E16D178567D51E0CB184D38BDE3E02602;
// ScenesManager
struct ScenesManager_tBBD076CC35D6593C519B25D4D40ECEEF8E04BCB0;
// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A;
// System.String
struct String_t;
// SwipeDetection
struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// InputManager/EndTouch
struct EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF;
// InputManager/StartTouch
struct StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerController/<>c
struct U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF;
// RunX/IPlayerActions
struct IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81;
// RunX/ITouchActions
struct ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13;
// RunX/IUIActions
struct IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9;
// SwipeDetection/OnSwipe
struct OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719;
IL2CPP_EXTERN_C String_t* _stringLiteral017B351DA3E50FAF2CFBB408359C6C0480F02932;
IL2CPP_EXTERN_C String_t* _stringLiteral0B73FE6990505A1E97D3823482C32B48ABAB7725;
IL2CPP_EXTERN_C String_t* _stringLiteral10C299ACC776829422581BC348DE826F47CB54C6;
IL2CPP_EXTERN_C String_t* _stringLiteral117C34CEF055E54D018BB5CB8A52E1D66434C6E6;
IL2CPP_EXTERN_C String_t* _stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
IL2CPP_EXTERN_C String_t* _stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7;
IL2CPP_EXTERN_C String_t* _stringLiteral461A093F9BFBD78740F342E0B30A6DF06561B24A;
IL2CPP_EXTERN_C String_t* _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC;
IL2CPP_EXTERN_C String_t* _stringLiteral5563685B258BC3652BDB4AE39657869034F72D23;
IL2CPP_EXTERN_C String_t* _stringLiteral575921BEB984F47FD5D4CD8DC79BD8243E7B01E3;
IL2CPP_EXTERN_C String_t* _stringLiteral61225B335304C6BE91EE0EC8CF385BBE9B633F17;
IL2CPP_EXTERN_C String_t* _stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC;
IL2CPP_EXTERN_C String_t* _stringLiteral6869F8E553A3C7B7CC72D23EE55C9C01C3DAE885;
IL2CPP_EXTERN_C String_t* _stringLiteral68E991B5616F5769AB6069C14D3F44D98828C2F9;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE9818FBE1F75FA47061FB4B741A6993CE76EE8;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteral9F84632196531FA2B3BB0B4225C53CDB837E9393;
IL2CPP_EXTERN_C String_t* _stringLiteral9FEFD136EF26D7B05E5CCF16376EF651CBFB5E2C;
IL2CPP_EXTERN_C String_t* _stringLiteralAA2ACAAC77884477FF705FAA326CAE0ACFAFB316;
IL2CPP_EXTERN_C String_t* _stringLiteralAD23F1807EC3F728BA43D64905EBF6D2F2B3660D;
IL2CPP_EXTERN_C String_t* _stringLiteralAF76631C9924DA21CC9961B508E27EB5D8012412;
IL2CPP_EXTERN_C String_t* _stringLiteralB502A186982A83A6C402B5753C1120061504E6EB;
IL2CPP_EXTERN_C String_t* _stringLiteralB80935B1DD74FC60370FA301285249DF5CD0ED8C;
IL2CPP_EXTERN_C String_t* _stringLiteralB867965FD962F18AFC6C6FF185255C7F50878999;
IL2CPP_EXTERN_C String_t* _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F;
IL2CPP_EXTERN_C String_t* _stringLiteralC63533D7E97B41EB9EC8122A46CB313BA2A0DDC4;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralF3391253AE1076B748993B88770C68B98D227011;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC918E2C44605F65E21B6918A5B6F1726CA9241CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputManager_U3CStartU3Eb__12_0_m43759EFB0CCF512F3ABD0F86BDFF6665D8E0924B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputManager_U3CStartU3Eb__12_1_m928629600C6F1D4C365A2AE7968CECE90CF65FF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m1BC890FC146C25EDDACB873857078051154142B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F_m9205F32EE322F20E42F9BCE657C26C880621EEF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerController_OnSwiped_m42305BF45F672DE34E147F2CC1EB7B2685031663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m0C269A9E77D99EE9AC32FC917A33FDB1A1A9DB5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_mCE16E429CF506B1E1533699E02F866FB87E2C250_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m36FBE196F0232CF27E95C5B0A4A933E9A125112B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m8751562A9E3DEF7AE6F982C78DE513F241285174_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SwipeDetection_SwipeEnd_mF370C0695FC78F9A340C283062DF5AF2DEFCFDFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SwipeDetection_SwipeStart_m527C1CFDF87E4472BA1CC899D3CA74A35034396E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CDieU3Eb__43_0_m483AAAE710C5D69A96C142FC818C3D9104D82548_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;

struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};
struct Il2CppArrayBounds;

// Graph
struct Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830  : public RuntimeObject
{
	// System.Int32 Graph::V
	int32_t ___V_0;
	// System.Int32 Graph::goal
	int32_t ___goal_1;
	// System.Boolean Graph::stop
	bool ___stop_2;
	// System.Collections.Generic.Stack`1<System.Int32> Graph::path
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___path_3;
	// System.Collections.Generic.List`1<System.Int32>[] Graph::adj
	List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* ___adj_4;
};

// RunX
struct RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A  : public RuntimeObject
{
	// UnityEngine.InputSystem.InputActionAsset RunX::<asset>k__BackingField
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap RunX::m_Player
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_Player_1;
	// RunX/IPlayerActions RunX::m_PlayerActionsCallbackInterface
	RuntimeObject* ___m_PlayerActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction RunX::m_Player_Move
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Player_Move_3;
	// UnityEngine.InputSystem.InputAction RunX::m_Player_Look
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Player_Look_4;
	// UnityEngine.InputSystem.InputAction RunX::m_Player_Fire
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Player_Fire_5;
	// UnityEngine.InputSystem.InputActionMap RunX::m_UI
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_UI_6;
	// RunX/IUIActions RunX::m_UIActionsCallbackInterface
	RuntimeObject* ___m_UIActionsCallbackInterface_7;
	// UnityEngine.InputSystem.InputAction RunX::m_UI_Navigate
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_Navigate_8;
	// UnityEngine.InputSystem.InputAction RunX::m_UI_Submit
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_Submit_9;
	// UnityEngine.InputSystem.InputAction RunX::m_UI_Cancel
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_Cancel_10;
	// UnityEngine.InputSystem.InputAction RunX::m_UI_Point
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_Point_11;
	// UnityEngine.InputSystem.InputAction RunX::m_UI_Click
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_Click_12;
	// UnityEngine.InputSystem.InputAction RunX::m_UI_ScrollWheel
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_ScrollWheel_13;
	// UnityEngine.InputSystem.InputAction RunX::m_UI_MiddleClick
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_MiddleClick_14;
	// UnityEngine.InputSystem.InputAction RunX::m_UI_RightClick
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_RightClick_15;
	// UnityEngine.InputSystem.InputAction RunX::m_UI_TrackedDevicePosition
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_TrackedDevicePosition_16;
	// UnityEngine.InputSystem.InputAction RunX::m_UI_TrackedDeviceOrientation
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_UI_TrackedDeviceOrientation_17;
	// UnityEngine.InputSystem.InputActionMap RunX::m_Touch
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_Touch_18;
	// RunX/ITouchActions RunX::m_TouchActionsCallbackInterface
	RuntimeObject* ___m_TouchActionsCallbackInterface_19;
	// UnityEngine.InputSystem.InputAction RunX::m_Touch_PrimaryContact
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Touch_PrimaryContact_20;
	// UnityEngine.InputSystem.InputAction RunX::m_Touch_PrimaryPosition
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Touch_PrimaryPosition_21;
	// System.Int32 RunX::m_KeyboardMouseSchemeIndex
	int32_t ___m_KeyboardMouseSchemeIndex_22;
	// System.Int32 RunX::m_GamepadSchemeIndex
	int32_t ___m_GamepadSchemeIndex_23;
	// System.Int32 RunX::m_TouchSchemeIndex
	int32_t ___m_TouchSchemeIndex_24;
	// System.Int32 RunX::m_JoystickSchemeIndex
	int32_t ___m_JoystickSchemeIndex_25;
	// System.Int32 RunX::m_XRSchemeIndex
	int32_t ___m_XRSchemeIndex_26;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// PlayerController/<>c
struct U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF  : public RuntimeObject
{
};

struct U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_StaticFields
{
	// PlayerController/<>c PlayerController/<>c::<>9
	U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF* ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Collider,System.Boolean> PlayerController/<>c::<>9__43_0
	Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* ___U3CU3E9__43_0_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
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
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
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
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
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

// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// RunX/PlayerActions
struct PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B 
{
	// RunX RunX/PlayerActions::m_Wrapper
	RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of RunX/PlayerActions
struct PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshaled_pinvoke
{
	RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___m_Wrapper_0;
};
// Native definition for COM marshalling of RunX/PlayerActions
struct PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshaled_com
{
	RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___m_Wrapper_0;
};

// RunX/TouchActions
struct TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 
{
	// RunX RunX/TouchActions::m_Wrapper
	RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of RunX/TouchActions
struct TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshaled_pinvoke
{
	RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___m_Wrapper_0;
};
// Native definition for COM marshalling of RunX/TouchActions
struct TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshaled_com
{
	RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___m_Wrapper_0;
};

// RunX/UIActions
struct UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9 
{
	// RunX RunX/UIActions::m_Wrapper
	RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___m_Wrapper_0;
};
// Native definition for P/Invoke marshalling of RunX/UIActions
struct UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshaled_pinvoke
{
	RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___m_Wrapper_0;
};
// Native definition for COM marshalling of RunX/UIActions
struct UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshaled_com
{
	RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___m_Wrapper_0;
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>
struct Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____current_3;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ReadOnlyArray_1_t21E90B3F1DF1E9A2088EA0523F03C47910735BCA ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___value_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// PlayerController/PlayerColliderInfo
struct PlayerColliderInfo_t30B5DF4FB8A7100FF8AB607D0CB851D759624B44 
{
	// System.Single PlayerController/PlayerColliderInfo::height
	float ___height_0;
	// UnityEngine.Vector3 PlayerController/PlayerColliderInfo::center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center_1;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction_6;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_ControlsForEachActionInitialized
	bool ___m_ControlsForEachActionInitialized_7;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_BindingsForEachActionInitialized
	bool ___m_BindingsForEachActionInitialized_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_9;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction_10;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_11;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_12;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_NeedToResolveBindings
	bool ___m_NeedToResolveBindings_13;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId_17;
};

struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
};

// UnityEngine.InputSystem.InputValue
struct InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231  : public RuntimeObject
{
	// System.Nullable`1<UnityEngine.InputSystem.InputAction/CallbackContext> UnityEngine.InputSystem.InputValue::m_Context
	Nullable_1_t69306F42657D3DC9EDCF5E87D81E582BDE7DAC42 ___m_Context_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.Collider,System.Boolean>
struct Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_t4B352E8DA73976FEDA107E35E81FB5BE6838C045* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionAsset::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_9;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// InputManager/EndTouch
struct EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF  : public MulticastDelegate_t
{
};

// InputManager/StartTouch
struct StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724  : public MulticastDelegate_t
{
};

// SwipeDetection/OnSwipe
struct OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CapsuleCollider
struct CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Singleton`1<InputManager>
struct Singleton_1_tC95CB9586B859FC5907DA53C2C85B640D86A76BF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_tC95CB9586B859FC5907DA53C2C85B640D86A76BF_StaticFields
{
	// T Singleton`1::_instance
	InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* ____instance_4;
};

// Singleton`1<SwipeDetection>
struct Singleton_1_tE18E0C32FADF4693DACE737152A9957224BD4061  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_tE18E0C32FADF4693DACE737152A9957224BD4061_StaticFields
{
	// T Singleton`1::_instance
	SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* ____instance_4;
};

// CoinBehaviour
struct CoinBehaviour_t4D2D5534D087D4FD2A65EFAEC8561029B4EB6C11  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CoinBehaviour::rotSpeed
	float ___rotSpeed_4;
};

// Destroy
struct Destroy_t4F2B6B7FD5AFA77880F1040DBFD52453E63F3EA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// FollowPlayer
struct FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FollowPlayer::m_PlayerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_PlayerTransform_4;
	// System.Single FollowPlayer::m_CameraOffsetZ
	float ___m_CameraOffsetZ_5;
};

// FollowPlayerMiddle
struct FollowPlayerMiddle_t4DDD2F62C3280D107B0F340B52FC95068F0733B2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform FollowPlayerMiddle::m_PlayerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_PlayerTransform_4;
};

// GameOverUI
struct GameOverUI_tED6E1D9D1616BF7C870AEDB25B882281D25F4914  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GroundSpawner
struct GroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GroundSpawner::groundTile
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___groundTile_4;
	// System.Int32 GroundSpawner::tileNumber
	int32_t ___tileNumber_5;
	// UnityEngine.Vector3 GroundSpawner::nextGroundSpawnPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextGroundSpawnPoint_6;
};

// GroundTileController
struct GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GroundSpawner GroundTileController::groundSpawner
	GroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F* ___groundSpawner_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GroundTileController::Obstacles
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___Obstacles_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GroundTileController::Collectibles
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___Collectibles_6;
	// UnityEngine.Renderer GroundTileController::platformRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___platformRenderer_7;
	// System.Int32 GroundTileController::numberOfObstaclesToSpawn
	int32_t ___numberOfObstaclesToSpawn_8;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> GroundTileController::Spawns
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___Spawns_9;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> GroundTileController::CollectibleSpawns
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___CollectibleSpawns_10;
	// System.Collections.Generic.List`1<System.Byte> GroundTileController::SpawnsForCollectibles
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___SpawnsForCollectibles_11;
};

// PlayAudio
struct PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlayAudio::audioObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___audioObj_4;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SwipeDetection PlayerController::swipeDetection
	SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* ___swipeDetection_4;
	// System.Boolean PlayerController::alive
	bool ___alive_5;
	// GameOverUI PlayerController::GameOverUI
	GameOverUI_tED6E1D9D1616BF7C870AEDB25B882281D25F4914* ___GameOverUI_6;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_7;
	// System.Single PlayerController::fwdForce
	float ___fwdForce_8;
	// System.Single PlayerController::fwdForceCap
	float ___fwdForceCap_9;
	// System.Single PlayerController::sideForce
	float ___sideForce_10;
	// System.Single PlayerController::jumpSpeed
	float ___jumpSpeed_11;
	// System.Single PlayerController::m_SwipeMovementOnX
	float ___m_SwipeMovementOnX_12;
	// UnityEngine.LayerMask PlayerController::groundLayers
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundLayers_13;
	// UnityEngine.Transform PlayerController::feetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___feetTransform_14;
	// System.Single PlayerController::targetFwdSpeed
	float ___targetFwdSpeed_15;
	// UnityEngine.Animator PlayerController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_16;
	// UnityEngine.Collider PlayerController::mainCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___mainCollider_17;
	// System.Single PlayerController::movementX
	float ___movementX_18;
	// System.Single PlayerController::movementY
	float ___movementY_19;
	// UnityEngine.Vector3 PlayerController::m_RunAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RunAxis_20;
	// System.Boolean PlayerController::isDoingMovementFromInput
	bool ___isDoingMovementFromInput_21;
	// System.Boolean PlayerController::<shouldContinueMoving>k__BackingField
	bool ___U3CshouldContinueMovingU3Ek__BackingField_22;
	// UnityEngine.CapsuleCollider PlayerController::playerCollider
	CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* ___playerCollider_23;
	// PlayerController/PlayerColliderInfo PlayerController::playerColliderInfo
	PlayerColliderInfo_t30B5DF4FB8A7100FF8AB607D0CB851D759624B44 ___playerColliderInfo_25;
};

// SceneSwitcher
struct SceneSwitcher_t4BE0478E16D178567D51E0CB184D38BDE3E02602  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SceneSwitcher::optionsScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___optionsScreen_4;
};

// ScenesManager
struct ScenesManager_tBBD076CC35D6593C519B25D4D40ECEEF8E04BCB0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Score
struct Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Score::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_4;
	// TMPro.TextMeshProUGUI Score::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_5;
	// System.Int32 Score::zOffset
	int32_t ___zOffset_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// InputManager
struct InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677  : public Singleton_1_tC95CB9586B859FC5907DA53C2C85B640D86A76BF
{
	// InputManager/StartTouch InputManager::OnStartTouch
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___OnStartTouch_5;
	// InputManager/EndTouch InputManager::OnEndTouch
	EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* ___OnEndTouch_6;
	// RunX InputManager::playerControls
	RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___playerControls_7;
};

// SwipeDetection
struct SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62  : public Singleton_1_tE18E0C32FADF4693DACE737152A9957224BD4061
{
	// SwipeDetection/OnSwipe SwipeDetection::OnSwiped
	OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* ___OnSwiped_5;
	// System.Single SwipeDetection::minimumDistance
	float ___minimumDistance_6;
	// System.Single SwipeDetection::maximumTime
	float ___maximumTime_7;
	// System.Single SwipeDetection::directionThreshold
	float ___directionThreshold_8;
	// InputManager SwipeDetection::inputManager
	InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* ___inputManager_9;
	// UnityEngine.Vector2 SwipeDetection::startPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition_10;
	// System.Single SwipeDetection::startTime
	float ___startTime_11;
	// UnityEngine.Vector2 SwipeDetection::endPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endPosition_12;
	// System.Single SwipeDetection::endTime
	float ___endTime_13;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Collections.Generic.List`1<System.Int32>[]
struct List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206  : public RuntimeArray
{
	ALIGN_FIELD (8) List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* m_Items[1];

	inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649  : public RuntimeArray
{
	ALIGN_FIELD (8) Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* m_Items[1];

	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared (Singleton_1_t761811FA61B8CEAEB90FA0D60BD999994A7FE1E6* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_gshared (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_m1E7538A5B8DECDF0740EF37390595FD4356B31FB_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mE974DCECE6BCBB030F70F1618B707F587B99BDB4_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m1BC890FC146C25EDDACB873857078051154142B6_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, uint8_t ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_gshared_inline (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_gshared (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_gshared (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Boolean>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFB5D0E2E6DFBCF20D8F9AD194B4B347140018C9A_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___selector1, const RuntimeMethod* method) ;

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void RunX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunX__ctor_mB9547A051DFD1610623673A2505C357F2D879260 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) ;
// System.Void RunX::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunX_Enable_mC7BF56CE60F893C2912EC496F331A7A7087C2F3D (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) ;
// System.Void RunX::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunX_Disable_m221A15CF7F11597BA7FF8836116BD6FC25D41CB0 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) ;
// RunX/TouchActions RunX::get_Touch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 RunX_get_Touch_m1665A4EED74E43C1D1AF6753B295519AD6F46AC4 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/TouchActions::get_PrimaryContact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchActions_get_PrimaryContact_mE1E5FCF6E40A0C866EB2DD057649A34A439CD2F5 (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/TouchActions::get_PrimaryPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_gshared)(__this, method);
}
// System.Double UnityEngine.InputSystem.InputAction/CallbackContext::get_startTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CallbackContext_get_startTime_m6F0F9C2CF03CDEFFE81F2E54636A465221AFD39B (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Void InputManager/StartTouch::Invoke(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_inline (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) ;
// System.Double UnityEngine.InputSystem.InputAction/CallbackContext::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CallbackContext_get_time_m411EBA76522616EF38FD78341B246EEF94908050 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Void InputManager/EndTouch::Invoke(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_inline (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void Singleton`1<InputManager>::.ctor()
inline void Singleton_1__ctor_m0C269A9E77D99EE9AC32FC917A33FDB1A1A9DB5C (Singleton_1_tC95CB9586B859FC5907DA53C2C85B640D86A76BF* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tC95CB9586B859FC5907DA53C2C85B640D86A76BF*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// System.Void InputManager::StartTouchPrimary(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_StartTouchPrimary_m50149D9CF1159A34374E58F53EED4FDAA32ECC7F (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) ;
// System.Void InputManager::EndTouchPrimary(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_EndTouchPrimary_mF295B8BC8DD4157F2024A73A5AED591474F595E2 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* InputActionAsset_FromJson_mA8AF88895F49DB0F0BAB47B60744E927E6234347 (String_t* ___json0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionAsset RunX::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) ;
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> RunX::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RunX_GetEnumerator_mA8DD47481D29C545653E66982A182B9D049964F4 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionAsset::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5 (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___mask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) ;
// System.Void RunX/PlayerActions::.ctor(RunX)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions__ctor_mE8493220BC47720DA959FF9F560A5508D41F10ED (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___wrapper0, const RuntimeMethod* method) ;
// System.Void RunX/UIActions::.ctor(RunX)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions__ctor_m6E5057848CE77B87279346D9B09429C01FD772B2 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___wrapper0, const RuntimeMethod* method) ;
// System.Void RunX/TouchActions::.ctor(RunX)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions__ctor_mA81FEC30D9503A85BF6CFF9004852C5E00FF0050 (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___wrapper0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindControlSchemeIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, String_t* ___name0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>::get_Item(System.Int32)
inline InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 (*) (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9*, int32_t, const RuntimeMethod*))ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_gshared)(__this, ___index0, method);
}
// UnityEngine.InputSystem.InputAction RunX/PlayerActions::get_Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Move_mD9D39BC7F3140E5AE940EE2ACCD269037072DE5B (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/PlayerActions::get_Look()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Look_mDA8FD77B60EBD93C091C23BA8B7722D091E475F8 (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/PlayerActions::get_Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Fire_m92A2148B9DA03414B730D9DA4C01ED6B477233E3 (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap RunX/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_m532DE60BE21E4EF036E21D5A369B7F8FBB4750FA (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void RunX/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_m91F273E35E0D8F8DB225591CD4BF2086BE9299EB (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Void RunX/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_mF32C453F41DA39E63AE47EF6440A40976D11D998 (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888 (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Boolean RunX/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_m334A8B6896C31D03AFA339840934C929310340BD (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___value0, const RuntimeMethod* method) ;
// System.Void RunX/PlayerActions::SetCallbacks(RunX/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_mCED8917C981C28B8A548980529CF4885A2902165 (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_Navigate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Navigate_m5E3D5DA309F19965AD6670C9C497667A4608FB1E (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_Submit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Submit_mDEEFF4A8B489EBDABB16AB17488AF49DF4F1C682 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Cancel_m7CE0966052774A10D21C7AC7C5B203A5EF5042C9 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_Point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Point_m88F46B6B2F9F3472159CD9BDB6CD7ADDC5B9DFF4 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Click_m02A130C5FF3782C4AEC725836F08E6098BE88CF5 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_ScrollWheel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_ScrollWheel_m17D5EBF68D38EA876470E24559BE53455CA061E5 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_MiddleClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_MiddleClick_mD5A9D35CB1BADEF0B0AC8A1A1B20B3C1163AEA8C (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_RightClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_RightClick_m908917897DAA4254300BC1A269C343892269A7AB (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_TrackedDevicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_TrackedDevicePosition_m4E060E76211F36EBDDC7D6151B92397F18130DB1 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_TrackedDeviceOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_TrackedDeviceOrientation_mA268A9A0D30918414AF788E0E2240022926B0045 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap RunX/UIActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* UIActions_Get_mCD3D84F0258695C21A924EF4774C62A84DBEC035 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// System.Void RunX/UIActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions_Enable_mFA062A49DA268EEEFE68C24A51710A6FFCF5F9F9 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// System.Void RunX/UIActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions_Disable_mE901D9E2D350150894FB51D4E28B5884ACCBDF4D (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// System.Boolean RunX/UIActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIActions_get_enabled_mB974FE74C312CA1AECB4E6D976809D1E5BE66E22 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) ;
// System.Void RunX/UIActions::SetCallbacks(RunX/IUIActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions_SetCallbacks_mAFDBF7619EAB912946332A32D3861140EC8782D5 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap RunX/TouchActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* TouchActions_Get_mE964BE0B8362B644CFACC854F6D8F5FAD3F635F6 (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, const RuntimeMethod* method) ;
// System.Void RunX/TouchActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_Enable_m14BBFFB5841D5D7C9FBF96DBCB5C3950EDE5192E (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, const RuntimeMethod* method) ;
// System.Void RunX/TouchActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_Disable_m01F79834A51BFFC467A10D6C53B072789CF5C98A (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, const RuntimeMethod* method) ;
// System.Boolean RunX/TouchActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchActions_get_enabled_mBD0F2DF07AFC2F1C7DA4BCBD34BA75169474DCA5 (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, const RuntimeMethod* method) ;
// System.Void RunX/TouchActions::SetCallbacks(RunX/ITouchActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_SetCallbacks_m51D56350875C81B775AB4D21932C1D992F5A142D (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) ;
// T Singleton`1<InputManager>::get_Instance()
inline InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* Singleton_1_get_Instance_m36FBE196F0232CF27E95C5B0A4A933E9A125112B (const RuntimeMethod* method)
{
	return ((  InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1E7538A5B8DECDF0740EF37390595FD4356B31FB_gshared)(method);
}
// System.Void InputManager/StartTouch::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681 (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void InputManager::add_OnStartTouch(InputManager/StartTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_OnStartTouch_m1DAD2428CE07F0BFA30FEC49379C8F7319C6B200 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___value0, const RuntimeMethod* method) ;
// System.Void InputManager/EndTouch::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndTouch__ctor_mD21EDADCF61BDC23ADF93F9F310D782576FB8FCB (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void InputManager::add_OnEndTouch(InputManager/EndTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_OnEndTouch_m779CA21D9F800F84E3813C17A4E5B19C4F59AEDF (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* ___value0, const RuntimeMethod* method) ;
// System.Void InputManager::remove_OnStartTouch(InputManager/StartTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_OnStartTouch_m511913C65F89842DD4637D9920433F1BF01E4267 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___value0, const RuntimeMethod* method) ;
// System.Void InputManager::remove_OnEndTouch(InputManager/EndTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_OnEndTouch_mECCA403B9EE10D0B24A81D4DAD3D588EF3E5DBFB (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void SwipeDetection::DetectSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_DetectSwipe_mD6AC075DC5A5C380C502DA4A8547C66869ADA34E (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m07A0411487CA5ED1E1DB3093E9E326F70B9A16FD (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, float ___duration3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 SwipeDetection::SwipeDirection(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SwipeDetection_SwipeDirection_m1BC47B4930FC3C7F9292A73C58E212C41EECC0DE (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method) ;
// System.Void SwipeDetection/OnSwipe::Invoke(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSwipe_Invoke_mC08E630BF82A715E9F3C76B7E88D8CC832E68AC8_inline (OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m744DCF40A3F17B76B9C084145D6E66AC0DE3D5CD_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m9D9A16C5D268435428ADF448F6B5E8C1EC3A57B4_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline (const RuntimeMethod* method) ;
// System.Void Singleton`1<SwipeDetection>::.ctor()
inline void Singleton_1__ctor_mCE16E429CF506B1E1533699E02F866FB87E2C250 (Singleton_1_tE18E0C32FADF4693DACE737152A9957224BD4061* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tE18E0C32FADF4693DACE737152A9957224BD4061*, const RuntimeMethod*))Singleton_1__ctor_mD821C051D84F31B82CD3EC80D5174ADD3F038B14_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAroundLocal(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAroundLocal_mB890772B81D610C4B5190945078E497C4BD20E43 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Transform>()
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
inline void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
inline void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, int32_t, const RuntimeMethod*))Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline)(__this, method);
}
// System.Void Graph::DFSUtil(System.Int32,System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_DFSUtil_mE9699C804B340EDF077ECC44130095576B413859 (Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* __this, int32_t ___v0, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___visited1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared)(__this, method);
}
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
inline int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void GroundSpawner::SpawnTile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundSpawner_SpawnTile_m39DB4B0D0382E2B0ACE5205715C75EA693A77D0A (GroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<GroundSpawner>()
inline GroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F* Object_FindObjectOfType_TisGroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F_m9205F32EE322F20E42F9BCE657C26C880621EEF9 (const RuntimeMethod* method)
{
	return ((  GroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void GroundTileController::SpawnObstacles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_SpawnObstacles_mE168030AFBE95AD28213049BA1DE637BBCA9466A (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<System.Byte>::get_Item(System.Int32)
inline uint8_t List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, int32_t, const RuntimeMethod*))List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_gshared)(__this, ___index0, method);
}
// UnityEngine.GameObject GroundTileController::GetRandomObstacle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GroundTileController_GetRandomObstacle_m64E3B5027E04A4047737FD712E81532A07D3E91F (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810 (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, int32_t, const RuntimeMethod*))List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_gshared)(__this, ___index0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mE974DCECE6BCBB030F70F1618B707F587B99BDB4_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// UnityEngine.GameObject GroundTileController::GetRandomRangeObstacle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GroundTileController_GetRandomRangeObstacle_mB9626C8F4DA6C9B8E1BCDF93B83F7218E9D17300 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, int32_t ___exclusive0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline)(__this, method);
}
// System.Void GroundTileController::CalcSpawnPointsForObstacles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_CalcSpawnPointsForObstacles_m056401D8442D25F1F903760399E5D772F22C65A0 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Byte> GroundTileController::GetRandomPatternForObstacles(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* GroundTileController_GetRandomPatternForObstacles_mF0E0202296A3CE7909D1217B00F97B09FC0489F8 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, int32_t ___len0, uint32_t ___seed1, const RuntimeMethod* method) ;
// System.Void GroundTileController::DoSpawnObstacles(System.Collections.Generic.List`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_DoSpawnObstacles_m3A13C923C57392BF4E849A095DCC25747523DC93 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___PatternForObstacles0, const RuntimeMethod* method) ;
// System.Void GroundTileController::CalcSpawnPointsForCollectibles(System.Collections.Generic.List`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_CalcSpawnPointsForCollectibles_m83C6B7C1CCD610E85BF2C6FB964ECDD7F6E28E89 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___pattern0, const RuntimeMethod* method) ;
// System.Void GroundTileController::DoSpawnCollectibles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_DoSpawnCollectibles_mB6A5C4D6954957222DFE007A6EF35D7B76E11D79 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Byte>::get_Count()
inline int32_t List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.Vector3> GroundTileController::FindTransforms(System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* GroundTileController_FindTransforms_m35AC5184D413A8EE7FA6B4B9F94799C20E9CA493 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, int32_t ___numSpawnPoints0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___platformRect1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Byte> GroundTileController::PopulateGridWithObstacles(System.Collections.Generic.List`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* GroundTileController_PopulateGridWithObstacles_mC0E2AE0CF726AA0A832E3A83EF7EEAFD1A91C1C5 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___Pattern0, const RuntimeMethod* method) ;
// System.Void GroundTileController::PlaceSpawnsForCollectibles(System.Collections.Generic.List`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_PlaceSpawnsForCollectibles_m15A309E62EFA076ED1E2C3732CE0E46B5EC20F2E (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___grid0, const RuntimeMethod* method) ;
// System.Void Graph::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph__ctor_m5630B0F7DD96F7E9366B8700D4CD2BA000F1D56C (Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* __this, int32_t ___v0, int32_t ___goal1, const RuntimeMethod* method) ;
// System.Void Graph::AddEdge(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_AddEdge_m2D88F086BC83F307BD189B143D9A666631FAEC08 (Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* __this, int32_t ___v0, int32_t ___w1, const RuntimeMethod* method) ;
// System.Void Graph::DFS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_DFS_m9D5A51106B699BC6C5A18A01C28340197D158F60 (Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* __this, int32_t ___v0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte>::set_Item(System.Int32,T)
inline void List_1_set_Item_m1BC890FC146C25EDDACB873857078051154142B6 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, int32_t ___index0, uint8_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, int32_t, uint8_t, const RuntimeMethod*))List_1_set_Item_m1BC890FC146C25EDDACB873857078051154142B6_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Stack`1<System.Int32>::get_Count()
inline int32_t Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_inline (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::.ctor()
inline void List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Byte>::Add(T)
inline void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_gshared)(__this, method);
}
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(T)
inline void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Vector3>::GetEnumerator()
inline Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, const RuntimeMethod*))List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::Dispose()
inline void Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6 (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::get_Current()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Gizmos::DrawCube(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawCube_mE7D2162786517A14E8A740C7887CD08A3105B192 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___center0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___size1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Vector3>::MoveNext()
inline bool Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047*, const RuntimeMethod*))Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_gshared)(__this, method);
}
// T Singleton`1<SwipeDetection>::get_Instance()
inline SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* Singleton_1_get_Instance_m8751562A9E3DEF7AE6F982C78DE513F241285174 (const RuntimeMethod* method)
{
	return ((  SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m1E7538A5B8DECDF0740EF37390595FD4356B31FB_gshared)(method);
}
// System.Void SwipeDetection/OnSwipe::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwipe__ctor_m6BC2B7BC6F57BB898881094DC82BDFD1733236B9 (OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void SwipeDetection::add_OnSwiped(SwipeDetection/OnSwipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_add_OnSwiped_mB52DDECE189B536140A5ADF2742477057DB9AA26 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* ___value0, const RuntimeMethod* method) ;
// System.Void SwipeDetection::remove_OnSwiped(SwipeDetection/OnSwipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_remove_OnSwiped_mA862546EDDB735FE228CE80A1877D091E43F7EFD (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_m5E5FF963A4B356DFFCAF69B9AF9209DD1632EF17 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::set_shouldContinueMoving(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_set_shouldContinueMoving_m3475D9C284D090253EB79F39905C26C6953D7948_inline (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2 (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::UpdateRunAxis(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_UpdateRunAxis_mFBF1E98A9C3CF1DE4AB0FE5F2566D5DC86832AF8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movementValue0, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputValue::Get<UnityEngine.Vector2>()
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293 (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231*, const RuntimeMethod*))InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mFD97FC9DA828C1952D46D28C50B1D994B19895F6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean PlayerController::CanAnimationBeInterrupted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_CanAnimationBeInterrupted_mCF98527DDFCAE8D473DC31536FC8D359A50E72A6 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::ConfigureSliding(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ConfigureSliding_m8DD8C486F55CEBC11D784DA2AF4DFF8603C0E225 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___isSliding0, const RuntimeMethod* method) ;
// System.Void PlayerController::ConfigureSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ConfigureSpeed_m1DE65F7A5EE27110EB35E35FBC18E6904A7B1A90 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::Upkeep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Upkeep_mF6DC472FB306BA8C7071AB59AA826ADD5FFD8370 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Boolean PlayerController::get_shouldContinueMoving()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayerController_get_shouldContinueMoving_m68452D97B26B6BC330EF53B30B1ACBDF905C14B8_inline (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::HandleMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_HandleMovement_m507E9FBA62A559E59CC0BB8EECB022187FBBBADF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::HandleJumpOrSlide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_HandleJumpOrSlide_mF559FE15963C7A6AF7743D7226A4022C00A3DB68 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Die_m05D5887BD76E979C3DA3DB2D5E9032D30763BB2D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Boolean PlayerController::IsOnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_IsOnGround_m93949E32FDD9D8EA220709AEEDBA2225B70753D4 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB (CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Collider>()
inline ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Func`2<UnityEngine.Collider,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m864A52B06CBC2998220EBC26DE6F9AF4FC6BF864 (Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<UnityEngine.Collider,System.Boolean>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC918E2C44605F65E21B6918A5B6F1726CA9241CA (RuntimeObject* ___source0, Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mFB5D0E2E6DFBCF20D8F9AD194B4B347140018C9A_gshared)(___source0, ___selector1, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Rigidbody>()
inline RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GameOverUI::GetGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverUI_GetGameOver_m7B838C8E0C237DAED4A48668ABEF390E515EF6E1 (GameOverUI_tED6E1D9D1616BF7C870AEDB25B882281D25F4914* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void PlayerController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m91C495C66D26C012BD096FCB5837A4A5668A845E (U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
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
// System.Void InputManager::add_OnStartTouch(InputManager/StartTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_OnStartTouch_m1DAD2428CE07F0BFA30FEC49379C8F7319C6B200 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_0 = NULL;
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_1 = NULL;
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_2 = NULL;
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_0 = __this->___OnStartTouch_5;
		V_0 = L_0;
	}

IL_0007:
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = V_0;
		V_1 = L_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_2 = V_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)CastclassSealed((RuntimeObject*)L_4, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var));
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724** L_5 = (&__this->___OnStartTouch_5);
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_6 = V_2;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_7 = V_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_8;
		L_8 = InterlockedCompareExchangeImpl<StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*>(L_5, L_6, L_7);
		V_0 = L_8;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_9 = V_0;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_10 = V_1;
		if ((!(((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_9) == ((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputManager::remove_OnStartTouch(InputManager/StartTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_OnStartTouch_m511913C65F89842DD4637D9920433F1BF01E4267 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_0 = NULL;
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_1 = NULL;
	StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* V_2 = NULL;
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_0 = __this->___OnStartTouch_5;
		V_0 = L_0;
	}

IL_0007:
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = V_0;
		V_1 = L_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_2 = V_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)CastclassSealed((RuntimeObject*)L_4, StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var));
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724** L_5 = (&__this->___OnStartTouch_5);
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_6 = V_2;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_7 = V_1;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_8;
		L_8 = InterlockedCompareExchangeImpl<StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*>(L_5, L_6, L_7);
		V_0 = L_8;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_9 = V_0;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_10 = V_1;
		if ((!(((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_9) == ((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputManager::add_OnEndTouch(InputManager/EndTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_add_OnEndTouch_m779CA21D9F800F84E3813C17A4E5B19C4F59AEDF (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* V_0 = NULL;
	EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* V_1 = NULL;
	EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* V_2 = NULL;
	{
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_0 = __this->___OnEndTouch_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_1 = V_0;
		V_1 = L_1;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_2 = V_1;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*)CastclassSealed((RuntimeObject*)L_4, EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF_il2cpp_TypeInfo_var));
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF** L_5 = (&__this->___OnEndTouch_6);
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_6 = V_2;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_7 = V_1;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*>(L_5, L_6, L_7);
		V_0 = L_8;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_9 = V_0;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_10 = V_1;
		if ((!(((RuntimeObject*)(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*)L_9) == ((RuntimeObject*)(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputManager::remove_OnEndTouch(InputManager/EndTouch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_remove_OnEndTouch_mECCA403B9EE10D0B24A81D4DAD3D588EF3E5DBFB (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* V_0 = NULL;
	EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* V_1 = NULL;
	EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* V_2 = NULL;
	{
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_0 = __this->___OnEndTouch_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_1 = V_0;
		V_1 = L_1;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_2 = V_1;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*)CastclassSealed((RuntimeObject*)L_4, EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF_il2cpp_TypeInfo_var));
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF** L_5 = (&__this->___OnEndTouch_6);
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_6 = V_2;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_7 = V_1;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*>(L_5, L_6, L_7);
		V_0 = L_8;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_9 = V_0;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_10 = V_1;
		if ((!(((RuntimeObject*)(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*)L_9) == ((RuntimeObject*)(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void InputManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Awake_mCFCABAA5EC85B074EEBE8095E9139175D6526D9F (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerControls = new RunX();
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A*)il2cpp_codegen_object_new(RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RunX__ctor_mB9547A051DFD1610623673A2505C357F2D879260(L_0, NULL);
		__this->___playerControls_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerControls_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void InputManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnEnable_m788646F88BA8D47D800F554CCADD096AA02F10F8 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	{
		// playerControls.Enable();
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___playerControls_7;
		NullCheck(L_0);
		RunX_Enable_mC7BF56CE60F893C2912EC496F331A7A7087C2F3D(L_0, NULL);
		// }
		return;
	}
}
// System.Void InputManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_OnDisable_mCDBA1B46CEBA4C1DCA221F2CD193C36BFC35F29C (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	{
		// playerControls.Disable();
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___playerControls_7;
		NullCheck(L_0);
		RunX_Disable_m221A15CF7F11597BA7FF8836116BD6FC25D41CB0(L_0, NULL);
		// }
		return;
	}
}
// System.Void InputManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_Start_m1C1F4D73A508DB32B5D6E294F12240923279FB10 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_U3CStartU3Eb__12_0_m43759EFB0CCF512F3ABD0F86BDFF6665D8E0924B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputManager_U3CStartU3Eb__12_1_m928629600C6F1D4C365A2AE7968CECE90CF65FF7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// playerControls.Touch.PrimaryContact.started += ctx => StartTouchPrimary(ctx);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___playerControls_7;
		NullCheck(L_0);
		TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 L_1;
		L_1 = RunX_get_Touch_m1665A4EED74E43C1D1AF6753B295519AD6F46AC4(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = TouchActions_get_PrimaryContact_mE1E5FCF6E40A0C866EB2DD057649A34A439CD2F5((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_3 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_3, __this, (intptr_t)((void*)InputManager_U3CStartU3Eb__12_0_m43759EFB0CCF512F3ABD0F86BDFF6665D8E0924B_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_2, L_3, NULL);
		// playerControls.Touch.PrimaryContact.canceled += ctx => EndTouchPrimary(ctx);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_4 = __this->___playerControls_7;
		NullCheck(L_4);
		TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 L_5;
		L_5 = RunX_get_Touch_m1665A4EED74E43C1D1AF6753B295519AD6F46AC4(L_4, NULL);
		V_0 = L_5;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = TouchActions_get_PrimaryContact_mE1E5FCF6E40A0C866EB2DD057649A34A439CD2F5((&V_0), NULL);
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, __this, (intptr_t)((void*)InputManager_U3CStartU3Eb__12_1_m928629600C6F1D4C365A2AE7968CECE90CF65FF7_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void InputManager::StartTouchPrimary(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_StartTouchPrimary_m50149D9CF1159A34374E58F53EED4FDAA32ECC7F (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (OnStartTouch != null) OnStartTouch(playerControls.Touch.PrimaryPosition.ReadValue<Vector2>(), (float)context.startTime);
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_0 = __this->___OnStartTouch_5;
		V_0 = (bool)((!(((RuntimeObject*)(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (OnStartTouch != null) OnStartTouch(playerControls.Touch.PrimaryPosition.ReadValue<Vector2>(), (float)context.startTime);
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_2 = __this->___OnStartTouch_5;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_3 = __this->___playerControls_7;
		NullCheck(L_3);
		TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 L_4;
		L_4 = RunX_get_Touch_m1665A4EED74E43C1D1AF6753B295519AD6F46AC4(L_3, NULL);
		V_1 = L_4;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B((&V_1), NULL);
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_5, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		double L_7;
		L_7 = CallbackContext_get_startTime_m6F0F9C2CF03CDEFFE81F2E54636A465221AFD39B((&___context0), NULL);
		NullCheck(L_2);
		StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_inline(L_2, L_6, ((float)L_7), NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void InputManager::EndTouchPrimary(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_EndTouchPrimary_mF295B8BC8DD4157F2024A73A5AED591474F595E2 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (OnEndTouch != null) OnEndTouch(playerControls.Touch.PrimaryPosition.ReadValue<Vector2>(), (float)context.time);
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_0 = __this->___OnEndTouch_6;
		V_0 = (bool)((!(((RuntimeObject*)(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		// if (OnEndTouch != null) OnEndTouch(playerControls.Touch.PrimaryPosition.ReadValue<Vector2>(), (float)context.time);
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_2 = __this->___OnEndTouch_6;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_3 = __this->___playerControls_7;
		NullCheck(L_3);
		TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 L_4;
		L_4 = RunX_get_Touch_m1665A4EED74E43C1D1AF6753B295519AD6F46AC4(L_3, NULL);
		V_1 = L_4;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5;
		L_5 = TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B((&V_1), NULL);
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_5, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		double L_7;
		L_7 = CallbackContext_get_time_m411EBA76522616EF38FD78341B246EEF94908050((&___context0), NULL);
		NullCheck(L_2);
		EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_inline(L_2, L_6, ((float)L_7), NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 InputManager::PrimaryPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 InputManager_PrimaryPosition_m90C08E71C1F13DD687B9AE89F03C317BBA0BD3C8 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return playerControls.Touch.PrimaryPosition.ReadValue<Vector2>();
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___playerControls_7;
		NullCheck(L_0);
		TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 L_1;
		L_1 = RunX_get_Touch_m1665A4EED74E43C1D1AF6753B295519AD6F46AC4(L_0, NULL);
		V_0 = L_1;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B((&V_0), NULL);
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF(L_2, InputAction_ReadValue_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m8D02BA85303ABD48D9963369E106B0C83A393FBF_RuntimeMethod_var);
		V_1 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_1;
		return L_4;
	}
}
// UnityEngine.Vector3 InputManager::ScreenToWorld(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 InputManager_ScreenToWorld_mB8A25D8FA94BA314CAEEFE1BE97E36C9D877EB76 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// pos.z = camera.nearClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___camera0;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_0, NULL);
		(&___pos1)->___z_4 = L_1;
		// return camera.ScreenToWorldPoint(pos);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___camera0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___pos1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
// System.Void InputManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager__ctor_m52D2F3B9FA0D50C52BCC92486F49B300E9334C2A (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m0C269A9E77D99EE9AC32FC917A33FDB1A1A9DB5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Singleton_1__ctor_m0C269A9E77D99EE9AC32FC917A33FDB1A1A9DB5C(__this, Singleton_1__ctor_m0C269A9E77D99EE9AC32FC917A33FDB1A1A9DB5C_RuntimeMethod_var);
		return;
	}
}
// System.Void InputManager::<Start>b__12_0(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_U3CStartU3Eb__12_0_m43759EFB0CCF512F3ABD0F86BDFF6665D8E0924B (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___ctx0, const RuntimeMethod* method) 
{
	{
		// playerControls.Touch.PrimaryContact.started += ctx => StartTouchPrimary(ctx);
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_0 = ___ctx0;
		InputManager_StartTouchPrimary_m50149D9CF1159A34374E58F53EED4FDAA32ECC7F(__this, L_0, NULL);
		return;
	}
}
// System.Void InputManager::<Start>b__12_1(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputManager_U3CStartU3Eb__12_1_m928629600C6F1D4C365A2AE7968CECE90CF65FF7 (InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___ctx0, const RuntimeMethod* method) 
{
	{
		// playerControls.Touch.PrimaryContact.canceled += ctx => EndTouchPrimary(ctx);
		CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 L_0 = ___ctx0;
		InputManager_EndTouchPrimary_mF295B8BC8DD4157F2024A73A5AED591474F595E2(__this, L_0, NULL);
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
void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_Multicast(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* currentDelegate = reinterpret_cast<StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, ___time1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_Open(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___position0, ___time1, method);
}
void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_OpenStaticInvoker(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(__this->___method_ptr_0, method, NULL, ___position0, ___time1);
}
void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_ClosedStaticInvoker(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0, ___time1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724 (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___position0, ___time1);

}
// System.Void InputManager/StartTouch::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681 (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_Multicast;
}
// System.Void InputManager/StartTouch::Invoke(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___time1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult InputManager/StartTouch::BeginInvoke(UnityEngine.Vector2,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartTouch_BeginInvoke_m63CAB0C9F9F368500960E4EF8F795B74BFF6C672 (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___time1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void InputManager/StartTouch::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartTouch_EndInvoke_m9845B95B0231C49A94C6194C1232E48BE40B1597 (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_Multicast(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* currentDelegate = reinterpret_cast<EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, ___time1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_Open(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___position0, ___time1, method);
}
void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_OpenStaticInvoker(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(__this->___method_ptr_0, method, NULL, ___position0, ___time1);
}
void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_ClosedStaticInvoker(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0, ___time1);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___position0, ___time1);

}
// System.Void InputManager/EndTouch::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndTouch__ctor_mD21EDADCF61BDC23ADF93F9F310D782576FB8FCB (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_Multicast;
}
// System.Void InputManager/EndTouch::Invoke(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756 (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___time1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult InputManager/EndTouch::BeginInvoke(UnityEngine.Vector2,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndTouch_BeginInvoke_mBCD326EAD0AD68B7C4B24D6982A5B27E2EF36917 (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___time1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void InputManager/EndTouch::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndTouch_EndInvoke_mBC2F9BFC969713DCF0FA76665A7F779734A30AF2 (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// UnityEngine.InputSystem.InputActionAsset RunX::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void RunX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunX__ctor_mB9547A051DFD1610623673A2505C357F2D879260 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10C299ACC776829422581BC348DE826F47CB54C6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral117C34CEF055E54D018BB5CB8A52E1D66434C6E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68E991B5616F5769AB6069C14D3F44D98828C2F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F84632196531FA2B3BB0B4225C53CDB837E9393);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA2ACAAC77884477FF705FAA326CAE0ACFAFB316);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD23F1807EC3F728BA43D64905EBF6D2F2B3660D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF76631C9924DA21CC9961B508E27EB5D8012412);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB867965FD962F18AFC6C6FF185255C7F50878999);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC63533D7E97B41EB9EC8122A46CB313BA2A0DDC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3391253AE1076B748993B88770C68B98D227011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int m_KeyboardMouseSchemeIndex = -1;
		__this->___m_KeyboardMouseSchemeIndex_22 = (-1);
		// private int m_GamepadSchemeIndex = -1;
		__this->___m_GamepadSchemeIndex_23 = (-1);
		// private int m_TouchSchemeIndex = -1;
		__this->___m_TouchSchemeIndex_24 = (-1);
		// private int m_JoystickSchemeIndex = -1;
		__this->___m_JoystickSchemeIndex_25 = (-1);
		// private int m_XRSchemeIndex = -1;
		__this->___m_XRSchemeIndex_26 = (-1);
		// public @RunX()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//         asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""Run-X"",
		//     ""maps"": [
		//         {
		//             ""name"": ""Player"",
		//             ""id"": ""34ab70ab-f9bc-4b54-8ba5-c56deafc72ba"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""Move"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""fb39ceab-f1b4-4e01-944b-9e13d7dbd31a"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""Look"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""3c074072-ed08-4f7c-918a-dc8e1282d71c"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""Fire"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""4ea83da4-cd47-4c20-b269-cf6b707f8003"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""978bfe49-cc26-4a3d-ab7b-7d7a29327403"",
		//                     ""path"": ""<Gamepad>/leftStick"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""WASD"",
		//                     ""id"": ""00ca640b-d935-4593-8157-c05846ea39b3"",
		//                     ""path"": ""Dpad"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""e2062cb9-1b15-46a2-838c-2f8d72a0bdd9"",
		//                     ""path"": ""<Keyboard>/w"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""8180e8bd-4097-4f4e-ab88-4523101a6ce9"",
		//                     ""path"": ""<Keyboard>/upArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""320bffee-a40b-4347-ac70-c210eb8bc73a"",
		//                     ""path"": ""<Keyboard>/s"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""1c5327b5-f71c-4f60-99c7-4e737386f1d1"",
		//                     ""path"": ""<Keyboard>/downArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""d2581a9b-1d11-4566-b27d-b92aff5fabbc"",
		//                     ""path"": ""<Keyboard>/a"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""2e46982e-44cc-431b-9f0b-c11910bf467a"",
		//                     ""path"": ""<Keyboard>/leftArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""fcfe95b8-67b9-4526-84b5-5d0bc98d6400"",
		//                     ""path"": ""<Keyboard>/d"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""77bff152-3580-4b21-b6de-dcd0c7e41164"",
		//                     ""path"": ""<Keyboard>/rightArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""1635d3fe-58b6-4ba9-a4e2-f4b964f6b5c8"",
		//                     ""path"": ""<XRController>/{Primary2DAxis}"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""XR"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""3ea4d645-4504-4529-b061-ab81934c3752"",
		//                     ""path"": ""<Joystick>/stick"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""c1f7a91b-d0fd-4a62-997e-7fb9b69bf235"",
		//                     ""path"": ""<Gamepad>/rightStick"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Look"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""8c8e490b-c610-4785-884f-f04217b23ca4"",
		//                     ""path"": ""<Pointer>/delta"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse;Touch"",
		//                     ""action"": ""Look"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""3e5f5442-8668-4b27-a940-df99bad7e831"",
		//                     ""path"": ""<Joystick>/{Hatswitch}"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Look"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""143bb1cd-cc10-4eca-a2f0-a3664166fe91"",
		//                     ""path"": ""<Gamepad>/rightTrigger"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Fire"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""05f6913d-c316-48b2-a6bb-e225f14c7960"",
		//                     ""path"": ""<Mouse>/leftButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Fire"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""886e731e-7071-4ae4-95c0-e61739dad6fd"",
		//                     ""path"": ""<Touchscreen>/primaryTouch/tap"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Touch"",
		//                     ""action"": ""Fire"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""ee3d0cd2-254e-47a7-a8cb-bc94d9658c54"",
		//                     ""path"": ""<Joystick>/trigger"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Fire"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""8255d333-5683-4943-a58a-ccb207ff1dce"",
		//                     ""path"": ""<XRController>/{PrimaryAction}"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""XR"",
		//                     ""action"": ""Fire"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""UI"",
		//             ""id"": ""d71150d8-54c9-41a9-8f31-b7e0da87e886"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""Navigate"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""0d130275-e1f4-4f84-8a18-25230b55485a"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""Submit"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""578d62d9-40fe-4602-98c0-3f96b8ec22d9"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""Cancel"",
		//                     ""type"": ""Button"",
		//                     ""id"": ""ea5b6cf0-85cf-40a4-989d-fddbc41e4b17"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""Point"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""2f2b05f8-3c42-48c9-a0a4-1b3777248570"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""Click"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""75a5b86b-048c-463c-a9ee-9a5de8c2f7f8"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": true
		//                 },
		//                 {
		//                     ""name"": ""ScrollWheel"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""e32b83f0-f945-4a35-a28c-8de6c4a062e6"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""MiddleClick"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""a7a58f76-4ce7-4c69-b624-1a8da445d709"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""RightClick"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""92860538-8959-4608-9b01-ff12f9e96fdc"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""TrackedDevicePosition"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""e2b30f01-3bd0-4c1d-b63e-c22e59202467"",
		//                     ""expectedControlType"": ""Vector3"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""TrackedDeviceOrientation"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""a6d9dc83-8412-4724-98ab-90e01489a7b7"",
		//                     ""expectedControlType"": ""Quaternion"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": ""Gamepad"",
		//                     ""id"": ""809f371f-c5e2-4e7a-83a1-d867598f40dd"",
		//                     ""path"": ""2DVector"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""14a5d6e8-4aaf-4119-a9ef-34b8c2c548bf"",
		//                     ""path"": ""<Gamepad>/leftStick/up"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""9144cbe6-05e1-4687-a6d7-24f99d23dd81"",
		//                     ""path"": ""<Gamepad>/rightStick/up"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""2db08d65-c5fb-421b-983f-c71163608d67"",
		//                     ""path"": ""<Gamepad>/leftStick/down"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""58748904-2ea9-4a80-8579-b500e6a76df8"",
		//                     ""path"": ""<Gamepad>/rightStick/down"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""8ba04515-75aa-45de-966d-393d9bbd1c14"",
		//                     ""path"": ""<Gamepad>/leftStick/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""712e721c-bdfb-4b23-a86c-a0d9fcfea921"",
		//                     ""path"": ""<Gamepad>/rightStick/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""fcd248ae-a788-4676-a12e-f4d81205600b"",
		//                     ""path"": ""<Gamepad>/leftStick/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""1f04d9bc-c50b-41a1-bfcc-afb75475ec20"",
		//                     ""path"": ""<Gamepad>/rightStick/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""fb8277d4-c5cd-4663-9dc7-ee3f0b506d90"",
		//                     ""path"": ""<Gamepad>/dpad"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Gamepad"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""Joystick"",
		//                     ""id"": ""e25d9774-381c-4a61-b47c-7b6b299ad9f9"",
		//                     ""path"": ""2DVector"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""3db53b26-6601-41be-9887-63ac74e79d19"",
		//                     ""path"": ""<Joystick>/stick/up"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""0cb3e13e-3d90-4178-8ae6-d9c5501d653f"",
		//                     ""path"": ""<Joystick>/stick/down"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""0392d399-f6dd-4c82-8062-c1e9c0d34835"",
		//                     ""path"": ""<Joystick>/stick/left"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""942a66d9-d42f-43d6-8d70-ecb4ba5363bc"",
		//                     ""path"": ""<Joystick>/stick/right"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Joystick"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""Keyboard"",
		//                     ""id"": ""ff527021-f211-4c02-933e-5976594c46ed"",
		//                     ""path"": ""2DVector"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": true,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""563fbfdd-0f09-408d-aa75-8642c4f08ef0"",
		//                     ""path"": ""<Keyboard>/w"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""up"",
		//                     ""id"": ""eb480147-c587-4a33-85ed-eb0ab9942c43"",
		//                     ""path"": ""<Keyboard>/upArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""2bf42165-60bc-42ca-8072-8c13ab40239b"",
		//                     ""path"": ""<Keyboard>/s"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""down"",
		//                     ""id"": ""85d264ad-e0a0-4565-b7ff-1a37edde51ac"",
		//                     ""path"": ""<Keyboard>/downArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""74214943-c580-44e4-98eb-ad7eebe17902"",
		//                     ""path"": ""<Keyboard>/a"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""left"",
		//                     ""id"": ""cea9b045-a000-445b-95b8-0c171af70a3b"",
		//                     ""path"": ""<Keyboard>/leftArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""8607c725-d935-4808-84b1-8354e29bab63"",
		//                     ""path"": ""<Keyboard>/d"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": ""right"",
		//                     ""id"": ""4cda81dc-9edd-4e03-9d7c-a71a14345d0b"",
		//                     ""path"": ""<Keyboard>/rightArrow"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Navigate"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": true
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""9e92bb26-7e3b-4ec4-b06b-3c8f8e498ddc"",
		//                     ""path"": ""*/{Submit}"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Submit"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""82627dcc-3b13-4ba9-841d-e4b746d6553e"",
		//                     ""path"": ""*/{Cancel}"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Cancel"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""c52c8e0b-8179-41d3-b8a1-d149033bbe86"",
		//                     ""path"": ""<Mouse>/position"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Point"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""e1394cbc-336e-44ce-9ea8-6007ed6193f7"",
		//                     ""path"": ""<Pen>/position"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Keyboard&Mouse"",
		//                     ""action"": ""Point"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""5693e57a-238a-46ed-b5ae-e64e6e574302"",
		//                     ""path"": ""<Touchscreen>/touch*/position"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Touch"",
		//                     ""action"": ""Point"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""4faf7dc9-b979-4210-aa8c-e808e1ef89f5"",
		//                     ""path"": ""<Mouse>/leftButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Click"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""8d66d5ba-88d7-48e6-b1cd-198bbfef7ace"",
		//                     ""path"": ""<Pen>/tip"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""Click"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""47c2a644-3ebc-4dae-a106-589b7ca75b59"",
		//                     ""path"": ""<Touchscreen>/touch*/press"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""Touch"",
		//                     ""action"": ""Click"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""bb9e6b34-44bf-4381-ac63-5aa15d19f677"",
		//                     ""path"": ""<XRController>/trigger"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""XR"",
		//                     ""action"": ""Click"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""38c99815-14ea-4617-8627-164d27641299"",
		//                     ""path"": ""<Mouse>/scroll"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""ScrollWheel"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""24066f69-da47-44f3-a07e-0015fb02eb2e"",
		//                     ""path"": ""<Mouse>/middleButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""MiddleClick"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""4c191405-5738-4d4b-a523-c6a301dbf754"",
		//                     ""path"": ""<Mouse>/rightButton"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": "";Keyboard&Mouse"",
		//                     ""action"": ""RightClick"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""7236c0d9-6ca3-47cf-a6ee-a97f5b59ea77"",
		//                     ""path"": ""<XRController>/devicePosition"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""XR"",
		//                     ""action"": ""TrackedDevicePosition"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""23e01e3a-f935-4948-8d8b-9bcac77714fb"",
		//                     ""path"": ""<XRController>/deviceRotation"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": ""XR"",
		//                     ""action"": ""TrackedDeviceOrientation"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""Touch"",
		//             ""id"": ""2e58e7c6-36e8-44b8-b860-abfc4cb38368"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""PrimaryContact"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""6fe39dec-8d4f-4dd4-9457-13ed3b48bd1d"",
		//                     ""expectedControlType"": ""Button"",
		//                     ""processors"": """",
		//                     ""interactions"": ""Press"",
		//                     ""initialStateCheck"": false
		//                 },
		//                 {
		//                     ""name"": ""PrimaryPosition"",
		//                     ""type"": ""PassThrough"",
		//                     ""id"": ""f891930a-bb0f-4af0-bbd4-ebe01a9680d3"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """",
		//                     ""initialStateCheck"": false
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""3426c8c1-1489-443e-af0e-00971ba6f199"",
		//                     ""path"": ""<Touchscreen>/primaryTouch/press"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""PrimaryContact"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 },
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""a3053d79-0ad2-4111-bb42-e2a9f22861ff"",
		//                     ""path"": ""<Touchscreen>/primaryTouch/position"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""PrimaryPosition"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": [
		//         {
		//             ""name"": ""Keyboard&Mouse"",
		//             ""bindingGroup"": ""Keyboard&Mouse"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<Keyboard>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 },
		//                 {
		//                     ""devicePath"": ""<Mouse>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""Gamepad"",
		//             ""bindingGroup"": ""Gamepad"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<Gamepad>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""Touch"",
		//             ""bindingGroup"": ""Touch"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<Touchscreen>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""Joystick"",
		//             ""bindingGroup"": ""Joystick"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<Joystick>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         },
		//         {
		//             ""name"": ""XR"",
		//             ""bindingGroup"": ""XR"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<XRController>"",
		//                     ""isOptional"": false,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         }
		//     ]
		// }");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = InputActionAsset_FromJson_mA8AF88895F49DB0F0BAB47B60744E927E6234347(_stringLiteral10C299ACC776829422581BC348DE826F47CB54C6, NULL);
		__this->___U3CassetU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetU3Ek__BackingField_0), (void*)L_0);
		// m_Player = asset.FindActionMap("Player", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_1;
		L_1 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_1);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2;
		L_2 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, (bool)1, NULL);
		__this->___m_Player_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_1), (void*)L_2);
		// m_Player_Move = m_Player.FindAction("Move", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_3 = __this->___m_Player_1;
		NullCheck(L_3);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4;
		L_4 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_3, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, (bool)1, NULL);
		__this->___m_Player_Move_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_Move_3), (void*)L_4);
		// m_Player_Look = m_Player.FindAction("Look", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_5 = __this->___m_Player_1;
		NullCheck(L_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_5, _stringLiteralFBA9CEB43D14830BEAAF5F87C6AAAD1A8A36A67F, (bool)1, NULL);
		__this->___m_Player_Look_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_Look_4), (void*)L_6);
		// m_Player_Fire = m_Player.FindAction("Fire", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_7 = __this->___m_Player_1;
		NullCheck(L_7);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_7, _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8, (bool)1, NULL);
		__this->___m_Player_Fire_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Player_Fire_5), (void*)L_8);
		// m_UI = asset.FindActionMap("UI", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_9;
		L_9 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_9);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_10;
		L_10 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_9, _stringLiteralB93F5E13E0AD8E8044D7D80E771F9A55F393D87F, (bool)1, NULL);
		__this->___m_UI_6 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_6), (void*)L_10);
		// m_UI_Navigate = m_UI.FindAction("Navigate", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_11 = __this->___m_UI_6;
		NullCheck(L_11);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12;
		L_12 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_11, _stringLiteral117C34CEF055E54D018BB5CB8A52E1D66434C6E6, (bool)1, NULL);
		__this->___m_UI_Navigate_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_Navigate_8), (void*)L_12);
		// m_UI_Submit = m_UI.FindAction("Submit", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_13 = __this->___m_UI_6;
		NullCheck(L_13);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_14;
		L_14 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_13, _stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895, (bool)1, NULL);
		__this->___m_UI_Submit_9 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_Submit_9), (void*)L_14);
		// m_UI_Cancel = m_UI.FindAction("Cancel", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_15 = __this->___m_UI_6;
		NullCheck(L_15);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_16;
		L_16 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_15, _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, (bool)1, NULL);
		__this->___m_UI_Cancel_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_Cancel_10), (void*)L_16);
		// m_UI_Point = m_UI.FindAction("Point", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_17 = __this->___m_UI_6;
		NullCheck(L_17);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18;
		L_18 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_17, _stringLiteralAF76631C9924DA21CC9961B508E27EB5D8012412, (bool)1, NULL);
		__this->___m_UI_Point_11 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_Point_11), (void*)L_18);
		// m_UI_Click = m_UI.FindAction("Click", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_19 = __this->___m_UI_6;
		NullCheck(L_19);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_20;
		L_20 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_19, _stringLiteral47A23BFD06ECFD154AD092ED652B1B4111CD15FC, (bool)1, NULL);
		__this->___m_UI_Click_12 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_Click_12), (void*)L_20);
		// m_UI_ScrollWheel = m_UI.FindAction("ScrollWheel", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_21 = __this->___m_UI_6;
		NullCheck(L_21);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22;
		L_22 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_21, _stringLiteralAD23F1807EC3F728BA43D64905EBF6D2F2B3660D, (bool)1, NULL);
		__this->___m_UI_ScrollWheel_13 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_ScrollWheel_13), (void*)L_22);
		// m_UI_MiddleClick = m_UI.FindAction("MiddleClick", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_23 = __this->___m_UI_6;
		NullCheck(L_23);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_24;
		L_24 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_23, _stringLiteralAA2ACAAC77884477FF705FAA326CAE0ACFAFB316, (bool)1, NULL);
		__this->___m_UI_MiddleClick_14 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_MiddleClick_14), (void*)L_24);
		// m_UI_RightClick = m_UI.FindAction("RightClick", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_25 = __this->___m_UI_6;
		NullCheck(L_25);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_26;
		L_26 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_25, _stringLiteral68E991B5616F5769AB6069C14D3F44D98828C2F9, (bool)1, NULL);
		__this->___m_UI_RightClick_15 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_RightClick_15), (void*)L_26);
		// m_UI_TrackedDevicePosition = m_UI.FindAction("TrackedDevicePosition", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_27 = __this->___m_UI_6;
		NullCheck(L_27);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_27, _stringLiteral9F84632196531FA2B3BB0B4225C53CDB837E9393, (bool)1, NULL);
		__this->___m_UI_TrackedDevicePosition_16 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_TrackedDevicePosition_16), (void*)L_28);
		// m_UI_TrackedDeviceOrientation = m_UI.FindAction("TrackedDeviceOrientation", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_29 = __this->___m_UI_6;
		NullCheck(L_29);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_30;
		L_30 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_29, _stringLiteralC63533D7E97B41EB9EC8122A46CB313BA2A0DDC4, (bool)1, NULL);
		__this->___m_UI_TrackedDeviceOrientation_17 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UI_TrackedDeviceOrientation_17), (void*)L_30);
		// m_Touch = asset.FindActionMap("Touch", throwIfNotFound: true);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_31;
		L_31 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_31);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_32;
		L_32 = InputActionAsset_FindActionMap_mE04E63102310DA7662194A4D283E2E42D90CCC75(L_31, _stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7, (bool)1, NULL);
		__this->___m_Touch_18 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Touch_18), (void*)L_32);
		// m_Touch_PrimaryContact = m_Touch.FindAction("PrimaryContact", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_33 = __this->___m_Touch_18;
		NullCheck(L_33);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_34;
		L_34 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_33, _stringLiteralF3391253AE1076B748993B88770C68B98D227011, (bool)1, NULL);
		__this->___m_Touch_PrimaryContact_20 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Touch_PrimaryContact_20), (void*)L_34);
		// m_Touch_PrimaryPosition = m_Touch.FindAction("PrimaryPosition", throwIfNotFound: true);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_35 = __this->___m_Touch_18;
		NullCheck(L_35);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_36;
		L_36 = InputActionMap_FindAction_m94A9B02203CFFA97310EC589FAD4CCB15898F0A3(L_35, _stringLiteralB867965FD962F18AFC6C6FF185255C7F50878999, (bool)1, NULL);
		__this->___m_Touch_PrimaryPosition_21 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Touch_PrimaryPosition_21), (void*)L_36);
		// }
		return;
	}
}
// System.Void RunX::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunX_Dispose_m68880C6E9E5AE38DEF9460BCA42C268BB414FBE6 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> RunX::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 RunX_get_bindingMask_m8ABA883D2726A6E07508389618F8422BABA9ABCC (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1;
		L_1 = InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void RunX::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunX_set_bindingMask_m2B6B8A35E44B857CA2AF1A68330FA62D4F43797B (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_bindingMask_mD621370B859495F593CBE28019D84F44922C94A5(L_0, L_1, NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> RunX::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D RunX_get_devices_m634B0A9DB554A1C9D98A03316DE5662D700C8C96 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	{
		// get => asset.devices;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_0);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1;
		L_1 = InputActionAsset_get_devices_m8FF856B2C61E23B7360A9279C10F8A6498C72B9C(L_0, NULL);
		return L_1;
	}
}
// System.Void RunX::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunX_set_devices_m268BCC1CB0F18E953B7CDDF89B81A868841B39C3 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D ___value0, const RuntimeMethod* method) 
{
	{
		// set => asset.devices = value;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		Nullable_1_t6B4D7100F56DCBBBD57A82F0DE4C93A1BA86EC4D L_1 = ___value0;
		NullCheck(L_0);
		InputActionAsset_set_devices_m5A513BB841DB76966CD2B39E0E6FA8AFB3EBE38D(L_0, L_1, NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> RunX::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 RunX_get_controlSchemes_m24729D338FD0FCD39BDAE41880E279C95C86C0CF (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_0);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_1;
		L_1 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_0, NULL);
		return L_1;
	}
}
// System.Boolean RunX::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RunX_Contains_m1736A4D3556505665184C34DB9E4904D37D4FA09 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___action0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return asset.Contains(action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = ___action0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InputActionAsset_Contains_mB3B9FBCE562FB5229F9387F14AEC22083FC6CDDE(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> RunX::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RunX_GetEnumerator_mA8DD47481D29C545653E66982A182B9D049964F4 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return asset.GetEnumerator();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_m39998F5B21D08AAE328E63B3FDCC0F414620A8A9(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator RunX::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RunX_System_Collections_IEnumerable_GetEnumerator_m8BF108D652AE0B7E0A3B5C449200ABA35DFD1D13 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = RunX_GetEnumerator_mA8DD47481D29C545653E66982A182B9D049964F4(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void RunX::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunX_Enable_mC7BF56CE60F893C2912EC496F331A7A7087C2F3D (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	{
		// asset.Enable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Enable_m5102429EE832C7891F73B6979612702CECA8F431(L_0, NULL);
		// }
		return;
	}
}
// System.Void RunX::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RunX_Disable_m221A15CF7F11597BA7FF8836116BD6FC25D41CB0 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	{
		// asset.Disable();
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_0);
		InputActionAsset_Disable_m62FD8B11BB4EDF6AADAB2BDDC699242D09BAF99C(L_0, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.InputBinding> RunX::get_bindings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RunX_get_bindings_m811A8674B4D1DD272EACFB112DFCCF2FE5FF6471 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	{
		// public IEnumerable<InputBinding> bindings => asset.bindings;
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_get_bindings_mB045318575B5D7B13A92B973CABB40E0FEC70FB9(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.InputSystem.InputAction RunX::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* RunX_FindAction_m3A176944E7A56C96AC996F91A58B42161339AD93 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, String_t* ___actionNameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method) 
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	{
		// return asset.FindAction(actionNameOrId, throwIfNotFound);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		String_t* L_1 = ___actionNameOrId0;
		bool L_2 = ___throwIfNotFound1;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionAsset_FindAction_m50D07EAFAA8628B9793E7BBEEB2E89C2A9C45C00(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = V_0;
		return L_4;
	}
}
// System.Int32 RunX::FindBinding(UnityEngine.InputSystem.InputBinding,UnityEngine.InputSystem.InputAction&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RunX_FindBinding_m28D3BA75D0EAC919E8D5E44D7C7DFE1300003B3A (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___bindingMask0, InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** ___action1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return asset.FindBinding(bindingMask, out action);
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0;
		L_0 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_1 = ___bindingMask0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD** L_2 = ___action1;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InputActionAsset_FindBinding_mB5B36B9DDFAABFD4B528B891653B1B5B895DBDC5(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// RunX/PlayerActions RunX::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B RunX_get_Player_mC45DB21B28E6F8240C9E31548FCAAC79B4DF79EE (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	{
		// public PlayerActions @Player => new PlayerActions(this);
		PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B L_0;
		memset((&L_0), 0, sizeof(L_0));
		PlayerActions__ctor_mE8493220BC47720DA959FF9F560A5508D41F10ED((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// RunX/UIActions RunX::get_UI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9 RunX_get_UI_m59285F0F9EBF3DD27A9152E69DD1260C0E88F17E (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	{
		// public UIActions @UI => new UIActions(this);
		UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9 L_0;
		memset((&L_0), 0, sizeof(L_0));
		UIActions__ctor_m6E5057848CE77B87279346D9B09429C01FD772B2((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// RunX/TouchActions RunX::get_Touch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 RunX_get_Touch_m1665A4EED74E43C1D1AF6753B295519AD6F46AC4 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	{
		// public TouchActions @Touch => new TouchActions(this);
		TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 L_0;
		memset((&L_0), 0, sizeof(L_0));
		TouchActions__ctor_mA81FEC30D9503A85BF6CFF9004852C5E00FF0050((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.InputSystem.InputControlScheme RunX::get_KeyboardMouseScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 RunX_get_KeyboardMouseScheme_m4809622CC077E4D3654627AB969B19C2EF76AEF6 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral017B351DA3E50FAF2CFBB408359C6C0480F02932);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (m_KeyboardMouseSchemeIndex == -1) m_KeyboardMouseSchemeIndex = asset.FindControlSchemeIndex("Keyboard&Mouse");
		int32_t L_0 = __this->___m_KeyboardMouseSchemeIndex_22;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (m_KeyboardMouseSchemeIndex == -1) m_KeyboardMouseSchemeIndex = asset.FindControlSchemeIndex("Keyboard&Mouse");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_2;
		L_2 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D(L_2, _stringLiteral017B351DA3E50FAF2CFBB408359C6C0480F02932, NULL);
		__this->___m_KeyboardMouseSchemeIndex_22 = L_3;
	}

IL_0024:
	{
		// return asset.controlSchemes[m_KeyboardMouseSchemeIndex];
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_4;
		L_4 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_4);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_5;
		L_5 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = __this->___m_KeyboardMouseSchemeIndex_22;
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_7;
		L_7 = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E((&V_1), L_6, ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		V_2 = L_7;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.InputSystem.InputControlScheme RunX::get_GamepadScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 RunX_get_GamepadScheme_m2F33772F3CA2344872E572EC6C1B9748F07E0454 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61225B335304C6BE91EE0EC8CF385BBE9B633F17);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (m_GamepadSchemeIndex == -1) m_GamepadSchemeIndex = asset.FindControlSchemeIndex("Gamepad");
		int32_t L_0 = __this->___m_GamepadSchemeIndex_23;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (m_GamepadSchemeIndex == -1) m_GamepadSchemeIndex = asset.FindControlSchemeIndex("Gamepad");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_2;
		L_2 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D(L_2, _stringLiteral61225B335304C6BE91EE0EC8CF385BBE9B633F17, NULL);
		__this->___m_GamepadSchemeIndex_23 = L_3;
	}

IL_0024:
	{
		// return asset.controlSchemes[m_GamepadSchemeIndex];
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_4;
		L_4 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_4);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_5;
		L_5 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = __this->___m_GamepadSchemeIndex_23;
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_7;
		L_7 = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E((&V_1), L_6, ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		V_2 = L_7;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.InputSystem.InputControlScheme RunX::get_TouchScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 RunX_get_TouchScheme_m60315D070DA17927866CAEA016E529A587C1F29A (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (m_TouchSchemeIndex == -1) m_TouchSchemeIndex = asset.FindControlSchemeIndex("Touch");
		int32_t L_0 = __this->___m_TouchSchemeIndex_24;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (m_TouchSchemeIndex == -1) m_TouchSchemeIndex = asset.FindControlSchemeIndex("Touch");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_2;
		L_2 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D(L_2, _stringLiteral45EDE4DB19150515241E2FE6610B1490B1DED5C7, NULL);
		__this->___m_TouchSchemeIndex_24 = L_3;
	}

IL_0024:
	{
		// return asset.controlSchemes[m_TouchSchemeIndex];
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_4;
		L_4 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_4);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_5;
		L_5 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = __this->___m_TouchSchemeIndex_24;
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_7;
		L_7 = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E((&V_1), L_6, ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		V_2 = L_7;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.InputSystem.InputControlScheme RunX::get_JoystickScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 RunX_get_JoystickScheme_m470718E1847E1C6070D646A9FCB6A623C2E73E6F (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB502A186982A83A6C402B5753C1120061504E6EB);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (m_JoystickSchemeIndex == -1) m_JoystickSchemeIndex = asset.FindControlSchemeIndex("Joystick");
		int32_t L_0 = __this->___m_JoystickSchemeIndex_25;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (m_JoystickSchemeIndex == -1) m_JoystickSchemeIndex = asset.FindControlSchemeIndex("Joystick");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_2;
		L_2 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D(L_2, _stringLiteralB502A186982A83A6C402B5753C1120061504E6EB, NULL);
		__this->___m_JoystickSchemeIndex_25 = L_3;
	}

IL_0024:
	{
		// return asset.controlSchemes[m_JoystickSchemeIndex];
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_4;
		L_4 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_4);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_5;
		L_5 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = __this->___m_JoystickSchemeIndex_25;
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_7;
		L_7 = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E((&V_1), L_6, ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		V_2 = L_7;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_8 = V_2;
		return L_8;
	}
}
// UnityEngine.InputSystem.InputControlScheme RunX::get_XRScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 RunX_get_XRScheme_m57A5D275970096F6023EEE3D05B3F2DB27D20A22 (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FEFD136EF26D7B05E5CCF16376EF651CBFB5E2C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (m_XRSchemeIndex == -1) m_XRSchemeIndex = asset.FindControlSchemeIndex("XR");
		int32_t L_0 = __this->___m_XRSchemeIndex_26;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// if (m_XRSchemeIndex == -1) m_XRSchemeIndex = asset.FindControlSchemeIndex("XR");
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_2;
		L_2 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InputActionAsset_FindControlSchemeIndex_m765CEC376752C62AF08B9F005C8893F0D62DED2D(L_2, _stringLiteral9FEFD136EF26D7B05E5CCF16376EF651CBFB5E2C, NULL);
		__this->___m_XRSchemeIndex_26 = L_3;
	}

IL_0024:
	{
		// return asset.controlSchemes[m_XRSchemeIndex];
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_4;
		L_4 = RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline(__this, NULL);
		NullCheck(L_4);
		ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 L_5;
		L_5 = InputActionAsset_get_controlSchemes_m257644C546BD6221DD62251F6C7C2A2CC11BD099(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = __this->___m_XRSchemeIndex_26;
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_7;
		L_7 = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E((&V_1), L_6, ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_RuntimeMethod_var);
		V_2 = L_7;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_8 = V_2;
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
// Conversion methods for marshalling of: RunX/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshal_pinvoke(const PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B& unmarshaled, PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshal_pinvoke_back(const PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshaled_pinvoke& marshaled, PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: RunX/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshal_pinvoke_cleanup(PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: RunX/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshal_com(const PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B& unmarshaled, PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshal_com_back(const PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshaled_com& marshaled, PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: RunX/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshal_com_cleanup(PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B_marshaled_com& marshaled)
{
}
// System.Void RunX/PlayerActions::.ctor(RunX)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions__ctor_mE8493220BC47720DA959FF9F560A5508D41F10ED (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public PlayerActions(@RunX wrapper) { m_Wrapper = wrapper; }
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public PlayerActions(@RunX wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions__ctor_mE8493220BC47720DA959FF9F560A5508D41F10ED_AdjustorThunk (RuntimeObject* __this, RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___wrapper0, const RuntimeMethod* method)
{
	PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B*>(__this + _offset);
	PlayerActions__ctor_mE8493220BC47720DA959FF9F560A5508D41F10ED(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction RunX/PlayerActions::get_Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Move_mD9D39BC7F3140E5AE940EE2ACCD269037072DE5B (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Move => m_Wrapper.m_Player_Move;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Player_Move_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Move_mD9D39BC7F3140E5AE940EE2ACCD269037072DE5B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = PlayerActions_get_Move_mD9D39BC7F3140E5AE940EE2ACCD269037072DE5B(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction RunX/PlayerActions::get_Look()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Look_mDA8FD77B60EBD93C091C23BA8B7722D091E475F8 (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Look => m_Wrapper.m_Player_Look;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Player_Look_4;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Look_mDA8FD77B60EBD93C091C23BA8B7722D091E475F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = PlayerActions_get_Look_mDA8FD77B60EBD93C091C23BA8B7722D091E475F8(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction RunX/PlayerActions::get_Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Fire_m92A2148B9DA03414B730D9DA4C01ED6B477233E3 (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Fire => m_Wrapper.m_Player_Fire;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Player_Fire_5;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* PlayerActions_get_Fire_m92A2148B9DA03414B730D9DA4C01ED6B477233E3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = PlayerActions_get_Fire_m92A2148B9DA03414B730D9DA4C01ED6B477233E3(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap RunX/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_m532DE60BE21E4EF036E21D5A369B7F8FBB4750FA (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public InputActionMap Get() { return m_Wrapper.m_Player; }
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_Player_1;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public InputActionMap Get() { return m_Wrapper.m_Player; }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_Get_m532DE60BE21E4EF036E21D5A369B7F8FBB4750FA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = PlayerActions_Get_m532DE60BE21E4EF036E21D5A369B7F8FBB4750FA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void RunX/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_m91F273E35E0D8F8DB225591CD4BF2086BE9299EB (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_m532DE60BE21E4EF036E21D5A369B7F8FBB4750FA(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Enable_m91F273E35E0D8F8DB225591CD4BF2086BE9299EB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B*>(__this + _offset);
	PlayerActions_Enable_m91F273E35E0D8F8DB225591CD4BF2086BE9299EB(_thisAdjusted, method);
}
// System.Void RunX/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_mF32C453F41DA39E63AE47EF6440A40976D11D998 (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_m532DE60BE21E4EF036E21D5A369B7F8FBB4750FA(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Disable_mF32C453F41DA39E63AE47EF6440A40976D11D998_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B*>(__this + _offset);
	PlayerActions_Disable_mF32C453F41DA39E63AE47EF6440A40976D11D998(_thisAdjusted, method);
}
// System.Boolean RunX/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_m334A8B6896C31D03AFA339840934C929310340BD (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_m532DE60BE21E4EF036E21D5A369B7F8FBB4750FA(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayerActions_get_enabled_m334A8B6896C31D03AFA339840934C929310340BD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B*>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayerActions_get_enabled_m334A8B6896C31D03AFA339840934C929310340BD(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap RunX/PlayerActions::op_Implicit(RunX/PlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* PlayerActions_op_Implicit_m966B08B4C861CC2BC6A0B3CD394E3D9CB5EB37CE (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B ___set0, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = PlayerActions_Get_m532DE60BE21E4EF036E21D5A369B7F8FBB4750FA((&___set0), NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = V_0;
		return L_1;
	}
}
// System.Void RunX/PlayerActions::SetCallbacks(RunX/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_mCED8917C981C28B8A548980529CF4885A2902165 (PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Wrapper.m_PlayerActionsCallbackInterface != null)
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_PlayerActionsCallbackInterface_2;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0153;
		}
	}
	{
		// @Move.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = PlayerActions_get_Move_mD9D39BC7F3140E5AE940EE2ACCD269037072DE5B(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_4 = __this->___m_Wrapper_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_6 = L_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, L_6, (intptr_t)((void*)GetInterfaceMethodInfo(L_6, 0, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_3);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_3, L_7, NULL);
		// @Move.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = PlayerActions_get_Move_mD9D39BC7F3140E5AE940EE2ACCD269037072DE5B(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_9 = __this->___m_Wrapper_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_11 = L_10;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_12 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_12, L_11, (intptr_t)((void*)GetInterfaceMethodInfo(L_11, 0, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_8);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_8, L_12, NULL);
		// @Move.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = PlayerActions_get_Move_mD9D39BC7F3140E5AE940EE2ACCD269037072DE5B(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_14 = __this->___m_Wrapper_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_16 = L_15;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_17 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_17, L_16, (intptr_t)((void*)GetInterfaceMethodInfo(L_16, 0, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_13);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_13, L_17, NULL);
		// @Look.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18;
		L_18 = PlayerActions_get_Look_mDA8FD77B60EBD93C091C23BA8B7722D091E475F8(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_19 = __this->___m_Wrapper_0;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_21 = L_20;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_22 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_22, L_21, (intptr_t)((void*)GetInterfaceMethodInfo(L_21, 1, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_18);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_18, L_22, NULL);
		// @Look.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_23;
		L_23 = PlayerActions_get_Look_mDA8FD77B60EBD93C091C23BA8B7722D091E475F8(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_24 = __this->___m_Wrapper_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_26 = L_25;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_27 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_27, L_26, (intptr_t)((void*)GetInterfaceMethodInfo(L_26, 1, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_23);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_23, L_27, NULL);
		// @Look.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = PlayerActions_get_Look_mDA8FD77B60EBD93C091C23BA8B7722D091E475F8(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_29 = __this->___m_Wrapper_0;
		NullCheck(L_29);
		RuntimeObject* L_30 = L_29->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_31 = L_30;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_32 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_32, L_31, (intptr_t)((void*)GetInterfaceMethodInfo(L_31, 1, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_28);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_28, L_32, NULL);
		// @Fire.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnFire;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_33;
		L_33 = PlayerActions_get_Fire_m92A2148B9DA03414B730D9DA4C01ED6B477233E3(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_34 = __this->___m_Wrapper_0;
		NullCheck(L_34);
		RuntimeObject* L_35 = L_34->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_36 = L_35;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_37 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_37, L_36, (intptr_t)((void*)GetInterfaceMethodInfo(L_36, 2, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_33);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_33, L_37, NULL);
		// @Fire.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnFire;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_38;
		L_38 = PlayerActions_get_Fire_m92A2148B9DA03414B730D9DA4C01ED6B477233E3(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_39 = __this->___m_Wrapper_0;
		NullCheck(L_39);
		RuntimeObject* L_40 = L_39->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_41 = L_40;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_42 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_42, L_41, (intptr_t)((void*)GetInterfaceMethodInfo(L_41, 2, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_38);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_38, L_42, NULL);
		// @Fire.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnFire;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_43;
		L_43 = PlayerActions_get_Fire_m92A2148B9DA03414B730D9DA4C01ED6B477233E3(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_44 = __this->___m_Wrapper_0;
		NullCheck(L_44);
		RuntimeObject* L_45 = L_44->___m_PlayerActionsCallbackInterface_2;
		RuntimeObject* L_46 = L_45;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_47 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_47, L_46, (intptr_t)((void*)GetInterfaceMethodInfo(L_46, 2, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_43);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_43, L_47, NULL);
	}

IL_0153:
	{
		// m_Wrapper.m_PlayerActionsCallbackInterface = instance;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_48 = __this->___m_Wrapper_0;
		RuntimeObject* L_49 = ___instance0;
		NullCheck(L_48);
		L_48->___m_PlayerActionsCallbackInterface_2 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->___m_PlayerActionsCallbackInterface_2), (void*)L_49);
		// if (instance != null)
		RuntimeObject* L_50 = ___instance0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_50) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_51 = V_1;
		if (!L_51)
		{
			goto IL_024d;
		}
	}
	{
		// @Move.started += instance.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_52;
		L_52 = PlayerActions_get_Move_mD9D39BC7F3140E5AE940EE2ACCD269037072DE5B(__this, NULL);
		RuntimeObject* L_53 = ___instance0;
		RuntimeObject* L_54 = L_53;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_55 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_55);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_55, L_54, (intptr_t)((void*)GetInterfaceMethodInfo(L_54, 0, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_52);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_52, L_55, NULL);
		// @Move.performed += instance.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_56;
		L_56 = PlayerActions_get_Move_mD9D39BC7F3140E5AE940EE2ACCD269037072DE5B(__this, NULL);
		RuntimeObject* L_57 = ___instance0;
		RuntimeObject* L_58 = L_57;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_59 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_59, L_58, (intptr_t)((void*)GetInterfaceMethodInfo(L_58, 0, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_56);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_56, L_59, NULL);
		// @Move.canceled += instance.OnMove;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_60;
		L_60 = PlayerActions_get_Move_mD9D39BC7F3140E5AE940EE2ACCD269037072DE5B(__this, NULL);
		RuntimeObject* L_61 = ___instance0;
		RuntimeObject* L_62 = L_61;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_63 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_63, L_62, (intptr_t)((void*)GetInterfaceMethodInfo(L_62, 0, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_60);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_60, L_63, NULL);
		// @Look.started += instance.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_64;
		L_64 = PlayerActions_get_Look_mDA8FD77B60EBD93C091C23BA8B7722D091E475F8(__this, NULL);
		RuntimeObject* L_65 = ___instance0;
		RuntimeObject* L_66 = L_65;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_67 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_67, L_66, (intptr_t)((void*)GetInterfaceMethodInfo(L_66, 1, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_64);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_64, L_67, NULL);
		// @Look.performed += instance.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_68;
		L_68 = PlayerActions_get_Look_mDA8FD77B60EBD93C091C23BA8B7722D091E475F8(__this, NULL);
		RuntimeObject* L_69 = ___instance0;
		RuntimeObject* L_70 = L_69;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_71 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_71, L_70, (intptr_t)((void*)GetInterfaceMethodInfo(L_70, 1, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_68);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_68, L_71, NULL);
		// @Look.canceled += instance.OnLook;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_72;
		L_72 = PlayerActions_get_Look_mDA8FD77B60EBD93C091C23BA8B7722D091E475F8(__this, NULL);
		RuntimeObject* L_73 = ___instance0;
		RuntimeObject* L_74 = L_73;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_75 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_75, L_74, (intptr_t)((void*)GetInterfaceMethodInfo(L_74, 1, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_72);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_72, L_75, NULL);
		// @Fire.started += instance.OnFire;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_76;
		L_76 = PlayerActions_get_Fire_m92A2148B9DA03414B730D9DA4C01ED6B477233E3(__this, NULL);
		RuntimeObject* L_77 = ___instance0;
		RuntimeObject* L_78 = L_77;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_79 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_79);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_79, L_78, (intptr_t)((void*)GetInterfaceMethodInfo(L_78, 2, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_76);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_76, L_79, NULL);
		// @Fire.performed += instance.OnFire;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_80;
		L_80 = PlayerActions_get_Fire_m92A2148B9DA03414B730D9DA4C01ED6B477233E3(__this, NULL);
		RuntimeObject* L_81 = ___instance0;
		RuntimeObject* L_82 = L_81;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_83 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_83);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_83, L_82, (intptr_t)((void*)GetInterfaceMethodInfo(L_82, 2, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_80);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_80, L_83, NULL);
		// @Fire.canceled += instance.OnFire;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_84;
		L_84 = PlayerActions_get_Fire_m92A2148B9DA03414B730D9DA4C01ED6B477233E3(__this, NULL);
		RuntimeObject* L_85 = ___instance0;
		RuntimeObject* L_86 = L_85;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_87 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_87);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_87, L_86, (intptr_t)((void*)GetInterfaceMethodInfo(L_86, 2, IPlayerActions_t78E8523B30AE7F926356CBFDFE2518CC775C1D81_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_84);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_84, L_87, NULL);
	}

IL_024d:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_SetCallbacks_mCED8917C981C28B8A548980529CF4885A2902165_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PlayerActions_t8089CAFF66DF8A888155569DBB96D5C2B44B777B*>(__this + _offset);
	PlayerActions_SetCallbacks_mCED8917C981C28B8A548980529CF4885A2902165(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: RunX/UIActions
IL2CPP_EXTERN_C void UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshal_pinvoke(const UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9& unmarshaled, UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'UIActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshal_pinvoke_back(const UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshaled_pinvoke& marshaled, UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'UIActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: RunX/UIActions
IL2CPP_EXTERN_C void UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshal_pinvoke_cleanup(UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: RunX/UIActions
IL2CPP_EXTERN_C void UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshal_com(const UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9& unmarshaled, UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'UIActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshal_com_back(const UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshaled_com& marshaled, UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'UIActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: RunX/UIActions
IL2CPP_EXTERN_C void UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshal_com_cleanup(UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9_marshaled_com& marshaled)
{
}
// System.Void RunX/UIActions::.ctor(RunX)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions__ctor_m6E5057848CE77B87279346D9B09429C01FD772B2 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public UIActions(@RunX wrapper) { m_Wrapper = wrapper; }
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public UIActions(@RunX wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void UIActions__ctor_m6E5057848CE77B87279346D9B09429C01FD772B2_AdjustorThunk (RuntimeObject* __this, RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___wrapper0, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	UIActions__ctor_m6E5057848CE77B87279346D9B09429C01FD772B2(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_Navigate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Navigate_m5E3D5DA309F19965AD6670C9C497667A4608FB1E (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Navigate => m_Wrapper.m_UI_Navigate;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_Navigate_8;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Navigate_m5E3D5DA309F19965AD6670C9C497667A4608FB1E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_Navigate_m5E3D5DA309F19965AD6670C9C497667A4608FB1E(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_Submit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Submit_mDEEFF4A8B489EBDABB16AB17488AF49DF4F1C682 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Submit => m_Wrapper.m_UI_Submit;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_Submit_9;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Submit_mDEEFF4A8B489EBDABB16AB17488AF49DF4F1C682_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_Submit_mDEEFF4A8B489EBDABB16AB17488AF49DF4F1C682(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Cancel_m7CE0966052774A10D21C7AC7C5B203A5EF5042C9 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Cancel => m_Wrapper.m_UI_Cancel;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_Cancel_10;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Cancel_m7CE0966052774A10D21C7AC7C5B203A5EF5042C9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_Cancel_m7CE0966052774A10D21C7AC7C5B203A5EF5042C9(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_Point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Point_m88F46B6B2F9F3472159CD9BDB6CD7ADDC5B9DFF4 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Point => m_Wrapper.m_UI_Point;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_Point_11;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Point_m88F46B6B2F9F3472159CD9BDB6CD7ADDC5B9DFF4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_Point_m88F46B6B2F9F3472159CD9BDB6CD7ADDC5B9DFF4(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Click_m02A130C5FF3782C4AEC725836F08E6098BE88CF5 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @Click => m_Wrapper.m_UI_Click;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_Click_12;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_Click_m02A130C5FF3782C4AEC725836F08E6098BE88CF5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_Click_m02A130C5FF3782C4AEC725836F08E6098BE88CF5(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_ScrollWheel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_ScrollWheel_m17D5EBF68D38EA876470E24559BE53455CA061E5 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @ScrollWheel => m_Wrapper.m_UI_ScrollWheel;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_ScrollWheel_13;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_ScrollWheel_m17D5EBF68D38EA876470E24559BE53455CA061E5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_ScrollWheel_m17D5EBF68D38EA876470E24559BE53455CA061E5(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_MiddleClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_MiddleClick_mD5A9D35CB1BADEF0B0AC8A1A1B20B3C1163AEA8C (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @MiddleClick => m_Wrapper.m_UI_MiddleClick;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_MiddleClick_14;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_MiddleClick_mD5A9D35CB1BADEF0B0AC8A1A1B20B3C1163AEA8C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_MiddleClick_mD5A9D35CB1BADEF0B0AC8A1A1B20B3C1163AEA8C(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_RightClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_RightClick_m908917897DAA4254300BC1A269C343892269A7AB (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @RightClick => m_Wrapper.m_UI_RightClick;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_RightClick_15;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_RightClick_m908917897DAA4254300BC1A269C343892269A7AB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_RightClick_m908917897DAA4254300BC1A269C343892269A7AB(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_TrackedDevicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_TrackedDevicePosition_m4E060E76211F36EBDDC7D6151B92397F18130DB1 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @TrackedDevicePosition => m_Wrapper.m_UI_TrackedDevicePosition;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_TrackedDevicePosition_16;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_TrackedDevicePosition_m4E060E76211F36EBDDC7D6151B92397F18130DB1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_TrackedDevicePosition_m4E060E76211F36EBDDC7D6151B92397F18130DB1(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction RunX/UIActions::get_TrackedDeviceOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_TrackedDeviceOrientation_mA268A9A0D30918414AF788E0E2240022926B0045 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @TrackedDeviceOrientation => m_Wrapper.m_UI_TrackedDeviceOrientation;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_UI_TrackedDeviceOrientation_17;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* UIActions_get_TrackedDeviceOrientation_mA268A9A0D30918414AF788E0E2240022926B0045_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = UIActions_get_TrackedDeviceOrientation_mA268A9A0D30918414AF788E0E2240022926B0045(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap RunX/UIActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* UIActions_Get_mCD3D84F0258695C21A924EF4774C62A84DBEC035 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public InputActionMap Get() { return m_Wrapper.m_UI; }
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_UI_6;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public InputActionMap Get() { return m_Wrapper.m_UI; }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* UIActions_Get_mCD3D84F0258695C21A924EF4774C62A84DBEC035_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = UIActions_Get_mCD3D84F0258695C21A924EF4774C62A84DBEC035(_thisAdjusted, method);
	return _returnValue;
}
// System.Void RunX/UIActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions_Enable_mFA062A49DA268EEEFE68C24A51710A6FFCF5F9F9 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = UIActions_Get_mCD3D84F0258695C21A924EF4774C62A84DBEC035(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void UIActions_Enable_mFA062A49DA268EEEFE68C24A51710A6FFCF5F9F9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	UIActions_Enable_mFA062A49DA268EEEFE68C24A51710A6FFCF5F9F9(_thisAdjusted, method);
}
// System.Void RunX/UIActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions_Disable_mE901D9E2D350150894FB51D4E28B5884ACCBDF4D (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = UIActions_Get_mCD3D84F0258695C21A924EF4774C62A84DBEC035(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void UIActions_Disable_mE901D9E2D350150894FB51D4E28B5884ACCBDF4D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	UIActions_Disable_mE901D9E2D350150894FB51D4E28B5884ACCBDF4D(_thisAdjusted, method);
}
// System.Boolean RunX/UIActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIActions_get_enabled_mB974FE74C312CA1AECB4E6D976809D1E5BE66E22 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = UIActions_Get_mCD3D84F0258695C21A924EF4774C62A84DBEC035(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool UIActions_get_enabled_mB974FE74C312CA1AECB4E6D976809D1E5BE66E22_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	bool _returnValue;
	_returnValue = UIActions_get_enabled_mB974FE74C312CA1AECB4E6D976809D1E5BE66E22(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap RunX/UIActions::op_Implicit(RunX/UIActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* UIActions_op_Implicit_m15CA5EFE376933E93CC1E432C59FBF8B788CC38A (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9 ___set0, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public static implicit operator InputActionMap(UIActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = UIActions_Get_mCD3D84F0258695C21A924EF4774C62A84DBEC035((&___set0), NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// public static implicit operator InputActionMap(UIActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = V_0;
		return L_1;
	}
}
// System.Void RunX/UIActions::SetCallbacks(RunX/IUIActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIActions_SetCallbacks_mAFDBF7619EAB912946332A32D3861140EC8782D5 (UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Wrapper.m_UIActionsCallbackInterface != null)
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_UIActionsCallbackInterface_7;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0432;
		}
	}
	{
		// @Navigate.started -= m_Wrapper.m_UIActionsCallbackInterface.OnNavigate;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = UIActions_get_Navigate_m5E3D5DA309F19965AD6670C9C497667A4608FB1E(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_4 = __this->___m_Wrapper_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_6 = L_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, L_6, (intptr_t)((void*)GetInterfaceMethodInfo(L_6, 0, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_3);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_3, L_7, NULL);
		// @Navigate.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnNavigate;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = UIActions_get_Navigate_m5E3D5DA309F19965AD6670C9C497667A4608FB1E(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_9 = __this->___m_Wrapper_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_11 = L_10;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_12 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_12, L_11, (intptr_t)((void*)GetInterfaceMethodInfo(L_11, 0, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_8);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_8, L_12, NULL);
		// @Navigate.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnNavigate;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = UIActions_get_Navigate_m5E3D5DA309F19965AD6670C9C497667A4608FB1E(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_14 = __this->___m_Wrapper_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_16 = L_15;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_17 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_17, L_16, (intptr_t)((void*)GetInterfaceMethodInfo(L_16, 0, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_13);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_13, L_17, NULL);
		// @Submit.started -= m_Wrapper.m_UIActionsCallbackInterface.OnSubmit;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18;
		L_18 = UIActions_get_Submit_mDEEFF4A8B489EBDABB16AB17488AF49DF4F1C682(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_19 = __this->___m_Wrapper_0;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_21 = L_20;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_22 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_22, L_21, (intptr_t)((void*)GetInterfaceMethodInfo(L_21, 1, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_18);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_18, L_22, NULL);
		// @Submit.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnSubmit;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_23;
		L_23 = UIActions_get_Submit_mDEEFF4A8B489EBDABB16AB17488AF49DF4F1C682(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_24 = __this->___m_Wrapper_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_26 = L_25;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_27 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_27, L_26, (intptr_t)((void*)GetInterfaceMethodInfo(L_26, 1, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_23);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_23, L_27, NULL);
		// @Submit.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnSubmit;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = UIActions_get_Submit_mDEEFF4A8B489EBDABB16AB17488AF49DF4F1C682(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_29 = __this->___m_Wrapper_0;
		NullCheck(L_29);
		RuntimeObject* L_30 = L_29->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_31 = L_30;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_32 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_32, L_31, (intptr_t)((void*)GetInterfaceMethodInfo(L_31, 1, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_28);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_28, L_32, NULL);
		// @Cancel.started -= m_Wrapper.m_UIActionsCallbackInterface.OnCancel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_33;
		L_33 = UIActions_get_Cancel_m7CE0966052774A10D21C7AC7C5B203A5EF5042C9(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_34 = __this->___m_Wrapper_0;
		NullCheck(L_34);
		RuntimeObject* L_35 = L_34->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_36 = L_35;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_37 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_37, L_36, (intptr_t)((void*)GetInterfaceMethodInfo(L_36, 2, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_33);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_33, L_37, NULL);
		// @Cancel.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnCancel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_38;
		L_38 = UIActions_get_Cancel_m7CE0966052774A10D21C7AC7C5B203A5EF5042C9(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_39 = __this->___m_Wrapper_0;
		NullCheck(L_39);
		RuntimeObject* L_40 = L_39->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_41 = L_40;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_42 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_42, L_41, (intptr_t)((void*)GetInterfaceMethodInfo(L_41, 2, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_38);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_38, L_42, NULL);
		// @Cancel.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnCancel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_43;
		L_43 = UIActions_get_Cancel_m7CE0966052774A10D21C7AC7C5B203A5EF5042C9(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_44 = __this->___m_Wrapper_0;
		NullCheck(L_44);
		RuntimeObject* L_45 = L_44->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_46 = L_45;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_47 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_47, L_46, (intptr_t)((void*)GetInterfaceMethodInfo(L_46, 2, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_43);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_43, L_47, NULL);
		// @Point.started -= m_Wrapper.m_UIActionsCallbackInterface.OnPoint;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_48;
		L_48 = UIActions_get_Point_m88F46B6B2F9F3472159CD9BDB6CD7ADDC5B9DFF4(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_49 = __this->___m_Wrapper_0;
		NullCheck(L_49);
		RuntimeObject* L_50 = L_49->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_51 = L_50;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_52 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_52, L_51, (intptr_t)((void*)GetInterfaceMethodInfo(L_51, 3, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_48);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_48, L_52, NULL);
		// @Point.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnPoint;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_53;
		L_53 = UIActions_get_Point_m88F46B6B2F9F3472159CD9BDB6CD7ADDC5B9DFF4(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_54 = __this->___m_Wrapper_0;
		NullCheck(L_54);
		RuntimeObject* L_55 = L_54->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_56 = L_55;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_57 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_57, L_56, (intptr_t)((void*)GetInterfaceMethodInfo(L_56, 3, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_53);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_53, L_57, NULL);
		// @Point.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnPoint;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_58;
		L_58 = UIActions_get_Point_m88F46B6B2F9F3472159CD9BDB6CD7ADDC5B9DFF4(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_59 = __this->___m_Wrapper_0;
		NullCheck(L_59);
		RuntimeObject* L_60 = L_59->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_61 = L_60;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_62 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_62, L_61, (intptr_t)((void*)GetInterfaceMethodInfo(L_61, 3, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_58);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_58, L_62, NULL);
		// @Click.started -= m_Wrapper.m_UIActionsCallbackInterface.OnClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_63;
		L_63 = UIActions_get_Click_m02A130C5FF3782C4AEC725836F08E6098BE88CF5(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_64 = __this->___m_Wrapper_0;
		NullCheck(L_64);
		RuntimeObject* L_65 = L_64->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_66 = L_65;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_67 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_67, L_66, (intptr_t)((void*)GetInterfaceMethodInfo(L_66, 4, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_63);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_63, L_67, NULL);
		// @Click.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_68;
		L_68 = UIActions_get_Click_m02A130C5FF3782C4AEC725836F08E6098BE88CF5(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_69 = __this->___m_Wrapper_0;
		NullCheck(L_69);
		RuntimeObject* L_70 = L_69->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_71 = L_70;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_72 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_72);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_72, L_71, (intptr_t)((void*)GetInterfaceMethodInfo(L_71, 4, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_68);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_68, L_72, NULL);
		// @Click.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_73;
		L_73 = UIActions_get_Click_m02A130C5FF3782C4AEC725836F08E6098BE88CF5(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_74 = __this->___m_Wrapper_0;
		NullCheck(L_74);
		RuntimeObject* L_75 = L_74->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_76 = L_75;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_77 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_77);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_77, L_76, (intptr_t)((void*)GetInterfaceMethodInfo(L_76, 4, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_73);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_73, L_77, NULL);
		// @ScrollWheel.started -= m_Wrapper.m_UIActionsCallbackInterface.OnScrollWheel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_78;
		L_78 = UIActions_get_ScrollWheel_m17D5EBF68D38EA876470E24559BE53455CA061E5(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_79 = __this->___m_Wrapper_0;
		NullCheck(L_79);
		RuntimeObject* L_80 = L_79->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_81 = L_80;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_82 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_82, L_81, (intptr_t)((void*)GetInterfaceMethodInfo(L_81, 5, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_78);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_78, L_82, NULL);
		// @ScrollWheel.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnScrollWheel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_83;
		L_83 = UIActions_get_ScrollWheel_m17D5EBF68D38EA876470E24559BE53455CA061E5(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_84 = __this->___m_Wrapper_0;
		NullCheck(L_84);
		RuntimeObject* L_85 = L_84->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_86 = L_85;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_87 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_87);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_87, L_86, (intptr_t)((void*)GetInterfaceMethodInfo(L_86, 5, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_83);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_83, L_87, NULL);
		// @ScrollWheel.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnScrollWheel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_88;
		L_88 = UIActions_get_ScrollWheel_m17D5EBF68D38EA876470E24559BE53455CA061E5(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_89 = __this->___m_Wrapper_0;
		NullCheck(L_89);
		RuntimeObject* L_90 = L_89->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_91 = L_90;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_92 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_92);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_92, L_91, (intptr_t)((void*)GetInterfaceMethodInfo(L_91, 5, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_88);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_88, L_92, NULL);
		// @MiddleClick.started -= m_Wrapper.m_UIActionsCallbackInterface.OnMiddleClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_93;
		L_93 = UIActions_get_MiddleClick_mD5A9D35CB1BADEF0B0AC8A1A1B20B3C1163AEA8C(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_94 = __this->___m_Wrapper_0;
		NullCheck(L_94);
		RuntimeObject* L_95 = L_94->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_96 = L_95;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_97 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_97, L_96, (intptr_t)((void*)GetInterfaceMethodInfo(L_96, 6, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_93);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_93, L_97, NULL);
		// @MiddleClick.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnMiddleClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_98;
		L_98 = UIActions_get_MiddleClick_mD5A9D35CB1BADEF0B0AC8A1A1B20B3C1163AEA8C(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_99 = __this->___m_Wrapper_0;
		NullCheck(L_99);
		RuntimeObject* L_100 = L_99->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_101 = L_100;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_102 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_102);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_102, L_101, (intptr_t)((void*)GetInterfaceMethodInfo(L_101, 6, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_98);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_98, L_102, NULL);
		// @MiddleClick.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnMiddleClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_103;
		L_103 = UIActions_get_MiddleClick_mD5A9D35CB1BADEF0B0AC8A1A1B20B3C1163AEA8C(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_104 = __this->___m_Wrapper_0;
		NullCheck(L_104);
		RuntimeObject* L_105 = L_104->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_106 = L_105;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_107 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_107);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_107, L_106, (intptr_t)((void*)GetInterfaceMethodInfo(L_106, 6, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_103);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_103, L_107, NULL);
		// @RightClick.started -= m_Wrapper.m_UIActionsCallbackInterface.OnRightClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_108;
		L_108 = UIActions_get_RightClick_m908917897DAA4254300BC1A269C343892269A7AB(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_109 = __this->___m_Wrapper_0;
		NullCheck(L_109);
		RuntimeObject* L_110 = L_109->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_111 = L_110;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_112 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_112);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_112, L_111, (intptr_t)((void*)GetInterfaceMethodInfo(L_111, 7, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_108);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_108, L_112, NULL);
		// @RightClick.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnRightClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_113;
		L_113 = UIActions_get_RightClick_m908917897DAA4254300BC1A269C343892269A7AB(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_114 = __this->___m_Wrapper_0;
		NullCheck(L_114);
		RuntimeObject* L_115 = L_114->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_116 = L_115;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_117 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_117);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_117, L_116, (intptr_t)((void*)GetInterfaceMethodInfo(L_116, 7, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_113);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_113, L_117, NULL);
		// @RightClick.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnRightClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_118;
		L_118 = UIActions_get_RightClick_m908917897DAA4254300BC1A269C343892269A7AB(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_119 = __this->___m_Wrapper_0;
		NullCheck(L_119);
		RuntimeObject* L_120 = L_119->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_121 = L_120;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_122 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_122);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_122, L_121, (intptr_t)((void*)GetInterfaceMethodInfo(L_121, 7, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_118);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_118, L_122, NULL);
		// @TrackedDevicePosition.started -= m_Wrapper.m_UIActionsCallbackInterface.OnTrackedDevicePosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_123;
		L_123 = UIActions_get_TrackedDevicePosition_m4E060E76211F36EBDDC7D6151B92397F18130DB1(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_124 = __this->___m_Wrapper_0;
		NullCheck(L_124);
		RuntimeObject* L_125 = L_124->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_126 = L_125;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_127 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_127);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_127, L_126, (intptr_t)((void*)GetInterfaceMethodInfo(L_126, 8, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_123);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_123, L_127, NULL);
		// @TrackedDevicePosition.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnTrackedDevicePosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_128;
		L_128 = UIActions_get_TrackedDevicePosition_m4E060E76211F36EBDDC7D6151B92397F18130DB1(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_129 = __this->___m_Wrapper_0;
		NullCheck(L_129);
		RuntimeObject* L_130 = L_129->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_131 = L_130;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_132 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_132);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_132, L_131, (intptr_t)((void*)GetInterfaceMethodInfo(L_131, 8, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_128);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_128, L_132, NULL);
		// @TrackedDevicePosition.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnTrackedDevicePosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_133;
		L_133 = UIActions_get_TrackedDevicePosition_m4E060E76211F36EBDDC7D6151B92397F18130DB1(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_134 = __this->___m_Wrapper_0;
		NullCheck(L_134);
		RuntimeObject* L_135 = L_134->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_136 = L_135;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_137 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_137);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_137, L_136, (intptr_t)((void*)GetInterfaceMethodInfo(L_136, 8, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_133);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_133, L_137, NULL);
		// @TrackedDeviceOrientation.started -= m_Wrapper.m_UIActionsCallbackInterface.OnTrackedDeviceOrientation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_138;
		L_138 = UIActions_get_TrackedDeviceOrientation_mA268A9A0D30918414AF788E0E2240022926B0045(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_139 = __this->___m_Wrapper_0;
		NullCheck(L_139);
		RuntimeObject* L_140 = L_139->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_141 = L_140;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_142 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_142);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_142, L_141, (intptr_t)((void*)GetInterfaceMethodInfo(L_141, 9, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_138);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_138, L_142, NULL);
		// @TrackedDeviceOrientation.performed -= m_Wrapper.m_UIActionsCallbackInterface.OnTrackedDeviceOrientation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_143;
		L_143 = UIActions_get_TrackedDeviceOrientation_mA268A9A0D30918414AF788E0E2240022926B0045(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_144 = __this->___m_Wrapper_0;
		NullCheck(L_144);
		RuntimeObject* L_145 = L_144->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_146 = L_145;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_147 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_147);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_147, L_146, (intptr_t)((void*)GetInterfaceMethodInfo(L_146, 9, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_143);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_143, L_147, NULL);
		// @TrackedDeviceOrientation.canceled -= m_Wrapper.m_UIActionsCallbackInterface.OnTrackedDeviceOrientation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_148;
		L_148 = UIActions_get_TrackedDeviceOrientation_mA268A9A0D30918414AF788E0E2240022926B0045(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_149 = __this->___m_Wrapper_0;
		NullCheck(L_149);
		RuntimeObject* L_150 = L_149->___m_UIActionsCallbackInterface_7;
		RuntimeObject* L_151 = L_150;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_152 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_152);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_152, L_151, (intptr_t)((void*)GetInterfaceMethodInfo(L_151, 9, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_148);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_148, L_152, NULL);
	}

IL_0432:
	{
		// m_Wrapper.m_UIActionsCallbackInterface = instance;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_153 = __this->___m_Wrapper_0;
		RuntimeObject* L_154 = ___instance0;
		NullCheck(L_153);
		L_153->___m_UIActionsCallbackInterface_7 = L_154;
		Il2CppCodeGenWriteBarrier((void**)(&L_153->___m_UIActionsCallbackInterface_7), (void*)L_154);
		// if (instance != null)
		RuntimeObject* L_155 = ___instance0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_155) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_156 = V_1;
		if (!L_156)
		{
			goto IL_0739;
		}
	}
	{
		// @Navigate.started += instance.OnNavigate;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_157;
		L_157 = UIActions_get_Navigate_m5E3D5DA309F19965AD6670C9C497667A4608FB1E(__this, NULL);
		RuntimeObject* L_158 = ___instance0;
		RuntimeObject* L_159 = L_158;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_160 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_160);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_160, L_159, (intptr_t)((void*)GetInterfaceMethodInfo(L_159, 0, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_157);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_157, L_160, NULL);
		// @Navigate.performed += instance.OnNavigate;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_161;
		L_161 = UIActions_get_Navigate_m5E3D5DA309F19965AD6670C9C497667A4608FB1E(__this, NULL);
		RuntimeObject* L_162 = ___instance0;
		RuntimeObject* L_163 = L_162;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_164 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_164);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_164, L_163, (intptr_t)((void*)GetInterfaceMethodInfo(L_163, 0, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_161);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_161, L_164, NULL);
		// @Navigate.canceled += instance.OnNavigate;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_165;
		L_165 = UIActions_get_Navigate_m5E3D5DA309F19965AD6670C9C497667A4608FB1E(__this, NULL);
		RuntimeObject* L_166 = ___instance0;
		RuntimeObject* L_167 = L_166;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_168 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_168);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_168, L_167, (intptr_t)((void*)GetInterfaceMethodInfo(L_167, 0, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_165);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_165, L_168, NULL);
		// @Submit.started += instance.OnSubmit;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_169;
		L_169 = UIActions_get_Submit_mDEEFF4A8B489EBDABB16AB17488AF49DF4F1C682(__this, NULL);
		RuntimeObject* L_170 = ___instance0;
		RuntimeObject* L_171 = L_170;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_172 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_172);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_172, L_171, (intptr_t)((void*)GetInterfaceMethodInfo(L_171, 1, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_169);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_169, L_172, NULL);
		// @Submit.performed += instance.OnSubmit;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_173;
		L_173 = UIActions_get_Submit_mDEEFF4A8B489EBDABB16AB17488AF49DF4F1C682(__this, NULL);
		RuntimeObject* L_174 = ___instance0;
		RuntimeObject* L_175 = L_174;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_176 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_176);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_176, L_175, (intptr_t)((void*)GetInterfaceMethodInfo(L_175, 1, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_173);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_173, L_176, NULL);
		// @Submit.canceled += instance.OnSubmit;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_177;
		L_177 = UIActions_get_Submit_mDEEFF4A8B489EBDABB16AB17488AF49DF4F1C682(__this, NULL);
		RuntimeObject* L_178 = ___instance0;
		RuntimeObject* L_179 = L_178;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_180 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_180);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_180, L_179, (intptr_t)((void*)GetInterfaceMethodInfo(L_179, 1, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_177);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_177, L_180, NULL);
		// @Cancel.started += instance.OnCancel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_181;
		L_181 = UIActions_get_Cancel_m7CE0966052774A10D21C7AC7C5B203A5EF5042C9(__this, NULL);
		RuntimeObject* L_182 = ___instance0;
		RuntimeObject* L_183 = L_182;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_184 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_184);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_184, L_183, (intptr_t)((void*)GetInterfaceMethodInfo(L_183, 2, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_181);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_181, L_184, NULL);
		// @Cancel.performed += instance.OnCancel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_185;
		L_185 = UIActions_get_Cancel_m7CE0966052774A10D21C7AC7C5B203A5EF5042C9(__this, NULL);
		RuntimeObject* L_186 = ___instance0;
		RuntimeObject* L_187 = L_186;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_188 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_188);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_188, L_187, (intptr_t)((void*)GetInterfaceMethodInfo(L_187, 2, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_185);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_185, L_188, NULL);
		// @Cancel.canceled += instance.OnCancel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_189;
		L_189 = UIActions_get_Cancel_m7CE0966052774A10D21C7AC7C5B203A5EF5042C9(__this, NULL);
		RuntimeObject* L_190 = ___instance0;
		RuntimeObject* L_191 = L_190;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_192 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_192);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_192, L_191, (intptr_t)((void*)GetInterfaceMethodInfo(L_191, 2, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_189);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_189, L_192, NULL);
		// @Point.started += instance.OnPoint;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_193;
		L_193 = UIActions_get_Point_m88F46B6B2F9F3472159CD9BDB6CD7ADDC5B9DFF4(__this, NULL);
		RuntimeObject* L_194 = ___instance0;
		RuntimeObject* L_195 = L_194;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_196 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_196);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_196, L_195, (intptr_t)((void*)GetInterfaceMethodInfo(L_195, 3, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_193);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_193, L_196, NULL);
		// @Point.performed += instance.OnPoint;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_197;
		L_197 = UIActions_get_Point_m88F46B6B2F9F3472159CD9BDB6CD7ADDC5B9DFF4(__this, NULL);
		RuntimeObject* L_198 = ___instance0;
		RuntimeObject* L_199 = L_198;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_200 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_200);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_200, L_199, (intptr_t)((void*)GetInterfaceMethodInfo(L_199, 3, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_197);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_197, L_200, NULL);
		// @Point.canceled += instance.OnPoint;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_201;
		L_201 = UIActions_get_Point_m88F46B6B2F9F3472159CD9BDB6CD7ADDC5B9DFF4(__this, NULL);
		RuntimeObject* L_202 = ___instance0;
		RuntimeObject* L_203 = L_202;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_204 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_204);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_204, L_203, (intptr_t)((void*)GetInterfaceMethodInfo(L_203, 3, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_201);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_201, L_204, NULL);
		// @Click.started += instance.OnClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_205;
		L_205 = UIActions_get_Click_m02A130C5FF3782C4AEC725836F08E6098BE88CF5(__this, NULL);
		RuntimeObject* L_206 = ___instance0;
		RuntimeObject* L_207 = L_206;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_208 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_208);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_208, L_207, (intptr_t)((void*)GetInterfaceMethodInfo(L_207, 4, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_205);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_205, L_208, NULL);
		// @Click.performed += instance.OnClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_209;
		L_209 = UIActions_get_Click_m02A130C5FF3782C4AEC725836F08E6098BE88CF5(__this, NULL);
		RuntimeObject* L_210 = ___instance0;
		RuntimeObject* L_211 = L_210;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_212 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_212);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_212, L_211, (intptr_t)((void*)GetInterfaceMethodInfo(L_211, 4, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_209);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_209, L_212, NULL);
		// @Click.canceled += instance.OnClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_213;
		L_213 = UIActions_get_Click_m02A130C5FF3782C4AEC725836F08E6098BE88CF5(__this, NULL);
		RuntimeObject* L_214 = ___instance0;
		RuntimeObject* L_215 = L_214;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_216 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_216);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_216, L_215, (intptr_t)((void*)GetInterfaceMethodInfo(L_215, 4, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_213);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_213, L_216, NULL);
		// @ScrollWheel.started += instance.OnScrollWheel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_217;
		L_217 = UIActions_get_ScrollWheel_m17D5EBF68D38EA876470E24559BE53455CA061E5(__this, NULL);
		RuntimeObject* L_218 = ___instance0;
		RuntimeObject* L_219 = L_218;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_220 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_220);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_220, L_219, (intptr_t)((void*)GetInterfaceMethodInfo(L_219, 5, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_217);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_217, L_220, NULL);
		// @ScrollWheel.performed += instance.OnScrollWheel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_221;
		L_221 = UIActions_get_ScrollWheel_m17D5EBF68D38EA876470E24559BE53455CA061E5(__this, NULL);
		RuntimeObject* L_222 = ___instance0;
		RuntimeObject* L_223 = L_222;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_224 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_224);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_224, L_223, (intptr_t)((void*)GetInterfaceMethodInfo(L_223, 5, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_221);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_221, L_224, NULL);
		// @ScrollWheel.canceled += instance.OnScrollWheel;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_225;
		L_225 = UIActions_get_ScrollWheel_m17D5EBF68D38EA876470E24559BE53455CA061E5(__this, NULL);
		RuntimeObject* L_226 = ___instance0;
		RuntimeObject* L_227 = L_226;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_228 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_228);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_228, L_227, (intptr_t)((void*)GetInterfaceMethodInfo(L_227, 5, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_225);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_225, L_228, NULL);
		// @MiddleClick.started += instance.OnMiddleClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_229;
		L_229 = UIActions_get_MiddleClick_mD5A9D35CB1BADEF0B0AC8A1A1B20B3C1163AEA8C(__this, NULL);
		RuntimeObject* L_230 = ___instance0;
		RuntimeObject* L_231 = L_230;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_232 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_232);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_232, L_231, (intptr_t)((void*)GetInterfaceMethodInfo(L_231, 6, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_229);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_229, L_232, NULL);
		// @MiddleClick.performed += instance.OnMiddleClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_233;
		L_233 = UIActions_get_MiddleClick_mD5A9D35CB1BADEF0B0AC8A1A1B20B3C1163AEA8C(__this, NULL);
		RuntimeObject* L_234 = ___instance0;
		RuntimeObject* L_235 = L_234;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_236 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_236);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_236, L_235, (intptr_t)((void*)GetInterfaceMethodInfo(L_235, 6, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_233);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_233, L_236, NULL);
		// @MiddleClick.canceled += instance.OnMiddleClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_237;
		L_237 = UIActions_get_MiddleClick_mD5A9D35CB1BADEF0B0AC8A1A1B20B3C1163AEA8C(__this, NULL);
		RuntimeObject* L_238 = ___instance0;
		RuntimeObject* L_239 = L_238;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_240 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_240);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_240, L_239, (intptr_t)((void*)GetInterfaceMethodInfo(L_239, 6, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_237);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_237, L_240, NULL);
		// @RightClick.started += instance.OnRightClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_241;
		L_241 = UIActions_get_RightClick_m908917897DAA4254300BC1A269C343892269A7AB(__this, NULL);
		RuntimeObject* L_242 = ___instance0;
		RuntimeObject* L_243 = L_242;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_244 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_244);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_244, L_243, (intptr_t)((void*)GetInterfaceMethodInfo(L_243, 7, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_241);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_241, L_244, NULL);
		// @RightClick.performed += instance.OnRightClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_245;
		L_245 = UIActions_get_RightClick_m908917897DAA4254300BC1A269C343892269A7AB(__this, NULL);
		RuntimeObject* L_246 = ___instance0;
		RuntimeObject* L_247 = L_246;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_248 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_248);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_248, L_247, (intptr_t)((void*)GetInterfaceMethodInfo(L_247, 7, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_245);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_245, L_248, NULL);
		// @RightClick.canceled += instance.OnRightClick;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_249;
		L_249 = UIActions_get_RightClick_m908917897DAA4254300BC1A269C343892269A7AB(__this, NULL);
		RuntimeObject* L_250 = ___instance0;
		RuntimeObject* L_251 = L_250;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_252 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_252);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_252, L_251, (intptr_t)((void*)GetInterfaceMethodInfo(L_251, 7, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_249);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_249, L_252, NULL);
		// @TrackedDevicePosition.started += instance.OnTrackedDevicePosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_253;
		L_253 = UIActions_get_TrackedDevicePosition_m4E060E76211F36EBDDC7D6151B92397F18130DB1(__this, NULL);
		RuntimeObject* L_254 = ___instance0;
		RuntimeObject* L_255 = L_254;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_256 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_256);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_256, L_255, (intptr_t)((void*)GetInterfaceMethodInfo(L_255, 8, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_253);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_253, L_256, NULL);
		// @TrackedDevicePosition.performed += instance.OnTrackedDevicePosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_257;
		L_257 = UIActions_get_TrackedDevicePosition_m4E060E76211F36EBDDC7D6151B92397F18130DB1(__this, NULL);
		RuntimeObject* L_258 = ___instance0;
		RuntimeObject* L_259 = L_258;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_260 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_260);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_260, L_259, (intptr_t)((void*)GetInterfaceMethodInfo(L_259, 8, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_257);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_257, L_260, NULL);
		// @TrackedDevicePosition.canceled += instance.OnTrackedDevicePosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_261;
		L_261 = UIActions_get_TrackedDevicePosition_m4E060E76211F36EBDDC7D6151B92397F18130DB1(__this, NULL);
		RuntimeObject* L_262 = ___instance0;
		RuntimeObject* L_263 = L_262;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_264 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_264);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_264, L_263, (intptr_t)((void*)GetInterfaceMethodInfo(L_263, 8, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_261);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_261, L_264, NULL);
		// @TrackedDeviceOrientation.started += instance.OnTrackedDeviceOrientation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_265;
		L_265 = UIActions_get_TrackedDeviceOrientation_mA268A9A0D30918414AF788E0E2240022926B0045(__this, NULL);
		RuntimeObject* L_266 = ___instance0;
		RuntimeObject* L_267 = L_266;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_268 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_268);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_268, L_267, (intptr_t)((void*)GetInterfaceMethodInfo(L_267, 9, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_265);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_265, L_268, NULL);
		// @TrackedDeviceOrientation.performed += instance.OnTrackedDeviceOrientation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_269;
		L_269 = UIActions_get_TrackedDeviceOrientation_mA268A9A0D30918414AF788E0E2240022926B0045(__this, NULL);
		RuntimeObject* L_270 = ___instance0;
		RuntimeObject* L_271 = L_270;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_272 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_272);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_272, L_271, (intptr_t)((void*)GetInterfaceMethodInfo(L_271, 9, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_269);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_269, L_272, NULL);
		// @TrackedDeviceOrientation.canceled += instance.OnTrackedDeviceOrientation;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_273;
		L_273 = UIActions_get_TrackedDeviceOrientation_mA268A9A0D30918414AF788E0E2240022926B0045(__this, NULL);
		RuntimeObject* L_274 = ___instance0;
		RuntimeObject* L_275 = L_274;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_276 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_276);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_276, L_275, (intptr_t)((void*)GetInterfaceMethodInfo(L_275, 9, IUIActions_t5BFEC474F104096353B7110B363E0DE3ECBA6CC9_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_273);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_273, L_276, NULL);
	}

IL_0739:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void UIActions_SetCallbacks_mAFDBF7619EAB912946332A32D3861140EC8782D5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<UIActions_t200C076A57C85F30B1CEB852C2B5918B48A6A4C9*>(__this + _offset);
	UIActions_SetCallbacks_mAFDBF7619EAB912946332A32D3861140EC8782D5(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: RunX/TouchActions
IL2CPP_EXTERN_C void TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshal_pinvoke(const TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49& unmarshaled, TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshal_pinvoke_back(const TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshaled_pinvoke& marshaled, TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: RunX/TouchActions
IL2CPP_EXTERN_C void TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshal_pinvoke_cleanup(TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: RunX/TouchActions
IL2CPP_EXTERN_C void TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshal_com(const TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49& unmarshaled, TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshal_com_back(const TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshaled_com& marshaled, TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'TouchActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: RunX/TouchActions
IL2CPP_EXTERN_C void TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshal_com_cleanup(TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49_marshaled_com& marshaled)
{
}
// System.Void RunX/TouchActions::.ctor(RunX)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions__ctor_mA81FEC30D9503A85BF6CFF9004852C5E00FF0050 (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___wrapper0, const RuntimeMethod* method) 
{
	{
		// public TouchActions(@RunX wrapper) { m_Wrapper = wrapper; }
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = ___wrapper0;
		__this->___m_Wrapper_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Wrapper_0), (void*)L_0);
		// public TouchActions(@RunX wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchActions__ctor_mA81FEC30D9503A85BF6CFF9004852C5E00FF0050_AdjustorThunk (RuntimeObject* __this, RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* ___wrapper0, const RuntimeMethod* method)
{
	TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49*>(__this + _offset);
	TouchActions__ctor_mA81FEC30D9503A85BF6CFF9004852C5E00FF0050(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction RunX/TouchActions::get_PrimaryContact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchActions_get_PrimaryContact_mE1E5FCF6E40A0C866EB2DD057649A34A439CD2F5 (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @PrimaryContact => m_Wrapper.m_Touch_PrimaryContact;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Touch_PrimaryContact_20;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchActions_get_PrimaryContact_mE1E5FCF6E40A0C866EB2DD057649A34A439CD2F5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = TouchActions_get_PrimaryContact_mE1E5FCF6E40A0C866EB2DD057649A34A439CD2F5(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputAction RunX/TouchActions::get_PrimaryPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction @PrimaryPosition => m_Wrapper.m_Touch_PrimaryPosition;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = L_0->___m_Touch_PrimaryPosition_21;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49*>(__this + _offset);
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* _returnValue;
	_returnValue = TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap RunX/TouchActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* TouchActions_Get_mE964BE0B8362B644CFACC854F6D8F5FAD3F635F6 (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public InputActionMap Get() { return m_Wrapper.m_Touch; }
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = L_0->___m_Touch_18;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// public InputActionMap Get() { return m_Wrapper.m_Touch; }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* TouchActions_Get_mE964BE0B8362B644CFACC854F6D8F5FAD3F635F6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49*>(__this + _offset);
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* _returnValue;
	_returnValue = TouchActions_Get_mE964BE0B8362B644CFACC854F6D8F5FAD3F635F6(_thisAdjusted, method);
	return _returnValue;
}
// System.Void RunX/TouchActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_Enable_m14BBFFB5841D5D7C9FBF96DBCB5C3950EDE5192E (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, const RuntimeMethod* method) 
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = TouchActions_Get_mE964BE0B8362B644CFACC854F6D8F5FAD3F635F6(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Enable_mAB23F0C4179D27C375F9FA335898B02E336CA4F6(L_0, NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchActions_Enable_m14BBFFB5841D5D7C9FBF96DBCB5C3950EDE5192E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49*>(__this + _offset);
	TouchActions_Enable_m14BBFFB5841D5D7C9FBF96DBCB5C3950EDE5192E(_thisAdjusted, method);
}
// System.Void RunX/TouchActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_Disable_m01F79834A51BFFC467A10D6C53B072789CF5C98A (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, const RuntimeMethod* method) 
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = TouchActions_Get_mE964BE0B8362B644CFACC854F6D8F5FAD3F635F6(__this, NULL);
		NullCheck(L_0);
		InputActionMap_Disable_m987468348648610F8B84D4F481592FF37AF5445C(L_0, NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchActions_Disable_m01F79834A51BFFC467A10D6C53B072789CF5C98A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49*>(__this + _offset);
	TouchActions_Disable_m01F79834A51BFFC467A10D6C53B072789CF5C98A(_thisAdjusted, method);
}
// System.Boolean RunX/TouchActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TouchActions_get_enabled_mBD0F2DF07AFC2F1C7DA4BCBD34BA75169474DCA5 (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, const RuntimeMethod* method) 
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = TouchActions_Get_mE964BE0B8362B644CFACC854F6D8F5FAD3F635F6(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InputActionMap_get_enabled_mB89FAA20F1EA1884A28829B3E350822D7456E888(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool TouchActions_get_enabled_mBD0F2DF07AFC2F1C7DA4BCBD34BA75169474DCA5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49*>(__this + _offset);
	bool _returnValue;
	_returnValue = TouchActions_get_enabled_mBD0F2DF07AFC2F1C7DA4BCBD34BA75169474DCA5(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap RunX/TouchActions::op_Implicit(RunX/TouchActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* TouchActions_op_Implicit_mD77B2D576AEECA0C2AB0DCB52746159847645CC4 (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49 ___set0, const RuntimeMethod* method) 
{
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* V_0 = NULL;
	{
		// public static implicit operator InputActionMap(TouchActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_0;
		L_0 = TouchActions_Get_mE964BE0B8362B644CFACC854F6D8F5FAD3F635F6((&___set0), NULL);
		V_0 = L_0;
		goto IL_000b;
	}

IL_000b:
	{
		// public static implicit operator InputActionMap(TouchActions set) { return set.Get(); }
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_1 = V_0;
		return L_1;
	}
}
// System.Void RunX/TouchActions::SetCallbacks(RunX/ITouchActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TouchActions_SetCallbacks_m51D56350875C81B775AB4D21932C1D992F5A142D (TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (m_Wrapper.m_TouchActionsCallbackInterface != null)
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_0 = __this->___m_Wrapper_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___m_TouchActionsCallbackInterface_19;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00ea;
		}
	}
	{
		// @PrimaryContact.started -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryContact;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = TouchActions_get_PrimaryContact_mE1E5FCF6E40A0C866EB2DD057649A34A439CD2F5(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_4 = __this->___m_Wrapper_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___m_TouchActionsCallbackInterface_19;
		RuntimeObject* L_6 = L_5;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_7 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_7, L_6, (intptr_t)((void*)GetInterfaceMethodInfo(L_6, 0, ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_3);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_3, L_7, NULL);
		// @PrimaryContact.performed -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryContact;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8;
		L_8 = TouchActions_get_PrimaryContact_mE1E5FCF6E40A0C866EB2DD057649A34A439CD2F5(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_9 = __this->___m_Wrapper_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___m_TouchActionsCallbackInterface_19;
		RuntimeObject* L_11 = L_10;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_12 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_12, L_11, (intptr_t)((void*)GetInterfaceMethodInfo(L_11, 0, ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_8);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_8, L_12, NULL);
		// @PrimaryContact.canceled -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryContact;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_13;
		L_13 = TouchActions_get_PrimaryContact_mE1E5FCF6E40A0C866EB2DD057649A34A439CD2F5(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_14 = __this->___m_Wrapper_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = L_14->___m_TouchActionsCallbackInterface_19;
		RuntimeObject* L_16 = L_15;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_17 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_17, L_16, (intptr_t)((void*)GetInterfaceMethodInfo(L_16, 0, ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_13);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_13, L_17, NULL);
		// @PrimaryPosition.started -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_18;
		L_18 = TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_19 = __this->___m_Wrapper_0;
		NullCheck(L_19);
		RuntimeObject* L_20 = L_19->___m_TouchActionsCallbackInterface_19;
		RuntimeObject* L_21 = L_20;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_22 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_22, L_21, (intptr_t)((void*)GetInterfaceMethodInfo(L_21, 1, ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_18);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_18, L_22, NULL);
		// @PrimaryPosition.performed -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_23;
		L_23 = TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_24 = __this->___m_Wrapper_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = L_24->___m_TouchActionsCallbackInterface_19;
		RuntimeObject* L_26 = L_25;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_27 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_27, L_26, (intptr_t)((void*)GetInterfaceMethodInfo(L_26, 1, ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_23);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_23, L_27, NULL);
		// @PrimaryPosition.canceled -= m_Wrapper.m_TouchActionsCallbackInterface.OnPrimaryPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_28;
		L_28 = TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B(__this, NULL);
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_29 = __this->___m_Wrapper_0;
		NullCheck(L_29);
		RuntimeObject* L_30 = L_29->___m_TouchActionsCallbackInterface_19;
		RuntimeObject* L_31 = L_30;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_32 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_32, L_31, (intptr_t)((void*)GetInterfaceMethodInfo(L_31, 1, ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_28);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_28, L_32, NULL);
	}

IL_00ea:
	{
		// m_Wrapper.m_TouchActionsCallbackInterface = instance;
		RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* L_33 = __this->___m_Wrapper_0;
		RuntimeObject* L_34 = ___instance0;
		NullCheck(L_33);
		L_33->___m_TouchActionsCallbackInterface_19 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___m_TouchActionsCallbackInterface_19), (void*)L_34);
		// if (instance != null)
		RuntimeObject* L_35 = ___instance0;
		V_1 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_35) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_36 = V_1;
		if (!L_36)
		{
			goto IL_0199;
		}
	}
	{
		// @PrimaryContact.started += instance.OnPrimaryContact;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_37;
		L_37 = TouchActions_get_PrimaryContact_mE1E5FCF6E40A0C866EB2DD057649A34A439CD2F5(__this, NULL);
		RuntimeObject* L_38 = ___instance0;
		RuntimeObject* L_39 = L_38;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_40 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_40, L_39, (intptr_t)((void*)GetInterfaceMethodInfo(L_39, 0, ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_37);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_37, L_40, NULL);
		// @PrimaryContact.performed += instance.OnPrimaryContact;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_41;
		L_41 = TouchActions_get_PrimaryContact_mE1E5FCF6E40A0C866EB2DD057649A34A439CD2F5(__this, NULL);
		RuntimeObject* L_42 = ___instance0;
		RuntimeObject* L_43 = L_42;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_44 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_44, L_43, (intptr_t)((void*)GetInterfaceMethodInfo(L_43, 0, ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_41);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_41, L_44, NULL);
		// @PrimaryContact.canceled += instance.OnPrimaryContact;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_45;
		L_45 = TouchActions_get_PrimaryContact_mE1E5FCF6E40A0C866EB2DD057649A34A439CD2F5(__this, NULL);
		RuntimeObject* L_46 = ___instance0;
		RuntimeObject* L_47 = L_46;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_48 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_48, L_47, (intptr_t)((void*)GetInterfaceMethodInfo(L_47, 0, ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_45);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_45, L_48, NULL);
		// @PrimaryPosition.started += instance.OnPrimaryPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_49;
		L_49 = TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B(__this, NULL);
		RuntimeObject* L_50 = ___instance0;
		RuntimeObject* L_51 = L_50;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_52 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_52, L_51, (intptr_t)((void*)GetInterfaceMethodInfo(L_51, 1, ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_49);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_49, L_52, NULL);
		// @PrimaryPosition.performed += instance.OnPrimaryPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_53;
		L_53 = TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B(__this, NULL);
		RuntimeObject* L_54 = ___instance0;
		RuntimeObject* L_55 = L_54;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_56 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_56, L_55, (intptr_t)((void*)GetInterfaceMethodInfo(L_55, 1, ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_53);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_53, L_56, NULL);
		// @PrimaryPosition.canceled += instance.OnPrimaryPosition;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_57;
		L_57 = TouchActions_get_PrimaryPosition_m156F2223E7AE512EA04D60D1DB9E2757CEB1E28B(__this, NULL);
		RuntimeObject* L_58 = ___instance0;
		RuntimeObject* L_59 = L_58;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_60 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_60, L_59, (intptr_t)((void*)GetInterfaceMethodInfo(L_59, 1, ITouchActions_t9474CCEA669527803328B30F261B1A0193533C13_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_57);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_57, L_60, NULL);
	}

IL_0199:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void TouchActions_SetCallbacks_m51D56350875C81B775AB4D21932C1D992F5A142D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TouchActions_tA2E36B58641D2E09F1F527597F4AB45B82594A49*>(__this + _offset);
	TouchActions_SetCallbacks_m51D56350875C81B775AB4D21932C1D992F5A142D(_thisAdjusted, ___instance0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwipeDetection::add_OnSwiped(SwipeDetection/OnSwipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_add_OnSwiped_mB52DDECE189B536140A5ADF2742477057DB9AA26 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* V_0 = NULL;
	OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* V_1 = NULL;
	OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* V_2 = NULL;
	{
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_0 = __this->___OnSwiped_5;
		V_0 = L_0;
	}

IL_0007:
	{
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_1 = V_0;
		V_1 = L_1;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_2 = V_1;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C*)CastclassSealed((RuntimeObject*)L_4, OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C_il2cpp_TypeInfo_var));
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C** L_5 = (&__this->___OnSwiped_5);
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_6 = V_2;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_7 = V_1;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_9 = V_0;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C*)L_9) == ((RuntimeObject*)(OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SwipeDetection::remove_OnSwiped(SwipeDetection/OnSwipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_remove_OnSwiped_mA862546EDDB735FE228CE80A1877D091E43F7EFD (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* V_0 = NULL;
	OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* V_1 = NULL;
	OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* V_2 = NULL;
	{
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_0 = __this->___OnSwiped_5;
		V_0 = L_0;
	}

IL_0007:
	{
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_1 = V_0;
		V_1 = L_1;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_2 = V_1;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C*)CastclassSealed((RuntimeObject*)L_4, OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C_il2cpp_TypeInfo_var));
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C** L_5 = (&__this->___OnSwiped_5);
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_6 = V_2;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_7 = V_1;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_9 = V_0;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C*)L_9) == ((RuntimeObject*)(OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void SwipeDetection::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_Awake_m177BA109B7EF174B364372DFA77A3B5BB397421B (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m36FBE196F0232CF27E95C5B0A4A933E9A125112B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputManager = InputManager.Instance;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_0;
		L_0 = Singleton_1_get_Instance_m36FBE196F0232CF27E95C5B0A4A933E9A125112B(Singleton_1_get_Instance_m36FBE196F0232CF27E95C5B0A4A933E9A125112B_RuntimeMethod_var);
		__this->___inputManager_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputManager_9), (void*)L_0);
		// }
		return;
	}
}
// System.Void SwipeDetection::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_OnEnable_m364402650A1F7E61CE34DE2744ADE62081EFB9C5 (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_SwipeEnd_mF370C0695FC78F9A340C283062DF5AF2DEFCFDFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_SwipeStart_m527C1CFDF87E4472BA1CC899D3CA74A35034396E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputManager.OnStartTouch += SwipeStart;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_0 = __this->___inputManager_9;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)il2cpp_codegen_object_new(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681(L_1, __this, (intptr_t)((void*)SwipeDetection_SwipeStart_m527C1CFDF87E4472BA1CC899D3CA74A35034396E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputManager_add_OnStartTouch_m1DAD2428CE07F0BFA30FEC49379C8F7319C6B200(L_0, L_1, NULL);
		// inputManager.OnEndTouch += SwipeEnd;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_2 = __this->___inputManager_9;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_3 = (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*)il2cpp_codegen_object_new(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EndTouch__ctor_mD21EDADCF61BDC23ADF93F9F310D782576FB8FCB(L_3, __this, (intptr_t)((void*)SwipeDetection_SwipeEnd_mF370C0695FC78F9A340C283062DF5AF2DEFCFDFE_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputManager_add_OnEndTouch_m779CA21D9F800F84E3813C17A4E5B19C4F59AEDF(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void SwipeDetection::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_OnDisable_mC5672B43ABB160AE8632DD8E87530684ACB507CD (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_SwipeEnd_mF370C0695FC78F9A340C283062DF5AF2DEFCFDFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwipeDetection_SwipeStart_m527C1CFDF87E4472BA1CC899D3CA74A35034396E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputManager.OnStartTouch -= SwipeStart;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_0 = __this->___inputManager_9;
		StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* L_1 = (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724*)il2cpp_codegen_object_new(StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StartTouch__ctor_m0B7D43EF8CB699D2D581BDE9B2FE3D046C127681(L_1, __this, (intptr_t)((void*)SwipeDetection_SwipeStart_m527C1CFDF87E4472BA1CC899D3CA74A35034396E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InputManager_remove_OnStartTouch_m511913C65F89842DD4637D9920433F1BF01E4267(L_0, L_1, NULL);
		// inputManager.OnEndTouch -= SwipeEnd;
		InputManager_t29A2200021AE0E0EB6F34CB1B9DF031B3AE02677* L_2 = __this->___inputManager_9;
		EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* L_3 = (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF*)il2cpp_codegen_object_new(EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EndTouch__ctor_mD21EDADCF61BDC23ADF93F9F310D782576FB8FCB(L_3, __this, (intptr_t)((void*)SwipeDetection_SwipeEnd_mF370C0695FC78F9A340C283062DF5AF2DEFCFDFE_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		InputManager_remove_OnEndTouch_mECCA403B9EE10D0B24A81D4DAD3D588EF3E5DBFB(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void SwipeDetection::SwipeStart(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_SwipeStart_m527C1CFDF87E4472BA1CC899D3CA74A35034396E (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B73FE6990505A1E97D3823482C32B48ABAB7725);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Bruv");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0B73FE6990505A1E97D3823482C32B48ABAB7725, NULL);
		// startPosition = position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		__this->___startPosition_10 = L_0;
		// startTime = time;
		float L_1 = ___time1;
		__this->___startTime_11 = L_1;
		// }
		return;
	}
}
// System.Void SwipeDetection::SwipeEnd(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_SwipeEnd_mF370C0695FC78F9A340C283062DF5AF2DEFCFDFE (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	{
		// endPosition = position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___position0;
		__this->___endPosition_12 = L_0;
		// endTime = time;
		float L_1 = ___time1;
		__this->___endTime_13 = L_1;
		// DetectSwipe();
		SwipeDetection_DetectSwipe_mD6AC075DC5A5C380C502DA4A8547C66869ADA34E(__this, NULL);
		// }
		return;
	}
}
// System.Void SwipeDetection::DetectSwipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection_DetectSwipe_mD6AC075DC5A5C380C502DA4A8547C66869ADA34E (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	{
		// Debug.Log(startPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___startPosition_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_1);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
		// Debug.Log(endPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___endPosition_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = L_3;
		RuntimeObject* L_5 = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &L_4);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_5, NULL);
		// if (Vector3.Distance(startPosition, endPosition) >= minimumDistance &&
		//    (endTime - startTime) <= maximumTime)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___startPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_6, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___endPosition_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_8, NULL);
		float L_10;
		L_10 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_7, L_9, NULL);
		float L_11 = __this->___minimumDistance_6;
		if ((!(((float)L_10) >= ((float)L_11))))
		{
			goto IL_0060;
		}
	}
	{
		float L_12 = __this->___endTime_13;
		float L_13 = __this->___startTime_11;
		float L_14 = __this->___maximumTime_7;
		G_B3_0 = ((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(L_12, L_13))) <= ((float)L_14)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0061;
	}

IL_0060:
	{
		G_B3_0 = 0;
	}

IL_0061:
	{
		V_0 = (bool)G_B3_0;
		bool L_15 = V_0;
		if (!L_15)
		{
			goto IL_00cc;
		}
	}
	{
		// Debug.DrawLine(startPosition, endPosition, Color.red, 1.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___startPosition_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = __this->___endPosition_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_18, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m07A0411487CA5ED1E1DB3093E9E326F70B9A16FD(L_17, L_19, L_20, (1.0f), NULL);
		// var direction = endPosition - startPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = __this->___endPosition_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = __this->___startPosition_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_21, L_22, NULL);
		V_1 = L_23;
		// Vector2 direction2D = new Vector2(direction.x, direction.y).normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		float L_25 = L_24.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		float L_27 = L_26.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_25, L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_3), NULL);
		V_2 = L_29;
		// OnSwiped(SwipeDirection(direction2D));
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_30 = __this->___OnSwiped_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = SwipeDetection_SwipeDirection_m1BC47B4930FC3C7F9292A73C58E212C41EECC0DE(__this, L_31, NULL);
		NullCheck(L_30);
		OnSwipe_Invoke_mC08E630BF82A715E9F3C76B7E88D8CC832E68AC8_inline(L_30, L_32, NULL);
	}

IL_00cc:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 SwipeDetection::SwipeDirection(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 SwipeDetection_SwipeDirection_m1BC47B4930FC3C7F9292A73C58E212C41EECC0DE (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if(Vector2.Dot(Vector2.up, direction) > directionThreshold)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___direction0;
		float L_2;
		L_2 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_0, L_1, NULL);
		float L_3 = __this->___directionThreshold_8;
		V_0 = (bool)((((float)L_2) > ((float)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// return Vector2.up;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		V_1 = L_5;
		goto IL_0095;
	}

IL_0021:
	{
		// else if (Vector2.Dot(Vector2.down, direction) > directionThreshold)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_down_m744DCF40A3F17B76B9C084145D6E66AC0DE3D5CD_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___direction0;
		float L_8;
		L_8 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_6, L_7, NULL);
		float L_9 = __this->___directionThreshold_8;
		V_2 = (bool)((((float)L_8) > ((float)L_9))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0041;
		}
	}
	{
		// return Vector2.down;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_down_m744DCF40A3F17B76B9C084145D6E66AC0DE3D5CD_inline(NULL);
		V_1 = L_11;
		goto IL_0095;
	}

IL_0041:
	{
		// else if (Vector2.Dot(Vector2.left, direction) > directionThreshold)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_left_m9D9A16C5D268435428ADF448F6B5E8C1EC3A57B4_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___direction0;
		float L_14;
		L_14 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_12, L_13, NULL);
		float L_15 = __this->___directionThreshold_8;
		V_3 = (bool)((((float)L_14) > ((float)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (!L_16)
		{
			goto IL_0061;
		}
	}
	{
		// return Vector2.left;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_get_left_m9D9A16C5D268435428ADF448F6B5E8C1EC3A57B4_inline(NULL);
		V_1 = L_17;
		goto IL_0095;
	}

IL_0061:
	{
		// else if (Vector2.Dot(Vector2.right, direction) > directionThreshold)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___direction0;
		float L_20;
		L_20 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_18, L_19, NULL);
		float L_21 = __this->___directionThreshold_8;
		V_4 = (bool)((((float)L_20) > ((float)L_21))? 1 : 0);
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_0083;
		}
	}
	{
		// return Vector2.right;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline(NULL);
		V_1 = L_23;
		goto IL_0095;
	}

IL_0083:
	{
		// return new Vector2(0.0f, 0.0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_1 = L_24;
		goto IL_0095;
	}

IL_0095:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_1;
		return L_25;
	}
}
// System.Void SwipeDetection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeDetection__ctor_m57902E84B7829542CBF0214C71B3F7816129BD9B (SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_mCE16E429CF506B1E1533699E02F866FB87E2C250_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private float minimumDistance = .2f;
		__this->___minimumDistance_6 = (0.200000003f);
		// [SerializeField] private float maximumTime = 1.0f;
		__this->___maximumTime_7 = (1.0f);
		// [SerializeField, Range(0, 1)] private float directionThreshold = 0f;
		__this->___directionThreshold_8 = (0.0f);
		Singleton_1__ctor_mCE16E429CF506B1E1533699E02F866FB87E2C250(__this, Singleton_1__ctor_mCE16E429CF506B1E1533699E02F866FB87E2C250_RuntimeMethod_var);
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
void OnSwipe_Invoke_mC08E630BF82A715E9F3C76B7E88D8CC832E68AC8_Multicast(OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* currentDelegate = reinterpret_cast<OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___val0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnSwipe_Invoke_mC08E630BF82A715E9F3C76B7E88D8CC832E68AC8_Open(OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___val0, method);
}
void OnSwipe_Invoke_mC08E630BF82A715E9F3C76B7E88D8CC832E68AC8_OpenStaticInvoker(OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL, ___val0);
}
void OnSwipe_Invoke_mC08E630BF82A715E9F3C76B7E88D8CC832E68AC8_ClosedStaticInvoker(OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___val0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C (OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___val0);

}
// System.Void SwipeDetection/OnSwipe::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwipe__ctor_m6BC2B7BC6F57BB898881094DC82BDFD1733236B9 (OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSwipe_Invoke_mC08E630BF82A715E9F3C76B7E88D8CC832E68AC8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnSwipe_Invoke_mC08E630BF82A715E9F3C76B7E88D8CC832E68AC8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnSwipe_Invoke_mC08E630BF82A715E9F3C76B7E88D8CC832E68AC8_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnSwipe_Invoke_mC08E630BF82A715E9F3C76B7E88D8CC832E68AC8_Multicast;
}
// System.Void SwipeDetection/OnSwipe::Invoke(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwipe_Invoke_mC08E630BF82A715E9F3C76B7E88D8CC832E68AC8 (OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult SwipeDetection/OnSwipe::BeginInvoke(UnityEngine.Vector2,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnSwipe_BeginInvoke_m46472E9F4D2E1644B47506DE0E94670971BA7A5C (OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var, &___val0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void SwipeDetection/OnSwipe::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSwipe_EndInvoke_m8ABBFA2C2A42460FE878C8E819D9024723ADA5BC (OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Void CoinBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinBehaviour_Update_mD33E72797C6B6869C87886BB7D8A62F05E09FDB9 (CoinBehaviour_t4D2D5534D087D4FD2A65EFAEC8561029B4EB6C11* __this, const RuntimeMethod* method) 
{
	{
		// transform.RotateAroundLocal(Vector3.up, rotSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		float L_2 = __this->___rotSpeed_4;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_0);
		Transform_RotateAroundLocal_mB890772B81D610C4B5190945078E497C4BD20E43(L_0, L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// }
		return;
	}
}
// System.Void CoinBehaviour::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinBehaviour_OnTriggerEnter_m5ACB08B750D63072D9A02BD3404CA651ED6F660D (CoinBehaviour_t4D2D5534D087D4FD2A65EFAEC8561029B4EB6C11* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(other.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// Destroy(gameObject, 0.1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_4, (0.100000001f), NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void CoinBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoinBehaviour__ctor_m2831C56AD435C7C083E2114CED7BA85E3262EED8 (CoinBehaviour_t4D2D5534D087D4FD2A65EFAEC8561029B4EB6C11* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FollowPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer_Update_m6CCD681461C8062489A435B45285AEE84F3B3DB6 (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// var transform = GetComponent<Transform>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(__this, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		V_0 = L_0;
		// transform.position = new Vector3(transform.position.x, transform.position.y, m_PlayerTransform.position.z - m_CameraOffsetZ);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___m_PlayerTransform_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		float L_11 = __this->___m_CameraOffsetZ_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_4, L_7, ((float)il2cpp_codegen_subtract(L_10, L_11)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_12, NULL);
		// }
		return;
	}
}
// System.Void FollowPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayer__ctor_mFEF642F6D296A2FBA30A01B637B6BD8DD2446114 (FollowPlayer_tC92033F1F4FD4547E9C5E32B878BB3DB993E2327* __this, const RuntimeMethod* method) 
{
	{
		// public float m_CameraOffsetZ = 15.0f;
		__this->___m_CameraOffsetZ_5 = (15.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FollowPlayerMiddle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayerMiddle_Update_m0E4325E1381191C7585267F0C7F526A75223616D (FollowPlayerMiddle_t4DDD2F62C3280D107B0F340B52FC95068F0733B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// var transform = GetComponent<Transform>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F(__this, Component_GetComponent_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m60E86366B3E431D4C4A549CF4FE5951087686F7F_RuntimeMethod_var);
		V_0 = L_0;
		// transform.position = new Vector3(transform.position.x, transform.position.y, m_PlayerTransform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___m_PlayerTransform_4;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), L_4, L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_11, NULL);
		// }
		return;
	}
}
// System.Void FollowPlayerMiddle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FollowPlayerMiddle__ctor_m47CE7BAE16195F05C6EA6A302A3575A82327818B (FollowPlayerMiddle_t4DDD2F62C3280D107B0F340B52FC95068F0733B2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameOverUI::GetGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverUI_GetGameOver_m7B838C8E0C237DAED4A48668ABEF390E515EF6E1 (GameOverUI_tED6E1D9D1616BF7C870AEDB25B882281D25F4914* __this, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameOverUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverUI__ctor_m4B0946014D6506CDF3EEB50FE0E45A95F320766F (GameOverUI_tED6E1D9D1616BF7C870AEDB25B882281D25F4914* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Graph::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph__ctor_m5630B0F7DD96F7E9366B8700D4CD2BA000F1D56C (Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* __this, int32_t ___v0, int32_t ___goal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// public Stack<int> path = new Stack<int>();
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_0 = (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*)il2cpp_codegen_object_new(Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1(L_0, Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		__this->___path_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___path_3), (void*)L_0);
		// public Graph(int v, int goal)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// stop = false;
		__this->___stop_2 = (bool)0;
		// V = v;
		int32_t L_1 = ___v0;
		__this->___V_0 = L_1;
		// this.goal = goal;
		int32_t L_2 = ___goal1;
		__this->___goal_1 = L_2;
		// adj = new List<int>[ v ];
		int32_t L_3 = ___v0;
		List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* L_4 = (List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206*)(List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206*)SZArrayNew(List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___adj_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adj_4), (void*)L_4);
		// for (int i = 0; i < v; ++i)
		V_0 = 0;
		goto IL_0049;
	}

IL_0038:
	{
		// adj[i] = new List<int>();
		List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* L_5 = __this->___adj_4;
		int32_t L_6 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_7, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)L_7);
		// for (int i = 0; i < v; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0049:
	{
		// for (int i = 0; i < v; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___v0;
		V_1 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0038;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Graph::AddEdge(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_AddEdge_m2D88F086BC83F307BD189B143D9A666631FAEC08 (Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* __this, int32_t ___v0, int32_t ___w1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// adj[v].Add(w); // Add w to v's list.
		List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* L_0 = __this->___adj_4;
		int32_t L_1 = ___v0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = ___w1;
		NullCheck(L_3);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_3, L_4, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Graph::DFSUtil(System.Int32,System.Boolean[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_DFSUtil_mE9699C804B340EDF077ECC44130095576B413859 (Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* __this, int32_t ___v0, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___visited1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B9_0 = 0;
	{
		// if (v == goal)
		int32_t L_0 = ___v0;
		int32_t L_1 = __this->___goal_1;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// stop = true;
		__this->___stop_2 = (bool)1;
	}

IL_0015:
	{
		// visited[v] = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = ___visited1;
		int32_t L_4 = ___v0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (bool)1);
		// path.Push(v);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_5 = __this->___path_3;
		int32_t L_6 = ___v0;
		NullCheck(L_5);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_5, L_6, Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		// if (stop)
		bool L_7 = __this->___stop_2;
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		// return;
		goto IL_00a7;
	}

IL_0032:
	{
		// List<int> vList = adj[v];
		List_1U5BU5D_t37294D7C303231F2FD83B3C398AED0937F4F3206* L_9 = __this->___adj_4;
		int32_t L_10 = ___v0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_0 = L_12;
		// foreach(var n in vList)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = V_0;
		NullCheck(L_13);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_14;
		L_14 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_13, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		V_3 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_3), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0072_1;
			}

IL_0045_1:
			{
				// foreach(var n in vList)
				int32_t L_15;
				L_15 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_3), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
				V_4 = L_15;
				// if (!visited[n] && !stop)
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16 = ___visited1;
				int32_t L_17 = V_4;
				NullCheck(L_16);
				int32_t L_18 = L_17;
				uint8_t L_19 = (uint8_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
				if (L_19)
				{
					goto IL_0060_1;
				}
			}
			{
				bool L_20 = __this->___stop_2;
				G_B9_0 = ((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
				goto IL_0061_1;
			}

IL_0060_1:
			{
				G_B9_0 = 0;
			}

IL_0061_1:
			{
				V_5 = (bool)G_B9_0;
				bool L_21 = V_5;
				if (!L_21)
				{
					goto IL_0071_1;
				}
			}
			{
				// DFSUtil(n, visited);
				int32_t L_22 = V_4;
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_23 = ___visited1;
				Graph_DFSUtil_mE9699C804B340EDF077ECC44130095576B413859(__this, L_22, L_23, NULL);
			}

IL_0071_1:
			{
			}

IL_0072_1:
			{
				// foreach(var n in vList)
				bool L_24;
				L_24 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_3), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0045_1;
				}
			}
			{
				goto IL_008c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		// if(!stop)
		bool L_25 = __this->___stop_2;
		V_6 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		// path.Pop();
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_27 = __this->___path_3;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_27, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void Graph::DFS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graph_DFS_m9D5A51106B699BC6C5A18A01C28340197D158F60 (Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* __this, int32_t ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	{
		// bool[] visited = new bool[V];
		int32_t L_0 = __this->___V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// DFSUtil(v, visited);
		int32_t L_2 = ___v0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = V_0;
		Graph_DFSUtil_mE9699C804B340EDF077ECC44130095576B413859(__this, L_2, L_3, NULL);
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
// System.Void GroundSpawner::SpawnTile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundSpawner_SpawnTile_m39DB4B0D0382E2B0ACE5205715C75EA693A77D0A (GroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// GameObject temp = Instantiate(groundTile, nextGroundSpawnPoint, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___groundTile_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___nextGroundSpawnPoint_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_0 = L_3;
		// nextGroundSpawnPoint += new Vector3(0.0f, 0.0f, temp.transform.GetChild(0).GetComponent<Renderer>().bounds.size.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___nextGroundSpawnPoint_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_6, 0, NULL);
		NullCheck(L_7);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8;
		L_8 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_7, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_8);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_9;
		L_9 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_8, NULL);
		V_1 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_1), NULL);
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (0.0f), (0.0f), L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_4, L_12, NULL);
		__this->___nextGroundSpawnPoint_6 = L_13;
		// }
		return;
	}
}
// System.Void GroundSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundSpawner_Start_m9444EB13560B913D30782E4E1A7F3CFF8BA189EA (GroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for(int i = 0; i < tileNumber; i++)
		V_0 = 0;
		goto IL_0010;
	}

IL_0005:
	{
		// SpawnTile();
		GroundSpawner_SpawnTile_m39DB4B0D0382E2B0ACE5205715C75EA693A77D0A(__this, NULL);
		// for(int i = 0; i < tileNumber; i++)
		int32_t L_0 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}

IL_0010:
	{
		// for(int i = 0; i < tileNumber; i++)
		int32_t L_1 = V_0;
		int32_t L_2 = __this->___tileNumber_5;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (L_3)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GroundSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundSpawner__ctor_mD091EE0548985539938F2DA0117FD1D7D8C24A16 (GroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GroundTileController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_Start_mD736DE7E21DBEDACBB9FA301CD0EF9276B68C011 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F_m9205F32EE322F20E42F9BCE657C26C880621EEF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// groundSpawner = GameObject.FindObjectOfType<GroundSpawner>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F* L_0;
		L_0 = Object_FindObjectOfType_TisGroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F_m9205F32EE322F20E42F9BCE657C26C880621EEF9(Object_FindObjectOfType_TisGroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F_m9205F32EE322F20E42F9BCE657C26C880621EEF9_RuntimeMethod_var);
		__this->___groundSpawner_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundSpawner_4), (void*)L_0);
		// SpawnObstacles();
		GroundTileController_SpawnObstacles_mE168030AFBE95AD28213049BA1DE637BBCA9466A(__this, NULL);
		// }
		return;
	}
}
// System.Void GroundTileController::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_OnTriggerExit_mD054696DA408E4F320BC5CD3FB6CF198721844E1 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// groundSpawner.SpawnTile();
		GroundSpawner_t1B1F04827F59D5A3C2A2C477726E946D6AAB2F2F* L_0 = __this->___groundSpawner_4;
		NullCheck(L_0);
		GroundSpawner_SpawnTile_m39DB4B0D0382E2B0ACE5205715C75EA693A77D0A(L_0, NULL);
		// Destroy(gameObject, 1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_1, (1.0f), NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject GroundTileController::GetRandomObstacle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GroundTileController_GetRandomObstacle_m64E3B5027E04A4047737FD712E81532A07D3E91F (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// return Obstacles[Random.Range(0, 3)];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___Obstacles_5;
		int32_t L_1;
		L_1 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 3, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.GameObject GroundTileController::GetRandomRangeObstacle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GroundTileController_GetRandomRangeObstacle_mB9626C8F4DA6C9B8E1BCDF93B83F7218E9D17300 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, int32_t ___exclusive0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// return Obstacles[Random.Range(0, exclusive)];
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___Obstacles_5;
		int32_t L_1 = ___exclusive0;
		int32_t L_2;
		L_2 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_1, NULL);
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_2, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		return L_4;
	}
}
// System.Void GroundTileController::DoSpawnObstacles(System.Collections.Generic.List`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_DoSpawnObstacles_m3A13C923C57392BF4E849A095DCC25747523DC93 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___PatternForObstacles0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		// for (int i = 0; i < Spawns.Count; i += 3)
		V_0 = 0;
		goto IL_011a;
	}

IL_0008:
	{
		// int numSpawnsForRow = 0;
		V_1 = 0;
		// for (int j = 0; j < 3; j++)
		V_2 = 0;
		goto IL_0028;
	}

IL_000f:
	{
		// numSpawnsForRow += PatternForObstacles[i + j] > 0b0 ? 1 : 0;
		int32_t L_0 = V_1;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_1 = ___PatternForObstacles0;
		int32_t L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		uint8_t L_4;
		L_4 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_3)), List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		G_B3_0 = L_0;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			G_B4_0 = L_0;
			goto IL_0020;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_0021;
	}

IL_0020:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0021:
	{
		V_1 = ((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0));
		// for (int j = 0; j < 3; j++)
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0028:
	{
		// for (int j = 0; j < 3; j++)
		int32_t L_6 = V_2;
		V_3 = (bool)((((int32_t)L_6) < ((int32_t)3))? 1 : 0);
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_000f;
		}
	}
	{
		// if (numSpawnsForRow == 3)
		int32_t L_8 = V_1;
		V_4 = (bool)((((int32_t)L_8) == ((int32_t)3))? 1 : 0);
		bool L_9 = V_4;
		if (!L_9)
		{
			goto IL_00c0;
		}
	}
	{
		// int determinedPassableIdx = Random.Range(0, 3);
		int32_t L_10;
		L_10 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 3, NULL);
		V_5 = L_10;
		// for (int j = 0; j < 3; j++)
		V_6 = 0;
		goto IL_00b2;
	}

IL_004c:
	{
		// if (j != determinedPassableIdx)
		int32_t L_11 = V_6;
		int32_t L_12 = V_5;
		V_7 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_0084;
		}
	}
	{
		// Instantiate(GetRandomObstacle(), Spawns[i + j], Quaternion.identity, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = GroundTileController_GetRandomObstacle_m64E3B5027E04A4047737FD712E81532A07D3E91F(__this, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_15 = __this->___Spawns_9;
		int32_t L_16 = V_0;
		int32_t L_17 = V_6;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_15, ((int32_t)il2cpp_codegen_add(L_16, L_17)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0(L_14, L_18, L_19, L_20, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		goto IL_00ab;
	}

IL_0084:
	{
		// Instantiate(GetRandomRangeObstacle(2), Spawns[i + j], Quaternion.identity, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = GroundTileController_GetRandomRangeObstacle_mB9626C8F4DA6C9B8E1BCDF93B83F7218E9D17300(__this, 2, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_23 = __this->___Spawns_9;
		int32_t L_24 = V_0;
		int32_t L_25 = V_6;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_23, ((int32_t)il2cpp_codegen_add(L_24, L_25)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0(L_22, L_26, L_27, L_28, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
	}

IL_00ab:
	{
		// for (int j = 0; j < 3; j++)
		int32_t L_30 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00b2:
	{
		// for (int j = 0; j < 3; j++)
		int32_t L_31 = V_6;
		V_8 = (bool)((((int32_t)L_31) < ((int32_t)3))? 1 : 0);
		bool L_32 = V_8;
		if (L_32)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0115;
	}

IL_00c0:
	{
		// for (int j = 0; j < 3; j++)
		V_9 = 0;
		goto IL_0109;
	}

IL_00c6:
	{
		// if (PatternForObstacles[i + j] > 0b0)
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_33 = ___PatternForObstacles0;
		int32_t L_34 = V_0;
		int32_t L_35 = V_9;
		NullCheck(L_33);
		uint8_t L_36;
		L_36 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_33, ((int32_t)il2cpp_codegen_add(L_34, L_35)), List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_36) > ((int32_t)0))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0102;
		}
	}
	{
		// Instantiate(GetRandomObstacle(), Spawns[i + j], Quaternion.identity, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = GroundTileController_GetRandomObstacle_m64E3B5027E04A4047737FD712E81532A07D3E91F(__this, NULL);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_39 = __this->___Spawns_9;
		int32_t L_40 = V_0;
		int32_t L_41 = V_9;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_39, ((int32_t)il2cpp_codegen_add(L_40, L_41)), List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0(L_38, L_42, L_43, L_44, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
	}

IL_0102:
	{
		// for (int j = 0; j < 3; j++)
		int32_t L_46 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0109:
	{
		// for (int j = 0; j < 3; j++)
		int32_t L_47 = V_9;
		V_11 = (bool)((((int32_t)L_47) < ((int32_t)3))? 1 : 0);
		bool L_48 = V_11;
		if (L_48)
		{
			goto IL_00c6;
		}
	}
	{
	}

IL_0115:
	{
		// for (int i = 0; i < Spawns.Count; i += 3)
		int32_t L_49 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_49, 3));
	}

IL_011a:
	{
		// for (int i = 0; i < Spawns.Count; i += 3)
		int32_t L_50 = V_0;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_51 = __this->___Spawns_9;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_51, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_12 = (bool)((((int32_t)L_50) < ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_12;
		if (L_53)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GroundTileController::SpawnObstacles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_SpawnObstacles_mE168030AFBE95AD28213049BA1DE637BBCA9466A (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	{
		// CalcSpawnPointsForObstacles();
		GroundTileController_CalcSpawnPointsForObstacles_m056401D8442D25F1F903760399E5D772F22C65A0(__this, NULL);
		// var Pattern = GetRandomPatternForObstacles(Spawns.Count, 0xdeadbeef);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___Spawns_9;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_0, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_2;
		L_2 = GroundTileController_GetRandomPatternForObstacles_mF0E0202296A3CE7909D1217B00F97B09FC0489F8(__this, L_1, ((int32_t)-559038737), NULL);
		V_0 = L_2;
		// DoSpawnObstacles(Pattern);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = V_0;
		GroundTileController_DoSpawnObstacles_m3A13C923C57392BF4E849A095DCC25747523DC93(__this, L_3, NULL);
		// CalcSpawnPointsForCollectibles(Pattern);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = V_0;
		GroundTileController_CalcSpawnPointsForCollectibles_m83C6B7C1CCD610E85BF2C6FB964ECDD7F6E28E89(__this, L_4, NULL);
		// DoSpawnCollectibles();
		GroundTileController_DoSpawnCollectibles_mB6A5C4D6954957222DFE007A6EF35D7B76E11D79(__this, NULL);
		// }
		return;
	}
}
// System.Void GroundTileController::DoSpawnCollectibles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_DoSpawnCollectibles_mB6A5C4D6954957222DFE007A6EF35D7B76E11D79 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// for(int i = 0; i < SpawnsForCollectibles.Count; i++)
		V_0 = 0;
		goto IL_0049;
	}

IL_0005:
	{
		// if (SpawnsForCollectibles[i] == 4)
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = __this->___SpawnsForCollectibles_11;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		uint8_t L_2;
		L_2 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_0, L_1, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)4))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// Instantiate(Collectibles[0], CollectibleSpawns[i], Quaternion.identity, transform);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___Collectibles_6;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, 0, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_6 = __this->___CollectibleSpawns_10;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810(L_6, L_7, List_1_get_Item_m8F2E15FC96DA75186C51228128A0660709E4E810_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0(L_5, L_8, L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
	}

IL_0044:
	{
		// for(int i = 0; i < SpawnsForCollectibles.Count; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0049:
	{
		// for(int i = 0; i < SpawnsForCollectibles.Count; i++)
		int32_t L_13 = V_0;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_14 = __this->___SpawnsForCollectibles_11;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_14, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_2;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GroundTileController::CalcSpawnPointsForCollectibles(System.Collections.Generic.List`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_CalcSpawnPointsForCollectibles_m83C6B7C1CCD610E85BF2C6FB964ECDD7F6E28E89 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___pattern0, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_4 = NULL;
	{
		// var bounds = platformRenderer.bounds;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___platformRenderer_7;
		NullCheck(L_0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_0, NULL);
		V_0 = L_1;
		// var platformCenter = bounds.center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_0), NULL);
		V_1 = L_2;
		// var platformRect = new Rect(platformCenter.x - bounds.extents.x, platformCenter.z + bounds.extents.z, bounds.size.x, bounds.size.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_1;
		float L_4 = L_3.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_0), NULL);
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_0), NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_12 = L_11.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_14 = L_13.___z_4;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_2), ((float)il2cpp_codegen_subtract(L_4, L_6)), ((float)il2cpp_codegen_add(L_8, L_10)), L_12, L_14, NULL);
		// var numSpawnPoints = numberOfObstaclesToSpawn * 3;
		int32_t L_15 = __this->___numberOfObstaclesToSpawn_8;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_15, 3));
		// var TransformsForSpawns = FindTransforms(numSpawnPoints, platformRect);
		int32_t L_16 = V_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = V_2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_18;
		L_18 = GroundTileController_FindTransforms_m35AC5184D413A8EE7FA6B4B9F94799C20E9CA493(__this, L_16, L_17, NULL);
		V_4 = L_18;
		// CollectibleSpawns = TransformsForSpawns;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_19 = V_4;
		__this->___CollectibleSpawns_10 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___CollectibleSpawns_10), (void*)L_19);
		// SpawnsForCollectibles = PopulateGridWithObstacles(pattern);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_20 = ___pattern0;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_21;
		L_21 = GroundTileController_PopulateGridWithObstacles_mC0E2AE0CF726AA0A832E3A83EF7EEAFD1A91C1C5(__this, L_20, NULL);
		__this->___SpawnsForCollectibles_11 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SpawnsForCollectibles_11), (void*)L_21);
		// PlaceSpawnsForCollectibles(SpawnsForCollectibles);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_22 = __this->___SpawnsForCollectibles_11;
		GroundTileController_PlaceSpawnsForCollectibles_m15A309E62EFA076ED1E2C3732CE0E46B5EC20F2E(__this, L_22, NULL);
		// }
		return;
	}
}
// System.Void GroundTileController::PlaceSpawnsForCollectibles(System.Collections.Generic.List`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_PlaceSpawnsForCollectibles_m15A309E62EFA076ED1E2C3732CE0E46B5EC20F2E (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___grid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m1BC890FC146C25EDDACB873857078051154142B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// Graph g = new Graph(grid.Count, grid.Count - 2);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = ___grid0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_0, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_2 = ___grid0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_2, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* L_4 = (Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830*)il2cpp_codegen_object_new(Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Graph__ctor_m5630B0F7DD96F7E9366B8700D4CD2BA000F1D56C(L_4, L_1, ((int32_t)il2cpp_codegen_subtract(L_3, 2)), NULL);
		V_0 = L_4;
		// for(int i = 3; i < grid.Count; i+=3)
		V_1 = 3;
		goto IL_00a3;
	}

IL_001c:
	{
		// for(int j = 0; j < 3; j++)
		V_2 = 0;
		goto IL_0094;
	}

IL_0021:
	{
		// for(int k = 1; k <= 3; k++)
		V_3 = 1;
		goto IL_0082;
	}

IL_0026:
	{
		// if (j == 0 && k == 1)
		int32_t L_5 = V_2;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_6 = V_3;
		G_B6_0 = ((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B6_0 = 0;
	}

IL_0031:
	{
		V_4 = (bool)G_B6_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// continue;
		goto IL_007e;
	}

IL_0039:
	{
		// if (j == 2 && k == 3)   // lets edges between verts that are far away to the side
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_9 = V_3;
		G_B11_0 = ((((int32_t)L_9) == ((int32_t)3))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B11_0 = 0;
	}

IL_0044:
	{
		V_5 = (bool)G_B11_0;
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_004c;
		}
	}
	{
		// continue;
		goto IL_007e;
	}

IL_004c:
	{
		// if ((grid[i - k] & 1) == 0 && (grid[i+j] & 1) == 0)
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = ___grid0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		uint8_t L_14;
		L_14 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_11, ((int32_t)il2cpp_codegen_subtract(L_12, L_13)), List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		if (((int32_t)((int32_t)L_14&1)))
		{
			goto IL_0069;
		}
	}
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_15 = ___grid0;
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		uint8_t L_18;
		L_18 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_15, ((int32_t)il2cpp_codegen_add(L_16, L_17)), List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		G_B16_0 = ((((int32_t)((int32_t)((int32_t)L_18&1))) == ((int32_t)0))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B16_0 = 0;
	}

IL_006a:
	{
		V_6 = (bool)G_B16_0;
		bool L_19 = V_6;
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		// g.AddEdge(i - k, i + j);
		Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* L_20 = V_0;
		int32_t L_21 = V_1;
		int32_t L_22 = V_3;
		int32_t L_23 = V_1;
		int32_t L_24 = V_2;
		NullCheck(L_20);
		Graph_AddEdge_m2D88F086BC83F307BD189B143D9A666631FAEC08(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, L_22)), ((int32_t)il2cpp_codegen_add(L_23, L_24)), NULL);
	}

IL_007d:
	{
	}

IL_007e:
	{
		// for(int k = 1; k <= 3; k++)
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0082:
	{
		// for(int k = 1; k <= 3; k++)
		int32_t L_26 = V_3;
		V_7 = (bool)((((int32_t)((((int32_t)L_26) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_7;
		if (L_27)
		{
			goto IL_0026;
		}
	}
	{
		// for(int j = 0; j < 3; j++)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0094:
	{
		// for(int j = 0; j < 3; j++)
		int32_t L_29 = V_2;
		V_8 = (bool)((((int32_t)L_29) < ((int32_t)3))? 1 : 0);
		bool L_30 = V_8;
		if (L_30)
		{
			goto IL_0021;
		}
	}
	{
		// for(int i = 3; i < grid.Count; i+=3)
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 3));
	}

IL_00a3:
	{
		// for(int i = 3; i < grid.Count; i+=3)
		int32_t L_32 = V_1;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_33 = ___grid0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_inline(L_33, List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_RuntimeMethod_var);
		V_9 = (bool)((((int32_t)L_32) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_9;
		if (L_35)
		{
			goto IL_001c;
		}
	}
	{
		// g.DFS(1);
		Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* L_36 = V_0;
		NullCheck(L_36);
		Graph_DFS_m9D5A51106B699BC6C5A18A01C28340197D158F60(L_36, 1, NULL);
		goto IL_00e5;
	}

IL_00bf:
	{
		// grid[g.path.Pop()] |= 4;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_37 = ___grid0;
		V_10 = L_37;
		Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* L_38 = V_0;
		NullCheck(L_38);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_39 = L_38->___path_3;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_39, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		V_11 = L_40;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_41 = V_10;
		int32_t L_42 = V_11;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_43 = V_10;
		int32_t L_44 = V_11;
		NullCheck(L_43);
		uint8_t L_45;
		L_45 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_43, L_44, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		NullCheck(L_41);
		List_1_set_Item_m1BC890FC146C25EDDACB873857078051154142B6(L_41, L_42, (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_45|4))), List_1_set_Item_m1BC890FC146C25EDDACB873857078051154142B6_RuntimeMethod_var);
	}

IL_00e5:
	{
		// while (g.path.Count > 0)
		Graph_t1AD1BA2D3E02F7914E875C26531C5AE3C31EF830* L_46 = V_0;
		NullCheck(L_46);
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_47 = L_46->___path_3;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_inline(L_47, Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_RuntimeMethod_var);
		V_12 = (bool)((((int32_t)L_48) > ((int32_t)0))? 1 : 0);
		bool L_49 = V_12;
		if (L_49)
		{
			goto IL_00bf;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<System.Byte> GroundTileController::PopulateGridWithObstacles(System.Collections.Generic.List`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* GroundTileController_PopulateGridWithObstacles_mC0E2AE0CF726AA0A832E3A83EF7EEAFD1A91C1C5 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___Pattern0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_7 = NULL;
	{
		// int j = 6;
		V_0 = 6;
		// int patternIdx = 0;
		V_1 = 0;
		// List<byte> grid = new List<byte>();
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_2 = L_0;
		// for (int i = 0; i < CollectibleSpawns.Count; i++)
		V_3 = 0;
		goto IL_0051;
	}

IL_000f:
	{
		// if (j <= 3)
		int32_t L_1 = V_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_1) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// grid.Add(Pattern[patternIdx++]);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = V_2;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_4 = ___Pattern0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		NullCheck(L_4);
		uint8_t L_7;
		L_7 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_4, L_6, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_3, L_7, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		goto IL_003b;
	}

IL_0033:
	{
		// grid.Add(0);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_8 = V_2;
		NullCheck(L_8);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(L_8, (uint8_t)0, List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
	}

IL_003b:
	{
		// j--;
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		// if (j == 0)
		int32_t L_10 = V_0;
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_004c;
		}
	}
	{
		// j = 9;
		V_0 = ((int32_t)9);
	}

IL_004c:
	{
		// for (int i = 0; i < CollectibleSpawns.Count; i++)
		int32_t L_12 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		// for (int i = 0; i < CollectibleSpawns.Count; i++)
		int32_t L_13 = V_3;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_14 = __this->___CollectibleSpawns_10;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_inline(L_14, List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_6;
		if (L_16)
		{
			goto IL_000f;
		}
	}
	{
		// return grid;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_17 = V_2;
		V_7 = L_17;
		goto IL_006a;
	}

IL_006a:
	{
		// }
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_18 = V_7;
		return L_18;
	}
}
// System.Collections.Generic.List`1<System.Byte> GroundTileController::GetRandomPatternForObstacles(System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* GroundTileController_GetRandomPatternForObstacles_mF0E0202296A3CE7909D1217B00F97B09FC0489F8 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, int32_t ___len0, uint32_t ___seed1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m1BC890FC146C25EDDACB873857078051154142B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	bool V_10 = false;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_11 = NULL;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* G_B4_0 = NULL;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* G_B5_1 = NULL;
	{
		// List<byte> Pattern = new List<byte>();
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_0 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9(L_0, List_1__ctor_mC411581553467A7DB76C06E5E5FCA34E4EC621B9_RuntimeMethod_var);
		V_0 = L_0;
		// for (int i = 0; i < len; i += 3)
		V_1 = 0;
		goto IL_0079;
	}

IL_000b:
	{
		// int idxForNoObstacle = Random.Range(0, 4);
		int32_t L_1;
		L_1 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 4, NULL);
		V_2 = L_1;
		// for (int j = 0; j < 3; j++)
		V_3 = 0;
		goto IL_002c;
	}

IL_0018:
	{
		// Pattern.Add((byte)(j != idxForNoObstacle ? 0b1 : 0b0));
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_2 = V_0;
		int32_t L_3 = V_3;
		int32_t L_4 = V_2;
		G_B3_0 = L_2;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			G_B4_0 = L_2;
			goto IL_0020;
		}
	}
	{
		G_B5_0 = 0;
		G_B5_1 = G_B3_0;
		goto IL_0021;
	}

IL_0020:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0021:
	{
		NullCheck(G_B5_1);
		List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_inline(G_B5_1, (uint8_t)((int32_t)(uint8_t)G_B5_0), List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_RuntimeMethod_var);
		// for (int j = 0; j < 3; j++)
		int32_t L_5 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002c:
	{
		// for (int j = 0; j < 3; j++)
		int32_t L_6 = V_3;
		V_4 = (bool)((((int32_t)L_6) < ((int32_t)3))? 1 : 0);
		bool L_7 = V_4;
		if (L_7)
		{
			goto IL_0018;
		}
	}
	{
		// if (idxForNoObstacle == 3)
		int32_t L_8 = V_2;
		V_5 = (bool)((((int32_t)L_8) == ((int32_t)3))? 1 : 0);
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0074;
		}
	}
	{
		// for (int j = 0; j < 3; j++)
		V_6 = 0;
		goto IL_0069;
	}

IL_0045:
	{
		// Pattern[i + j]++;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = L_10;
		int32_t L_14 = V_7;
		NullCheck(L_13);
		uint8_t L_15;
		L_15 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_13, L_14, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		V_8 = L_15;
		int32_t L_16 = V_7;
		uint8_t L_17 = V_8;
		NullCheck(L_13);
		List_1_set_Item_m1BC890FC146C25EDDACB873857078051154142B6(L_13, L_16, (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_17, 1))), List_1_set_Item_m1BC890FC146C25EDDACB873857078051154142B6_RuntimeMethod_var);
		// for (int j = 0; j < 3; j++)
		int32_t L_18 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0069:
	{
		// for (int j = 0; j < 3; j++)
		int32_t L_19 = V_6;
		V_9 = (bool)((((int32_t)L_19) < ((int32_t)3))? 1 : 0);
		bool L_20 = V_9;
		if (L_20)
		{
			goto IL_0045;
		}
	}

IL_0074:
	{
		// for (int i = 0; i < len; i += 3)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 3));
	}

IL_0079:
	{
		// for (int i = 0; i < len; i += 3)
		int32_t L_22 = V_1;
		int32_t L_23 = ___len0;
		V_10 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_10;
		if (L_24)
		{
			goto IL_000b;
		}
	}
	{
		// return Pattern;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_25 = V_0;
		V_11 = L_25;
		goto IL_0088;
	}

IL_0088:
	{
		// }
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_26 = V_11;
		return L_26;
	}
}
// System.Void GroundTileController::CalcSpawnPointsForObstacles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_CalcSpawnPointsForObstacles_m056401D8442D25F1F903760399E5D772F22C65A0 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_4 = NULL;
	{
		// var bounds = platformRenderer.bounds;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___platformRenderer_7;
		NullCheck(L_0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Renderer_get_bounds_m390CF334730C3C34E45CE59F1D08C3B9F3109C7C(L_0, NULL);
		V_0 = L_1;
		// var platformCenter = bounds.center;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&V_0), NULL);
		V_1 = L_2;
		// var platformRect = new Rect(platformCenter.x - bounds.extents.x, platformCenter.z + bounds.extents.z, bounds.size.x, bounds.size.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_1;
		float L_4 = L_3.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_0), NULL);
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_1;
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_0), NULL);
		float L_10 = L_9.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_12 = L_11.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_0), NULL);
		float L_14 = L_13.___z_4;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_2), ((float)il2cpp_codegen_subtract(L_4, L_6)), ((float)il2cpp_codegen_add(L_8, L_10)), L_12, L_14, NULL);
		// var numSpawnPoints = numberOfObstaclesToSpawn;
		int32_t L_15 = __this->___numberOfObstaclesToSpawn_8;
		V_3 = L_15;
		// var TransformsForSpawns = FindTransforms(numSpawnPoints, platformRect);
		int32_t L_16 = V_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = V_2;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_18;
		L_18 = GroundTileController_FindTransforms_m35AC5184D413A8EE7FA6B4B9F94799C20E9CA493(__this, L_16, L_17, NULL);
		V_4 = L_18;
		// Spawns = TransformsForSpawns;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_19 = V_4;
		__this->___Spawns_9 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Spawns_9), (void*)L_19);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.Vector3> GroundTileController::FindTransforms(System.Int32,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* GroundTileController_FindTransforms_m35AC5184D413A8EE7FA6B4B9F94799C20E9CA493 (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, int32_t ___numSpawnPoints0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___platformRect1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	bool V_11 = false;
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* V_12 = NULL;
	{
		// List<Vector3> Positions = new List<Vector3>();
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*)il2cpp_codegen_object_new(List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C(L_0, List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C_RuntimeMethod_var);
		V_0 = L_0;
		// int NUM_SECTIONS = 4;
		V_1 = 4;
		// int NUM_LANES_BETWEEN_SECTIONS = 3;
		V_2 = 3;
		// float widthStep = platformRect.width / NUM_LANES_BETWEEN_SECTIONS;
		float L_1;
		L_1 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___platformRect1), NULL);
		int32_t L_2 = V_2;
		V_3 = ((float)(L_1/((float)L_2)));
		// int numSectionsBetweenRows = (numSpawnPoints) / NUM_LANES_BETWEEN_SECTIONS;
		int32_t L_3 = ___numSpawnPoints0;
		int32_t L_4 = V_2;
		V_4 = ((int32_t)(L_3/L_4));
		// float lengthStep = platformRect.height / numSectionsBetweenRows;
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___platformRect1), NULL);
		int32_t L_6 = V_4;
		V_5 = ((float)(L_5/((float)L_6)));
		// for(int i = 1; i <= numSectionsBetweenRows; i++)
		V_6 = 1;
		goto IL_00b7;
	}

IL_0030:
	{
		// for(int j = 1; j < NUM_SECTIONS; j++)
		V_7 = 1;
		goto IL_00a5;
	}

IL_0036:
	{
		// var offsetForSpawnPoint = new Vector3(platformRect.x - widthStep / 2, 0.0f, platformRect.y + lengthStep / 2);
		float L_7;
		L_7 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___platformRect1), NULL);
		float L_8 = V_3;
		float L_9;
		L_9 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___platformRect1), NULL);
		float L_10 = V_5;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_8), ((float)il2cpp_codegen_subtract(L_7, ((float)(L_8/(2.0f))))), (0.0f), ((float)il2cpp_codegen_add(L_9, ((float)(L_10/(2.0f))))), NULL);
		// offsetForSpawnPoint += new Vector3(widthStep * j, 0.0f, -lengthStep * i);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_8;
		float L_12 = V_3;
		int32_t L_13 = V_7;
		float L_14 = V_5;
		int32_t L_15 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), ((float)il2cpp_codegen_multiply(L_12, ((float)L_13))), (0.0f), ((float)il2cpp_codegen_multiply(((-L_14)), ((float)L_15))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_11, L_16, NULL);
		V_8 = L_17;
		// Vector3 spawn = offsetForSpawnPoint + transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_18, L_20, NULL);
		V_9 = L_21;
		// Positions.Add(spawn);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_9;
		NullCheck(L_22);
		List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_inline(L_22, L_23, List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_RuntimeMethod_var);
		// for(int j = 1; j < NUM_SECTIONS; j++)
		int32_t L_24 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00a5:
	{
		// for(int j = 1; j < NUM_SECTIONS; j++)
		int32_t L_25 = V_7;
		int32_t L_26 = V_1;
		V_10 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_10;
		if (L_27)
		{
			goto IL_0036;
		}
	}
	{
		// for(int i = 1; i <= numSectionsBetweenRows; i++)
		int32_t L_28 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00b7:
	{
		// for(int i = 1; i <= numSectionsBetweenRows; i++)
		int32_t L_29 = V_6;
		int32_t L_30 = V_4;
		V_11 = (bool)((((int32_t)((((int32_t)L_29) > ((int32_t)L_30))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_11;
		if (L_31)
		{
			goto IL_0030;
		}
	}
	{
		// return Positions;
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_32 = V_0;
		V_12 = L_32;
		goto IL_00ce;
	}

IL_00ce:
	{
		// }
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_33 = V_12;
		return L_33;
	}
}
// System.Void GroundTileController::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController_OnDrawGizmos_mB9E78D1F8E96AA35FE5FDCF492ABE3525249F00F (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	{
		// int i = 0;
		V_0 = 0;
		// foreach(var tf in CollectibleSpawns)
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_0 = __this->___CollectibleSpawns_10;
		NullCheck(L_0);
		Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 L_1;
		L_1 = List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A(L_0, List_1_GetEnumerator_m24A1CBC9428047F6672EC9B92A3E4154DC60337A_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6((&V_1), Enumerator_Dispose_m13D8B7747BCE3651CB2FD43622DBEDC3E50EA0E6_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0050_1;
			}

IL_0012_1:
			{
				// foreach(var tf in CollectibleSpawns)
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
				L_2 = Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_inline((&V_1), Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_RuntimeMethod_var);
				V_2 = L_2;
				// if((SpawnsForCollectibles[i++] & 4) > 0)
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_3 = __this->___SpawnsForCollectibles_11;
				int32_t L_4 = V_0;
				int32_t L_5 = L_4;
				V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
				NullCheck(L_3);
				uint8_t L_6;
				L_6 = List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69(L_3, L_5, List_1_get_Item_mE8DDB907ACC9A6FAE4A0FD30FAE2916AA2DD1A69_RuntimeMethod_var);
				V_3 = (bool)((((int32_t)((int32_t)((int32_t)L_6&4))) > ((int32_t)0))? 1 : 0);
				bool L_7 = V_3;
				if (!L_7)
				{
					goto IL_004f_1;
				}
			}
			{
				// Gizmos.DrawCube(tf, new Vector3(0.5f, 10, 0.5f));
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
				Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
				memset((&L_9), 0, sizeof(L_9));
				Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.5f), (10.0f), (0.5f), /*hidden argument*/NULL);
				Gizmos_DrawCube_mE7D2162786517A14E8A740C7887CD08A3105B192(L_8, L_9, NULL);
			}

IL_004f_1:
			{
			}

IL_0050_1:
			{
				// foreach(var tf in CollectibleSpawns)
				bool L_10;
				L_10 = Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A((&V_1), Enumerator_MoveNext_m9C3D158CB944A2244D518FA7989D8312ACCD7C8A_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void GroundTileController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundTileController__ctor_mD38F30B2E19FF943D279BE5B4DF7F66B205A42FB (GroundTileController_t85E61DB5C0FA0F3A41B81AECAAC3236177156190* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean PlayerController::get_shouldContinueMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_get_shouldContinueMoving_m68452D97B26B6BC330EF53B30B1ACBDF905C14B8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CshouldContinueMovingU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void PlayerController::set_shouldContinueMoving(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_set_shouldContinueMoving_m3475D9C284D090253EB79F39905C26C6953D7948 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___value0;
		__this->___U3CshouldContinueMovingU3Ek__BackingField_22 = L_0;
		return;
	}
}
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m82639826DE098DC447C79B43900C5F2A630B3DC3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m8751562A9E3DEF7AE6F982C78DE513F241285174_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// swipeDetection = SwipeDetection.Instance;
		SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* L_0;
		L_0 = Singleton_1_get_Instance_m8751562A9E3DEF7AE6F982C78DE513F241285174(Singleton_1_get_Instance_m8751562A9E3DEF7AE6F982C78DE513F241285174_RuntimeMethod_var);
		__this->___swipeDetection_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___swipeDetection_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayerController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnEnable_m1558047F72022F1A32FC373A927E122D1F3CF5CC (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_OnSwiped_m42305BF45F672DE34E147F2CC1EB7B2685031663_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// swipeDetection.OnSwiped += OnSwiped;
		SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* L_0 = __this->___swipeDetection_4;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_1 = (OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C*)il2cpp_codegen_object_new(OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnSwipe__ctor_m6BC2B7BC6F57BB898881094DC82BDFD1733236B9(L_1, __this, (intptr_t)((void*)PlayerController_OnSwiped_m42305BF45F672DE34E147F2CC1EB7B2685031663_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		SwipeDetection_add_OnSwiped_mB52DDECE189B536140A5ADF2742477057DB9AA26(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnDisable_m16524B89F1DDB4EB1E201CCEB7E9502967BF57DB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_OnSwiped_m42305BF45F672DE34E147F2CC1EB7B2685031663_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// swipeDetection.OnSwiped -= OnSwiped;
		SwipeDetection_t3DA7B365274CD081D4B78834554B93EB35273A62* L_0 = __this->___swipeDetection_4;
		OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* L_1 = (OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C*)il2cpp_codegen_object_new(OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnSwipe__ctor_m6BC2B7BC6F57BB898881094DC82BDFD1733236B9(L_1, __this, (intptr_t)((void*)PlayerController_OnSwiped_m42305BF45F672DE34E147F2CC1EB7B2685031663_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		SwipeDetection_remove_OnSwiped_mA862546EDDB735FE228CE80A1877D091E43F7EFD(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Boolean PlayerController::IsOnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_IsOnGround_m93949E32FDD9D8EA220709AEEDBA2225B70753D4 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return Physics.CheckSphere(feetTransform.position, 0.01f, groundLayers);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___feetTransform_14;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_2 = __this->___groundLayers_13;
		int32_t L_3;
		L_3 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_2, NULL);
		bool L_4;
		L_4 = Physics_CheckSphere_m5E5FF963A4B356DFFCAF69B9AF9209DD1632EF17(L_1, (0.00999999978f), L_3, NULL);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean PlayerController::get_IsMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_get_IsMoving_m64231C51729CBC3677ECC548D0B681435E80293B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public bool IsMoving => rb.velocity.magnitude > 0.0f;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_7;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		return (bool)((((float)L_2) > ((float)(0.0f)))? 1 : 0);
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_RunAxis = new Vector3(0.0f, rb.position.y, rb.position.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rb_7;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_0, NULL);
		float L_2 = L_1.___y_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_3 = __this->___rb_7;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_3, NULL);
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), L_2, L_5, /*hidden argument*/NULL);
		__this->___m_RunAxis_20 = L_6;
		// isDoingMovementFromInput = false;
		__this->___isDoingMovementFromInput_21 = (bool)0;
		// shouldContinueMoving = true;
		PlayerController_set_shouldContinueMoving_m3475D9C284D090253EB79F39905C26C6953D7948_inline(__this, (bool)1, NULL);
		// playerCollider = GetComponent<CapsuleCollider>();
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_7;
		L_7 = Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E(__this, Component_GetComponent_TisCapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808_mC720996E0DB5E6A502714EF651E9251726CB636E_RuntimeMethod_var);
		__this->___playerCollider_23 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerCollider_23), (void*)L_7);
		// playerColliderInfo.height = playerCollider.height;
		PlayerColliderInfo_t30B5DF4FB8A7100FF8AB607D0CB851D759624B44* L_8 = (&__this->___playerColliderInfo_25);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_9 = __this->___playerCollider_23;
		NullCheck(L_9);
		float L_10;
		L_10 = CapsuleCollider_get_height_m63A31072F296AEE6222DC9C88704882BB6A54A24(L_9, NULL);
		L_8->___height_0 = L_10;
		// playerColliderInfo.center = playerCollider.center;
		PlayerColliderInfo_t30B5DF4FB8A7100FF8AB607D0CB851D759624B44* L_11 = (&__this->___playerColliderInfo_25);
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_12 = __this->___playerCollider_23;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = CapsuleCollider_get_center_mC12CE0A66A1104CEB7D23F39596D0E45578419C2(L_12, NULL);
		L_11->___center_1 = L_13;
		// }
		return;
	}
}
// System.Void PlayerController::OnSwiped(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnSwiped_m42305BF45F672DE34E147F2CC1EB7B2685031663 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir0, const RuntimeMethod* method) 
{
	{
		// UpdateRunAxis(dir);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___dir0;
		PlayerController_UpdateRunAxis_mFBF1E98A9C3CF1DE4AB0FE5F2566D5DC86832AF8(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnMove(UnityEngine.InputSystem.InputValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnMove_m26350714C4683F0DAE28FDBBB49112254AF9E2B1 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* ___movementValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateRunAxis(movementValue.Get<Vector2>());
		InputValue_t4F053958518BDF6FD85C55F31B0597C9521B4231* L_0 = ___movementValue0;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293(L_0, InputValue_Get_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mBA56AD2906D3B6F2B87F3DE248CB62E1AA4D2293_RuntimeMethod_var);
		PlayerController_UpdateRunAxis_mFBF1E98A9C3CF1DE4AB0FE5F2566D5DC86832AF8(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::HandleMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_HandleMovement_m507E9FBA62A559E59CC0BB8EECB022187FBBBADF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6869F8E553A3C7B7CC72D23EE55C9C01C3DAE885);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE9818FBE1F75FA47061FB4B741A6993CE76EE8);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	String_t* G_B5_0 = NULL;
	String_t* G_B8_0 = NULL;
	float G_B14_0 = 0.0f;
	{
		// if(!alive) return;
		bool L_0 = __this->___alive_5;
		V_6 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if(!alive) return;
		goto IL_0199;
	}

IL_0015:
	{
		// var playerPosToTargetedRunAxis = m_RunAxis.x - transform.position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___m_RunAxis_20);
		float L_3 = L_2->___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_3, L_6));
		// float epsilon = 0.2f;
		V_3 = (0.200000003f);
		// string directionStr = Mathf.Sign(playerPosToTargetedRunAxis) >= 0.0f ? "isRunningRight" : "isRunningLeft";
		float L_7 = V_0;
		float L_8;
		L_8 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_7, NULL);
		if ((((float)L_8) >= ((float)(0.0f))))
		{
			goto IL_004c;
		}
	}
	{
		G_B5_0 = _stringLiteral7DE9818FBE1F75FA47061FB4B741A6993CE76EE8;
		goto IL_0051;
	}

IL_004c:
	{
		G_B5_0 = _stringLiteral6869F8E553A3C7B7CC72D23EE55C9C01C3DAE885;
	}

IL_0051:
	{
		V_4 = G_B5_0;
		// string opposiuteDirStr = Mathf.Sign(playerPosToTargetedRunAxis) < 0.0f ? "isRunningRight" : "isRunningLeft";
		float L_9 = V_0;
		float L_10;
		L_10 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_9, NULL);
		if ((((float)L_10) < ((float)(0.0f))))
		{
			goto IL_0067;
		}
	}
	{
		G_B8_0 = _stringLiteral7DE9818FBE1F75FA47061FB4B741A6993CE76EE8;
		goto IL_006c;
	}

IL_0067:
	{
		G_B8_0 = _stringLiteral6869F8E553A3C7B7CC72D23EE55C9C01C3DAE885;
	}

IL_006c:
	{
		V_5 = G_B8_0;
		// if (Mathf.Abs(playerPosToTargetedRunAxis) > epsilon)
		float L_11 = V_0;
		float L_12;
		L_12 = fabsf(L_11);
		float L_13 = V_3;
		V_7 = (bool)((((float)L_12) > ((float)L_13))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_00b0;
		}
	}
	{
		// strafeSpeed = Mathf.Sign(playerPosToTargetedRunAxis) * sideForce;
		float L_15 = V_0;
		float L_16;
		L_16 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_15, NULL);
		float L_17 = __this->___sideForce_10;
		V_1 = ((float)il2cpp_codegen_multiply(L_16, L_17));
		// animator.SetBool(directionStr, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->___animator_16;
		String_t* L_19 = V_4;
		NullCheck(L_18);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_18, L_19, (bool)1, NULL);
		// animator.SetBool(opposiuteDirStr, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20 = __this->___animator_16;
		String_t* L_21 = V_5;
		NullCheck(L_20);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_20, L_21, (bool)0, NULL);
		goto IL_014f;
	}

IL_00b0:
	{
		// rb.position = new Vector3(m_RunAxis.x, rb.position.y, rb.position.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22 = __this->___rb_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___m_RunAxis_20);
		float L_24 = L_23->___x_2;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25 = __this->___rb_7;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_25, NULL);
		float L_27 = L_26.___y_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_28 = __this->___rb_7;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_28, NULL);
		float L_30 = L_29.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), L_24, L_27, L_30, /*hidden argument*/NULL);
		NullCheck(L_22);
		Rigidbody_set_position_mA15BE12B8D82220E8CA90A0F0CBFB206FE81B41C(L_22, L_31, NULL);
		// rb.velocity = new Vector3(0.0f, rb.velocity.y, rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_32 = __this->___rb_7;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_33 = __this->___rb_7;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_33, NULL);
		float L_35 = L_34.___y_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_36 = __this->___rb_7;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_36, NULL);
		float L_38 = L_37.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_39), (0.0f), L_35, L_38, /*hidden argument*/NULL);
		NullCheck(L_32);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_32, L_39, NULL);
		// strafeSpeed = 0.0f;
		V_1 = (0.0f);
		// isDoingMovementFromInput = false;
		__this->___isDoingMovementFromInput_21 = (bool)0;
		// animator.SetBool(directionStr, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_40 = __this->___animator_16;
		String_t* L_41 = V_4;
		NullCheck(L_40);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_40, L_41, (bool)0, NULL);
		// animator.SetBool(opposiuteDirStr, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_42 = __this->___animator_16;
		String_t* L_43 = V_5;
		NullCheck(L_42);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_42, L_43, (bool)0, NULL);
	}

IL_014f:
	{
		// fwdSpeed = rb.velocity.z > targetFwdSpeed ? fwdForce : 0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_44 = __this->___rb_7;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_44, NULL);
		float L_46 = L_45.___z_4;
		float L_47 = __this->___targetFwdSpeed_15;
		if ((((float)L_46) > ((float)L_47)))
		{
			goto IL_016e;
		}
	}
	{
		G_B14_0 = (0.0f);
		goto IL_0174;
	}

IL_016e:
	{
		float L_48 = __this->___fwdForce_8;
		G_B14_0 = L_48;
	}

IL_0174:
	{
		V_2 = G_B14_0;
		// rb.AddForce(strafeSpeed * Time.deltaTime, 0.0f, fwdForce * Time.deltaTime);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_49 = __this->___rb_7;
		float L_50 = V_1;
		float L_51;
		L_51 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_52 = __this->___fwdForce_8;
		float L_53;
		L_53 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		NullCheck(L_49);
		Rigidbody_AddForce_mFD97FC9DA828C1952D46D28C50B1D994B19895F6(L_49, ((float)il2cpp_codegen_multiply(L_50, L_51)), (0.0f), ((float)il2cpp_codegen_multiply(L_52, L_53)), NULL);
	}

IL_0199:
	{
		// }
		return;
	}
}
// System.Void PlayerController::HandleJumpOrSlide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_HandleJumpOrSlide_mF559FE15963C7A6AF7743D7226A4022C00A3DB68 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5563685B258BC3652BDB4AE39657869034F72D23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if(CanAnimationBeInterrupted())
		bool L_0;
		L_0 = PlayerController_CanAnimationBeInterrupted_mCF98527DDFCAE8D473DC31536FC8D359A50E72A6(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_009b;
		}
	}
	{
		// if(movementY > 0.0f)         // jump
		float L_2 = __this->___movementY_19;
		V_1 = (bool)((((float)L_2) > ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_006d;
		}
	}
	{
		// animator.SetBool("isJumping", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___animator_16;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC, (bool)1, NULL);
		// rb.velocity = new Vector3(rb.velocity.x, jumpSpeed, rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___rb_7;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___rb_7;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_6, NULL);
		float L_8 = L_7.___x_2;
		float L_9 = __this->___jumpSpeed_11;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rb_7;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_10, NULL);
		float L_12 = L_11.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_8, L_9, L_12, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_5, L_13, NULL);
		goto IL_009a;
	}

IL_006d:
	{
		// else if(movementY < 0.0f)     // slide
		float L_14 = __this->___movementY_19;
		V_2 = (bool)((((float)L_14) < ((float)(0.0f)))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_009a;
		}
	}
	{
		// ConfigureSliding(true);
		PlayerController_ConfigureSliding_m8DD8C486F55CEBC11D784DA2AF4DFF8603C0E225(__this, (bool)1, NULL);
		// animator.SetBool("isSliding", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16 = __this->___animator_16;
		NullCheck(L_16);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_16, _stringLiteral5563685B258BC3652BDB4AE39657869034F72D23, (bool)1, NULL);
	}

IL_009a:
	{
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// ConfigureSpeed();
		PlayerController_ConfigureSpeed_m1DE65F7A5EE27110EB35E35FBC18E6904A7B1A90(__this, NULL);
		// Upkeep();
		PlayerController_Upkeep_mF6DC472FB306BA8C7071AB59AA826ADD5FFD8370(__this, NULL);
		// if (shouldContinueMoving)
		bool L_0;
		L_0 = PlayerController_get_shouldContinueMoving_m68452D97B26B6BC330EF53B30B1ACBDF905C14B8_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// HandleMovement();
		PlayerController_HandleMovement_m507E9FBA62A559E59CC0BB8EECB022187FBBBADF(__this, NULL);
		// HandleJumpOrSlide();
		PlayerController_HandleJumpOrSlide_mF559FE15963C7A6AF7743D7226A4022C00A3DB68(__this, NULL);
	}

IL_0029:
	{
		// if(transform.position.y < -5.0f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___y_3;
		V_1 = (bool)((((float)L_4) < ((float)(-5.0f)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// Die();
		PlayerController_Die_m05D5887BD76E979C3DA3DB2D5E9032D30763BB2D(__this, NULL);
	}

IL_004b:
	{
		// movementX = 0;
		__this->___movementX_18 = (0.0f);
		// movementY = 0;
		__this->___movementY_19 = (0.0f);
		// }
		return;
	}
}
// System.Void PlayerController::ConfigureSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ConfigureSpeed_m1DE65F7A5EE27110EB35E35FBC18E6904A7B1A90 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(fwdForce < fwdForceCap)
		float L_0 = __this->___fwdForce_8;
		float L_1 = __this->___fwdForceCap_9;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// fwdForce += 9 * Time.deltaTime;
		float L_3 = __this->___fwdForce_8;
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___fwdForce_8 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply((9.0f), L_4))));
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Upkeep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Upkeep_mF6DC472FB306BA8C7071AB59AA826ADD5FFD8370 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5563685B258BC3652BDB4AE39657869034F72D23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("isSliding", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_16;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral5563685B258BC3652BDB4AE39657869034F72D23, (bool)0, NULL);
		// animator.SetBool("isJumping", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_16;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::UpdateRunAxis(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_UpdateRunAxis_mFBF1E98A9C3CF1DE4AB0FE5F2566D5DC86832AF8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movementValue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// if (!isDoingMovementFromInput)
		bool L_0 = __this->___isDoingMovementFromInput_21;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		// movementX = movementValue.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___movementValue0;
		float L_3 = L_2.___x_0;
		__this->___movementX_18 = L_3;
		// movementY = movementValue.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___movementValue0;
		float L_5 = L_4.___y_1;
		__this->___movementY_19 = L_5;
		// Debug.Log(movementX);
		float L_6 = __this->___movementX_18;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_8, NULL);
		// if (movementX == 0.0f)
		float L_9 = __this->___movementX_18;
		V_2 = (bool)((((float)L_9) == ((float)(0.0f)))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		// return;
		goto IL_008d;
	}

IL_004b:
	{
		// float newRunXvalue = m_RunAxis.x + Mathf.Sign(movementX) * m_SwipeMovementOnX;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___m_RunAxis_20);
		float L_12 = L_11->___x_2;
		float L_13 = __this->___movementX_18;
		float L_14;
		L_14 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_13, NULL);
		float L_15 = __this->___m_SwipeMovementOnX_12;
		V_1 = ((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_multiply(L_14, L_15))));
		// m_RunAxis = new Vector3(newRunXvalue, m_RunAxis.y, m_RunAxis.z);
		float L_16 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->___m_RunAxis_20);
		float L_18 = L_17->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&__this->___m_RunAxis_20);
		float L_20 = L_19->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), L_16, L_18, L_20, /*hidden argument*/NULL);
		__this->___m_RunAxis_20 = L_21;
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Boolean PlayerController::CanAnimationBeInterrupted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_CanAnimationBeInterrupted_mCF98527DDFCAE8D473DC31536FC8D359A50E72A6 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral461A093F9BFBD78740F342E0B30A6DF06561B24A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	{
		// bool can = IsOnGround();// && !animator.GetBool("isRunningRight") && !animator.GetBool("isRunningLeft");
		bool L_0;
		L_0 = PlayerController_IsOnGround_m93949E32FDD9D8EA220709AEEDBA2225B70753D4(__this, NULL);
		V_0 = L_0;
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("run_slide"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___animator_16;
		NullCheck(L_1);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2;
		L_2 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_1, 0, NULL);
		V_2 = L_2;
		bool L_3;
		L_3 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_2), _stringLiteral461A093F9BFBD78740F342E0B30A6DF06561B24A, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0056;
		}
	}
	{
		// if (!(animator.GetCurrentAnimatorStateInfo(0).normalizedTime >= 0.9f))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___animator_16;
		NullCheck(L_5);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_6;
		L_6 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_5, 0, NULL);
		V_2 = L_6;
		float L_7;
		L_7 = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6((&V_2), NULL);
		V_3 = (bool)((!(((float)L_7) >= ((float)(0.899999976f))))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// return false;
		V_4 = (bool)0;
		goto IL_005b;
	}

IL_004b:
	{
		// ConfigureSliding(false);
		PlayerController_ConfigureSliding_m8DD8C486F55CEBC11D784DA2AF4DFF8603C0E225(__this, (bool)0, NULL);
	}

IL_0056:
	{
		// return can;
		bool L_9 = V_0;
		V_4 = L_9;
		goto IL_005b;
	}

IL_005b:
	{
		// }
		bool L_10 = V_4;
		return L_10;
	}
}
// System.Void PlayerController::ConfigureSliding(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ConfigureSliding_m8DD8C486F55CEBC11D784DA2AF4DFF8603C0E225 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___isSliding0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (isSliding)
		bool L_0 = ___isSliding0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		// Vector3 collidercenter = new Vector3(0.0f, 0.5f, 0.0f);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_1), (0.0f), (0.5f), (0.0f), NULL);
		// playerCollider.center = collidercenter;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_2 = __this->___playerCollider_23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_1;
		NullCheck(L_2);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_2, L_3, NULL);
		// playerCollider.height = colliderheight;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_4 = __this->___playerCollider_23;
		NullCheck(L_4);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_4, (1.0f), NULL);
		goto IL_006e;
	}

IL_003e:
	{
		// playerCollider.center = playerColliderInfo.center;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_5 = __this->___playerCollider_23;
		PlayerColliderInfo_t30B5DF4FB8A7100FF8AB607D0CB851D759624B44* L_6 = (&__this->___playerColliderInfo_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___center_1;
		NullCheck(L_5);
		CapsuleCollider_set_center_m242D92DAEF25887C6A87A0777E4E624C0A431A2E(L_5, L_7, NULL);
		// playerCollider.height = playerColliderInfo.height;
		CapsuleCollider_t3A1671C74F0836ABEF5D01A7470B5B2BE290A808* L_8 = __this->___playerCollider_23;
		PlayerColliderInfo_t30B5DF4FB8A7100FF8AB607D0CB851D759624B44* L_9 = (&__this->___playerColliderInfo_25);
		float L_10 = L_9->___height_0;
		NullCheck(L_8);
		CapsuleCollider_set_height_m5DAE3DC5AD851E30C5A29AC7A22F36BE1E205BBB(L_8, L_10, NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Die_m05D5887BD76E979C3DA3DB2D5E9032D30763BB2D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC918E2C44605F65E21B6918A5B6F1726CA9241CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CDieU3Eb__43_0_m483AAAE710C5D69A96C142FC818C3D9104D82548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_1 = NULL;
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* V_2 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* V_3 = NULL;
	int32_t V_4 = 0;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_5 = NULL;
	RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* V_6 = NULL;
	int32_t V_7 = 0;
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* V_8 = NULL;
	Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* G_B6_0 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* G_B6_1 = NULL;
	Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* G_B5_0 = NULL;
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* G_B5_1 = NULL;
	{
		// if (alive)
		bool L_0 = __this->___alive_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_00be;
		}
	}
	{
		// alive = false;
		__this->___alive_5 = (bool)0;
		// animator.enabled = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_16;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// var Colliders = GetComponentsInChildren<Collider>();
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_3;
		L_3 = Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB(__this, Component_GetComponentsInChildren_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m64EB86DDB49F92CFAAF6003C9EAC7D7D8B0F35DB_RuntimeMethod_var);
		V_1 = L_3;
		// foreach (var col in Colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_4 = V_1;
		V_3 = L_4;
		V_4 = 0;
		goto IL_0047;
	}

IL_0032:
	{
		// foreach (var col in Colliders)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_5 = L_8;
		// col.enabled = true;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9 = V_5;
		NullCheck(L_9);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_9, (bool)1, NULL);
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0047:
	{
		// foreach (var col in Colliders)
		int32_t L_11 = V_4;
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_12 = V_3;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		// Colliders.Select(col => col.enabled = true);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_il2cpp_TypeInfo_var);
		Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* L_14 = ((U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_il2cpp_TypeInfo_var))->___U3CU3E9__43_0_1;
		Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* L_15 = L_14;
		G_B5_0 = L_15;
		G_B5_1 = L_13;
		if (L_15)
		{
			G_B6_0 = L_15;
			G_B6_1 = L_13;
			goto IL_006e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_il2cpp_TypeInfo_var);
		U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF* L_16 = ((U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* L_17 = (Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04*)il2cpp_codegen_object_new(Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_2__ctor_m864A52B06CBC2998220EBC26DE6F9AF4FC6BF864(L_17, L_16, (intptr_t)((void*)U3CU3Ec_U3CDieU3Eb__43_0_m483AAAE710C5D69A96C142FC818C3D9104D82548_RuntimeMethod_var), NULL);
		Func_2_t6AD3CFC7C337E46C1DA946EEEA6278162FB59A04* L_18 = L_17;
		((U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_il2cpp_TypeInfo_var))->___U3CU3E9__43_0_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_il2cpp_TypeInfo_var))->___U3CU3E9__43_0_1), (void*)L_18);
		G_B6_0 = L_18;
		G_B6_1 = G_B5_1;
	}

IL_006e:
	{
		RuntimeObject* L_19;
		L_19 = Enumerable_Select_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC918E2C44605F65E21B6918A5B6F1726CA9241CA((RuntimeObject*)G_B6_1, G_B6_0, Enumerable_Select_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC918E2C44605F65E21B6918A5B6F1726CA9241CA_RuntimeMethod_var);
		// var Rbs = GetComponentsInChildren<Rigidbody>();
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_20;
		L_20 = Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391(__this, Component_GetComponentsInChildren_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4F358F1E07750B2C2BF4101F7554E41D87159391_RuntimeMethod_var);
		V_2 = L_20;
		// foreach (var rib in Rbs)
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_21 = V_2;
		V_6 = L_21;
		V_7 = 0;
		goto IL_009c;
	}

IL_0084:
	{
		// foreach (var rib in Rbs)
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_22 = V_6;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_8 = L_25;
		// rib.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_26 = V_8;
		NullCheck(L_26);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_26, (bool)0, NULL);
		int32_t L_27 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_009c:
	{
		// foreach (var rib in Rbs)
		int32_t L_28 = V_7;
		RigidbodyU5BU5D_t052E8AB174C34DFD0EBB5E897554DEBB841CC649* L_29 = V_6;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0084;
		}
	}
	{
		// mainCollider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_30 = __this->___mainCollider_17;
		NullCheck(L_30);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_30, (bool)0, NULL);
		// GameOverUI.GetGameOver();
		GameOverUI_tED6E1D9D1616BF7C870AEDB25B882281D25F4914* L_31 = __this->___GameOverUI_6;
		NullCheck(L_31);
		GameOverUI_GetGameOver_m7B838C8E0C237DAED4A48668ABEF390E515EF6E1(L_31, NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter_m2FC01282FAEE546C4408E6B901DBB3EB5A5BF989 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB80935B1DD74FC60370FA301285249DF5CD0ED8C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(collision.collider.tag == "Obstacles")
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___collision0;
		NullCheck(L_0);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralB80935B1DD74FC60370FA301285249DF5CD0ED8C, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// Die();
		PlayerController_Die_m05D5887BD76E979C3DA3DB2D5E9032D30763BB2D(__this, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// public bool alive = true;
		__this->___alive_5 = (bool)1;
		// [SerializeField] private float m_SwipeMovementOnX = 3.0f;
		__this->___m_SwipeMovementOnX_12 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2DF27D1FB708C931530B7423611C6F587FDB3A2D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF* L_0 = (U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF*)il2cpp_codegen_object_new(U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m91C495C66D26C012BD096FCB5837A4A5668A845E(L_0, NULL);
		((U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void PlayerController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m91C495C66D26C012BD096FCB5837A4A5668A845E (U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean PlayerController/<>c::<Die>b__43_0(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CDieU3Eb__43_0_m483AAAE710C5D69A96C142FC818C3D9104D82548 (U3CU3Ec_tF376CF809247F80D2836EB9DF4181D9E51EA49EF* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___col0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// Colliders.Select(col => col.enabled = true);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___col0;
		int32_t L_1 = 1;
		V_0 = (bool)L_1;
		NullCheck(L_0);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_0, (bool)L_1, NULL);
		bool L_2 = V_0;
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
// System.Void ScenesManager::OnQuitButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScenesManager_OnQuitButtonClick_m21D4371E2433027A479E3B48EDE13C6E73B645D9 (ScenesManager_tBBD076CC35D6593C519B25D4D40ECEEF8E04BCB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainMenu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral000E6F488C4BFBAD929A9ED558662797D830E719, NULL);
		// }
		return;
	}
}
// System.Void ScenesManager::OnStartButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScenesManager_OnStartButtonClick_mFF106323B5FB5C71F9B2A1F56B622656BB1288F2 (ScenesManager_tBBD076CC35D6593C519B25D4D40ECEEF8E04BCB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral575921BEB984F47FD5D4CD8DC79BD8243E7B01E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainGame");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral575921BEB984F47FD5D4CD8DC79BD8243E7B01E3, NULL);
		// }
		return;
	}
}
// System.Void ScenesManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScenesManager__ctor_m9012BEC3C25B1A916374854A9A99DC29C1D7A5D8 (ScenesManager_tBBD076CC35D6593C519B25D4D40ECEEF8E04BCB0* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SceneSwitcher::OpenScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitcher_OpenScene_mB7637F6235CDB1D2077A7863706708B4FCA5B022 (SceneSwitcher_t4BE0478E16D178567D51E0CB184D38BDE3E02602* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(index);
		int32_t L_0 = ___index0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(L_0, NULL);
		// }
		return;
	}
}
// System.Void SceneSwitcher::CloseOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitcher_CloseOptions_m0DF4A3882AFBA5DDC26843F489BDD67EA04CFB63 (SceneSwitcher_t4BE0478E16D178567D51E0CB184D38BDE3E02602* __this, const RuntimeMethod* method) 
{
	{
		// optionsScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___optionsScreen_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void SceneSwitcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitcher__ctor_m286A74582BD4C6059DACBC69C75EE335165E73DA (SceneSwitcher_t4BE0478E16D178567D51E0CB184D38BDE3E02602* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Score::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Update_m8F6F1768AC5316A30F5A79813D72B20EC6796E5A (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int currentScore = (int)player.position.z + zOffset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___player_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___z_4;
		int32_t L_3 = __this->___zOffset_6;
		V_0 = ((int32_t)il2cpp_codegen_add(il2cpp_codegen_cast_double_to_int<int32_t>(L_2), L_3));
		// scoreText.text = "Score: " + currentScore;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___scoreText_5;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_6);
		// }
		return;
	}
}
// System.Void Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mDEDBA72E1F38C2F7CFF4E6C6556103C5D62C1670 (Score_t190877D354724EB1BD99FA27F906E19CB8F0C88A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Destroy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy_Start_mCF20DA0C3F0FE8F7158A6E94E39E4E47F052781F (Destroy_t4F2B6B7FD5AFA77880F1040DBFD52453E63F3EA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, 3f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_0, (3.0f), NULL);
		// }
		return;
	}
}
// System.Void Destroy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destroy__ctor_m413F23B3BA1D73EE1AAEB419EAC5307616BE5C39 (Destroy_t4F2B6B7FD5AFA77880F1040DBFD52453E63F3EA3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayAudio::DropAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio_DropAudio_mE49DDE4AB8AEA4BCA53225774B99F634C79EF430 (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(audioObj, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___audioObj_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void PlayAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio__ctor_mFB4A06CE9F21D57E725F284B2C55494834E2B421 (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StartTouch_Invoke_mCF672CFE7F369CCB062A6DD3193D4D0987CB1B6E_inline (StartTouch_t0C32E801F1DF2417CF3365ADF29AFAC8ADE6E724* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___time1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EndTouch_Invoke_mB7D08EE067E421F1D810FDB18EE8B63E06D6E756_inline (EndTouch_tF5E8991E43DD9BBE8852E3859EDD08192FB403AF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, float ___time1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___time1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* RunX_get_asset_m75F7478A44C90BB83093E8A2ABE3B8F20CA9E15A_inline (RunX_t1BA3D8DA6522C7EBA58B767F4F3902DBBC65273A* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* L_0 = __this->___U3CassetU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 InputActionAsset_get_bindingMask_mD5D2FAC455D221E7BC657DA5E7E4F5402E0B4F6C_inline (InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BindingMask;
		Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 L_0 = __this->___m_BindingMask_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnSwipe_Invoke_mC08E630BF82A715E9F3C76B7E88D8CC832E68AC8_inline (OnSwipe_t9B51177026C4E073A195F2D2AA915C00C37B1B9C* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___val0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_down_m744DCF40A3F17B76B9C084145D6E66AC0DE3D5CD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___downVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_left_m9D9A16C5D268435428ADF448F6B5E8C1EC3A57B4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___leftVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_mCE2D0142663361ED4B48C36873786986D25A6E0A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerController_set_shouldContinueMoving_m3475D9C284D090253EB79F39905C26C6953D7948_inline (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// private set;
		bool L_0 = ___value0;
		__this->___U3CshouldContinueMovingU3Ek__BackingField_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayerController_get_shouldContinueMoving_m68452D97B26B6BC330EF53B30B1ACBDF905C14B8_inline (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// get;
		bool L_0 = __this->___U3CshouldContinueMovingU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___item0;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m46EEFFA770BE665EA0CB3A5332E941DA4B3C1D37_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA5BEB2E728A66DF16B7AAF7BFB80E7B9F4673ABC_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_m367DD1E571E10E5D1B0D13434E35DC7FC31FA886_gshared_inline (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mCF9C36A7DE08AFB2D2EEC76139677E086A6CAD73_gshared_inline (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, uint8_t ___item0, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = V_1;
		uint8_t L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_8);
		return;
	}

IL_0034:
	{
		uint8_t L_9 = ___item0;
		((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m79E50C4F592B1703F4B76A8BE7B4855515460CA1_gshared_inline (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___item0, const RuntimeMethod* method) 
{
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		return;
	}

IL_0034:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___item0;
		((  void (*) (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enumerator_get_Current_m098C9AE095DEFD00B1B0314A772330F537805EE2_gshared_inline (Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
