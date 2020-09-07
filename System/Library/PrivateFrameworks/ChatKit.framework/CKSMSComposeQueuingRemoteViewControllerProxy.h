/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKSMSCompose;
@class NSMutableArray;

@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject {

	NSMutableArray* _queuedInvocations;
	id<CKSMSCompose> _serviceViewControllerProxy;

}

@property (nonatomic,retain) NSMutableArray * queuedInvocations;                       //@synthesize queuedInvocations=_queuedInvocations - In the implementation block
@property (nonatomic,retain) id<CKSMSCompose> serviceViewControllerProxy;              //@synthesize serviceViewControllerProxy=_serviceViewControllerProxy - In the implementation block
-(id)init;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<CKSMSCompose>)serviceViewControllerProxy;
-(void)setServiceViewControllerProxy:(id<CKSMSCompose>)arg1 ;
-(void)setQueuedInvocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)queuedInvocations;
@end
