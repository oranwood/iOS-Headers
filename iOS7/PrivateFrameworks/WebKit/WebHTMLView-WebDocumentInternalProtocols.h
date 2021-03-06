/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebKit/WebHTMLView.h>

#import "WebDocumentElement-Protocol.h"
#import "WebDocumentOptionsSearching-Protocol.h"
#import "WebMultipleTextMatches-Protocol.h"

@interface WebHTMLView (WebDocumentInternalProtocols) <WebDocumentElement, WebMultipleTextMatches, WebDocumentOptionsSearching>
- (_Bool)_findString:(id)arg1 options:(unsigned long long)arg2;
- (id)rectsForTextMatches;
- (void)unmarkAllTextMatches;
- (_Bool)markedTextMatchesAreHighlighted;
- (void)setMarkedTextMatchesAreHighlighted:(_Bool)arg1;
- (unsigned long long)countMatchesForText:(id)arg1 inDOMRange:(id)arg2 options:(unsigned long long)arg3 limit:(unsigned long long)arg4 markMatches:(_Bool)arg5;
- (id)elementAtPoint:(struct CGPoint)arg1 allowShadowContent:(_Bool)arg2;
- (id)elementAtPoint:(struct CGPoint)arg1;
@end

