/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ACDEventLedger : NSObject {

	char* _crashInfoString;
	NSMutableArray* _eventLedger;

}

@property (retain) NSMutableArray * eventLedger;              //@synthesize eventLedger=_eventLedger - In the implementation block
+(id)sharedLedger;
-(id)init;
-(void)simulateCrashWithMessage:(id)arg1 ;
-(void)recordEvent:(id)arg1 ;
-(NSMutableArray *)eventLedger;
-(id)historyDescription;
-(void)setEventLedger:(NSMutableArray *)arg1 ;
@end

