/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class SKUIProductPageHeaderViewController, UIScrollView;

@protocol SKUIProductPageChildViewController <NSObject>
@property(nonatomic) __weak id <SKUIProductPageChildViewControllerDelegate> delegate;
@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property(readonly, nonatomic) UIScrollView *scrollView;
@end

