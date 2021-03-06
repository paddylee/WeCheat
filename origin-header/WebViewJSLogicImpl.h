//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "JSEventHandler-Protocol.h"
#import "WebviewJSEventHandlerBaseDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIView, WebviewJSEventHandlerFacade;
@protocol WebViewJSLogicDelegate, YYWebViewInterface;

@interface WebViewJSLogicImpl : MMObject <JSEventHandler, WebviewJSEventHandlerBaseDelegate>
{
    NSMutableDictionary *_jsCallbackHooks;
    NSMutableDictionary *_jsUrlHooks;
    NSMutableArray *_jsEvents;
    WebviewJSEventHandlerFacade *_jsEventHandlerFacade;
    UIView<YYWebViewInterface> *_webView;
    id <WebViewJSLogicDelegate> _delegate;
    NSString *_curRandomUUID;
    NSString *_curContextUUID;
    _Bool _isUseMd5ForJSAPI;
    _Bool _bInjectJSFailed;
}

- (void).cxx_destruct;
- (id)GetCurrentWebviewViewController;
@property(nonatomic) _Bool bInjectJSFailed; // @synthesize bInjectJSFailed=_bInjectJSFailed;
- (void)cleanJSAPIDelegate;
- (void)dealloc;
@property(nonatomic) __weak id <WebViewJSLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)extraDataForNextJSEventCalled:(id)arg1;
- (id)funcDefByName:(id)arg1;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)handleJSApiDispatchMessage:(id)arg1;
- (void)handleMonitorMessage:(id)arg1;
- (id)init;
- (void)injectPluginJS;
- (void)injectWeixinJSBridge;
- (id)isExistJSApis:(id)arg1;
- (id)jsEventWithFunction:(id)arg1 params:(id)arg2 callBackID:(id)arg3;
- (void)jsHandlerHandle:(id)arg1;
- (void)markPageWebCached;
- (void)onEndEvent:(id)arg1 withResult:(id)arg2;
- (void)recoverJSAPIEventDelegateWithBackup;
- (void)reportIDKeyForInjectJS;
- (void)reportIDKeyForJsApiCall:(id)arg1;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)sendGetA8KeyUrlOrCookieEvent:(id)arg1 HasCookie:(_Bool)arg2;
- (void)sendMessageToJSBridge:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setJSAPIFunctionMap:(id)arg1;
@property(retain, nonatomic) UIView<YYWebViewInterface> *webView; // @synthesize webView=_webView;
- (id)sha1:(id)arg1;
- (void)tryInjectWeixinJSBridge:(id)arg1;
- (id)webviewController;
- (void)webviewWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

