/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class WKBrowsingContextGroupData;

@interface WKBrowsingContextGroup : NSObject
{
    WKBrowsingContextGroupData *_data;
}

- (void)removeAllUserScripts;
- (void)addUserScript:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 injectionTime:(int)arg5 mainFrameOnly:(_Bool)arg6;
- (void)removeAllUserStyleSheets;
- (void)addUserStyleSheet:(id)arg1 baseURL:(id)arg2 whitelistedURLPatterns:(id)arg3 blacklistedURLPatterns:(id)arg4 mainFrameOnly:(_Bool)arg5;
@property _Bool allowsPlugIns;
- (void)setAllowsJavaScriptMarkup:(_Bool)arg1;
- (_Bool)allowsJavaScriptMarkup;
@property _Bool allowsJavaScript;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

