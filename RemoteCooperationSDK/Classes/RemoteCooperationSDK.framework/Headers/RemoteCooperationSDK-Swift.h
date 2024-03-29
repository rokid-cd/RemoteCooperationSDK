#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef REMOTECOOPERATIONSDK_SWIFT_H
#define REMOTECOOPERATIONSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import CoreVideo;
@import Foundation;
@import ObjectiveC;
@import RKCooperationCore;
@import SceneKit;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="RemoteCooperationSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)

/// 扩展消息
SWIFT_CLASS("_TtC20RemoteCooperationSDK18ARExtensionMessage")
@interface ARExtensionMessage : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK7ARPoint")
@interface ARPoint : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSString;
enum ARSlamMessageType : NSInteger;

SWIFT_CLASS("_TtC20RemoteCooperationSDK17ARSlamBaseMessage")
@interface ARSlamBaseMessage : NSObject
@property (nonatomic, copy) NSString * _Nullable channelId;
@property (nonatomic, copy) NSString * _Nullable userId;
@property (nonatomic, copy) NSString * _Nullable promoterUserId;
@property (nonatomic, copy) NSString * _Nullable messageId;
@property (nonatomic, strong) ARPoint * _Nullable pointF;
@property (nonatomic, copy) NSString * _Nullable doodleContent;
@property (nonatomic, copy) NSString * _Nullable imageUrl;
@property (nonatomic, copy) NSString * _Nullable errorMessage;
- (nonnull instancetype)initWithMessageType:(enum ARSlamMessageType)messageType OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, ARSlamMessageCode, open) {
  ARSlamMessageCodeOK = 0,
  ARSlamMessageCodeExceedTheMaximumNumberLimit = 1,
  ARSlamMessageCodeSceneLost = 2,
  ARSlamMessageCodeWithdrawalNothing = 3,
  ARSlamMessageCodeMarkNoFeatures = 4,
  ARSlamMessageCodeMarkNotSupport = 5,
  ARSlamMessageCodeOtherError = 6,
};

typedef SWIFT_ENUM(NSInteger, ARSlamMessageType, open) {
  ARSlamMessageTypeMarkDoodleUnknown = -1,
  ARSlamMessageTypeMarkDoodleRequest = 0,
  ARSlamMessageTypeMarkDoodleResponse = 1,
  ARSlamMessageTypeMarkArrowRequest = 2,
  ARSlamMessageTypeMarkArrowResponse = 3,
  ARSlamMessageTypeMarkWithdrawalRequest = 4,
  ARSlamMessageTypeMarkWithdrawalResponse = 5,
  ARSlamMessageTypeMarkClearRequest = 6,
  ARSlamMessageTypeMarkClearResponse = 7,
  ARSlamMessageTypeMarkStopRequest = 8,
  ARSlamMessageTypeMarkStopResponse = 9,
  ARSlamMessageTypeMarkStartRequest = 10,
  ARSlamMessageTypeMarkStartResponse = 11,
  ARSlamMessageTypeMarkStatusUpdate = 12,
  ARSlamMessageTypeMarkStateRequest = 13,
  ARSlamMessageTypeMarkSlamExit = 14,
  ARSlamMessageTypeMarkCircleRequest = 15,
  ARSlamMessageTypeMarkCircleResponse = 16,
  ARSlamMessageTypeMarkLocalImageRequest = 17,
  ARSlamMessageTypeMarkLocalImageResponse = 18,
  ARSlamMessageTypeMarkCloudImageRequest = 19,
  ARSlamMessageTypeMarkCloudImageResponse = 20,
};


