//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "MMPackageDownloadMgrExt-Protocol.h"

@protocol WCBGRecommendMgrDelegate;

@interface WCBGRecommendMgr : MMObject <MMPackageDownloadMgrExt>
{
    id <WCBGRecommendMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
- (id)bgStorageWithDataList:(id)arg1;
- (void)dealloc;
- (id)getBGStorage;
- (id)getPackageDataOfBGStorage;
- (id)init;
@property(nonatomic) __weak id <WCBGRecommendMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)onPackageListUpdated:(id)arg1;
- (long long)packageKey;
- (void)updateBGStorage;

@end

