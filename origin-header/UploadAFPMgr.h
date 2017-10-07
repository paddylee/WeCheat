//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class MMTimer, NSMutableArray;
@protocol UploadAFPMgrDelegate;

@interface UploadAFPMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned int _curFPId;
    _Bool _isUploading;
    _Bool _isEnd;
    NSMutableArray *_uploadQueue;
    int _eventType;
    id <UploadAFPMgrDelegate> _delegate;
    MMTimer *checkUploadQueueTimer;
}

- (void).cxx_destruct;
- (void)AddNewPart:(unsigned int)arg1 Duration:(float)arg2 EndFlag:(unsigned int)arg3;
- (void)MainUpdateQueue:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)SendFPData:(id)arg1 FPId:(unsigned int)arg2 Duration:(float)arg3 EndFlag:(unsigned int)arg4;
- (void)Start:(unsigned int)arg1;
- (void)Stop;
- (void)checkUploadQueue;
@property(retain, nonatomic) MMTimer *checkUploadQueueTimer; // @synthesize checkUploadQueueTimer;
- (void)dealloc;
@property(nonatomic) __weak id <UploadAFPMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doUpload:(unsigned int)arg1 Duration:(float)arg2 EndFlag:(unsigned int)arg3;
- (id)init;
- (_Bool)isNeedUploadForDuration:(float)arg1;
- (void)stopUploadTask;
- (void)stopUploadTaskWithErr:(int)arg1;

@end
