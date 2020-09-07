/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateComponentsFormatter, NSString;

@interface IMDTaskProgress : NSObject {

	unsigned long long _lastPercentComplete;
	double _startTime;
	NSDateComponentsFormatter* _intervalFormatter;
	NSString* _taskName;
	unsigned long long _totalCount;

}

@property (nonatomic,readonly) NSString * taskName;                        //@synthesize taskName=_taskName - In the implementation block
@property (nonatomic,readonly) unsigned long long totalCount;              //@synthesize totalCount=_totalCount - In the implementation block
-(void)dealloc;
-(unsigned long long)totalCount;
-(NSString *)taskName;
-(id)initWithTaskName:(id)arg1 totalCount:(unsigned long long)arg2 ;
-(void)startTrackingTime;
-(void)updateWithCompletedCount:(unsigned long long)arg1 ;
@end
