/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebLowPowerModeObserver : NSObject {

	BOOL _isLowPowerModeEnabled;
	LowPowerModeNotifier* _notifier;

}

@property (assign,nonatomic) LowPowerModeNotifier* notifier;              //@synthesize notifier=_notifier - In the implementation block
@property (nonatomic,readonly) BOOL isLowPowerModeEnabled;                //@synthesize isLowPowerModeEnabled=_isLowPowerModeEnabled - In the implementation block
-(void)dealloc;
-(BOOL)isLowPowerModeEnabled;
-(void)_didReceiveLowPowerModeChange;
-(id)initWithNotifier:(LowPowerModeNotifier*)arg1 ;
-(LowPowerModeNotifier*)notifier;
-(void)setNotifier:(LowPowerModeNotifier*)arg1 ;
@end
