//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@interface ScanItemBase : NSObject <NSCoding>
{
    int _itemType;
    id _scanItem;
}

+ (id)getBaseItemOfType:(int)arg1 rootNode:(struct XmlReaderNode_t *)arg2;
+ (id)getScanItemFromXml:(id)arg1 andType:(int)arg2;
+ (id)parseActionXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseCommonActionXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseGirdActionXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseNotFoundXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseProductXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseUrlXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseUserXML:(struct XmlReaderNode_t *)arg1;
+ (id)parseWeAppXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) id scanItem; // @synthesize scanItem=_scanItem;

@end

