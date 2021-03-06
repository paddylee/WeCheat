//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMMNewSessionMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CContact, NSString, SeePeopleNearbyViewController;
@protocol LbsRoomSessionMgrDelegate;

@interface LbsRoomSessionMgr : MMService <MMService, IMMNewSessionMgrExt, PBMessageObserverDelegate>
{
    unsigned int m_uiQuiLbsRoomEvent;
    CContact *m_lbsRoomContact;
    _Bool m_bIsQuitingRoom;
    _Bool m_bIsQuitRoomManually;
    unsigned int m_uiJoinRoomTime;
    unsigned int m_uiExitLbsRoomScene;
    id <LbsRoomSessionMgrDelegate> m_delegate;
    SeePeopleNearbyViewController *m_seePeopleNearbyViewController;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)clearLocalData:(id)arg1;
- (_Bool)creatQuitLbsRoomEventWithRoomName:(id)arg1;
- (void)dealloc;
- (unsigned int)getStayTime;
- (id)init;
- (void)isUser:(id)arg1 Handled:(_Bool *)arg2;
@property(nonatomic) __weak id <LbsRoomSessionMgrDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_lbsRoomContact; // @synthesize m_lbsRoomContact;
@property(nonatomic) SeePeopleNearbyViewController *m_seePeopleNearbyViewController; // @synthesize m_seePeopleNearbyViewController;
@property(nonatomic) unsigned int m_uiExitLbsRoomScene; // @synthesize m_uiExitLbsRoomScene;
- (void)onJoinLbsRoom;
- (void)onQuitLbsRoom;
- (void)onQuitLbsRoom:(id)arg1;
- (void)onQuitLbsRoomManually;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

