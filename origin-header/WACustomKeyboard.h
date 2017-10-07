//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIInputViewAudioFeedback-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WAEmotionViewDelegate-Protocol.h"

@class NSString, NSTimer, UIButton, UIImageView, UIPageControl, UIScrollView;
@protocol UITextInput, WACustomKeyboardDelegate;

@interface WACustomKeyboard : UIView <WAEmotionViewDelegate, UIScrollViewDelegate, UIInputViewAudioFeedback>
{
    UIScrollView *scrollView;
    UIPageControl *pageControl;
    UIImageView *_imgDelete;
    UIImageView *_imgDeleteHL;
    id <UITextInput> _textView;
    long long _maxLength;
    id <WACustomKeyboardDelegate> _delegate;
    NSTimer *_timer;
    double _height;
    UIButton *_extraButton;
}

- (void).cxx_destruct;
- (void)changePage:(id)arg1;
- (void)characterDeleted;
- (void)characterPressed:(id)arg1;
@property(nonatomic) __weak id <WACustomKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deletePressed:(id)arg1;
- (void)deleteReleased:(id)arg1;
- (void)dismissPressed:(id)arg1;
@property(readonly, nonatomic) _Bool enableInputClicksWhenVisible;
@property(retain, nonatomic) UIButton *extraButton; // @synthesize extraButton=_extraButton;
- (double)getHeight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectedEmotionView:(id)arg1;
- (void)setExtraKey:(id)arg1;
@property(retain) id <UITextInput> textView; // @synthesize textView=_textView;
@property(nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)setType:(long long)arg1 showConfirm:(_Bool)arg2;
- (void)setup3X4Keyboard:(_Bool)arg1;
- (void)setup4X4Keyboard:(_Bool)arg1;
- (void)setupEmojiKeyboard;
- (void)startDelete;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
