//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface DBHello : NSObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int _version;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _status;
    unsigned int _imageStatus;
    unsigned int _type;
    unsigned int _des;
    unsigned int _opCode;
    unsigned int _sayHelloStatus;
    unsigned int _ConIntRes2;
    unsigned int _ConIntRes3;
    long long lastInsertedRowID;
    long long _msgServerId;
    NSString *_message;
    NSString *_userName;
    NSString *_ConStrRes1;
    NSString *_ConStrRes2;
    NSString *_ConStrRes3;
}

+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTProperty *)ConIntRes2;
+ (const struct WCTProperty *)ConIntRes3;
+ (const struct WCTProperty *)ConStrRes1;
+ (const struct WCTProperty *)ConStrRes2;
+ (const struct WCTProperty *)ConStrRes3;
+ (const struct WCTProperty *)createTime;
+ (const struct WCTProperty *)des;
+ (const struct WCTProperty *)imageStatus;
+ (const struct WCTProperty *)message;
+ (const struct WCTProperty *)msgLocalId;
+ (const struct WCTProperty *)msgServerId;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
+ (const struct WCTProperty *)opCode;
+ (const struct WCTProperty *)sayHelloStatus;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)userName;
+ (const struct WCTProperty *)version;
- (void).cxx_destruct;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2=_ConIntRes2;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3=_ConIntRes3;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1=_ConStrRes1;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2=_ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3=_ConStrRes3;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int des; // @synthesize des=_des;
@property(nonatomic) unsigned int imageStatus; // @synthesize imageStatus=_imageStatus;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId=_msgServerId;
@property(nonatomic) unsigned int opCode; // @synthesize opCode=_opCode;
@property(nonatomic) unsigned int sayHelloStatus; // @synthesize sayHelloStatus=_sayHelloStatus;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int version; // @synthesize version=_version;

@end

