/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 8, 2020 at 8:03:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Messages/PlugIns/FaceTime.imservice/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <FaceTime/FTFaceTimeMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSNumber, NSData;

@interface FTSendMessage : FTFaceTimeMessage <NSCopying> {

	NSArray* _peers;
	NSNumber* _reason;
	NSData* _selfPushToken;

}

@property (copy) NSArray * peers;                     //@synthesize peers=_peers - In the implementation block
@property (copy) NSNumber * reason;                   //@synthesize reason=_reason - In the implementation block
@property (copy) NSData * selfPushToken;              //@synthesize selfPushToken=_selfPushToken - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)reason;
-(void)setReason:(NSNumber *)arg1 ;
-(id)messageBody;
-(NSArray *)peers;
-(void)setPeers:(NSArray *)arg1 ;
-(id)requiredKeys;
-(id)bagKey;
-(void)setSelfPushToken:(NSData *)arg1 ;
-(NSData *)selfPushToken;
@end

