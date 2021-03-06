/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAVCore/IMAVChat.h>

@interface IMAVChat (Participants)
- (id)_participantMatchingVCPartyID:(id)arg1;
@property(readonly, nonatomic) _Bool _allParticipantsUsingICE;
- (id)remoteParticipants;
- (id)initiatorParticipant;
- (_Bool)_participantsCheckOut;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (_Bool)_moveVCPartyID:(id)arg1 toIndex:(unsigned int)arg2 inCount:(unsigned int)arg3;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
@end

