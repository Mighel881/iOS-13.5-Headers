/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFDeleteUserRequest : DMFTaskRequest {

	BOOL _forceDeletion;
	NSString* _username;

}

@property (nonatomic,copy) NSString * username;               //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL forceDeletion;              //@synthesize forceDeletion=_forceDeletion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(BOOL)forceDeletion;
-(void)setForceDeletion:(BOOL)arg1 ;
@end

