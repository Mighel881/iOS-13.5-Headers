/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _MFEmailAddress : NSObject {

	NSString* _address;
	NSString* _comment;

}

@property (nonatomic,copy,readonly) NSString * fullAddress; 
@property (nonatomic,copy,readonly) NSString * address;                  //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) NSString * comment;                  //@synthesize comment=_comment - In the implementation block
-(NSString *)address;
-(NSString *)comment;
-(id)initWithAddress:(id)arg1 comment:(id)arg2 ;
-(NSString *)fullAddress;
@end

