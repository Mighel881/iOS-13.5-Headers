/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyPreferences/TelephonyPreferences-Structs.h>
#import <TelephonyPreferences/TPSRequest.h>

@interface TPSCallClassRequest : TPSRequest {

	int _callClass;

}

@property (assign,nonatomic) int callClass;              //@synthesize callClass=_callClass - In the implementation block
+(id)unarchivedObjectClasses;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)callClass;
-(void)setCallClass:(int)arg1 ;
-(BOOL)isEqualToRequest:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 ;
-(id)initWithSubscriptionContext:(id)arg1 callClass:(int)arg2 ;
@end

