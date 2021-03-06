//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString;

@interface MyWCStrangerMessage : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _m_localId;
    unsigned int _m_type;
    unsigned int _m_source;
    unsigned int _m_createTime;
    long long lastInsertedRowID;
    NSString *_m_id;
    NSString *_m_fromUser;
    NSString *_m_fromNickname;
    NSString *_m_toUser;
    NSString *_m_toNickname;
    NSString *_m_content;
    NSData *_m_metaData;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)m_content;
+ (const struct WCTProperty *)m_createTime;
+ (const struct WCTProperty *)m_fromNickname;
+ (const struct WCTProperty *)m_fromUser;
+ (const struct WCTProperty *)m_id;
+ (const struct WCTProperty *)m_localId;
+ (const struct WCTProperty *)m_metaData;
+ (const struct WCTProperty *)m_source;
+ (const struct WCTProperty *)m_toNickname;
+ (const struct WCTProperty *)m_toUser;
+ (const struct WCTProperty *)m_type;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(retain, nonatomic) NSString *m_content; // @synthesize m_content=_m_content;
@property(nonatomic) unsigned int m_createTime; // @synthesize m_createTime=_m_createTime;
@property(retain, nonatomic) NSString *m_fromNickname; // @synthesize m_fromNickname=_m_fromNickname;
@property(retain, nonatomic) NSString *m_fromUser; // @synthesize m_fromUser=_m_fromUser;
@property(retain, nonatomic) NSString *m_id; // @synthesize m_id=_m_id;
@property(nonatomic) unsigned int m_localId; // @synthesize m_localId=_m_localId;
@property(retain, nonatomic) NSData *m_metaData; // @synthesize m_metaData=_m_metaData;
@property(nonatomic) unsigned int m_source; // @synthesize m_source=_m_source;
@property(retain, nonatomic) NSString *m_toNickname; // @synthesize m_toNickname=_m_toNickname;
@property(retain, nonatomic) NSString *m_toUser; // @synthesize m_toUser=_m_toUser;
@property(nonatomic) unsigned int m_type; // @synthesize m_type=_m_type;

@end

