/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFErrorRecoveryAttempting.h>

@class NSString;

@interface WFBlockRecoveryAttempter : NSObject <WFErrorRecoveryAttempting> {

	/*^block*/id _handlerBlock;

}

@property (nonatomic,copy) id handlerBlock;                         //@synthesize handlerBlock=_handlerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 ;
-(void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)initWithHandlerBlock:(/*^block*/id)arg1 ;
-(id)handlerBlock;
-(void)setHandlerBlock:(id)arg1 ;
@end

