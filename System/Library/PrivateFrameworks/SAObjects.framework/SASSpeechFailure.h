/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand

@property (assign,nonatomic) long long errorCode; 
@property (assign,nonatomic) int reason; 
@property (nonatomic,copy) NSString * reasonDescription; 
+(id)speechFailure;
+(id)speechFailureWithDictionary:(id)arg1 context:(id)arg2 ;
-(int)reason;
-(id)groupIdentifier;
-(void)setReason:(int)arg1 ;
-(long long)errorCode;
-(NSString *)reasonDescription;
-(void)setErrorCode:(long long)arg1 ;
-(id)encodedClassName;
-(void)setReasonDescription:(NSString *)arg1 ;
-(BOOL)requiresResponse;
@end
