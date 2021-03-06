/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CKFileTransfer-Protocol.h"

@class NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CKIMFileTransfer : NSObject <CKFileTransfer>
{
    unsigned long long _mediaObjectCount;
    NSObject<OS_dispatch_queue> *_serial_queue;
    _Bool _fileDataReady;
    _Bool _fileURLFinalized;
    _Bool _restoring;
    NSString *_guid;
    NSURL *_fileURL;
    NSString *_filename;
    NSError *_error;
    NSDictionary *_transcoderUserInfo;
    unsigned long long _currentBytes;
    unsigned long long _totalBytes;
    long long _transferState;
    id <CKMessage> _message;
    NSURL *_linkFileURL;
}

@property(copy, nonatomic) NSURL *linkFileURL; // @synthesize linkFileURL=_linkFileURL;
@property(nonatomic) long long transferState; // @synthesize transferState=_transferState;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)attachmentRestored:(id)arg1;
- (void)transferUpdated:(id)arg1;
- (void)updateTransfer;
- (id)linkFileURLWithFilename:(id)arg1;
- (id)syncController;
- (id)fileManager;
- (id)notificationCenter;
- (id)imFileTransferCenter;
- (void)mediaObjectRemoved;
- (void)mediaObjectAdded;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isDownloadable) _Bool downloadable;
@property(readonly, nonatomic, getter=isRestoring) _Bool restoring; // @synthesize restoring=_restoring;
@property(readonly, nonatomic, getter=isFileURLFinalized) _Bool fileURLFinalized; // @synthesize fileURLFinalized=_fileURLFinalized;
@property(readonly, nonatomic, getter=isFileDataReady) _Bool fileDataReady; // @synthesize fileDataReady=_fileDataReady;
@property(readonly, nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(readonly, nonatomic) unsigned long long currentBytes; // @synthesize currentBytes=_currentBytes;
@property(readonly, nonatomic) NSDictionary *transcoderUserInfo; // @synthesize transcoderUserInfo=_transcoderUserInfo;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) id <CKMessage> message; // @synthesize message=_message;
- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2;
- (id)initWithTransferGUID:(id)arg1 message:(id)arg2;
- (id)description;
- (void)dealloc;

@end

