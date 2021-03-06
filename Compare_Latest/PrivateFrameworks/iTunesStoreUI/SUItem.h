/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, SSItemImageCollection, SSItemOffer, SUItemContentRating, SUItemLink, SUItemReviewStatistics;

@interface SUItem : NSObject <NSCopying>
{
    NSString *_artistName;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_collectionName;
    SUItem *_containerItem;
    NSString *_containerName;
    SUItemContentRating *_contentRating;
    NSString *_copyrightString;
    SSItemOffer *_defaultStoreOffer;
    NSDictionary *_dictionary;
    NSString *_disclaimerString;
    _Bool _gameCenterEnabled;
    NSString *_genreName;
    NSString *_humanReadableDescription;
    _Bool _isInstalled;
    long long _itemDisplayType;
    unsigned long long _itemIdentifier;
    SSItemImageCollection *_itemImageCollection;
    NSArray *_itemLinks;
    NSString *_itemMediaKind;
    long long _itemType;
    NSDate *_releaseDate;
    NSString *_releaseDateString;
    long long _representedItemCount;
    SUItemReviewStatistics *_reviewStatistics;
    NSString *_secondaryTitle;
    NSString *_softwareType;
    NSArray *_storeOffers;
    NSDictionary *_tellAFriendDictionary;
    NSString *_title;
    NSDictionary *_tweetDictionary;
    NSString *_unmodifiedTitle;
    NSNumber *_versionIdentifier;
    NSArray *_versionOrdering;
}

@property(copy, nonatomic) NSArray *versionOrdering; // @synthesize versionOrdering=_versionOrdering;
@property(retain, nonatomic) NSNumber *versionIdentifier; // @synthesize versionIdentifier=_versionIdentifier;
@property(copy, nonatomic) NSString *unmodifiedTitle; // @synthesize unmodifiedTitle=_unmodifiedTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *storeOffers; // @synthesize storeOffers=_storeOffers;
@property(copy, nonatomic) NSString *softwareType; // @synthesize softwareType=_softwareType;
@property(copy, nonatomic) NSString *secondaryTitle; // @synthesize secondaryTitle=_secondaryTitle;
@property(copy, nonatomic) SUItemReviewStatistics *reviewStatistics; // @synthesize reviewStatistics=_reviewStatistics;
@property(nonatomic) long long representedItemCount; // @synthesize representedItemCount=_representedItemCount;
@property(retain, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(copy, nonatomic) NSString *itemMediaKind; // @synthesize itemMediaKind=_itemMediaKind;
@property(copy, nonatomic) NSArray *itemLinks; // @synthesize itemLinks=_itemLinks;
@property(copy, nonatomic) SSItemImageCollection *itemImageCollection; // @synthesize itemImageCollection=_itemImageCollection;
@property(nonatomic) unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(nonatomic) long long itemDisplayType; // @synthesize itemDisplayType=_itemDisplayType;
@property(readonly, nonatomic) NSDictionary *itemDictionary; // @synthesize itemDictionary=_dictionary;
@property(copy, nonatomic) NSString *humanReadableDescription; // @synthesize humanReadableDescription=_humanReadableDescription;
@property(copy, nonatomic) NSString *genreName; // @synthesize genreName=_genreName;
@property(nonatomic, getter=isGameCenterEnabled) _Bool gameCenterEnabled; // @synthesize gameCenterEnabled=_gameCenterEnabled;
@property(copy, nonatomic) NSString *disclaimerString; // @synthesize disclaimerString=_disclaimerString;
@property(readonly, nonatomic) SSItemOffer *defaultStoreOffer; // @synthesize defaultStoreOffer=_defaultStoreOffer;
@property(copy, nonatomic) NSString *copyrightString; // @synthesize copyrightString=_copyrightString;
@property(copy, nonatomic) SUItemContentRating *contentRating; // @synthesize contentRating=_contentRating;
@property(copy, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain, nonatomic) SUItem *containerItem; // @synthesize containerItem=_containerItem;
@property(copy, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (id)_valueForFirstAvailableKey:(id)arg1;
- (id)_squishImageForSquishDictionary:(id)arg1;
- (void)_reloadStoreOffers;
- (void)_reloadProperties;
- (void)_reloadItemLinks;
- (void)_reloadItemImages;
- (void)_reloadImagesAndLinksFromSquishes:(id)arg1;
- (void)_reloadDefaultStoreOffer;
- (id)_newPrimaryItemLink;
- (id)_newItemLinkWithType:(long long)arg1 URLKey:(id)arg2 titleKey:(id)arg3;
- (id)_newItemLinkWithType:(long long)arg1 dictionary:(id)arg2;
- (long long)_linkTypeForString:(id)arg1;
- (long long)_linkTargetForTargetString:(id)arg1 typeString:(id)arg2;
@property(readonly, nonatomic) NSString *itemTypeString;
- (id)valueForProperty:(id)arg1;
@property(readonly, nonatomic) NSURL *tweetURL;
@property(readonly, nonatomic) NSString *tweetInitialText;
@property(readonly, nonatomic) NSString *tellAFriendSubject;
@property(readonly, nonatomic) NSURL *tellAFriendBodyURL;
@property(readonly, nonatomic) NSString *tellAFriendBodyMIMEType;
@property(readonly, nonatomic) NSString *tellAFriendBody;
- (id)stringValueForProperty:(id)arg1;
- (id)storeOfferForIdentifier:(id)arg1;
- (id)relatedItemsForRelationType:(id)arg1;
- (id)itemLinksForType:(long long)arg1;
@property(readonly, nonatomic, getter=isInstalled) _Bool installed;
@property(readonly, nonatomic, getter=isDownloadable) _Bool downloadable;
- (_Bool)isDisplayable:(id *)arg1;
- (long long)integerValueForProperty:(id)arg1;
- (id)firstItemLinkForType:(long long)arg1;
@property(readonly, nonatomic) SUItemLink *externalArtistPageLink;
- (id)dateValueForProperty:(id)arg1;
- (id)copyReleaseDateStringWithStyle:(long long)arg1;
- (_Bool)boolValueForProperty:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

