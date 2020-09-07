/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSArray;

@interface WBSTabDialogInformation : NSObject {

	/*^block*/id _dismissalBlock;
	BOOL _isInvokingPresentationBlock;
	/*^block*/id _presentationBlock;
	BOOL _blockingWebProcess;
	BOOL _dismissed;
	BOOL _presented;
	NSArray* _cancellationExemptions;
	SCD_Struct_WB73 _slot;

}

@property (assign,nonatomic) SCD_Struct_WB73 slot;                                               //@synthesize slot=_slot - In the implementation block
@property (nonatomic,copy) NSArray * cancellationExemptions;                                     //@synthesize cancellationExemptions=_cancellationExemptions - In the implementation block
@property (getter=isBlockingWebProcess,nonatomic,readonly) BOOL blockingWebProcess;              //@synthesize blockingWebProcess=_blockingWebProcess - In the implementation block
@property (getter=isDismissed,nonatomic,readonly) BOOL dismissed;                                //@synthesize dismissed=_dismissed - In the implementation block
@property (getter=isPresented,nonatomic,readonly) BOOL presented;                                //@synthesize presented=_presented - In the implementation block
-(id)description;
-(SCD_Struct_WB73)slot;
-(void)setSlot:(SCD_Struct_WB73)arg1 ;
-(void)setCancellationExemptions:(NSArray *)arg1 ;
-(BOOL)isPresented;
-(BOOL)isExemptFromCancellationInContext:(id)arg1 ;
-(id)initWithPresentationBlock:(/*^block*/id)arg1 dismissalBlock:(/*^block*/id)arg2 blocksWebProcessUntilDismissed:(BOOL)arg3 ;
-(NSArray *)cancellationExemptions;
-(void)presentIfNeeded;
-(void)dismissWithResponse:(id)arg1 ;
-(BOOL)isBlockingWebProcess;
-(BOOL)isDismissed;
@end
