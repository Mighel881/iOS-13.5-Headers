/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, UIViewController;

@interface MiroPPT : NSObject {

	NSString* _currentTestName;
	NSDictionary* _currentTestOptions;
	UIViewController* _playerViewController;

}

@property (nonatomic,retain) NSString * currentTestName;                           //@synthesize currentTestName=_currentTestName - In the implementation block
@property (nonatomic,retain) NSDictionary * currentTestOptions;                    //@synthesize currentTestOptions=_currentTestOptions - In the implementation block
@property (nonatomic,retain) UIViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
+(id)sharedInstance;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(UIViewController *)playerViewController;
-(void)setPlayerViewController:(UIViewController *)arg1 ;
-(NSString *)currentTestName;
-(void)setCurrentTestName:(NSString *)arg1 ;
-(NSDictionary *)currentTestOptions;
-(void)setCurrentTestOptions:(NSDictionary *)arg1 ;
-(BOOL)dismissAllModalViewControllers;
-(int)currentTestIterations;
-(int)currentTestOffset;
-(int)currentTestLength;
-(void)startedCurrentTest;
-(void)finishedCurrentTest;
-(void)finishedCurrentTestWithExtraResults:(id)arg1 ;
-(void)failedCurrentTest;
@end

