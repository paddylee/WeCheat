//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageColorPackingFilter : GPUImageFilter
{
    int texelWidthUniform;
    int texelHeightUniform;
    double texelWidth;
    double texelHeight;
}

- (id)init;
- (struct CGSize)outputFrameSize;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (struct CGSize)sizeOfFBO;

@end
