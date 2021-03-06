//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "ReportStrategyExt-Protocol.h"

@class MMTimer, NSMutableDictionary, NSString;

@interface MMMonitorConfigMgr : MMService <ReportStrategyExt, MMService>
{
    NSMutableDictionary *m_dicMainThreadMonitorCongfig;
    MMTimer *m_checkUpdateTimer;
}

- (void).cxx_destruct;
- (unsigned int)UinHash:(unsigned int)arg1;
- (void)dealloc;
- (unsigned long long)getAlreadyUploadCnt;
- (float)getCPUUsagePercent;
- (unsigned int)getCheckPeriodTime;
- (id)getConfigFilePath;
- (id)getDateStringFromDate:(id)arg1;
- (_Bool)getIsAutoReport;
- (_Bool)getIsMonitor;
- (unsigned long long)getMaxDailyReport;
- (unsigned long long)getOneTimeUpload;
- (unsigned long long)getReportEnv;
- (unsigned long long)getRunloopTimeOut;
- (id)init;
- (_Bool)isHitSample:(double)arg1;
- (_Bool)isIPXXExpired;
- (void)loadConfig;
- (void)onIPXX:(id)arg1;
- (void)onIPXXReportBlockDump:(id)arg1;
- (void)onIPXXStrategy:(id)arg1;
- (void)onReceiveStrategy:(int)arg1 withContene:(id)arg2;
- (void)onServiceInit;
- (void)onStategy:(id)arg1;
- (void)onTimeCheck;
- (void)onTimeOffsetTime;
- (_Bool)parseCommonNode:(struct XmlReaderNode_t *)arg1 toConfig:(id)arg2;
- (_Bool)saveAlreadyUploadCnt:(unsigned long long)arg1;
- (void)saveDumpReportConfig;
- (void)saveIsMonitorState:(_Bool)arg1;
- (_Bool)updateAlreadyUploadCnt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

