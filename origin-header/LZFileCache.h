//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface LZFileCache : NSObject
{
    _Bool _bCleaned;
    _Bool _bCacheFinish;
    int _fileFD;
    int _status;
    NSError *_innerError;
    unsigned long long _cacheType;
    NSObject<OS_dispatch_queue> *_fileOptQueue;
    void *_queueContext;
    NSString *_fileName;
    NSString *_cfgfileName;
    void *_mapBuf;
    unsigned long long _fileSize;
    NSMutableArray *_writeRanges;
    NSMutableArray *_readRanges;
    NSMutableDictionary *_dicOptItems;
    NSMutableDictionary *_dicmapRefforread;
    long long _fileCacheErrorType;
}

+ (id)cfgPath:(id)arg1;
+ (int)pageSize;
+ (void)preheat:(void *)arg1 size:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool bCacheFinish; // @synthesize bCacheFinish=_bCacheFinish;
@property(nonatomic) _Bool bCleaned; // @synthesize bCleaned=_bCleaned;
@property(readonly, nonatomic) unsigned long long cacheType; // @synthesize cacheType=_cacheType;
- (struct _LzRange)calcDownloadRange:(struct _LzRange)arg1;
- (struct _LzRange)calcDownloadRangeInner:(struct _LzRange)arg1;
@property(retain, nonatomic) NSString *cfgfileName; // @synthesize cfgfileName=_cfgfileName;
- (void)cleanFileCaching;
- (void)close:(_Bool)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *dicOptItems; // @synthesize dicOptItems=_dicOptItems;
@property(retain, nonatomic) NSMutableDictionary *dicmapRefforread; // @synthesize dicmapRefforread=_dicmapRefforread;
- (void)endRead:(id)arg1;
@property(nonatomic) long long fileCacheErrorType; // @synthesize fileCacheErrorType=_fileCacheErrorType;
- (void)fileCacheSuccess;
- (long long)fileCachedLength:(long long *)arg1;
- (long long)fileCachedLength:(long long *)arg1 lastOffset:(long long *)arg2;
- (long long)fileContinuousCachedLengthWithPosition:(long long)arg1;
@property(nonatomic) int fileFD; // @synthesize fileFD=_fileFD;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileOptQueue; // @synthesize fileOptQueue=_fileOptQueue;
@property(readonly, nonatomic) NSString *filePath;
- (unsigned long long)fileRealSize;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
- (void)finishWirte:(id)arg1;
- (id)init;
- (id)initWithFile:(id)arg1 queue:(id)arg2 context:(void *)arg3 type:(unsigned long long)arg4;
@property(retain) NSError *innerError; // @synthesize innerError=_innerError;
- (_Bool)isFileCacheFinished;
- (_Bool)loadCacheInfo;
- (_Bool)loadCacheInfoInner;
- (void)loadfilecfg;
@property(nonatomic) void *mapBuf; // @synthesize mapBuf=_mapBuf;
- (id)mergeInfo;
- (void)mergeRanges:(id)arg1;
- (_Bool)openFileAndSetupMap:(id)arg1;
- (_Bool)openFileAndSetupMapInner:(id)arg1;
@property(nonatomic) void *queueContext; // @synthesize queueContext=_queueContext;
- (_Bool)readFile:(id)arg1 range:(struct _LzRange)arg2 data:(id *)arg3;
- (_Bool)readFileInner:(id)arg1 range:(struct _LzRange)arg2 data:(id *)arg3;
@property(retain, nonatomic) NSMutableArray *readRanges; // @synthesize readRanges=_readRanges;
- (void)refreshReadRanges;
- (void)releaseFile;
- (void)releaseMapping;
- (void)savefileCfg;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableArray *writeRanges; // @synthesize writeRanges=_writeRanges;
- (_Bool)stopCaching:(_Bool)arg1;
- (_Bool)writeFile:(id)arg1 data:(id)arg2 isFinish:(_Bool *)arg3;

@end

