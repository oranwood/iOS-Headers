/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface GEOResourceInfo : NSObject
{
    NSString *_name;
    long long _type;
    NSString *_checksum;
}

@property(readonly, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dealloc;
- (id)initWithName:(id)arg1 type:(long long)arg2 checksum:(id)arg3;

@end

