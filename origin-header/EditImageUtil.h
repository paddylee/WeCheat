//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface EditImageUtil : MMObject
{
}

+ (struct CGSize)getEditImageResultSizeIfLongImage:(struct CGSize)arg1;
+ (double)getNearByInt:(double)arg1;
+ (_Bool)isHighResolution:(struct CGRect)arg1;
+ (_Bool)isLongPressEntrance:(unsigned int)arg1;
+ (_Bool)isLowDevice;
+ (_Bool)isNeedSaveEditedPhoto;
+ (unsigned int)numberOfPenCountsPerRender;
+ (void)savePhotoToSystemAlbum:(id)arg1;
+ (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;

@end

