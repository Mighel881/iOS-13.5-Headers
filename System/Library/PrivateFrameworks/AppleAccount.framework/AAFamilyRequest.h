/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, AAGrandSlamSigner;

@interface AAFamilyRequest : AARequest {

	ACAccount* _appleAccount;
	AAGrandSlamSigner* _grandSlamSigner;
	AAGrandSlamSigner* _familyGrandSlamSigner;

}

@property (nonatomic,readonly) BOOL isUserInitiated; 
-(BOOL)isUserInitiated;
-(id)urlRequest;
-(id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 ;
-(id)_familyGrandSlamSigner;
-(id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3 ;
-(id)initWithGrandSlamSigner:(id)arg1 ;
@end

