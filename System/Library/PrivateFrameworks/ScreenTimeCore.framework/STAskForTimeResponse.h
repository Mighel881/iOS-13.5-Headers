/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber, NSDate, NSDictionary;

@interface STAskForTimeResponse : NSObject <NSSecureCoding> {

	NSUUID* _associatedRequestIdentifier;
	long long _answer;
	NSNumber* _respondingUserDSID;
	NSNumber* _amountGranted;
	NSDate* _timeStamp;

}

@property (nonatomic,retain) NSUUID * associatedRequestIdentifier;              //@synthesize associatedRequestIdentifier=_associatedRequestIdentifier - In the implementation block
@property (assign,nonatomic) long long answer;                                  //@synthesize answer=_answer - In the implementation block
@property (nonatomic,retain) NSNumber * respondingUserDSID;                     //@synthesize respondingUserDSID=_respondingUserDSID - In the implementation block
@property (nonatomic,retain) NSNumber * amountGranted;                          //@synthesize amountGranted=_amountGranted - In the implementation block
@property (nonatomic,retain) NSDate * timeStamp;                                //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * payload; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(NSDictionary *)payload;
-(NSDate *)timeStamp;
-(void)setTimeStamp:(NSDate *)arg1 ;
-(long long)answer;
-(void)setAnswer:(long long)arg1 ;
-(NSNumber *)amountGranted;
-(void)setAmountGranted:(NSNumber *)arg1 ;
-(NSUUID *)associatedRequestIdentifier;
-(NSNumber *)respondingUserDSID;
-(void)setAssociatedRequestIdentifier:(NSUUID *)arg1 ;
-(void)setRespondingUserDSID:(NSNumber *)arg1 ;
@end

