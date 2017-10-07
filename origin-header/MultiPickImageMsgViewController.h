//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFullScreenViewController.h"

#import "MultiImageScrollViewDelegate-Protocol.h"
#import "MultiPickImagePanelDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMLoadingView, MultiImageScrollView, MultiPickImagePanel, NSData, NSDictionary, NSString;
@protocol ImageBrowseDelegate;

@interface MultiPickImageMsgViewController : MMFullScreenViewController <MultiImageScrollViewDelegate, MultiPickImagePanelDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, WCActionSheetDelegate, UIAlertViewDelegate>
{
    MultiImageScrollView *pagingScrollView;
    MultiPickImagePanel *m_vPickImagePanel;
    NSDictionary *m_oInitInfo;
    NSData *m_dtImg;
    id <ImageBrowseDelegate> m_delegate;
    MMLoadingView *m_loadingView;
    _Bool _canSendOriginalImage;
}

- (void).cxx_destruct;
- (void)AddMediaInfo:(id)arg1;
- (id)GetImageByIndex:(unsigned int)arg1;
- (id)GetOriginImage;
- (void)MultiPickImagePanelAddImage;
- (void)MultiPickImagePanelDidCancel:(unsigned int)arg1;
- (void)MultiPickImagePanelDidFinishPickingImages:(id)arg1;
- (void)OnReturn;
- (void)UpdateScrollView;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) _Bool canSendOriginalImage; // @synthesize canSendOriginalImage=_canSendOriginalImage;
- (void)dealloc;
- (void)doCancel;
- (void)doSelectPhoto;
- (id)getImageData;
- (id)imageAtPage:(unsigned int)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)initData;
- (void)initLoadingView;
- (void)initNavigationBar;
- (void)initScrollView;
- (void)initView;
- (id)initWithImageInfo:(id)arg1;
- (_Bool)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)isCurHDImage;
- (_Bool)isLongOriginImage;
- (_Bool)isShowHDImageAlert;
@property(nonatomic) __weak id <ImageBrowseDelegate> m_delegate; // @synthesize m_delegate;
- (void)multiImageScrollViewWillBeginDragging;
- (void)onOperate:(id)arg1;
- (void)onSelectPhoto:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)showStatusBar;
- (void)startImageLoading;
- (void)stopImageLoading;
- (id)viewAtPage:(unsigned int)arg1 frame:(struct CGRect)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