SWIFT_CLASS("_TtC20RemoteCooperationSDK3Dev")
@interface Dev : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK15DeviceInfoModel")
@interface DeviceInfoModel : NSObject
/// 公司Id
@property (nonatomic, copy) NSString * _Nonnull companyId;
/// 1、安卓    2、iOS    3、PC    4、Glass    5、Web
@property (nonatomic) NSInteger deviceType;
/// 是否支持AR   1 支持 ， 0 不支持
@property (nonatomic) BOOL isSlam;
/// 推送Id
@property (nonatomic, copy) NSString * _Nonnull registerId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC20RemoteCooperationSDK8NotiName")
@interface NotiName : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull joinMeeting;)
+ (NSString * _Nonnull)joinMeeting SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull inviteUser;)
+ (NSString * _Nonnull)inviteUser SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull mediaChannelOnParticipantJoin;)
+ (NSString * _Nonnull)mediaChannelOnParticipantJoin SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull mediaChannelOnJoinSuccess;)
+ (NSString * _Nonnull)mediaChannelOnJoinSuccess SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull onRoomFullScreen;)
+ (NSString * _Nonnull)onRoomFullScreen SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull offRoomFullScreen;)
+ (NSString * _Nonnull)offRoomFullScreen SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull mediaChannelStateChange;)
+ (NSString * _Nonnull)mediaChannelStateChange SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull meetingError;)
+ (NSString * _Nonnull)meetingError SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull takeSnapshot;)
+ (NSString * _Nonnull)takeSnapshot SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull onRemoteRecord;)
+ (NSString * _Nonnull)onRemoteRecord SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull applicationWillTerminate;)
+ (NSString * _Nonnull)applicationWillTerminate SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull IMGoInviteMemeberVC;)
+ (NSString * _Nonnull)IMGoInviteMemeberVC SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull creatMeetingSuccess;)
+ (NSString * _Nonnull)creatMeetingSuccess SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSCoder;

SWIFT_CLASS("_TtC20RemoteCooperationSDK17RKARImageToolView")
@interface RKARImageToolView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)layoutSubviews;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK10RKBaseCell")
@interface RKBaseCell : UITableViewCell
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;

SWIFT_CLASS("_TtC20RemoteCooperationSDK20RKBaseViewController")
@interface RKBaseViewController : UIViewController
@property (nonatomic, readonly) UIStatusBarStyle preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)leftBarButtonItemAction;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK15RKCallAlertView")
@interface RKCallAlertView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK7RKColor")
@interface RKColor : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class RKContactInfoModel;

SWIFT_CLASS("_TtC20RemoteCooperationSDK19RKContactGroupModel")
@interface RKContactGroupModel : NSObject
@property (nonatomic) NSInteger onlineAccountNum;
@property (nonatomic, copy) NSString * _Nonnull groupName;
@property (nonatomic, copy) NSArray<RKContactInfoModel *> * _Nonnull contactsList;
@property (nonatomic) NSInteger totalAccountNum;
@property (nonatomic, copy) NSString * _Nonnull groupId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// 联系人信息
SWIFT_CLASS("_TtC20RemoteCooperationSDK18RKContactInfoModel")
@interface RKContactInfoModel : NSObject
@property (nonatomic, copy) NSString * _Nonnull userId;
@property (nonatomic, copy) NSString * _Nonnull username;
@property (nonatomic, copy) NSString * _Nonnull realName;
@property (nonatomic, copy) NSString * _Nonnull licenseCode;
@property (nonatomic, copy) NSString * _Nonnull postName;
@property (nonatomic, copy) NSString * _Nonnull phoneNum;
@property (nonatomic, copy) NSString * _Nonnull companyName;
@property (nonatomic, copy) NSString * _Nonnull headUrl;
@property (nonatomic, copy) NSString * _Nonnull headPortrait;
@property (nonatomic, copy) NSString * _Nonnull unitName;
@property (nonatomic) int64_t licenseEndTime;
@property (nonatomic) NSInteger deviceType;
@property (nonatomic) NSInteger status;
@property (nonatomic) BOOL isSlam;
@property (nonatomic) BOOL selected;
@property (nonatomic, copy) NSString * _Nonnull postCode;
@property (nonatomic, strong) DeviceInfoModel * _Nonnull deviceInfo;
@property (nonatomic, readonly) BOOL isSelf;
/// 是否支持推送
@property (nonatomic, readonly) BOOL isSupportPush;
/// 是否可以呼叫（在线或者支持推送）
@property (nonatomic, readonly) BOOL isAvailable;
/// 是否支持AR
@property (nonatomic, readonly) BOOL isSupportAR;
/// 是否支持截图
@property (nonatomic) BOOL isSnapchat;
/// 是否支持视频点选
@property (nonatomic) BOOL isVideoPoint;
/// 是否支持视频控制
@property (nonatomic, readonly) BOOL isVideoControl;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK18RKContactListModel")
@interface RKContactListModel : NSObject
@property (nonatomic, copy) NSArray<RKContactInfoModel *> * _Nonnull contactsList;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UserInfo;
@protocol RKRTCDelegate;
@class NSError;
@protocol RKRTCEventListener;
@class RKDeviceParams;

