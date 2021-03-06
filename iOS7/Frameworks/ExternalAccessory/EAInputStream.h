/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSInputStream.h"

@class EAAccessory, EASession, NSCondition, NSMutableData, NSRecursiveLock, NSThread;

@interface EAInputStream : NSInputStream
{
    id _delegate;
    EAAccessory *_accessory;
    EASession *_session;
    int _sock;
    NSMutableData *_inputFromAccData;
    NSCondition *_inputFromAccCondition;
    NSRecursiveLock *_statusLock;
    NSRecursiveLock *_runloopLock;
    NSThread *_inputFromAccThread;
    _Bool _isOpenCompletedEventSent;
    _Bool _hasNewBytesAvailable;
    _Bool _isAtEndEventSent;
    unsigned long long _streamStatus;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_runLoopSource;
}

- (void)_readInputFromAccThread;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)_performAtEndOfStreamValidation;
- (void)_accessoryDidDisconnect:(id)arg1;
- (void)endStream;
- (void)openCompleted;
- (_Bool)hasBytesAvailable;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (id)streamError;
- (unsigned long long)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)close;
- (void)open;
- (void)dealloc;
- (id)initWithAccessory:(id)arg1 forSession:(id)arg2 socket:(int)arg3;

@end

