//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTableView, NSString, ScanHistoryLogicHelper;

@interface ScanHistoryViewController : MMUIViewController <WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *_tableView;
    ScanHistoryLogicHelper *_helperLogic;
}

- (void).cxx_destruct;
- (void)OnReturn;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCleanAction:(id)arg1;
- (void)realCleanAll;
- (void)showEmptyView;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
