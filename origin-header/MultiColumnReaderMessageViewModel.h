//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderMessageViewModel.h"

@interface MultiColumnReaderMessageViewModel : ReaderMessageViewModel
{
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (_Bool)isDisableEditMode;
- (_Bool)isReaderWrapInvalidUrlJumpType;
- (_Bool)isReaderWrapWeappJumpType;
- (_Bool)isShowReadAll;
@property(readonly, nonatomic) double itemInsideWidth;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
@property(readonly, nonatomic) double readerItemLMargin;
@property(readonly, nonatomic) double readerLineLMargin;
@property(readonly, nonatomic) double readerViewWidth;

@end
