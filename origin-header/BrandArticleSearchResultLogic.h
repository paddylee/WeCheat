//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BrandArticleSearchPageBaseLogic.h"

#import "BrandArticleSearchEventWrapDelegate-Protocol.h"
#import "BrandArticleSearchPageBaseLogicImplement-Protocol.h"

@class BrandArticleSearchEventWrap, NSString, UIView;
@protocol YYWebViewInterface;

@interface BrandArticleSearchResultLogic : BrandArticleSearchPageBaseLogic <BrandArticleSearchPageBaseLogicImplement, BrandArticleSearchEventWrapDelegate>
{
    UIView<YYWebViewInterface> *m_resultView;
    NSString *_lastInputText;
    struct timeval _lastInputTime;
    BrandArticleSearchEventWrap *_eventWrap;
    UIView<YYWebViewInterface> *_resultView;
}

- (void).cxx_destruct;
- (void)clearResultPage;
- (void)configSearchMgrDelegate;
- (id)currentImplement;
- (void)dealloc;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (id)htmlPathForResult;
- (id)initWithSearchLogic:(id)arg1 resultView:(id)arg2;
- (_Bool)isSupportSuggestion;
- (void)loadPage;
- (void)notifyChanged:(id)arg1;
- (void)notifyPageOfQueryChanged:(id)arg1;
- (void)notifyPageOfSearchClick:(id)arg1;
- (_Bool)notifyPreCheckQuery:(id)arg1;
- (void)onWebViewFinishLoad;
@property(retain, nonatomic) UIView<YYWebViewInterface> *resultView; // @synthesize resultView=_resultView;
- (void)sendJSEventForQueryChanged:(id)arg1;
- (void)textChanged:(id)arg1;
- (void)trySearch:(id)arg1;
- (id)urlForDetailPage:(id)arg1;
- (id)urlForResultPage;
- (void)willBeginDetailSearchWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
