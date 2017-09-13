//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "PeopleNearByListViewControllerDelegate-Protocol.h"
#import "SeePeopleNearByUIDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "VerifyPhoneDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "settingMyAccountExtInfoDelegate-Protocol.h"

@class LBSErrorViewController, MMLoadingView, MMTipsViewController, NSString, PeopleNearByListViewController, SeePeopleNearByLogicController;

@interface SeePeopleNearbyViewController : MMUIViewController <SeePeopleNearByUIDelegate, settingMyAccountExtInfoDelegate, UIAlertViewDelegate, WCActionSheetDelegate, MMTipsViewControllerDelegate, PeopleNearByListViewControllerDelegate, VerifyPhoneDelegate>
{
    PeopleNearByListViewController *m_peopleListView;
    SeePeopleNearByLogicController *m_logicController;
    MMLoadingView *m_loadingView;
    LBSErrorViewController *m_findNothingView;
    MMTipsViewController *m_introView;
    unsigned int m_uiScene;
}

- (void).cxx_destruct;
- (void)SettingMyAccountExtInfoExit;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)adjustSubviewRects;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)bindPhoneReturn;
- (void)confirmClearMyLbsData:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) LBSErrorViewController *findNothingView; // @synthesize findNothingView=m_findNothingView;
- (id)getSexImage;
- (void)goBackToRootView;
- (id)init;
- (_Bool)isProfileExtInfoOK;
@property(retain, nonatomic) SeePeopleNearByLogicController *logicController; // @synthesize logicController=m_logicController;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
- (void)onBindPhoneBtnClicked;
- (void)onBindQQBtnClicked;
- (void)onChatRoomNearByBtnClicked;
- (void)onClearMyLbsData;
- (void)onClearMyLbsDataFinishedWithResult:(_Bool)arg1;
- (void)onClickNeverPromptForAgree:(id)arg1;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)onGetCertificationFinish;
- (void)onGetLBSRecommendPoiList:(id)arg1;
- (void)onJoinChatRoomFailed;
- (void)onJoinChatRoomFinishedWithResult:(id)arg1;
- (void)onJoinChatRoomStart;
- (void)onRefreshMyFriends;
- (void)onSelectedWithLbsContactInfo:(id)arg1;
- (void)onSelectedWithLbsPoiItem:(id)arg1;
- (void)onUpdateLbsContactInfoError:(int)arg1;
- (void)onUpdateLbsContactInfoFinishedWithData:(id)arg1;
- (void)onUploadAddressbookBtnClicked;
@property(retain, nonatomic) PeopleNearByListViewController *peopleListView; // @synthesize peopleListView=m_peopleListView;
- (void)promptForLBSUsageWarnning;
- (void)promptForProfileExtInfo;
- (void)setRightNavBtn;
- (void)setRightNavBtnNil;
- (void)setTitleNavView;
- (void)showContactInfoView:(id)arg1;
- (void)showMessage:(id)arg1;
- (void)showOperationMenu:(id)arg1;
- (void)showPeopleInfoView:(id)arg1;
- (void)startLoading;
- (void)startLoadingWithText:(id)arg1;
- (void)stopLoading;
- (id)title;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
