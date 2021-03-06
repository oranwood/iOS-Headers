/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "PSHeaderFooterView-Protocol.h"

@class UILabel;

@interface KeychainSyncHeaderView : UIView <PSHeaderFooterView>
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    _Bool _usesCompactLayout;
}

@property(nonatomic) _Bool usesCompactLayout; // @synthesize usesCompactLayout=_usesCompactLayout;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)layoutSubviews;
- (void)setTitleText:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)dealloc;
- (id)initWithSpecifier:(id)arg1;

@end

