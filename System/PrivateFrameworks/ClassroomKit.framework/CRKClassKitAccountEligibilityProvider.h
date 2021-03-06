/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore;

@interface CRKClassKitAccountEligibilityProvider : NSObject {

	BOOL _eligibleAccountSignedIn;
	ACAccountStore* _accountStore;

}

@property (assign,getter=isEligibleAccountSignedIn,nonatomic) BOOL eligibleAccountSignedIn;              //@synthesize eligibleAccountSignedIn=_eligibleAccountSignedIn - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                                            //@synthesize accountStore=_accountStore - In the implementation block
-(id)init;
-(void)dealloc;
-(void)update;
-(ACAccountStore *)accountStore;
-(void)accountStoreDidChange:(id)arg1 ;
-(BOOL)isEligibleAccountSignedIn;
-(void)setEligibleAccountSignedIn:(BOOL)arg1 ;
@end

