/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMToolkitUI/STKSessionAction.h>

@class STKTextInputSessionData;

@interface STKTextInputSessionAction : STKSessionAction

@property (nonatomic,readonly) STKTextInputSessionData * sessionData; 
-(STKTextInputSessionData *)sessionData;
-(id)initWithBehavior:(id)arg1 inputData:(id)arg2 response:(/*^block*/id)arg3 ;
-(void)sendSuccessWithResponse:(id)arg1 ;
@end
