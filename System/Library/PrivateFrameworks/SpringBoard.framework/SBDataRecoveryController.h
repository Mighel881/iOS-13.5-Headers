/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBFMobileKeyBag;

@interface SBDataRecoveryController : NSObject {

	SBFMobileKeyBag* _mobileKeyBag;

}

@property (nonatomic,readonly) BOOL dataRecoveryRequired; 
-(id)init;
-(BOOL)dataRecoveryRequired;
-(void)performDataRecovery;
-(id)initWithMobileKeyBag:(id)arg1 ;
@end

