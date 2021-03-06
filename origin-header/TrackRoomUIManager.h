//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IVOIPUILogicMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "MonoServiceLogicExt-Protocol.h"
#import "TrackRoomViewDelegate-Protocol.h"

@class NSString, TrackRoomView;

@interface TrackRoomUIManager : MMService <TrackRoomViewDelegate, IVOIPUILogicMgrExt, MonoServiceLogicExt, MMService>
{
    TrackRoomView *_trackRoomView;
}

- (void).cxx_destruct;
- (void)cleanResource;
- (void)closeTrackRoomView:(unsigned int)arg1;
- (void)dealloc;
- (void)hideTrackRoomView;
- (id)init;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)onMonoServiceWalkieTalkieWillStart;
- (_Bool)onServiceMemoryWarning;
- (void)onTrackRoomViewClose;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (_Bool)openTrackRoom:(id)arg1 POIInfo:(id)arg2 Scene:(unsigned int)arg3;
- (void)showTrackRoomView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

