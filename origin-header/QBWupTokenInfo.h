//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface QBWupTokenInfo : NSObject <NSCoding>
{
    NSString *_token;
    NSString *_aesKey;
    long long _maxage;
    double _saveTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) long long maxage; // @synthesize maxage=_maxage;
@property(nonatomic) double saveTime; // @synthesize saveTime=_saveTime;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;

@end

