/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSDictionary.h"

@interface NSDistributedObjectsStatistics : NSDictionary
{
    unsigned int requestsReceived;
    unsigned int repliesSent;
    unsigned int requestsSent;
    unsigned int repliesReceived;
}

- (id)objectForKey:(id)arg1;
- (void)addStatistics:(id)arg1;
- (id)keyEnumerator;
- (id)allKeys;
- (unsigned int)count;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
