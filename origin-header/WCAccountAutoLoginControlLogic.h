//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseControlLogic.h"

#import "IRsaCertMgrExt-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "MMUIViewControllerDelegate-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCAccountGraphicVerifyControlLogicDelegate-Protocol.h"
#import "WCAccountManualAuthControlLogicDelegate-Protocol.h"
#import "WCAccountSafeDeviceControlLogicDelegate-Protocol.h"
#import "WCAccountVoice2ndVerifyControlLogicDelegate-Protocol.h"

@class CountDownTipViewController, MMUIWindow, NSString, WCAccountControlData, WCAccountGraphicVerifyControlLogic, WCAccountManualAuthControlLogic, WCAccountSafeDeviceControlLogic, WCAccountVoice2ndVerifyControlLogic;
@protocol WCAccountAutoLoginControlLogicDelegate;

@interface WCAccountAutoLoginControlLogic : WCBaseControlLogic <WCAccountGraphicVerifyControlLogicDelegate, WCAccountSafeDeviceControlLogicDelegate, WCAccountVoice2ndVerifyControlLogicDelegate, MMWebViewDelegate, MMTipsViewControllerDelegate, PBMessageObserverDelegate, IRsaCertMgrExt, WCAccountManualAuthControlLogicDelegate, MMUIViewControllerDelegate>
{
    WCAccountControlData *m_data;
    MMUIWindow *m_window;
    WCAccountSafeDeviceControlLogic *m_safeDeviceLogic;
    WCAccountGraphicVerifyControlLogic *m_graphicVerifyLogic;
    WCAccountVoice2ndVerifyControlLogic *m_voice2ndVerifyLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    id <WCAccountAutoLoginControlLogicDelegate> m_delegate;
    unsigned int m_idc_redirect_count;
    unsigned int m_ecdh_error_count;
    unsigned int m_cert_error_count;
    _Bool m_bSessionKeyNeedECDHDecrypt;
    _Bool m_bStopCloseAcct;
    CountDownTipViewController *m_tipView;
    unsigned long long m_ui64BeginTime;
    _Bool m_bHasKickout;
}

- (void).cxx_destruct;
- (void)HandleMessageReturn:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnRsaCertCGIAgain;
- (void)OnRsaCertFail;
- (void)closeFirstView;
- (void)closeMainFrame;
- (void)dealloc;
- (id)genAutoAuthRequest;
- (id)genAutoAuthRequest:(_Bool)arg1;
- (id)getViewController;
- (void)handleAuthResponse:(id)arg1;
- (id)init;
- (void)kickOut;
- (void)onAlertErrorAction:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onErrorAction:(id)arg1;
- (void)onGraphicVerifyControlLogicCancel;
- (id)onGraphicVerifyControlLogicGetAuthRequest:(_Bool)arg1;
- (void)onGraphicVerifyControlLogicReturn:(id)arg1;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)onSafeDeviceControlLogicCancel;
- (void)onSafeDeviceControlLogicReturnOK;
- (void)onStopCloseAcct;
- (void)onVoice2ndVerifyControlLogicCancel;
- (void)onVoice2ndVerifyControlLogicReturnOK;
- (void)openFirstView;
- (void)setDelegate:(id)arg1;
- (void)showTipView;
- (void)showTipWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 countDown:(unsigned int)arg4 errorInfo:(id)arg5;
- (_Bool)startAutoAuth:(id)arg1;
- (void)startLogic;
- (void)stopLogic:(unsigned long long)arg1;
- (void)stopLogicLoginRetry;
- (void)stopLogicWithKickOut;
- (void)webViewReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

