/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _CKAcknowledgmentTally : NSObject {

	long long _type;
	NSArray* _senders;
	NSArray* _contacts;

}

@property (assign,nonatomic) long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * senders;               //@synthesize senders=_senders - In the implementation block
@property (nonatomic,copy) NSArray * contacts;              //@synthesize contacts=_contacts - In the implementation block
-(id)description;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)senders;
-(void)setSenders:(NSArray *)arg1 ;
-(id)initWithType:(long long)arg1 senders:(id)arg2 ;
@end

