/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL;

@interface CLSEKParticipant : NSObject <NSCoding> {

	BOOL _isCurrentUser;
	long long _participantStatus;
	NSString* _emailAddress;
	NSString* _name;
	long long _participantType;
	NSURL* _URL;

}

@property (readonly) long long participantStatus;              //@synthesize participantStatus=_participantStatus - In the implementation block
@property (readonly) NSURL * URL;                              //@synthesize URL=_URL - In the implementation block
@property (readonly) NSString * emailAddress;                  //@synthesize emailAddress=_emailAddress - In the implementation block
@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (readonly) BOOL isCurrentUser;                       //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (readonly) long long participantType;                //@synthesize participantType=_participantType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)emailAddress;
-(BOOL)isCurrentUser;
-(long long)participantStatus;
-(long long)participantType;
-(id)initWithEKParticipant:(id)arg1 ;
@end
