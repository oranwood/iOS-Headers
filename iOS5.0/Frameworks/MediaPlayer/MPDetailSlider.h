/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UISlider.h"

@class NSString, NSTimer, UIImageView, UILabel;

@interface MPDetailSlider : UISlider
{
    unsigned int _allowsDetailScrubbing:1;
    id _delegate;
    float _detailScrubbingVerticalRange;
    UIImageView *_downloadingTrackOverlay;
    UIImageView *_thumbImageView;
    UIImageView *_glowDetailScrubImageView;
    unsigned int _isTracking:1;
    unsigned int _didBeginTracking:1;
    unsigned int _needsCommit:1;
    unsigned int _canCommit:1;
    struct CGPoint _beginLocationInView;
    struct CGPoint _previousLocationInView;
    struct CGPoint _lastCommittedLocationInView;
    double _currentTime;
    double _duration;
    double _availableDuration;
    float _minScale;
    unsigned int _durationAllowsDetailScrubbing:1;
    UILabel *_currentTimeLabel;
    UILabel *_currentTimeInverseLabel;
    float _trackInset;
    float _maxTrackWidth;
    struct UIEdgeInsets _timeLabelInsets;
    int _timeLabelStyle;
    int _scrubValue;
    unsigned int _autoscrubActive:1;
    NSTimer *_autoscrubTimer;
    int _style;
}

+ (Class)labelClass;
+ (float)defaultHeight;
@property(nonatomic) int timeLabelStyle; // @synthesize timeLabelStyle=_timeLabelStyle;
@property(nonatomic) struct UIEdgeInsets timeLabelInsets; // @synthesize timeLabelInsets=_timeLabelInsets;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) float detailScrubbingVerticalRange; // @synthesize detailScrubbingVerticalRange=_detailScrubbingVerticalRange;
@property(nonatomic) id <MPDetailSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double availableDuration; // @synthesize availableDuration=_availableDuration;
- (void)_updateForAvailableDuraton;
- (void)_commitValue;
- (void)_resetScrubInfo;
- (id)_stringForInverseCurrentTime:(double)arg1;
- (id)_stringForCurrentTime:(double)arg1;
- (id)_stringForTime:(double)arg1;
- (void)_updateTimeDisplayForTime:(double)arg1 force:(BOOL)arg2;
- (void)_updateTimeDisplayForTime:(double)arg1;
- (float)_scaleForIdealValueForVerticalPosition:(float)arg1;
- (float)_scaleForVerticalPosition:(float)arg1;
- (void)_adjustMinScale;
- (void)_updateTrackInset;
- (void)_setupControlsForStyle;
- (float)timeLabelVerticalOffsetForStyle:(int)arg1;
- (id)timeLabelTextColorForStyle:(int)arg1;
- (struct CGSize)timeLabelShadowOffsetForStyle:(int)arg1;
- (id)timeLabelShadowColorForStyle:(int)arg1;
- (id)timeLabelFontForStyle:(int)arg1;
@property(readonly, nonatomic) NSString *localizedScrubSpeedText;
- (void)cancelTracking;
@property(readonly, nonatomic) BOOL detailScrubbingAvailableForCurrentDuration;
@property(nonatomic) BOOL allowsDetailScrubbing;
- (BOOL)isTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_autoscrubTick:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)_setValueWhileTracking:(float)arg1 animated:(BOOL)arg2;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (id)currentThumbImage;
- (id)createThumbView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2 maxTrackWidth:(float)arg3;

@end

