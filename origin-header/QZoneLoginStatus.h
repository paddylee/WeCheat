//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@protocol QZoneLoginStatusDelegate;

@interface QZoneLoginStatus : MMObject <PBMessageObserverDelegate>
{
    id <QZoneLoginStatusDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)getQZoneLoginStatusUrl:(unsigned long long)arg1;
- (id)init;
@property(nonatomic) __weak id <QZoneLoginStatusDelegate> m_delegate; // @synthesize m_delegate;

@end
