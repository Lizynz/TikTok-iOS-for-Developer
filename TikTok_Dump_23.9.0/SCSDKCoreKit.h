//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct picoproto_ctx_s {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    char *_field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    double _field2;
} CDStruct_322d555a;

#pragma mark -

//
// File: /Users/lizynz/Desktop/Payload/TikTok.app/Frameworks/SCSDKCoreKit.framework/SCSDKCoreKit
// UUID: BF9CCD13-9636-31C8-974E-DF38CA5DB02D
//
//                           Arch: arm64
//                Current version: 1.6.5
//          Compatibility version: 1.0.0
//                 Source version: 0.0.0.0.0
//            Minimum iOS version: 9.0.0
//                    SDK version: 13.4.0
//
// Objective-C Garbage Collection: Unsupported
//
//                       Run path: @executable_path/Frameworks
//                               = /Users/lizynz/Desktop/Payload/TikTok.app/Frameworks/SCSDKCoreKit.framework/Frameworks
//                       Run path: @loader_path/Frameworks
//                               = /Users/lizynz/Desktop/Payload/TikTok.app/Frameworks/SCSDKCoreKit.framework/Frameworks
//

@protocol AnalyticsEventsQueueDelegate <NSObject>
- (NSData *)eventsQueue:(AnalyticsEventsQueue *)arg1 parseEvents:(NSArray *)arg2 maxSequenceId:(long long)arg3;

@optional
- (void)willSubmitRequest:(SCSDKNetworkRequest *)arg1 withEvents:(NSArray *)arg2;
- (void)requestDidComplete:(SCSDKNetworkRequest *)arg1 data:(NSData *)arg2 numEvents:(int)arg3 error:(NSError *)arg4 statusCode:(long long)arg5;
- (void)submit:(SCSDKNetworkRequest *)arg1 completion:(void (^)(NSError *, long long, NSDictionary *, NSData *))arg2;
@end

@protocol NSCoding
- (id)initWithCoder:(NSCoder *)arg1;
- (void)encodeWithCoder:(NSCoder *)arg1;
@end

@protocol NSObject
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;
@property(readonly) unsigned long long hash;
- (struct _NSZone *)zone;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(Protocol *)arg1;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)isProxy;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1;
- (id)self;
- (Class)class;
- (_Bool)isEqual:(id)arg1;

@optional
@property(readonly, copy) NSString *debugDescription;
@end

@protocol NSSecureCoding <NSCoding>
+ (_Bool)supportsSecureCoding;
@end

@protocol NSURLSessionDelegate <NSObject>

@optional
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession *)arg1;
- (void)URLSession:(NSURLSession *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)URLSession:(NSURLSession *)arg1 didBecomeInvalidWithError:(NSError *)arg2;
@end

@protocol SCAuthHeaderProvider <NSObject>
- (NSString *)authHeaderValue;
- (NSString *)authHeaderName;
@end

@protocol SCCrashLogger
- (void)logHandledException:(NSException *)arg1;
- (void)startServicesWithCrashDelegate:(id)arg1;
@end

@protocol SCSDKCertPinningHandler <NSObject>
- (void)didReceiveChallenge:(NSURLAuthenticationChallenge *)arg1 completionHandler:(void (^)(long long, NSURLCredential *))arg2;
- (_Bool)isPinningEnabledHost:(NSString *)arg1;
@end

