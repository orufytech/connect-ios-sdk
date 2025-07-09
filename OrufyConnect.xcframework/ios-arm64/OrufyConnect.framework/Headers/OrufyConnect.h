#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class OrufyConnectOrufyConnectConfig, UNNotificationResponse, UIViewController, OrufyConnectOrufyConnectUser, OrufyConnectOrufyConnectUserBuilder, OrufyConnectUrlHandler;

@protocol OrufyConnectPlatform;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface OrufyConnectBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface OrufyConnectBase (OrufyConnectBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface OrufyConnectMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface OrufyConnectMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorOrufyConnectKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface OrufyConnectNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface OrufyConnectByte : OrufyConnectNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface OrufyConnectUByte : OrufyConnectNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface OrufyConnectShort : OrufyConnectNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface OrufyConnectUShort : OrufyConnectNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface OrufyConnectInt : OrufyConnectNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface OrufyConnectUInt : OrufyConnectNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface OrufyConnectLong : OrufyConnectNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface OrufyConnectULong : OrufyConnectNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface OrufyConnectFloat : OrufyConnectNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface OrufyConnectDouble : OrufyConnectNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface OrufyConnectBoolean : OrufyConnectNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectInterfaceImpl")))
@interface OrufyConnectConnectInterfaceImpl : OrufyConnectBase
- (void)observerEventJsString:(NSString * _Nullable)jsString __attribute__((swift_name("observerEvent(jsString:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface OrufyConnectGreeting : OrufyConnectBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol OrufyConnectPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface OrufyConnectIOSPlatform : OrufyConnectBase <OrufyConnectPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrufyConnect")))
@interface OrufyConnectOrufyConnect : OrufyConnectBase
- (instancetype)initWithConfig:(OrufyConnectOrufyConnectConfig *)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer));
- (void)handleOrufyConnectNotificationResponse:(UNNotificationResponse *)response viewController:(UIViewController *)viewController __attribute__((swift_name("handleOrufyConnectNotification(response:viewController:)")));
- (BOOL)isOrufyConnectNotificationResponse:(UNNotificationResponse *)response __attribute__((swift_name("isOrufyConnectNotification(response:)")));
- (void)loginUser:(OrufyConnectOrufyConnectUser *)user __attribute__((swift_name("login(user:)")));
- (void)logout __attribute__((swift_name("logout()")));
- (void)setPushRegistrationTokenToken:(NSString *)token __attribute__((swift_name("setPushRegistrationToken(token:)")));
- (void)setUserUser:(OrufyConnectOrufyConnectUser *)user __attribute__((swift_name("setUser(user:)")));
- (void)showConversationViewController:(UIViewController *)viewController __attribute__((swift_name("showConversation(viewController:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrufyConnectConfig")))
@interface OrufyConnectOrufyConnectConfig : OrufyConnectBase
- (instancetype)initWithClientId:(NSString *)clientId __attribute__((swift_name("init(clientId:)"))) __attribute__((objc_designated_initializer));
- (OrufyConnectOrufyConnectConfig *)doCopyClientId:(NSString *)clientId __attribute__((swift_name("doCopy(clientId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString * _Nullable)getChatId __attribute__((swift_name("getChatId()")));
- (NSString * _Nullable)getDomain __attribute__((swift_name("getDomain()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setChatIdChatId:(NSString * _Nullable)chatId __attribute__((swift_name("setChatId(chatId:)")));
- (void)setDomainDomain:(NSString * _Nullable)domain __attribute__((swift_name("setDomain(domain:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrufyConnectUser")))
@interface OrufyConnectOrufyConnectUser : OrufyConnectBase
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable externalUserId __attribute__((swift_name("externalUserId")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OrufyConnectUser.Builder")))
@interface OrufyConnectOrufyConnectUserBuilder : OrufyConnectBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (OrufyConnectOrufyConnectUser *)build __attribute__((swift_name("build()")));
- (OrufyConnectOrufyConnectUserBuilder *)setEmailEmail:(NSString * _Nullable)email __attribute__((swift_name("setEmail(email:)")));
- (OrufyConnectOrufyConnectUserBuilder *)setExternalUserIdExternalUserId:(NSString * _Nullable)externalUserId __attribute__((swift_name("setExternalUserId(externalUserId:)")));
- (OrufyConnectOrufyConnectUserBuilder *)setNameName:(NSString * _Nullable)name __attribute__((swift_name("setName(name:)")));
- (OrufyConnectOrufyConnectUserBuilder *)setPhoneNumberPhoneNumber:(NSString * _Nullable)phoneNumber __attribute__((swift_name("setPhoneNumber(phoneNumber:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UrlHandler")))
@interface OrufyConnectUrlHandler : OrufyConnectBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)urlHandler __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) OrufyConnectUrlHandler *shared __attribute__((swift_name("shared")));
- (BOOL)shouldOpenInternallyUrl:(NSString *)url __attribute__((swift_name("shouldOpenInternally(url:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConstantsKt")))
@interface OrufyConnectConstantsKt : OrufyConnectBase
@property (class, readonly) NSString *CONNECT_LOG_TAG __attribute__((swift_name("CONNECT_LOG_TAG")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface OrufyConnectPlatform_iosKt : OrufyConnectBase
+ (id<OrufyConnectPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ToastUtilKt")))
@interface OrufyConnectToastUtilKt : OrufyConnectBase
+ (void)showToastMessage:(NSString *)message duration:(double)duration __attribute__((swift_name("showToast(message:duration:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
