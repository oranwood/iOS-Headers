/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

// Not exported
@interface TSDBitmapRenderingQualityInfo : NSObject
{
    int mQuality;
    float mCanvasScale;
    NSMutableDictionary *mImageMap;
}

@property(readonly, nonatomic) int quality; // @synthesize quality=mQuality;
- (struct CGImage *)degradedImageRefForProvider:(id)arg1 ofSize:(struct CGSize)arg2;
- (void)cacheProvider:(id)arg1 ofSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)initWithQuality:(int)arg1 canvasScale:(float)arg2;

@end

