/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSMessageToDelete : NSObject {

	unsigned _dataProtectionClass;
	NSString* _guid;
	NSString* _alternateGUID;

}

@property (assign) unsigned dataProtectionClass;                                   //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (setter=setGUID:,retain) NSString * guid;                                //@synthesize guid=_guid - In the implementation block
@property (setter=setAlternateGUID:,retain) NSString * alternateGUID;              //@synthesize alternateGUID=_alternateGUID - In the implementation block
-(NSString *)guid;
-(unsigned)dataProtectionClass;
-(void)setGUID:(id)arg1 ;
-(void)setDataProtectionClass:(unsigned)arg1 ;
-(NSString *)alternateGUID;
-(void)setAlternateGUID:(NSString *)arg1 ;
@end
