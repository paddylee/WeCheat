//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WCAddressBaseAddress;

@protocol IWCAddressGetAddressControlLogicExt <NSObject>

@optional
- (void)OnPreFinishedWCAddressLogic:(NSString *)arg1 waitUntilDone:(_Bool *)arg2;
- (void)OnWCAddressGetAddressControlLogicEnd:(WCAddressBaseAddress *)arg1;
@end

