/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKRecoveryAttempter : NSObject {

	/*^block*/id _attemptRecovery;

}
+(id)recoveryAttempterUsingHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void*)arg5 ;
@end
