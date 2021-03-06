/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WebPluginDatabase : NSObject
{
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (id)sharedDatabase;
+ (void)closeSharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)arg1;
- (id)pluginForMIMEType:(id)arg1;
- (id)pluginForExtension:(id)arg1;
- (id)plugins;
- (void)setPlugInPaths:(id)arg1;
- (void)close;
- (id)init;
- (void)dealloc;
- (void)refresh;
- (BOOL)isMIMETypeRegistered:(id)arg1;
- (void)addPluginInstanceView:(id)arg1;
- (void)removePluginInstanceView:(id)arg1;
- (void)removePluginInstanceViewsFor:(id)arg1;
- (void)destroyAllPluginInstanceViews;

@end

