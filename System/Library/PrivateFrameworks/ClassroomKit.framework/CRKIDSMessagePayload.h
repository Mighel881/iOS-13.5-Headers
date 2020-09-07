/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:28 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKDictionaryCodable.h>

@class NSDictionary, CRKIDSMessageMetadata;

@interface CRKIDSMessagePayload : NSObject <CRKDictionaryCodable> {

	CRKIDSMessageMetadata* _messageMetadata;
	NSDictionary* _messageContent;

}

@property (nonatomic,readonly) CRKIDSMessageMetadata * messageMetadata;              //@synthesize messageMetadata=_messageMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * messageContent;                   //@synthesize messageContent=_messageContent - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)instanceWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryValue;
-(CRKIDSMessageMetadata *)messageMetadata;
-(NSDictionary *)messageContent;
-(id)initWithMessageContent:(id)arg1 messageMetadata:(id)arg2 ;
@end
