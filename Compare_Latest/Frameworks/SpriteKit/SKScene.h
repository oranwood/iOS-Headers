/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKEffectNode.h>

@class NSMutableDictionary, PKPhysicsWorld, SKPhysicsWorld, SKView, UIColor;

@interface SKScene : SKEffectNode
{
    double _lastUpdate;
    double _pausedTime;
    struct CGRect _visibleRect;
    long long _scaleMode;
    NSMutableDictionary *_touchMap;
    struct CGRect _bounds;
    _Bool _isSetup;
    _Bool _usesExplicitUpdate;
    _Bool _usesExplicitRender;
    id _view;
    _Bool __needsUpdate;
    _Bool __needsRender;
    SKPhysicsWorld *_physicsWorld;
    PKPhysicsWorld *__pkPhysicsWorld;
}

+ (id)sceneWithContentsOfFile:(id)arg1 size:(struct CGSize)arg2;
+ (id)sceneWithContentsOfFile:(id)arg1;
+ (id)sceneWithSize:(struct CGSize)arg1;
@property(retain, nonatomic) PKPhysicsWorld *_pkPhysicsWorld; // @synthesize _pkPhysicsWorld=__pkPhysicsWorld;
@property _Bool _needsRender; // @synthesize _needsRender=__needsRender;
@property _Bool _needsUpdate; // @synthesize _needsUpdate=__needsUpdate;
@property(nonatomic) long long scaleMode; // @synthesize scaleMode=_scaleMode;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) SKView *view;
- (void)setPaused:(_Bool)arg1;
- (void)didSimulatePhysics;
- (void)didEvaluateActions;
- (void)_update:(double)arg1;
- (void)update:(double)arg1;
- (void)didChangeSize:(struct CGSize)arg1;
- (void)willMoveFromView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)_didMoveToView:(id)arg1;
@property(readonly, nonatomic) SKPhysicsWorld *physicsWorld; // @synthesize physicsWorld=_physicsWorld;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint visibleRectCenter;
@property(nonatomic) struct CGSize visibleRectSize;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (struct CGPoint)convertPointToView:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromView:(struct CGPoint)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)setZPosition:(double)arg1;
- (double)zPosition;
- (void)setZRotation:(double)arg1;
- (double)zRotation;
- (void)setYScale:(double)arg1;
- (double)yScale;
- (void)setXScale:(double)arg1;
- (double)xScale;
- (void)setScale:(double)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGPoint)position;
@property(nonatomic) struct CGPoint anchorPoint;
@property(retain, nonatomic) UIColor *backgroundColor;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

