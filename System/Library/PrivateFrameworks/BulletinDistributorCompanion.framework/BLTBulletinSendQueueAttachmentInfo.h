/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface BLTBulletinSendQueueAttachmentInfo : NSObject {

	NSURL* _url;
	NSString* _key;

}

@property (nonatomic,retain) NSURL * url;               //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * key;              //@synthesize key=_key - In the implementation block
-(NSString *)key;
-(NSURL *)url;
-(void)setKey:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
@end

