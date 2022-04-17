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

#pragma mark -

//
// File: /Users/lizynz/Desktop/Payload/TikTok.app/Frameworks/SCSDKCreativeKit.framework/SCSDKCreativeKit
// UUID: 3F2B1817-FCE9-30C1-9F1D-10EB7A98D0B6
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
//                               = /Users/lizynz/Desktop/Payload/TikTok.app/Frameworks/SCSDKCreativeKit.framework/Frameworks
//                       Run path: @loader_path/Frameworks
//                               = /Users/lizynz/Desktop/Payload/TikTok.app/Frameworks/SCSDKCreativeKit.framework/Frameworks
//

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

@protocol SCSDKCreativeKitModelValidating <NSObject>
- (_Bool)isModelValid;
@end

@protocol SCSDKSnapContent <SCSDKCreativeKitModelValidating>
@property(retain, nonatomic) SCSDKSnapSticker *sticker;
@property(copy, nonatomic) NSString *attachmentUrl;
@property(copy, nonatomic) NSString *caption;
@end

@interface SCSDKCreativeKitAnalyticsEventsQueue : NSObject
{
    AnalyticsEventsQueue *_eventsQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)eventsQueue:(id)arg1 parseEvents:(id)arg2 maxSequenceId:(long long)arg3;
- (void)flush;
- (void)addEvent:(id)arg1;
- (id)init;

@end

