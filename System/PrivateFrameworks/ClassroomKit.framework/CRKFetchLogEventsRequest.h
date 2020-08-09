/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class NSDate, NSString;

@interface CRKFetchLogEventsRequest : CATTaskRequest {

	NSDate* _cursorDate;
	NSString* _sessionToken;

}

@property (nonatomic,copy) NSDate * cursorDate;                  //@synthesize cursorDate=_cursorDate - In the implementation block
@property (nonatomic,copy) NSString * sessionToken;              //@synthesize sessionToken=_sessionToken - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSessionToken:(NSString *)arg1 ;
-(NSString *)sessionToken;
-(NSDate *)cursorDate;
-(void)setCursorDate:(NSDate *)arg1 ;
@end
