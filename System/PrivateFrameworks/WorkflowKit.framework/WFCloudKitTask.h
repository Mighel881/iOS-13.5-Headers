/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFCloudKitTask : NSObject {

	BOOL _cancelled;
	/*^block*/id _cancellationHandler;

}

@property (getter=isCancelled) BOOL cancelled;                  //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy) id cancellationHandler;              //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
-(void)cancel;
-(BOOL)isCancelled;
-(void)setCancellationHandler:(id)arg1 ;
-(id)cancellationHandler;
-(void)setCancelled:(BOOL)arg1 ;
@end