@interface SCSDKLensLaunchData : NSObject
{
    NSString *_lensLaunchData;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *lensLaunchData; // @synthesize lensLaunchData=_lensLaunchData;
- (id)initWithBuilder:(id)arg1;

@end

@interface SCSDKSnapErrorFactory : NSObject
{
}

+ (id)errorWithCode:(long long)arg1 reason:(id)arg2;

@end

@interface SCSDKSnapDeepLinker : NSObject
{
}

- (id)_hydrateMetadata:(id)arg1;
- (void)connectForFeature:(unsigned long long)arg1 requestMetadata:(id)arg2 checkCount:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

@interface SCSDKPhotoSnapContent : NSObject <SCSDKSnapContent>
{
    NSString *_caption;
    NSString *_attachmentUrl;
    SCSDKSnapSticker *_sticker;
    SCSDKSnapPhoto *_snapPhoto;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCSDKSnapPhoto *snapPhoto; // @synthesize snapPhoto=_snapPhoto;
@property(retain, nonatomic) SCSDKSnapSticker *sticker; // @synthesize sticker=_sticker;
@property(copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
- (_Bool)isModelValid;
- (id)initWithSnapPhoto:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SCSDKCameraViewState : NSObject
{
    long long _cameraPosition;
}

+ (id)stringForCameraPostion:(long long)arg1;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
- (id)init;
- (id)initWithCameraPosition:(long long)arg1;

@end

@interface SCSDKLensSnapContent : NSObject <SCSDKSnapContent>
{
    NSString *_caption;
    NSString *_attachmentUrl;
    SCSDKSnapSticker *_sticker;
    NSString *_lensID;
    SCSDKLensLaunchData *_launchData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCSDKLensLaunchData *launchData; // @synthesize launchData=_launchData;
@property(readonly, nonatomic) NSString *lensID; // @synthesize lensID=_lensID;
@property(retain, nonatomic) SCSDKSnapSticker *sticker; // @synthesize sticker=_sticker;
@property(copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
- (_Bool)isModelValid;
- (id)initWithLensID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface CreativeKitEvents : NSObject
{
}

+ (struct picoproto_ctx_s *)creativeKitEventBase;
+ (id)creativeKitShareCompleteEventWithSuccess:(_Bool)arg1;
+ (id)creativeKitShareStartEvent;

@end

@interface SCSDKSnapKitEncryptionPreparer : NSObject
{
    NSOperationQueue *_operationQueue;
    NSURLSession *_urlSession;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_defaultSession;
- (id)_generateEncryptionKeyIvPairsWithCount:(unsigned long long)arg1;
- (double)_getCacheExpiration;
- (id)_getEncryptionKeyIVPairFromCache;
- (id)_errorWithResponse:(id)arg1 responseError:(id)arg2;
- (void)_hydrateEncryptionMetadataList:(id)arg1 hydrationData:(id)arg2;
- (void)_getEncryptionMetadataHelperWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startGetEncryptionMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

@interface SCSDKSnapAPI : NSObject
{
    id <SCSDKSnapContent> _content;
    SCSDKContentPublisher *_publisher;
}

- (void).cxx_destruct;
- (unsigned long long)_determineFeatureFromContent:(id)arg1;
- (void)_invokeCompletionHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)_publishFailureHelperWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_publishSuccessHelperWithRequestMetadata:(id)arg1 checkCount:(long long)arg2 content:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_publishSuccessHelperWithRequestMetadata:(id)arg1 checkCount:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelSnapping;
- (void)startSnappingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithContent:(id)arg1;
- (void)startSendingContent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

@interface SCSDKSnapSticker : NSObject
{
    _Bool _isAnimated;
    UIImage *_stickerImage;
    NSURL *_stickerUrl;
    double _rotation;
    double _posX;
    double _posY;
    double _width;
    double _height;
}

- (void).cxx_destruct;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double posY; // @synthesize posY=_posY;
@property(nonatomic) double posX; // @synthesize posX=_posX;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(readonly, nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(readonly, copy, nonatomic) NSURL *stickerUrl; // @synthesize stickerUrl=_stickerUrl;
@property(readonly, nonatomic) UIImage *stickerImage; // @synthesize stickerImage=_stickerImage;
- (_Bool)_isValidMediaType:(unsigned long long)arg1;
- (_Bool)isModelValid;
- (id)initWithStickerUrl:(id)arg1 isAnimated:(_Bool)arg2;
- (id)initWithStickerImage:(id)arg1;

@end

@interface SCSDKContentPublisher : NSObject
{
    NSOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
- (id)_readCameraViewStateFromContent:(id)arg1;
- (id)_readAttachmentURLDataFromContent:(id)arg1;
- (id)_readLensIDFromContent:(id)arg1;
- (id)_readCaptionDataFromContent:(id)arg1;
- (id)_readLensLaunchDataFromContent:(id)arg1;
- (id)_readStickerMetadataFromContent:(id)arg1;
- (id)_readStickerDataFromContent:(id)arg1 error:(id *)arg2;
- (id)_readPreviewDataFromContent:(id)arg1 error:(id *)arg2;
- (id)_preparePayloadFromContent:(id)arg1 cek:(id)arg2 civ:(id)arg3 error:(id *)arg4;
- (id)_prepareRequestMetadataFromContent:(id)arg1 cek:(id)arg2 civ:(id)arg3 eid:(id)arg4 wek:(id)arg5 wiv:(id)arg6;
- (id)_civ;
- (id)_cek;
- (void)tryCancelPublish;
- (void)publishHelperWithContent:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)publishContent:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)init;

@end

@interface SCSDKNoSnapContent : NSObject <SCSDKSnapContent>
{
    NSString *_caption;
    NSString *_attachmentUrl;
    SCSDKSnapSticker *_sticker;
    SCSDKCameraViewState *_cameraViewState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCSDKCameraViewState *cameraViewState; // @synthesize cameraViewState=_cameraViewState;
@property(retain, nonatomic) SCSDKSnapSticker *sticker; // @synthesize sticker=_sticker;
@property(copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
- (_Bool)isModelValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SCSDKLensLaunchDataBuilder : NSObject
{
    NSMutableDictionary *_lensLaunchDataDict;
    NSString *_lensLaunchData;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *lensLaunchData; // @synthesize lensLaunchData=_lensLaunchData;
- (void)build;
- (void)addNSNumberArrayKeyPair:(id)arg1 value:(id)arg2;
- (void)addNSStringArrayKeyPair:(id)arg1 value:(id)arg2;
- (void)addNSNumberKeyPair:(id)arg1 value:(id)arg2;
- (void)addNSStringKeyPair:(id)arg1 value:(id)arg2;
- (id)init;

@end

@interface SCSDKSnapPhoto : NSObject <SCSDKCreativeKitModelValidating>
{
    UIImage *_image;
    NSURL *_imageUrl;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (_Bool)_isMediaValidForData:(id)arg1;
- (_Bool)isModelValid;
- (id)initWithImageUrl:(id)arg1;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SCSDKCacheEntry : NSObject <NSSecureCoding>
{
    id <NSSecureCoding> _data;
    double _expirationSeconds;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) double expirationSeconds; // @synthesize expirationSeconds=_expirationSeconds;
@property(readonly, nonatomic) id <NSSecureCoding> data; // @synthesize data=_data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 expirationSeconds:(double)arg2;

@end

@interface SCSDKCreativeKitEventLogger : NSObject
{
}

+ (void)flush;
+ (void)logShareCompleteWithSuccess:(_Bool)arg1;
+ (void)logShareStart;

@end

@interface SCSDKEncryptedCacheManager : NSObject
{
}

+ (id)_encryptionIv;
+ (id)_encryptionKey;
+ (_Bool)putData:(id)arg1 key:(id)arg2;
+ (id)getDataForKey:(id)arg1;

@end

@interface SCSDKVideoSnapContent : NSObject <SCSDKSnapContent>
{
    NSString *_caption;
    NSString *_attachmentUrl;
    SCSDKSnapSticker *_sticker;
    SCSDKSnapVideo *_snapVideo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCSDKSnapVideo *snapVideo; // @synthesize snapVideo=_snapVideo;
@property(retain, nonatomic) SCSDKSnapSticker *sticker; // @synthesize sticker=_sticker;
@property(copy, nonatomic) NSString *attachmentUrl; // @synthesize attachmentUrl=_attachmentUrl;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
- (_Bool)isModelValid;
- (id)initWithSnapVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface SCSDKSnapVideo : NSObject <SCSDKCreativeKitModelValidating>
{
    NSURL *_videoUrl;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
- (_Bool)_isMediaValidForData:(id)arg1;
- (_Bool)isModelValid;
- (id)initWithVideoUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

@interface PodsDummy_Pods_SCSDKCreativeKit : NSObject
{
}

@end

@interface UIImage (Normalize)
+ (id)normalizeImage:(id)arg1;
@end

@interface NSData (SCSDKMediaType)
- (unsigned long long)mediaType;
@end

