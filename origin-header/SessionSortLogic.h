//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SessionSortCache;

@interface SessionSortLogic : NSObject
{
    SessionSortCache *_oSessionSortCache;
}

- (void).cxx_destruct;
- (void)LoadCache;
- (void)LoadSortDataInternal;
- (void)ReloadCache;
- (void)RemoveUntopSession;
- (void)SaveCache;
- (void)TopSession:(id)arg1;
- (void)UntopSession:(id)arg1;
- (id)getCurrentDate;
- (id)getOldSortCacheDataFilePath;
- (id)getSortCacheDataFilePath;
- (id)getTopTime:(id)arg1;
- (id)getUntopTime:(id)arg1;
- (_Bool)hasMergeFlag;
- (id)init;
- (_Bool)isTopSessionCountExceed;
- (void)saveSortDataInternal;
- (void)setMergeFlag;

@end