SWIFT_CLASS("_TtC20RemoteCooperationSDK20RKCooperationManager")
@interface RKCooperationManager : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) RKCooperationManager * _Nonnull shared;)
+ (RKCooperationManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
+ (void)setShared:(RKCooperationManager * _Nonnull)value;
/// 获取当前登陆的用户
@property (nonatomic, strong) UserInfo * _Nullable user;
/// 是否已登录
@property (nonatomic, readonly) BOOL isLogin;
/// 设置 IM 代理
@property (nonatomic, weak) id <RKRTCDelegate> _Null_unspecified delegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// 配置远程协作配置
/// \param appId 应用appId
///
/// \param rtcUrl rtc服务器地址
///
/// \param success 成功回调
///
/// \param failure 失败回调
///
- (void)initWithConfigWithAppId:(NSString * _Nonnull)appId rtcUrl:(NSString * _Nonnull)rtcUrl saasUrl:(NSString * _Nonnull)saasUrl disabledTrust:(NSArray<NSString *> * _Nonnull)disabledTrust success:(void (^ _Nonnull)(id _Nullable))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure SWIFT_METHOD_FAMILY(none);
/// 添加事件监听。当前监听者生命周期结束 自动中断监听
- (void)addEventListenerWithListener:(id <RKRTCEventListener> _Nonnull)listener;
/// 删除事件监听。
- (void)removeEventListenerWithListener:(id <RKRTCEventListener> _Nonnull)listener;
/// 登录远程协作
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     token: saas服务器token
///   </li>
///   <li>
///     user:  user用户信息
///   </li>
///   <li>
///     success: 成功回调
///   </li>
///   <li>
///     failed: 失败回调
///   </li>
/// </ul>
- (void)loginWithToken:(NSString * _Nonnull)token user:(UserInfo * _Nonnull)user success:(void (^ _Nonnull)(id _Nullable))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
/// 登出远程协作
- (void)logout;
/// 创建会议
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     inviteUsers: 邀请成员 (不包含会议发起者)
///   </li>
/// </ul>
- (void)startCooperationWithInviteUsers:(NSArray<NSString *> * _Nonnull)inviteUsers success:(void (^ _Nonnull)(id _Nullable))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
/// 创建会议
/// \param meetingName 会议名称
///
/// \param inviteUsers 邀请成员 (不包含会议发起者)
///
/// \param deviceParams 相关设备参数
///
- (void)customStartCooperationWithMeetingName:(NSString * _Nonnull)meetingName inviteUsers:(NSArray<NSString *> * _Nonnull)inviteUsers deviceParams:(RKDeviceParams * _Nonnull)deviceParams success:(void (^ _Nonnull)(id _Nullable))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
/// 邀请加入远程协作
/// \param channelId 被邀请的会议ID
///
/// \param userIdList 被邀请的用户ID列表 （非会议内用户ID）
///
- (void)inviteCooperationWithChannelId:(NSString * _Nonnull)channelId userIdList:(NSArray<NSString *> * _Nonnull)userIdList success:(void (^ _Nonnull)(id _Nullable))success failure:(void (^ _Nonnull)(NSError * _Nullable))failure;
/// 重新加入会议
/// \param meetingId 加入会议id
///
/// \param meetingName 会议名称
///
- (void)rejoinCooperationWithMeetingId:(NSString * _Nonnull)meetingId meetingName:(NSString * _Nonnull)meetingName mediaOn:(BOOL)mediaOn;
/// 加入指定会议
/// \param meetingId 加入会议id
///
/// \param meetingName 会议名称
///
- (void)joinCooperationWithMeetingId:(NSString * _Nonnull)meetingId meetingName:(NSString * _Nonnull)meetingName mediaOn:(BOOL)mediaOn;
/// 通过邀请码加入会议
- (void)useCodeJoinMeeting;
- (void)enterCooperationWithMeetingId:(NSString * _Nonnull)meetingId meetingName:(NSString * _Nonnull)meetingName closure:(void (^ _Nonnull)(BOOL))closure;
/// 设置上传文件路径
/// \param path 路径名
///
- (void)setUploadFolderPathWithPath:(NSString * _Nonnull)path;
/// 设置屏幕共享ID
/// \param shareExtenId 用来关联共享Extension的id
///
- (void)setScreenSharingExtansIdWithShareExtenId:(NSString * _Nonnull)shareExtenId;
/// 上传屏幕共享自定义流
/// \param pixelBuffer 获取的屏幕buffer
///
- (void)uploadSharePixelBufferWithPixelBuffer:(CVPixelBufferRef _Nonnull)pixelBuffer;
- (void)inviteWithCancel:(BOOL)cancel;
@end


@interface RKCooperationManager (SWIFT_EXTENSION(RemoteCooperationSDK)) <RKCallListener>
- (void)onCallAcceptWithChannelId:(NSString * _Nonnull)channelId userId:(NSString * _Nonnull)userId;
- (void)onCallBusyWithChannelId:(NSString * _Nonnull)channelId userId:(NSString * _Nonnull)userId inviteUserId:(NSString * _Nonnull)inviteUserId;
- (void)onCallRejectedWithChannelId:(NSString * _Nonnull)channelId userId:(NSString * _Nonnull)userId inviteUserId:(NSString * _Nonnull)inviteUserId;
@end

@class RKIJoinedChannel;

@interface RKCooperationManager (SWIFT_EXTENSION(RemoteCooperationSDK)) <RKLoginCallback>
- (void)onJoinedChannelList:(NSArray<RKIJoinedChannel *> * _Nullable)channelList;
- (void)onLoginWithReason:(enum RKCooperationCode)reason;
- (void)onLogoutWithReason:(enum RKCooperationCode)reason;
@end

@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC20RemoteCooperationSDK10RKMaskView")
@interface RKMaskView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK18RKCustomActionView")
@interface RKCustomActionView : RKMaskView
- (void)layoutSubviews;
@end


/// 硬件设备相关参数
SWIFT_CLASS("_TtC20RemoteCooperationSDK14RKDeviceParams")
@interface RKDeviceParams : NSObject
/// 是否打开摄像头
@property (nonatomic) BOOL isCameraOn;
/// 是否打开扬声器
@property (nonatomic) BOOL isSpeakerOn;
/// 是否打开麦克风
@property (nonatomic) BOOL isMicOn;
/// 是否开启云端录制
@property (nonatomic) BOOL isCloudRecord;
/// 是否开始后置摄像头
@property (nonatomic) BOOL isBackCamera;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK17RKFileMessageData")
@interface RKFileMessageData : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK6RKFont")
@interface RKFont : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK15RKLineWidthView")
@interface RKLineWidthView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
@end


typedef SWIFT_ENUM(NSInteger, RKMeetingFileType, open) {
  RKMeetingFileTypeImage = 0,
  RKMeetingFileTypeVideo = 1,
  RKMeetingFileTypeFile = 2,
};


SWIFT_CLASS("_TtC20RemoteCooperationSDK13RKMeetingInfo")
@interface RKMeetingInfo : NSObject
@property (nonatomic, copy) NSString * _Nonnull channelId;
@property (nonatomic, copy) NSString * _Nonnull channelname;
@property (nonatomic, copy) NSString * _Nonnull channelPassword;
@property (nonatomic, copy) NSString * _Nonnull meetingId;
@property (nonatomic, copy) NSString * _Nonnull name;
@property (nonatomic) int64_t startTime;
@property (nonatomic, copy) NSString * _Nonnull resolutionRatio;
@property (nonatomic, copy) NSString * _Nonnull fromUserId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK16RKMeetingManager")
@interface RKMeetingManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@class RKChannelParam;

@interface RKMeetingManager (SWIFT_EXTENSION(RemoteCooperationSDK)) <RKIncomingCallListener>
- (void)onReceiveCallWithChannelId:(NSString * _Nonnull)channelId fromUserId:(NSString * _Nonnull)fromUserId createTime:(int64_t)createTime channelTitle:(NSString * _Nonnull)channelTitle channelParam:(RKChannelParam * _Nullable)channelParam;
- (void)onCallCanceledWithChannelId:(NSString * _Nonnull)channelId userId:(NSString * _Nonnull)userId;
@end




SWIFT_CLASS("_TtC20RemoteCooperationSDK12RKPhotoModel")
@interface RKPhotoModel : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



/// RTC 代理
SWIFT_PROTOCOL("_TtP20RemoteCooperationSDK13RKRTCDelegate_")
@protocol RKRTCDelegate <NSObject>
/// 获取联系人列表
- (NSArray<UserInfo *> * _Nonnull)getContactList SWIFT_WARN_UNUSED_RESULT;
/// 获取联系人详情
- (UserInfo * _Nullable)getContactById:(NSString * _Nonnull)byId SWIFT_WARN_UNUSED_RESULT;
@end


/// RTC 事件监听
SWIFT_PROTOCOL("_TtP20RemoteCooperationSDK18RKRTCEventListener_")
@protocol RKRTCEventListener <NSObject>
@optional
/// 登录状态异常事件
- (void)onLogoutWithReaseon:(NSInteger)reaseon;
/// 会议内邀请
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     channelId 频道ID
///   </li>
///   <li>
///     userIdList 会议内成员userId
///   </li>
///   <li>
///     MaxJoin 会议内最大人数（包含自己）
///   </li>
/// </ul>
- (void)onInviteWithChannelId:(NSString * _Nonnull)channelId userIdList:(NSArray<NSString *> * _Nonnull)userIdList MaxJoin:(NSInteger)MaxJoin;
/// 用户接受了邀请回调：
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     channelId 频道ID
///   </li>
///   <li>
///     userId 用户ID
///   </li>
/// </ul>
- (void)onCallAcceptWithChannelId:(NSString * _Nonnull)channelId userId:(NSString * _Nonnull)userId;
/// 被呼叫的用户正忙
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     channelId 频道ID
///   </li>
///   <li>
///     userId 用户ID
///   </li>
///   <li>
///     inviteUserId 邀请者ID
///   </li>
/// </ul>
- (void)onCallBusyWithChannelId:(NSString * _Nonnull)channelId userId:(NSString * _Nonnull)userId inviteUserId:(NSString * _Nonnull)inviteUserId;
/// 被呼叫的用户拒绝了加入频道
/// <ul>
///   <li>
///     Parameters:
///   </li>
///   <li>
///     channelId 频道ID
///   </li>
///   <li>
///     userId 用户ID
///   </li>
///   <li>
///     inviteUserId 邀请者ID
///   </li>
/// </ul>
- (void)onCallRejectedWithChannelId:(NSString * _Nonnull)channelId userId:(NSString * _Nonnull)userId inviteUserId:(NSString * _Nonnull)inviteUserId;
/// 重新加入按钮点击回调
- (void)rejoinAction;
/// 创建会议按钮点击回调
- (void)startCooperationAction;
/// 离开会议回调
- (void)leaveMeetingWithMeeting:(NSString * _Nonnull)meeting;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK12RKSDKSetting")
@interface RKSDKSetting : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) RKSDKSetting * _Nonnull shareInstance;)
+ (RKSDKSetting * _Nonnull)shareInstance SWIFT_WARN_UNUSED_RESULT;
+ (void)setShareInstance:(RKSDKSetting * _Nonnull)value;
/// 标品正式 服务器地址
@property (nonatomic, copy) NSString * _Nonnull apiHost;
/// 忽略https证书
@property (nonatomic, copy) NSString * _Nonnull evaluatorHosts;
/// 上传文件路径
@property (nonatomic, copy) NSString * _Nonnull folderName;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK14RKThirdMessage")
@interface RKThirdMessage : NSObject
@property (nonatomic) int64_t timestamp;
@property (nonatomic, copy) NSString * _Nonnull channel;
@property (nonatomic, copy) NSString * _Nonnull active;
@property (nonatomic, copy) NSString * _Nonnull userId;
@property (nonatomic, copy) NSString * _Nonnull data;
@property (nonatomic, copy) NSString * _Nonnull channelId;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK16RKVideoCtrHelper")
@interface RKVideoCtrHelper : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC20RemoteCooperationSDK14RequestManager")
@interface RequestManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC20RemoteCooperationSDK11SCNTextNode")
@interface SCNTextNode : SCNNode
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder SWIFT_UNAVAILABLE;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, ShareType, open) {
/// 屏幕共享
  ShareTypeScreenShare = 0,
/// 白板标注
  ShareTypeDoodleShare = 1,
/// AR标注
  ShareTypeSlamShare = 2,
/// 视频点选
  ShareTypePointVideoShare = 3,
/// 视频控制
  ShareTypeVideoControlShare = 4,
/// 冻屏标注
  ShareTypeImageDoodleShare = 5,
};


SWIFT_CLASS("_TtC20RemoteCooperationSDK2UI")
@interface UI : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;

@interface UIButton (SWIFT_EXTENSION(RemoteCooperationSDK))
- (void)customPositionWithImage:(UIImage * _Nullable)anImage title:(NSString * _Nonnull)title titlePosition:(UIViewContentMode)titlePosition additionalSpacing:(CGFloat)additionalSpacing state:(UIControlState)state;
@end





/// 用户信息
SWIFT_CLASS("_TtC20RemoteCooperationSDK8UserInfo")
@interface UserInfo : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
