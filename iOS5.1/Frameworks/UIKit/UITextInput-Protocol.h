/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIKeyInput-Protocol.h"

@class NSDictionary, UITextPosition, UITextRange, UIView;

@protocol UITextInput <UIKeyInput>
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy) UITextRange *selectedTextRange;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)textInRange:(id)arg1;

@optional
@property(nonatomic) int selectionAffinity;
@property(readonly, nonatomic) UIView *textInputView;
- (void)dictationRecognitionFailed;
- (void)dictationRecordingDidEnd;
- (void)insertDictationResult:(id)arg1;
- (int)characterOffsetOfPosition:(id)arg1 withinRange:(id)arg2;
- (id)positionWithinRange:(id)arg1 atCharacterOffset:(int)arg2;
- (id)textStylingAtPosition:(id)arg1 inDirection:(int)arg2;
@end

