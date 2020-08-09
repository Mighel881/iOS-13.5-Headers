/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSError, NSDate;

@interface SASProximityBackupAction : SASProximityAction {

	BOOL _shouldStartBackup;
	BOOL _finishedBackup;
	NSError* _error;
	double _percentComplete;
	unsigned long long _timeRemaining;
	NSDate* _completionDate;

}

@property (assign) BOOL shouldStartBackup;                        //@synthesize shouldStartBackup=_shouldStartBackup - In the implementation block
@property (assign) BOOL finishedBackup;                           //@synthesize finishedBackup=_finishedBackup - In the implementation block
@property (retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (assign) double percentComplete;                        //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign) unsigned long long timeRemaining;              //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (retain) NSDate * completionDate;                       //@synthesize completionDate=_completionDate - In the implementation block
+(unsigned long long)actionID;
+(id)actionFromDictionary:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)percentComplete;
-(void)setPercentComplete:(double)arg1 ;
-(void)setTimeRemaining:(unsigned long long)arg1 ;
-(unsigned long long)timeRemaining;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(id)requestPayload;
-(void)setShouldStartBackup:(BOOL)arg1 ;
-(void)setFinishedBackup:(BOOL)arg1 ;
-(BOOL)shouldStartBackup;
-(BOOL)finishedBackup;
@end
