//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock;

@interface BlueDevicePool : NSObject
{
    NSMutableArray *_devicePool;
    NSRecursiveLock *m_oLock;
}

- (void).cxx_destruct;
- (id)addDeviceWithAccessory:(id)arg1;
- (id)addDeviceWithPeripheral:(id)arg1 WithDID:(long long)arg2;
- (id)addDeviceWithPeripheral:(id)arg1 WithMacData:(id)arg2;
- (id)addDeviceWithPeripheral:(id)arg1 WithUUID:(id)arg2;
- (void)dealloc;
@property(retain) NSMutableArray *devicePool; // @synthesize devicePool=_devicePool;
- (id)getDeviceByAccessory:(id)arg1;
- (id)getDeviceByDID:(long long)arg1;
- (id)getDeviceByInputStream:(id)arg1;
- (id)getDeviceByOutputStream:(id)arg1;
- (id)getDeviceByPeripheral:(id)arg1;
- (id)getDeviceBySessionID:(long long)arg1;
- (id)initWithLock:(id)arg1;
- (void)removeAllObjectsWithDelegate:(id)arg1;
- (void)removeDevice:(id)arg1;
- (void)removeDisconnected;

@end

