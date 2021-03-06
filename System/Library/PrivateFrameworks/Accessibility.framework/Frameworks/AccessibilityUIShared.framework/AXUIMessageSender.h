/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIShared.framework/AccessibilityUIShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXUIMessageSenderDelegate;
@class NSMutableArray, AXAccessQueue;

@interface AXUIMessageSender : NSObject {

	BOOL _sendingMessage;
	id<AXUIMessageSenderDelegate> _delegate;
	NSMutableArray* _messageQueue;
	AXAccessQueue* _messageSchedulingSerializationQueue;

}

@property (nonatomic,retain) NSMutableArray * messageQueue;                                    //@synthesize messageQueue=_messageQueue - In the implementation block
@property (nonatomic,retain) AXAccessQueue * messageSchedulingSerializationQueue;              //@synthesize messageSchedulingSerializationQueue=_messageSchedulingSerializationQueue - In the implementation block
@property (assign,getter=isSendingMessage,nonatomic) BOOL sendingMessage;                      //@synthesize sendingMessage=_sendingMessage - In the implementation block
@property (assign,nonatomic,__weak) id<AXUIMessageSenderDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<AXUIMessageSenderDelegate>)delegate;
-(void)setDelegate:(id<AXUIMessageSenderDelegate>)arg1 ;
-(BOOL)isSendingMessage;
-(void)setSendingMessage:(BOOL)arg1 ;
-(void)setMessageSchedulingSerializationQueue:(AXAccessQueue *)arg1 ;
-(void)_sendXPCMessage:(id)arg1 context:(void*)arg2 remainingAttempts:(unsigned long long)arg3 previousError:(id)arg4 completion:(/*^block*/id)arg5 ;
-(AXAccessQueue *)messageSchedulingSerializationQueue;
-(NSMutableArray *)messageQueue;
-(void)setMessageQueue:(NSMutableArray *)arg1 ;
-(void)_didFinishSendingXPCMessage:(id)arg1 replyCustomData:(void*)arg2 ;
-(void)_performBlock:(/*^block*/id)arg1 inAccessQueue:(id)arg2 treatAsWritingBlock:(BOOL)arg3 ;
-(void)sendAsynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 context:(void*)arg3 targetAccessQueue:(id)arg4 completionRequiresWritingBlock:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(id)sendSynchronousMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 context:(void*)arg3 error:(id*)arg4 ;
@end

