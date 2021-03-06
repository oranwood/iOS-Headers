/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUICachedLayout-Protocol.h"

@class NSArray;

@interface SKUIEditorialLinkLayout : NSObject <SKUICachedLayout>
{
    struct CGSize *_sizes;
    struct CGSize _totalSize;
    NSArray *_links;
}

@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, nonatomic) struct CGSize totalSize; // @synthesize totalSize=_totalSize;
- (void).cxx_destruct;
- (struct CGSize)sizeForLinkAtIndex:(long long)arg1;
- (void)enumerateLinesUsingBlock:(id)arg1;
- (void)dealloc;
- (id)initWithLayoutRequest:(id)arg1;

@end

