/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PKXPCForwarder : NSObject {

	id _target;
	Class _targetClass;

}
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)clearTarget;
@end
