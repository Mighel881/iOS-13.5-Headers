/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:05 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MNDurationRequest : NSObject {

	NSMutableArray* completions;
	double startTime;

}

@property (nonatomic,retain) NSMutableArray * completions; 
@property (assign,nonatomic) double startTime; 
-(id)init;
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
@end

