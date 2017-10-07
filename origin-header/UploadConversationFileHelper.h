//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray;
@protocol UploadConversationFileDelegate;

@interface UploadConversationFileHelper : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *m_checkFileQueue;
    NSMutableArray *m_uploadFileQueue;
    NSMutableArray *m_uploadFileResult;
    id <UploadConversationFileDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)StartUploadImageFile:(id)arg1;
- (_Bool)checkFile;
- (void)clearResource;
- (void)dealloc;
- (id)getClientID;
- (id)getImageInfoFromCheckQueue:(long long)arg1;
- (void)handleCheckConversationFileResp:(id)arg1;
- (void)handleUploadFileResp:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <UploadConversationFileDelegate> m_delegate; // @synthesize m_delegate;
- (void)removeImageInfoFromCheckQueue:(long long)arg1;
- (void)updateUploadFileResult:(long long)arg1 attachID:(id)arg2 totalSize:(unsigned int)arg3 isExistInServer:(_Bool)arg4;
- (_Bool)uploadFile;

@end
