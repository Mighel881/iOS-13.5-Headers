/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriActivationSource.h>

@protocol SiriDirectActionSourceDelegate;
@interface SiriDirectActionSource : SiriActivationSource {

	id<SiriDirectActionSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriDirectActionSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<SiriDirectActionSourceDelegate>)delegate;
-(void)setDelegate:(id<SiriDirectActionSourceDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)activateWithContext:(id)arg1 ;
-(void)configureConnection;
-(oneway void)canActivateChangedTo:(id)arg1 ;
-(void)activateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

