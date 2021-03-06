/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WebBackgroundTaskController : NSObject {

	unsigned long long _invalidBackgroundTaskIdentifier;
	/*^block*/id _backgroundTaskStartBlock;
	/*^block*/id _backgroundTaskEndBlock;

}

@property (assign,nonatomic) unsigned long long invalidBackgroundTaskIdentifier;              //@synthesize invalidBackgroundTaskIdentifier=_invalidBackgroundTaskIdentifier - In the implementation block
@property (nonatomic,copy) id backgroundTaskStartBlock;                                       //@synthesize backgroundTaskStartBlock=_backgroundTaskStartBlock - In the implementation block
@property (nonatomic,copy) id backgroundTaskEndBlock;                                         //@synthesize backgroundTaskEndBlock=_backgroundTaskEndBlock - In the implementation block
+(id)sharedController;
-(void)dealloc;
-(id)backgroundTaskStartBlock;
-(void)setBackgroundTaskStartBlock:(id)arg1 ;
-(void)setBackgroundTaskEndBlock:(id)arg1 ;
-(void)setInvalidBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)startBackgroundTaskWithExpirationHandler:(/*^block*/id)arg1 ;
-(void)endBackgroundTaskWithIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)invalidBackgroundTaskIdentifier;
-(id)backgroundTaskEndBlock;
@end

