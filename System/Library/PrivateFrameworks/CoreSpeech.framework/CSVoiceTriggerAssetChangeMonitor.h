/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CSVoiceTriggerAssetChangeDelegate;
@class NSObject;

@interface CSVoiceTriggerAssetChangeMonitor : NSObject {

	int _notifyToken;
	NSObject*<OS_dispatch_queue> _queue;
	id<CSVoiceTriggerAssetChangeDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSVoiceTriggerAssetChangeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(id<CSVoiceTriggerAssetChangeDelegate>)delegate;
-(void)setDelegate:(id<CSVoiceTriggerAssetChangeDelegate>)arg1 ;
-(void)startMonitoring;
-(void)notifyVoiceTriggerAssetChanged;
@end
