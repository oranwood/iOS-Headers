/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXPCConnectionDelegate-Protocol.h"

@class BKSProcessAssertion, NSError, NSString, NSXPCConnection, _UIAsyncInvocation;

// Not exported
@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate>
{
    int _terminationStateLock;
    NSError *_terminationError;
    id _terminationHandler;
    _Bool _isTerminated;
    _UIAsyncInvocation *_terminateInvocation;
    NSString *_serviceBundleIdentifier;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceConnection;
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
}

+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(id)arg3;
@property(readonly, nonatomic) CDStruct_4c969caf serviceAuditToken;
@property(readonly, nonatomic) int servicePID;
- (void)dealloc;
- (id)disconnect;
- (void)setTerminationHandler:(id)arg1;
- (void)_terminateUnconditionallyThen:(id)arg1;
- (id)_terminateWithError:(id)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(id)arg3;
- (id)_initWithConnectionInfo:(CDStruct_0f015c83)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (int)__automatic_invalidation_logic;

@end

