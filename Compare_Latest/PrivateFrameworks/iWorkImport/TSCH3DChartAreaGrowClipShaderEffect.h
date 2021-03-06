/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DChartClippingShaderEffect.h>

// Not exported
@interface TSCH3DChartAreaGrowClipShaderEffect : TSCH3DChartClippingShaderEffect
{
    _Bool mIsOneSidedClipping;
    _Bool mUseDiscard;
    float mCapFudge;
    float mClipFudge;
}

+ (id)variableAbsIsCap;
+ (id)variableIsCap;
+ (id)variableZClipValues;
+ (id)variableClipValues;
+ (id)variableClipVertex;
@property(nonatomic) float clipFudge; // @synthesize clipFudge=mClipFudge;
@property(nonatomic) float capFudge; // @synthesize capFudge=mCapFudge;
@property(nonatomic) _Bool useDiscard; // @synthesize useDiscard=mUseDiscard;
@property(nonatomic) _Bool isOneSidedClipping; // @synthesize isOneSidedClipping=mIsOneSidedClipping;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (void)inject:(id)arg1;
- (void)addVariables:(id)arg1;
- (unsigned long long)numberOfClippingValues;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)variableAbsIsCap;
- (id)variableIsCap;
- (id)variableZClipValues;
- (id)variableClipValues;
- (id)variableClipVertex;

@end

