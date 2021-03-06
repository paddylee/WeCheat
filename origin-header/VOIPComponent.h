//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VOIPComponent : NSObject
{
    int mEngineChid;
    struct VOIPChannelAdapter *mChannelAdapter;
    struct VoipCSChannelAdapter *mCSChannelAdapter;
    struct VOIPNetNotifier *mNetNotifier;
    struct VOIPCSNetNotifier *mCSNetNotifier;
    struct ITransportChannel *mTransChannel;
    struct IMVQQEngine *mMVEngine;
    struct VoIPRingBuffer *mVideoDecBuf;
    struct VoIPRingBuffer *mAudioDecBuf;
}

- (void)dealloc;
- (id)init;
- (id)initForCustomerService;
@property(nonatomic) struct VoIPRingBuffer *mAudioDecBuf; // @synthesize mAudioDecBuf;
@property(nonatomic) struct VoipCSChannelAdapter *mCSChannelAdapter; // @synthesize mCSChannelAdapter;
@property(nonatomic) struct VOIPCSNetNotifier *mCSNetNotifier; // @synthesize mCSNetNotifier;
@property(nonatomic) struct VOIPChannelAdapter *mChannelAdapter; // @synthesize mChannelAdapter;
@property(nonatomic) int mEngineChid; // @synthesize mEngineChid;
@property(nonatomic) struct IMVQQEngine *mMVEngine; // @synthesize mMVEngine;
@property(nonatomic) struct VOIPNetNotifier *mNetNotifier; // @synthesize mNetNotifier;
@property(nonatomic) struct ITransportChannel *mTransChannel; // @synthesize mTransChannel;
@property(nonatomic) struct VoIPRingBuffer *mVideoDecBuf; // @synthesize mVideoDecBuf;

@end