@interface SCSDKFont : NSObject
{
    NSString *_regularFontName;
    NSString *_boldFontName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *boldFontName; // @synthesize boldFontName=_boldFontName;
@property(readonly, nonatomic) NSString *regularFontName; // @synthesize regularFontName=_regularFontName;
- (id)initWithFontConfig:(id)arg1;

@end

@interface SnapKitEvents : NSObject
{
}

+ (id)serverEventWithServerEventData:(struct picoproto_ctx_s *)arg1;
+ (struct picoproto_ctx_s *)kitEventBaseWithKitType:(int)arg1 kitVersion:(id)arg2;

@end

@interface SCSDKSkateUtility : NSObject
{
}

+ (_Bool)accessTokenExists;
+ (_Bool)isStoryKitInstalled;
+ (_Bool)isBitmojiKitInstalled;
+ (_Bool)isCreativeKitInstalled;
+ (_Bool)isLoginKitInstalled;

@end

@interface EventWrapper : NSObject <NSSecureCoding>
{
    _Bool _isRetry;
    unsigned long long _sequenceId;
    EncodablePicoproto *_event;
    unsigned long long _numRetried;
    long long _nextRetryTimeMillis;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long nextRetryTimeMillis; // @synthesize nextRetryTimeMillis=_nextRetryTimeMillis;
@property(readonly, nonatomic) unsigned long long numRetried; // @synthesize numRetried=_numRetried;
@property(readonly, nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
@property(readonly, nonatomic) EncodablePicoproto *event; // @synthesize event=_event;
@property(readonly, nonatomic) unsigned long long sequenceId; // @synthesize sequenceId=_sequenceId;
- (void)setNextRetryTimeMillis:(long long)arg1;
- (void)setNumRetried:(unsigned long long)arg1;
- (void)setIsRetry:(_Bool)arg1;
- (void)setEvent:(id)arg1;
- (void)setSequenceId:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithSequenceId:(unsigned long long)arg1 event:(id)arg2;

@end

@interface SCSDKSkateEventsQueue : NSObject <AnalyticsEventsQueueDelegate>
{
    AnalyticsEventsQueue *_eventsQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (CDStruct_322d555a)getSampleRateFromData:(id)arg1;
- (void)requestDidComplete:(id)arg1 data:(id)arg2 numEvents:(int)arg3 error:(id)arg4 statusCode:(long long)arg5;
- (void)willSubmitRequest:(id)arg1 withEvents:(id)arg2;
- (id)eventsQueue:(id)arg1 parseEvents:(id)arg2 maxSequenceId:(long long)arg3;
- (void)addEvent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SCSDKInstallation : NSObject
{
    NSString *_installationId;
}

+ (id)installationIdKey;
- (void).cxx_destruct;
- (id)installationId;

@end

@interface SCSDKNetworkServicesAPI : NSObject <NSURLSessionDelegate>
{
    NSURLSession *_urlSession;
    id <SCSDKCertPinningHandler> _certPinningHandler;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)submitRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNSURLSession:(id)arg1 certPinningHandler:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SCSDKDynamicConfigArchive : NSObject
{
}

+ (id)_archivePath;
- (id)unarchiveSync;
- (_Bool)archiveSync:(id)arg1;

@end

@interface SCSDKApplication : NSObject
{
    CDUnknownBlockType _applicationRoute;
}

+ (id)shared;
+ (void)registerApplicationRoute:(CDUnknownBlockType)arg1;
+ (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void).cxx_destruct;
- (void)registerApplicationRoute:(CDUnknownBlockType)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (id)init;
- (id)initPrivate;

@end

@interface SCSDKDeepLinker : NSObject
{
    unsigned long long _feature;
    NSDictionary *_metadata;
    NSDictionary *_payload;
    NSDictionary *_additionalQueries;
}

+ (_Bool)isSnapchatInstalled;
+ (id)appStoreURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *additionalQueries; // @synthesize additionalQueries=_additionalQueries;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) unsigned long long feature; // @synthesize feature=_feature;
- (id)_encodeParams:(id)arg1;
- (id)_schemeBase;
- (void)connectWithFpAuth:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFeature:(unsigned long long)arg1 metadata:(id)arg2 payload:(id)arg3 additionalQueries:(id)arg4;

@end

@interface SCSDKTestData : NSObject
{
}

+ (id)shared;
@property(readonly, nonatomic) NSString *oauthAccessToken;

@end

@interface LoginRouteWrapper : NSObject
{
    int _loginRoute;
}

@property(nonatomic) int loginRoute; // @synthesize loginRoute=_loginRoute;
- (id)initWithLoginRoute:(int)arg1;

@end

@interface SCSDKSkateManager : NSObject
{
    NSDateFormatter *_dateFormatter;
    SCSDKSkateConfig *_skateConfig;
}

+ (int)_dailySessionBucket;
- (void).cxx_destruct;
- (double)_generateSampleRate;
- (id)_loginRoute;
- (_Bool)_isFirstWithinMonth;
- (id)_installedKits;
- (void)_logInstalledKits;
- (double)_skateConfigSampleRate;
- (_Bool)_shouldRecordSkateEvent;
- (void)_updateSkateDate:(id)arg1;
- (void)_recordSkateEvent;
- (void)_setSampleRate;
- (void)recordSkateOpenEvent;
- (id)init;

@end

@interface SCSDKSkate : NSObject
{
    NSArray *_kits;
    _Bool _isFirstWithinMonth;
    int _dailySessionBucket;
    double _sampleRate;
    LoginRouteWrapper *_loginRoute;
    int _day;
    int _month;
    int _year;
}

- (void).cxx_destruct;
- (void)logSkateEventCreation;
- (id)encodeablePicoproto;
- (id)initWithKits:(id)arg1 isFirstWithinMonth:(_Bool)arg2 dailySessionBucket:(int)arg3 sampleRate:(double)arg4 loginRoute:(id)arg5 skateDay:(int)arg6 skateMonth:(int)arg7 skateYear:(int)arg8;

@end

@interface SCSDKClientSetup : NSObject
{
    NSString *_clientID;
    NSURL *_redirectURL;
    NSArray *_scopes;
    SCSDKFont *_font;
    SCSDKSkateManager *_skateManager;
}

+ (_Bool)_shouldOverrideClientId;
+ (void)_postInitialization;
+ (void)appDidBecomeActive:(id)arg1;
+ (void)load;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) SCSDKSkateManager *skateManager; // @synthesize skateManager=_skateManager;
@property(readonly, nonatomic) SCSDKFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(readonly, copy, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(readonly, copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (id)initPrivate;

@end

@interface SCPayloadProvider : NSObject <SCAuthHeaderProvider>
{
}

- (id)authHeaderValue;
- (id)authHeaderName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SCBaseCrashLogger : NSObject <SCCrashLogger>
{
}

+ (void)logHandledException:(id)arg1;
+ (void)startServicesWithCrashDelegate:(id)arg1;
- (void)logHandledException:(id)arg1;
- (void)startServicesWithCrashDelegate:(id)arg1;

@end

@interface SCSDKPayload : NSObject
{
}

+ (id)convertDataToHexString:(id)arg1;
+ (id)convertBytesToHexString:(char *)arg1 length:(unsigned long long)arg2;
+ (id)serialize:(id)arg1;
+ (unsigned int)getPaddedLength:(unsigned int)arg1 blockSize:(unsigned int)arg2;
+ (id)formatSerializedPayload:(id)arg1;
+ (id)serializePayload:(id)arg1;

@end

@interface SCSDKNetworkRequest : NSObject
{
    NSString *_path;
    NSString *_method;
    long long _expectedStatusCode;
    NSString *_identifier;
    NSMutableDictionary *_headers;
    NSDictionary *_queryParams;
    NSData *_httpBody;
    NSString *_contentType;
    id <SCAuthHeaderProvider> _authHeaderProvider;
}

+ (id)_clientId;
+ (id)userAgent;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SCAuthHeaderProvider> authHeaderProvider; // @synthesize authHeaderProvider=_authHeaderProvider;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
@property(retain, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long expectedStatusCode; // @synthesize expectedStatusCode=_expectedStatusCode;
@property(readonly, copy, nonatomic) NSString *method; // @synthesize method=_method;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (id)toUrlRequestWithBaseUrl:(id)arg1;
- (id)toUrlRequest;
- (id)initWithPath:(id)arg1 method:(id)arg2 authHeaderProvider:(id)arg3;

@end

@interface SCSDKTweaks : NSObject
{
}

+ (id)shared;
@property(readonly, nonatomic) NSString *overrideClientId;
@property(readonly, nonatomic) NSString *accountsBaseUrl;
@property(readonly, nonatomic) NSString *snapKitApiBaseUrl;

@end

@interface SCSDKKeychainManager : NSObject
{
}

+ (id)_keychainServiceName;
+ (int)setBackgroundDataWithStatus:(id)arg1 forKey:(id)arg2;
+ (_Bool)setBackgroundData:(id)arg1 forKey:(id)arg2;
+ (int)removeDataForKeyWithStatus:(id)arg1;
+ (_Bool)removeDataForKey:(id)arg1;
+ (id)dataForKey:(id)arg1;
+ (id)dataForKey:(id)arg1 status:(int *)arg2;
+ (int)setDataWithStatus:(id)arg1 forKey:(id)arg2;
+ (_Bool)setData:(id)arg1 forKey:(id)arg2;
+ (void)removeAllDataExcludingWhitelist:(id)arg1;
+ (void)removeAllData;
+ (id)queryForKey:(id)arg1 WithAccess:(struct __CFString *)arg2;
+ (id)queryForKey:(id)arg1;

@end

@interface SCSDKSkateConfig : NSObject
{
}

@property(readonly, nonatomic) double skateSampleRate;
- (id)init;

@end

@interface SCSDKDynamicConfigEntity : NSObject
{
    NSString *_name;
    NSDictionary *_config;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_configValue:(id)arg1 class:(Class)arg2;
- (id)stringValue:(id)arg1 defaultValue:(id)arg2;
- (double)doubleValue:(id)arg1 defaultValue:(double)arg2;
- (long long)longValue:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)boolValue:(id)arg1 defaultValue:(_Bool)arg2;
- (id)initWithName:(id)arg1 config:(id)arg2;

@end

@interface AnalyticsEventsQueue : NSObject
{
    NSOperationQueue *_operationQueue;
    NSMutableArray *_eventQueue;
    NSString *_archivePath;
    NSString *_retryArchive;
    unsigned long long _maxSequenceId;
    unsigned long long _maxEventBuffer;
    NSString *_analyticsEndpoint;
    NSObject<OS_dispatch_queue> *_deleteArchiveDispatchQueue;
    SCSDKNetworkServicesAPI *_networkServicesAPI;
    id <SCAuthHeaderProvider> _authHeaderProvider;
    id <AnalyticsEventsQueueDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AnalyticsEventsQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_documentPath;
- (void)_removeDeprecatedArchives;
- (id)_filterToBePublishedInFutureFromEventsToPublish:(id)arg1;
- (void)_loadEvents;
- (void)_clearEvents;
- (void)_addEvent:(id)arg1;
- (void)_addEvents:(id)arg1;
- (void)_handlePublishResultWithPublishedEvents:(id)arg1 error:(id)arg2 statusCode:(long long)arg3 headers:(id)arg4;
- (void)_submitRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_executePublishOperation;
- (unsigned long long)_getMaxSequenceId;
- (void)_publish;
- (void)flushQueue;
- (void)_pushEvent:(id)arg1;
- (void)pushEvent:(id)arg1;
- (void)dealloc;
- (id)initWithAnalyticsEndpoint:(id)arg1 authHeaderProvider:(id)arg2 archiveName:(id)arg3 maxEventBuffer:(unsigned long long)arg4 delegate:(id)arg5;

@end

@interface SCSDKOperationalMetricsQueue : NSObject <AnalyticsEventsQueueDelegate>
{
    AnalyticsEventsQueue *_eventsQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (struct picoproto_ctx_s *)_picoprotoTimestampWithTimestamp:(double)arg1;
- (id)eventsQueue:(id)arg1 parseEvents:(id)arg2 maxSequenceId:(long long)arg3;
- (void)addLatencyFromTime:(double)arg1 name:(id)arg2;
- (void)addLatency:(long long)arg1 name:(id)arg2;
- (void)addCount:(long long)arg1 name:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SCSDKDynamicConfigManager : NSObject
{
    SCSDKDynamicConfigArchive *_configArchive;
    NSMutableSet *_updateCallbacks;
    NSString *_kitVersion;
    NSObject<OS_dispatch_queue> *_queue;
    SCSDKNetworkServicesAPI *_networkServicesAPI;
    _Bool _wasFetchFromNetworkSuccessful;
    long long _state;
}

+ (id)_parseJsonConfig:(id)arg1;
+ (id)shared;
- (void).cxx_destruct;
@property _Bool wasFetchFromNetworkSuccessful; // @synthesize wasFetchFromNetworkSuccessful=_wasFetchFromNetworkSuccessful;
@property long long state; // @synthesize state=_state;
- (void)_fetchLatestConfig:(CDUnknownBlockType)arg1;
- (void)_handleFetchCompletion:(id)arg1;
- (id)dynamicConfig:(id)arg1;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (id)initWithArchive:(id)arg1 kitVersion:(id)arg2 networkServicesAPI:(id)arg3;
- (id)init;

@end

@interface EncodablePicoproto : NSObject <NSSecureCoding>
{
    struct picoproto_ctx_s *_ctx;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct picoproto_ctx_s *ctx; // @synthesize ctx=_ctx;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCtx:(struct picoproto_ctx_s *)arg1;

@end

@interface SCSDKCertificateTrust : NSObject
{
}

+ (id)def1;
+ (id)certsExpirationDate;
+ (id)pinnedCertsPublicKeyHashes;
+ (void)didReceiveChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

@interface SCSDKCertPinningHandler : NSObject <SCSDKCertPinningHandler>
{
}

+ (id)_pinningEnabledHosts;
- (void)didReceiveChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isPinningEnabledHost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface PodsDummy_Pods_SCSDKCoreKit : NSObject
{
}

@end

@interface NSError (Helpers)
+ (id)logoutErrorWithReason:(id)arg1;
+ (id)errorWithStatusCode:(long long)arg1 description:(id)arg2 reason:(id)arg3;
@property(readonly, nonatomic) long long statusCode;
@end

@interface UIViewController (SCSDKTweaks)
- (void)showTweaksViewController;
- (void)addTweaksGesture;
@end

@interface NSData (Encryption)
+ (id)sc_randomDataWithSize:(unsigned long long)arg1;
+ (BOOL)itoh:(int)arg1;
+ (id)sc_dataWithBase64UrlEncodedString:(id)arg1;
+ (id)sc_dataWithBase64EncodedString:(id)arg1;
+ (id)sc_dataWithBase64UrlEncodedStringNew:(id)arg1;
+ (id)sc_dataWithBase64EncodedStringNew:(id)arg1;
- (id)sc_secureDecryptWithKey:(id)arg1 iv:(id)arg2;
- (id)sc_secureEncryptWithKey:(id)arg1 iv:(id)arg2;
- (id)sc_sha256HexBase64String;
- (id)sc_sha256Base64Url;
- (id)sc_sha256Base64String;
- (id)sc_md5Base64String;
- (id)sc_base64UrlEncodedString;
- (id)sc_base64EncodedString;
@end

@interface NSDate (Helpers)
+ (long long)currentTimeMillis;
- (int)getMonth;
@end

@interface UIFont (Helpers)
+ (id)scsdkBoldFontOfSize:(double)arg1;
+ (id)scsdkRegularFontOfSize:(double)arg1;
@end

@interface UIApplication (Helpers)
+ (id)topViewController;
+ (_Bool)isRTL;
+ (void)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@end

@interface NSURL (Helpers)
+ (id)buildWithBaseUrlString:(id)arg1 queries:(id)arg2;
- (id)queryDictionary;
@end

@interface NSString (Helpers)
+ (id)randomBase64EncodedStringOfLength:(unsigned long long)arg1;
+ (id)randomUrlSafeStringWithSize:(unsigned long long)arg1;
+ (id)urlEncodeString:(id)arg1;
@end

@interface NSNotificationCenter (Helpers)
+ (id)scsdkCenter;
@end

