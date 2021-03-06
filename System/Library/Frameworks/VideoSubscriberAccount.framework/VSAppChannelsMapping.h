/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
@class NSString, NSArray;

@interface VSAppChannelsMapping : NSObject {

	NSString* _appAdamID;
	NSArray* _channelIDs;

}

@property (nonatomic,copy) NSString * appAdamID;              //@synthesize appAdamID=_appAdamID - In the implementation block
@property (nonatomic,copy) NSArray * channelIDs;              //@synthesize channelIDs=_channelIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)appAdamID;
-(void)setAppAdamID:(NSString *)arg1 ;
-(NSArray *)channelIDs;
-(void)setChannelIDs:(NSArray *)arg1 ;
@end

